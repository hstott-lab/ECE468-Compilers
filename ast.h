#ifndef AST_H
#define AST_H
#include <string>

struct AST { virtual ~AST() = default; };

struct Int : AST {int value; };
struct Float : AST {float value; };
struct Var : AST {std::string name; };
struct Arith : AST {char op; AST *lhs; AST *rhs; };
struct Cond : AST {std::string op; AST *lhs; AST *rhs;}

struct Assign : AST {Var *target; AST *value; };
struct Print : AST {AST *value; };
struct Read : AST {Var *target; };
struct Return : AST {AST *value; };
struct ifStmt : AST {AST * conditional; std::vector<AST*> thenstmt; std::vector<AST*> elsestmts;} // the std::vector of the AST is because no idea of how long the AST for the body or else could be
struct WhileStmt : AST {AST * Cond, std::vector<AST*> whilebody;}



#endif // AST_H