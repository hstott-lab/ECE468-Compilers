#ifndef AST_BUILDER_H
#define AST_BUILDER_H

#include <any>
#include <vector>
#include "antlr4-runtime.h"
#include "uCParser.h"
#include "uCBaseVisitor.h"
#include "ast.h"

class ASTBuilder : public uCBaseVisitor {

public:
    std::vector<AST*> statements;

    std::any visitAssign_stmt(uCParser::Assign_stmtContext *ctx) override { // this handles assing_stm : ident '=' expr ';'
        auto *v = new Var; // this represents what the variable is being assigned to so if a=5 this would be the variable 'cur'
        v->name = ctx->ident()->getText(); // this sets the name of the variable being assigned
        auto *a = new Assign; // this creates the assign node which has a target and a value
        a->target = v; // this is what is being written to so it would be the thing on the lhs of the equal sign
        a->value = std::any_cast<AST*>(visit(ctx->expr())); // this is the value on the rhs for example if cur = cur + 4 it would visit expr for adop and it would return cur, + and 4 as 3 seperate nodes
        statements.push_back(a); // this adds the assignment statement to the list of statements
        return nullptr; // this indicates that we are not returning a specific AST node for this assignment statement
    }

    std::any visitPrint_stmt(uCParser::Print_stmtContext *ctx) override { // this handles print_stmt : 'print' expr ';'
        auto *p = new Print; // this creates the print node which has a value to print
        p->value = std::any_cast<AST*>(visit(ctx->expr()));
        statements.push_back(p);
        return nullptr;
    }

    std::any visitReturn_stmt(uCParser::Return_stmtContext *ctx) override { // this handles print_stmt : 'return' expr ';'
        auto *r = new Return; // this creates the print node which has a value to print
        r->value = std::any_cast<AST*>(visit(ctx->expr()));
        statements.push_back(r);
        return nullptr;
    }
    
     std::any visitRead_stmt(uCParser::Read_stmtContext *ctx) override { // this handles print_stmt : 'read' expr ';'
        auto *v = new Var; // this creates the read node which has a value to print
        v->name = ctx->ident()->getText();
        auto *a = new Read;
        a->target = v;
        statements.push_back(a);
        return nullptr;
    }
     
    std::any visitExpr(uCParser::ExprContext *ctx) override {
        if(ctx->expr()) {
            auto *n = new Arith;
            n->op = ctx->addop()->getText()[0];
            n->lhs = std::any_cast<AST*>(visit(ctx->expr()));
            n->rhs = std::any_cast<AST*>(visit(ctx->term()));
            return (AST*)n;
        }
        return visit(ctx->term());
    }

    std::any visitTerm(uCParser::TermContext *ctx) override {
        if(ctx->term()) {
            auto *n = new Arith;
            n->op = ctx->mulop()->getText()[0];
            n->lhs = std::any_cast<AST*>(visit(ctx->term()));
            n->rhs = std::any_cast<AST*>(visit(ctx->primary()));
            return (AST*)n;
        }
         return visit(ctx->primary());
    }

    std::any visitPrimary(uCParser::PrimaryContext *ctx) override {
        if(ctx->INT_LITERAL()) {
            auto *i = new Int;
            i->value = std::stoi(ctx->INT_LITERAL()->getText());
            return (AST*)i;  
        }
        if(ctx->FLOAT_LITERAL()) {
            auto *i = new Float;
            i->value = std::stof(ctx->FLOAT_LITERAL()->getText());
            return (AST*)i; 
        }
        if(ctx->ident()) {
            auto *v = new Var;
            v->name = ctx->ident()->getText();
            return(AST*)v;
        }
        if(ctx->expr()) return(visit(ctx->expr()));
        return visit(ctx->unaryminus_expr());
    }

    std::any visitUnaryminus_expr(uCParser::Unaryminus_exprContext *ctx) override {
        auto *zero = new Int;
        zero->value = 0;
        auto *n = new Arith;
        n->op = '-';
        n->lhs = zero;
        n->rhs = std::any_cast<AST*>(visit(ctx->expr()));
        return (AST*)n;
    }
};
#endif // AST_BUILDER_H