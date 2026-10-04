
 


// Generated from uC.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "uCVisitor.h"


/**
 * This class provides an empty implementation of uCVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  uCBaseVisitor : public uCVisitor {
public:

  virtual std::any visitProgram(uCParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDecls(uCParser::DeclsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVar_decls(uCParser::Var_declsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdent(uCParser::IdentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVar_decl(uCParser::Var_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStr_decl(uCParser::Str_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBase_type(uCParser::Base_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction(uCParser::FunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatements(uCParser::StatementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(uCParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBase_stmt(uCParser::Base_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRead_stmt(uCParser::Read_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrint_stmt(uCParser::Print_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturn_stmt(uCParser::Return_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssign_stmt(uCParser::Assign_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIf_stmt(uCParser::If_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhile_stmt(uCParser::While_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimary(uCParser::PrimaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryminus_expr(uCParser::Unaryminus_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr(uCParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTerm(uCParser::TermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCond(uCParser::CondContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCmpop(uCParser::CmpopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMulop(uCParser::MulopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddop(uCParser::AddopContext *ctx) override {
    return visitChildren(ctx);
  }


};

