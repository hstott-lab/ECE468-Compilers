#include "Symbol_table.h"

void SymbolTable::addVar(const std::string &name, Type t) {
    symbols[name] = Symbol{name, t, nextData, ""};
    nextData += 4;
    order.push_back(name);
}
void SymbolTable::addString(const std::string &name, const std::string &text) {
    symbols[name] = Symbol{name, Type::String, nextString, text};
    unsigned length = text.size() + 1; // to remove the null terminator
    nextString += ((length+3)/4)*4; // makes sure it is multiple of 4
    order.push_back(name);
}

const Symbol *SymbolTable::getSymbol(const std::string &name) const {
  auto it = symbols.find(name);
  return it == symbols.end() ? nullptr : &it->second;
}