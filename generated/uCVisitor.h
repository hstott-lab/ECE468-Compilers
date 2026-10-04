
 


// Generated from uC.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "uCParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by uCParser.
 */
class  uCVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by uCParser.
   */
    virtual std::any visitProgram(uCParser::ProgramContext *context) = 0;

    virtual std::any visitDecls(uCParser::DeclsContext *context) = 0;

    virtual std::any visitVar_decls(uCParser::Var_declsContext *context) = 0;

    virtual std::any visitIdent(uCParser::IdentContext *context) = 0;

    virtual std::any visitVar_decl(uCParser::Var_declContext *context) = 0;

    virtual std::any visitStr_decl(uCParser::Str_declContext *context) = 0;

    virtual std::any visitBase_type(uCParser::Base_typeContext *context) = 0;

    virtual std::any visitFunction(uCParser::FunctionContext *context) = 0;

    virtual std::any visitStatements(uCParser::StatementsContext *context) = 0;

    virtual std::any visitStatement(uCParser::StatementContext *context) = 0;

    virtual std::any visitBase_stmt(uCParser::Base_stmtContext *context) = 0;

    virtual std::any visitRead_stmt(uCParser::Read_stmtContext *context) = 0;

    virtual std::any visitPrint_stmt(uCParser::Print_stmtContext *context) = 0;

    virtual std::any visitReturn_stmt(uCParser::Return_stmtContext *context) = 0;

    virtual std::any visitAssign_stmt(uCParser::Assign_stmtContext *context) = 0;

    virtual std::any visitIf_stmt(uCParser::If_stmtContext *context) = 0;

    virtual std::any visitWhile_stmt(uCParser::While_stmtContext *context) = 0;

    virtual std::any visitPrimary(uCParser::PrimaryContext *context) = 0;

    virtual std::any visitUnaryminus_expr(uCParser::Unaryminus_exprContext *context) = 0;

    virtual std::any visitExpr(uCParser::ExprContext *context) = 0;

    virtual std::any visitTerm(uCParser::TermContext *context) = 0;

    virtual std::any visitCond(uCParser::CondContext *context) = 0;

    virtual std::any visitCmpop(uCParser::CmpopContext *context) = 0;

    virtual std::any visitMulop(uCParser::MulopContext *context) = 0;

    virtual std::any visitAddop(uCParser::AddopContext *context) = 0;


};

