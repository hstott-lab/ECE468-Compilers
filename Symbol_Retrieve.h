#ifndef SYMBOL_RETRIEVE_H
#define SYMBOL_RETRIEVE_H

#include <any>
#include "uCParser.h"
#include "Symbol_table.h"

class SymbolRetrieve : public uCParserBaseListener {
public:
    SymbolRetrieve(SymbolTable &symbolTable) : symbolTable(symbolTable) {}
    std::any visitVar_decl(uCParser::Var_declContext *ctx) override;
    std::any visitString_decl(uCParser::String_declContext *ctx) override;
private:
    SymbolTable &symbolTable;
};

#endif // SYMBOL_RETRIEVE_H