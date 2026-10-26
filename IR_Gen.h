#ifndef IR_GEN_H
#define IR_GEN_H

#include <vector>
#include "ast.h"
#include "IR.h"
#include "Symbol_table.h"

struct ExprResult {
    int temp;
    Type type;
};

class IRGen {

public:
    IRGen(SymbolTable &table) : table(table) {}

    // Emit IR for one top-level statement (Assign, Print, Read, Return).
    void genStmt(AST *node);

    // Emit IR for an expression; returns the temp and type of the result.
    ExprResult genExpr(AST *node);

    // Emit the final HALT.
    void finish();

    std::vector<IRInstr> code;   // the IR produced so far

private:
    SymbolTable &table;
    int nextIntTemp = 0;         // t0, t1, ...
    int nextFloatTemp = 0;       // f0, f1, ...

    int newTemp(Type type);      // allocates from the right counter
    void emit(const IRInstr &i); // appends to code
};

#endif // IR_GEN_H