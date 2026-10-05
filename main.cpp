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

  SymbolTable table;
  SymbolRetrieve retrieve(table);
  retrieve.visit(tree);

  bool ok = lexer.getNumberOfSyntaxErrors() == 0 &&
            parser.getNumberOfSyntaxErrors() == 0;
  out << (ok ? "Accepted" : "Not Accepted") << "\n";

for (auto &n : table.order) {
  const Symbol *s = table.getSymbol(n);
  std::cerr << n << " type=" << (int)s->type
            << " addr=0x" << std::hex << s->address << std::dec;
  if (s->type == Type::String) std::cerr << " value=" << s->value;
  std::cerr << "\n";
}

ASTBuilder builder;
builder.visit(tree);
for (AST *s : builder.statements) printAST(s);


  return 0;
}