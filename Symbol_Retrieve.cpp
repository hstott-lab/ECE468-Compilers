
#include "Symbol_table.h"
#include <any>
#include "uCParser.h"
#include "Symbol_Retrieve.h"


std::any SymbolRetrieve::visitVar_decl(uCParser::Var_declContext *ctx) {
    Type t = ctx->base_type()->getText() == "int" ? Type::Int : Type::Float;
    std::string name = ctx->ident()->getText();
    symbolTable.addVar(name, t);
    return nullptr;
}

std::any SymbolRetrieve::visitStr_decl(uCParser::Str_declContext *ctx) {
    std::string name = ctx->ident()->getText();
    std::string text = ctx->STR_LITERAL()->getText();
    symbolTable.addString(name, text);
    return nullptr;
}