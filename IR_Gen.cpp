#include "IR_gen.h"
#include <typeinfo>


int IRgen::newTemp(Type type) {
    return type == Type::Float ? nextFloatTemp++ : nextIntTemp++;
}

void IRgen::genStmt(AST *node) {
    if(auto *i = dynamic_cast<Assign*>(node)) {
         // 1. compute the right-hand side; the value ends up in a temp
    ExprResult r = genExpr(as->value);

    // 2. look up the target variable (left of the =)
    const Symbol *s = table.getSymbol(as->target->name);
    if (!s) return;   // undeclared variable; report an error here if you want

    // 3. load the target's address into an int temp
    int addr = newTemp(Type::Int);
    IRInstr la;
    la.op = Op::LoadAddr;
    la.dest = addr;
    la.imm = s->address;
    emit(la);

    // 4. store the value at that address
    IRInstr st;
    st.op = Op::Store;
    st.a = r.temp;                         // the value to store
    st.b = addr;                           // the address temp
    st.isFloat = (s->type == Type::Float);
    emit(st);
    return;
    }
    if(auto *i = dynamic_cast<Print*>(node)) {
        ExprResult p = genExpr(as->value);

        IRInstr pr;

        switch (p.type) {
            case Type::Int:
                pr.op = Op::PrintInt;
                break;
            case Type::Float:
                pr.op = Op::PrintFloat;
                break;
            case Type::String:
                pr.op = Op::PrintStr;
                break;
        }
        pr.a = p.temp;
        emit(pr);
        return;
    }



}

ExprResult IRgen::genExpr(AST *node) {
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
    if(auto *v = dynamic_cast<Var*>(node)) {
        const Symbol *s = table.getSymbol(v->name);
        if(!s) {
            std::cout<<"Error: Symbol not found: "<<v->name<<std::endl;
            return {0, Type::Int}; // Return a default value in case of error
        }
        int addrTemp = newTemp(Type::Int);
        IRInstr la;
        la.op = Op::LoadAddr;
        la.dest = addrTemp;
        la.imm = s->addr;
        emit(la);
        if (s->type == Type::String) {
            return {addrTemp, Type::String};
        }
        int Valtemp = newTemp(s->type);
        IRInstr ld;
        ld.op = Op::Load;
        ld.dest = Valtemp;
        ld.src = addrTemp;
        emit(ld);
        return {Valtemp, s->type}; 
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
        

}

void IRgen::finish() {
    IRInstr in; in.op = Op::Halt;
    emit(in);
}