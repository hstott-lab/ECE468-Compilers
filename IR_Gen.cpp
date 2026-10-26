#include "IR_Gen.h"
#include <typeinfo>
#include <iostream>


int IRGen::newTemp(Type type) {
    return type == Type::Float ? nextFloatTemp++ : nextIntTemp++;
}

void IRGen::genStmt(AST *node) {
      if (auto *as = dynamic_cast<Assign *>(node)) {
        // 1. compute the right-hand side
        ExprResult r = genExpr(as->value);

        // 2. look up the target variable
        const Symbol *s = table.getSymbol(as->target->name);
        if (!s) {
            std::cerr << "Error: undeclared variable " << as->target->name << "\n";
            return;
        }

        // 3. load the target's address
        int addr = newTemp(Type::Int);
        IRInstr la;
        la.op = Op::LoadAddr;
        la.dest = addr;
        la.imm = s->address;
        emit(la);

        // 4. store the value at that address
        IRInstr st;
        st.op = Op::Store;
        st.a = r.temp;                          // value
        st.b = addr;                            // address temp
        st.isFloat = (s->type == Type::Float);
        emit(st);
        return;
    }

    // ---- print(expr) ----
    if (auto *p = dynamic_cast<Print *>(node)) {
        ExprResult r = genExpr(p->value);

        IRInstr pr;
        pr.a = r.temp;
        switch (r.type) {
            case Type::Int:
                pr.op = Op::PrintInt;
                break;
            case Type::Float:
                pr.op = Op::PrintFloat;
                pr.isFloat = true;
                break;
            case Type::String:
                pr.op = Op::PrintStr;
                break;
        }
        emit(pr);
        return;
    }

    // ---- read(var) ----
    if (auto *rd = dynamic_cast<Read *>(node)) {
        const Symbol *s = table.getSymbol(rd->target->name);
        if (!s) {
            std::cerr << "Error: undeclared variable " << rd->target->name << "\n";
            return;
        }
        bool isF = (s->type == Type::Float);

        // read into a new temp
        int val = newTemp(s->type);
        IRInstr in;
        in.op = isF ? Op::ReadFloat : Op::ReadInt;
        in.dest = val;
        in.isFloat = isF;
        emit(in);

        // load the variable's address
        int addr = newTemp(Type::Int);
        IRInstr la;
        la.op = Op::LoadAddr;
        la.dest = addr;
        la.imm = s->address;
        emit(la);

        // store the value
        IRInstr st;
        st.op = Op::Store;
        st.a = val;
        st.b = addr;
        st.isFloat = isF;
        emit(st);
        return;
    }

    // ---- return: nothing to emit; finish() adds HALT ----
   if (auto *ret = dynamic_cast<Return *>(node)) {
    genExpr(ret->value);   // evaluates the value, emitting e.g. LI t3, 0
    return;
    }
}

ExprResult IRGen::genExpr(AST *node) {
    if(auto *i = dynamic_cast<Int*>(node)) {
        int t = newTemp(Type::Int);
        IRInstr in; in.op = Op::LoadImmInt; in.dest = t; in.imm = i->value;
        emit(in);
        return {t, Type::Int};
    }
    if(auto *f = dynamic_cast<Float*>(node)) {
        int t = newTemp(Type::Float);
        IRInstr in;
        in.op = Op::LoadImmFloat;
        in.dest = t;
        in.fimm = f->value;
        in.isFloat = true;
        emit(in);
        return {t, Type::Float};
    }
    if (auto *v = dynamic_cast<Var *>(node)) {
        const Symbol *s = table.getSymbol(v->name);
        if (!s) {
            std::cerr << "Error: Symbol not found: " << v->name << "\n";
            return {-1, Type::Int};
        }

        int addrTemp = newTemp(Type::Int);
        IRInstr la;
        la.op = Op::LoadAddr;
        la.dest = addrTemp;
        la.imm = s->address;
        emit(la);

        if (s->type == Type::String)
            return {addrTemp, Type::String};

        int valTemp = newTemp(s->type);
        IRInstr ld;
        ld.op = Op::Load;
        ld.dest = valTemp;
        ld.a = addrTemp;
        ld.isFloat = (s->type == Type::Float);
        emit(ld);
        return {valTemp, s->type};
    }
   if (auto *a = dynamic_cast<Arith *>(node)) {
    // 1. generate both operands; each leaves its value in a temp
    ExprResult l = genExpr(a->lhs);
    ExprResult r = genExpr(a->rhs);

    // 2. pick the operation from the operator character
    Op op;
    switch (a->op) {
        case '+': op = Op::Add; break;
        case '-': op = Op::Sub; break;
        case '*': op = Op::Mul; break;
        case '/': op = Op::Div; break;
        default:  op = Op::Add; break;
    }

    // 3. pick int vs float from the operand type
    Type rt = (l.type == Type::Float) ? Type::Float : Type::Int;

    // 4. allocate the result temp from the matching counter and emit
    int t = newTemp(rt);
    IRInstr in;
    in.op = op;
    in.dest = t;
    in.a = l.temp;
    in.b = r.temp;
    in.isFloat = (rt == Type::Float);
    emit(in);

    return {t, rt};
}
     
return {-1, Type::Int}; // should never reach here

}

void IRGen::finish() {
    IRInstr in;
    in.op = Op::Halt;
    emit(in);
}

void IRGen::emit(const IRInstr &i) {
    code.push_back(i);
}