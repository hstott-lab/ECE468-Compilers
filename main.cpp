#include <fstream>
#include "antlr4-runtime.h"
#include "uCLexer.h"
#include "uCParser.h"
#include "ast.h"
#include "Symbol_table.h"
#include "Symbol_Retrieve.h"
#include <iostream>
#include "print_ast.h"
#include <vector>
#include "ast_builder.h"
#include "IR_Gen.h"

// this is the print funciton
void emitAssembly(std::ostream &out, const std::vector<IRInstr> &code,
                  const SymbolTable &table) {
  out << ".section .text\nmain:\n";
  for (const IRInstr &i : code) {
    switch (i.op) {
      case Op::LoadImmInt:   out << "  LI t" << i.dest << ", " << i.imm << "\n"; break;
      case Op::LoadImmFloat: out << "  FIMM.S f" << i.dest << ", " << i.fimm << "\n"; break;
      case Op::LoadAddr:     out << "  LA t" << i.dest << ", 0x" << std::hex << i.imm << std::dec << "\n"; break;
      case Op::Load:
        if (i.isFloat) out << "  FLW f" << i.dest << ", 0(t" << i.a << ")\n";
        else           out << "  LW t" << i.dest << ", 0(t" << i.a << ")\n";
        break;
      case Op::Store:
        out << (i.isFloat ? "  FSW f" : "  SW t") << i.a << ", 0(t" << i.b << ")\n";
        break;
      case Op::Add: case Op::Sub: case Op::Mul: case Op::Div: {
        const char *names[2][4] = {{"ADD","SUB","MUL","DIV"},{"FADD.S","FSUB.S","FMUL.S","FDIV.S"}};
        int k = (int)i.op - (int)Op::Add;
        char r = i.isFloat ? 'f' : 't';
        out << "  " << names[i.isFloat][k] << " " << r << i.dest << ", "
            << r << i.a << ", " << r << i.b << "\n";
        break;
      }
      case Op::PrintInt:   out << "  PUTI t" << i.a << "\n"; break;
      case Op::PrintFloat: out << "  PUTF f" << i.a << "\n"; break;
      case Op::PrintStr:   out << "  PUTS t" << i.a << "\n"; break;
      case Op::ReadInt:    out << "  GETI t" << i.dest << "\n"; break;
      case Op::ReadFloat:  out << "  GETF f" << i.dest << "\n"; break;
      case Op::Halt:       out << "  HALT\n"; break;
    }
  }
  out << "\n.section .strings\n";
  for (const auto &n : table.order) {
    const Symbol *s = table.getSymbol(n);
    if (s->type == Type::String)
      out << "  0x" << std::hex << s->address << std::dec << " " << s->value << "\n";
  }
}

int main(int argc, char **argv) {
  std::ifstream in{argv[1]};
  std::ofstream out{argv[2]};

  antlr4::ANTLRInputStream input(in);
  uCLexer lexer(&input);
  //lexer.removeErrorListeners();
  antlr4::CommonTokenStream tokens(&lexer);
  uCParser parser(&tokens);
  //parser.removeErrorListeners();

  auto *tree = parser.program();

  if (lexer.getNumberOfSyntaxErrors() > 0 || parser.getNumberOfSyntaxErrors() > 0) {
    return 1;
  }

  SymbolTable table;
  SymbolRetrieve retriever(table);
  retriever.visit(tree);

  ASTBuilder builder;
  builder.visit(tree);

  IRGen gen(table);
  for (AST *s : builder.statements) gen.genStmt(s);
  gen.finish();

  emitAssembly(out, gen.code, table);
  return 0;

}