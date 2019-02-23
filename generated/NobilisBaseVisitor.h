
// Generated from Nobilis.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "NobilisVisitor.h"


namespace antlrcpptest {

/**
 * This class provides an empty implementation of NobilisVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  NobilisBaseVisitor : public NobilisVisitor {
public:

  virtual antlrcpp::Any visitStmt(NobilisParser::StmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_declare(NobilisParser::Function_declareContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnaryExpr(NobilisParser::UnaryExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPowerExpr(NobilisParser::PowerExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAtomExpr(NobilisParser::AtomExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParenExpr(NobilisParser::ParenExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArithExpr(NobilisParser::ArithExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMuldivmodExpr(NobilisParser::MuldivmodExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNameAtom(NobilisParser::NameAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStringAtom(NobilisParser::StringAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFloatAtom(NobilisParser::FloatAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntegerAtom(NobilisParser::IntegerAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTrueAtom(NobilisParser::TrueAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFalseAtom(NobilisParser::FalseAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclare_stmt(NobilisParser::Declare_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameters(NobilisParser::ParametersContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace antlrcpptest
