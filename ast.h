#ifndef AST_H
#define AST_H
#include <string>

struct AST { virtual ~AST() = default; };

struct Int : AST {int value; };
struct Float : AST {float value; };
struct Var : AST {std::string name; };
struct Arith : AST {char op; AST *lhs; AST *rhs; };

struct Assign : AST {Var *target; AST *value; };
struct Print : AST {AST *value; };
struct Read : AST {Var *target; };
struct Return : AST {AST *value; };



#endif // AST_H