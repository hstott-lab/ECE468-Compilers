#ifndef IR_H
#define IR_H
#include <string>
#include <vector>

class OP {


    LoadImmInt, 
    LoadImmFloat,
    LoadAddr,
    Load,
    Store,
    Add, Sub, Mul, Div,
    PrintInt, PrintFloat, PrintStr,
    ReadInt, ReadFloat, ReadStr,
    Halt
};

struct IRinstr {
    OP op;
    int dest = -1;
    int a = -1;
    int b = -1;
    long imm = 0;
    float fimm = 0;
    bool isFloat = false;
};

#endif // IR_H