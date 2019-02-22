
// Generated from Nobilis.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "NobilisParser.h"


namespace antlrcpptest {

/**
 * This interface defines an abstract listener for a parse tree produced by NobilisParser.
 */
class  NobilisListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterStmt(NobilisParser::StmtContext *ctx) = 0;
  virtual void exitStmt(NobilisParser::StmtContext *ctx) = 0;

  virtual void enterFunction_declare(NobilisParser::Function_declareContext *ctx) = 0;
  virtual void exitFunction_declare(NobilisParser::Function_declareContext *ctx) = 0;

  virtual void enterUnaryExpr(NobilisParser::UnaryExprContext *ctx) = 0;
  virtual void exitUnaryExpr(NobilisParser::UnaryExprContext *ctx) = 0;

  virtual void enterPowerExpr(NobilisParser::PowerExprContext *ctx) = 0;
  virtual void exitPowerExpr(NobilisParser::PowerExprContext *ctx) = 0;

  virtual void enterAtomExpr(NobilisParser::AtomExprContext *ctx) = 0;
  virtual void exitAtomExpr(NobilisParser::AtomExprContext *ctx) = 0;

  virtual void enterParenExpr(NobilisParser::ParenExprContext *ctx) = 0;
  virtual void exitParenExpr(NobilisParser::ParenExprContext *ctx) = 0;

  virtual void enterArithExpr(NobilisParser::ArithExprContext *ctx) = 0;
  virtual void exitArithExpr(NobilisParser::ArithExprContext *ctx) = 0;

  virtual void enterMuldivmodExpr(NobilisParser::MuldivmodExprContext *ctx) = 0;
  virtual void exitMuldivmodExpr(NobilisParser::MuldivmodExprContext *ctx) = 0;

  virtual void enterAtom(NobilisParser::AtomContext *ctx) = 0;
  virtual void exitAtom(NobilisParser::AtomContext *ctx) = 0;

  virtual void enterDeclare_stmt(NobilisParser::Declare_stmtContext *ctx) = 0;
  virtual void exitDeclare_stmt(NobilisParser::Declare_stmtContext *ctx) = 0;

  virtual void enterParameters(NobilisParser::ParametersContext *ctx) = 0;
  virtual void exitParameters(NobilisParser::ParametersContext *ctx) = 0;


};

}  // namespace antlrcpptest
