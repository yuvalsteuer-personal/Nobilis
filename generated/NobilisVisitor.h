
// Generated from Nobilis.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "NobilisParser.h"


namespace antlrcpptest {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by NobilisParser.
 */
class  NobilisVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by NobilisParser.
   */
    virtual antlrcpp::Any visitStmt(NobilisParser::StmtContext *context) = 0;

    virtual antlrcpp::Any visitFunction_declare(NobilisParser::Function_declareContext *context) = 0;

    virtual antlrcpp::Any visitUnaryExpr(NobilisParser::UnaryExprContext *context) = 0;

    virtual antlrcpp::Any visitPowerExpr(NobilisParser::PowerExprContext *context) = 0;

    virtual antlrcpp::Any visitAtomExpr(NobilisParser::AtomExprContext *context) = 0;

    virtual antlrcpp::Any visitParenExpr(NobilisParser::ParenExprContext *context) = 0;

    virtual antlrcpp::Any visitArithExpr(NobilisParser::ArithExprContext *context) = 0;

    virtual antlrcpp::Any visitMuldivmodExpr(NobilisParser::MuldivmodExprContext *context) = 0;

    virtual antlrcpp::Any visitAtom(NobilisParser::AtomContext *context) = 0;

    virtual antlrcpp::Any visitDeclare_stmt(NobilisParser::Declare_stmtContext *context) = 0;

    virtual antlrcpp::Any visitParameters(NobilisParser::ParametersContext *context) = 0;


};

}  // namespace antlrcpptest
