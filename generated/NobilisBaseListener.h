
// Generated from Nobilis.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "NobilisListener.h"


namespace antlrcpptest {

/**
 * This class provides an empty implementation of NobilisListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  NobilisBaseListener : public NobilisListener {
public:

  virtual void enterStmt(NobilisParser::StmtContext * /*ctx*/) override { }
  virtual void exitStmt(NobilisParser::StmtContext * /*ctx*/) override { }

  virtual void enterFunction_declare(NobilisParser::Function_declareContext * /*ctx*/) override { }
  virtual void exitFunction_declare(NobilisParser::Function_declareContext * /*ctx*/) override { }

  virtual void enterUnaryExpr(NobilisParser::UnaryExprContext * /*ctx*/) override { }
  virtual void exitUnaryExpr(NobilisParser::UnaryExprContext * /*ctx*/) override { }

  virtual void enterPowerExpr(NobilisParser::PowerExprContext * /*ctx*/) override { }
  virtual void exitPowerExpr(NobilisParser::PowerExprContext * /*ctx*/) override { }

  virtual void enterAtomExpr(NobilisParser::AtomExprContext * /*ctx*/) override { }
  virtual void exitAtomExpr(NobilisParser::AtomExprContext * /*ctx*/) override { }

  virtual void enterParenExpr(NobilisParser::ParenExprContext * /*ctx*/) override { }
  virtual void exitParenExpr(NobilisParser::ParenExprContext * /*ctx*/) override { }

  virtual void enterArithExpr(NobilisParser::ArithExprContext * /*ctx*/) override { }
  virtual void exitArithExpr(NobilisParser::ArithExprContext * /*ctx*/) override { }

  virtual void enterMuldivmodExpr(NobilisParser::MuldivmodExprContext * /*ctx*/) override { }
  virtual void exitMuldivmodExpr(NobilisParser::MuldivmodExprContext * /*ctx*/) override { }

  virtual void enterAtom(NobilisParser::AtomContext * /*ctx*/) override { }
  virtual void exitAtom(NobilisParser::AtomContext * /*ctx*/) override { }

  virtual void enterDeclare_stmt(NobilisParser::Declare_stmtContext * /*ctx*/) override { }
  virtual void exitDeclare_stmt(NobilisParser::Declare_stmtContext * /*ctx*/) override { }

  virtual void enterParameters(NobilisParser::ParametersContext * /*ctx*/) override { }
  virtual void exitParameters(NobilisParser::ParametersContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace antlrcpptest
