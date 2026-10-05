#ifndef SYMBOL_RETRIEVE_H
#define SYMBOL_RETRIEVE_H

#include <any>
#include "uCParser.h"
#include "Symbol_table.h"
#include "antlr4-runtime.h"
#include "uCBaseVisitor.h"

class SymbolRetrieve : public uCBaseVisitor {
public:
    SymbolRetrieve(SymbolTable &symbolTable) : symbolTable(symbolTable) {}
    std::any visitVar_decl(uCParser::Var_declContext *ctx) override;
    std::any visitStr_decl(uCParser::Str_declContext *ctx) override;
private:
    SymbolTable &symbolTable;
};

#endif // SYMBOL_RETRIEVE_H