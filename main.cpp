#include <fstream>
#include <string>
#include <any>
#include <fstream>
#include <iostream>
#include "antlr4-runtime.h"
#include "uCLexer.h"
#include "uCParser.h"
#include "uCBaseVisitor.h"

class CodeGen : public uCBaseVisitor {
public:
  explicit CodeGen(std::ostream &out) : out(out) {}

  private:
  std::ostream &out;
};


int main(int argc, char **argv) {
  if (argc < 3) {
    std::cerr << "usage: " << argv[0] << " input output\n";
    return 1;
  }

  std::ifstream in{argv[1]};
  std::ofstream out{argv[2]};

  antlr4::ANTLRInputStream input(in);
  uCLexer lexer(&input);
  antlr4::CommonTokenStream tokens(&lexer);
  uCParser parser(&tokens);

  auto *tree = parser.program();   // start rule

  if (parser.getNumberOfSyntaxErrors() > 0) {
    return 1;                      // ANTLR already printed the errors to stderr
  }

  CodeGen gen(out);
  gen.visit(tree);
  return 0;
}