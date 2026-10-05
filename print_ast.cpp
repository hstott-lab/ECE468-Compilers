#include <iostream>
#include "print_ast.h"

void printAST(const AST *n, int depth) {
  std::string pad(depth * 2, ' ');

  if (auto *i = dynamic_cast<const Int *>(n)) {
    std::cerr << pad << "Int(" << i->value << ")\n";
  } else if (auto *f = dynamic_cast<const Float *>(n)) {
    std::cerr << pad << "Float(" << f->value << ")\n";
  } else if (auto *v = dynamic_cast<const Var *>(n)) {
    std::cerr << pad << "Var(" << v->name << ")\n";
  } else if (auto *a = dynamic_cast<const Arith *>(n)) {
    std::cerr << pad << "Arith(" << a->op << ")\n";
    printAST(a->lhs, depth + 1);
    printAST(a->rhs, depth + 1);
  } else if (auto *as = dynamic_cast<const Assign *>(n)) {
    std::cerr << pad << "Assign\n";
    printAST(as->target, depth + 1);
    printAST(as->value, depth + 1);
  } else if (auto *p = dynamic_cast<const Print *>(n)) {
    std::cerr << pad << "Print\n";
    printAST(p->value, depth + 1);
  } else if (auto *r = dynamic_cast<const Read *>(n)) {
    std::cerr << pad << "Read\n";
    printAST(r->target, depth + 1);
  } else if (auto *ret = dynamic_cast<const Return *>(n)) {
    std::cerr << pad << "Return\n";
    printAST(ret->value, depth + 1);
  }
}