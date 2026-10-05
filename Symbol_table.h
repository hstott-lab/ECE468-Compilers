#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

#include <string>
#include <map>
#include <vector>

enum class Type { Int, Float, String };


struct Symbol {
    std::string name;
    Type type;
    unsigned int address;
    std::string value;
};

struct SymbolTable {
    std::map<std::string, Symbol> symbols;
    std::vector<std::string> order;
    unsigned nextData = 0x20000000;
    unsigned nextString = 0x10000000;

    void addVar(const std::string &name, Type t);
    void addString(const std::string &name, const std::string &text);
    const Symbol *getSymbol(const std::string &name) const;
};




#endif // SYMBOL_TABLE_H