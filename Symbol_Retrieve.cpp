
#include "Symbol_table.h"
#include <any>
#include "uCParser.h"


std::any visitVar_decl(uCParser::Var_declContext *ctx) override {
    Type t = ctx->base_type()->getText() == "int" ? Type::Int : Type::Float;
    name = ctx->ident()->getText();
    symbolTable.addVar(name, t);
    return nullptr;
}
