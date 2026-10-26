#ifndef IR_GEN_H
#define IR_GEN_H

#include <vector>
#include "ast.h"
#include "ir.h"
#include "Symbol_table.h"

struct ExprResult {
    int temp;
    Type type;
};

enum IRgen {


    int genExpr(AST *n);     // emits IR for an expression, returns the temp holding the result
    void genStmt(AST *n);    // emits IR for a statement
}

#endif // IR_GEN_H