
// Generated from Nobilis.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "NobilisVisitor.h"
#include "NobilisParser.h"

namespace antlrcpptest {

/**
 * This class provides an empty implementation of NobilisVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  NobilisBaseVisitor : public NobilisVisitor {
public:

	virtual antlrcpp::Any visitStmt(NobilisParser::StmtContext *ctx) override;

	virtual antlrcpp::Any visitFunction_declare(NobilisParser::Function_declareContext *ctx) override;

	virtual antlrcpp::Any visitUnaryExpr(NobilisParser::UnaryExprContext *ctx) override;

	virtual antlrcpp::Any visitPowerExpr(NobilisParser::PowerExprContext *ctx) override;

	virtual antlrcpp::Any visitAtomExpr(NobilisParser::AtomExprContext *ctx) override;

	virtual antlrcpp::Any visitParenExpr(NobilisParser::ParenExprContext *ctx) override;

	virtual antlrcpp::Any visitArithExpr(NobilisParser::ArithExprContext *ctx) override;

	virtual antlrcpp::Any visitMuldivmodExpr(NobilisParser::MuldivmodExprContext *ctx) override;

	virtual antlrcpp::Any visitAtom(NobilisParser::AtomContext *ctx) override;

	virtual antlrcpp::Any visitDeclare_stmt(NobilisParser::Declare_stmtContext *ctx) override;

	virtual antlrcpp::Any visitParameters(NobilisParser::ParametersContext *ctx) override;


};

}  // namespace antlrcpptest
