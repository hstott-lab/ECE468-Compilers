#include <fstream>
#include "antlr4-runtime.h"
#include "uCLexer.h"
#include "uCParser.h"

int main(int argc, char **argv) {
  std::ifstream in{argv[1]};
  std::ofstream out{argv[2]};

  antlr4::ANTLRInputStream input(in);
  uCLexer lexer(&input);
  //lexer.removeErrorListeners();
  antlr4::CommonTokenStream tokens(&lexer);
  uCParser parser(&tokens);
  //parser.removeErrorListeners();

  parser.program();

  bool ok = lexer.getNumberOfSyntaxErrors() == 0 &&
            parser.getNumberOfSyntaxErrors() == 0;
  out << (ok ? "Accepted" : "Not Accepted") << "\n";
  return 0;
}