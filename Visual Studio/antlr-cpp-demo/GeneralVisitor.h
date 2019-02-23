#pragma once
#include "antlr4-runtime.h"
#include "NobilisVisitor.h"
#include "NobilisParser.h"
#include "NobilisBaseVisitor.h"

namespace antlrcpptest
{
	class GeneralVisitor : public NobilisBaseVisitor
	{
		enum
		{
			NAME = 1,
			STRING = 2,
			NUMBER = 3,
			INTEGER = 4,
			FLOAT = 5,
			TRUE = 6,
			FALSE = 7,
			TYPE = 8,
			INT_TYPE = 9,
			FLOAT_TYPE = 10,
			BOOLEAN_TYPE = 11,
			STRING_TYPE = 12,
			OBJECT_TYPE = 13,
			DOT = 14,
			STAR = 15,
			OPEN_PAREN = 16,
			CLOSE_PAREN = 17,
			COMMA = 18,
			COLON = 19,
			SEMI_COLON = 20,
			POWER = 21,
			ASSIGN = 22,
			OPEN_BRACK = 23,
			CLOSE_BRACK = 24,
			OR_OP = 25,
			XOR = 26,
			AND_OP = 27,
			LEFT_SHIFT = 28,
			RIGHT_SHIFT = 29,
			ADD = 30,
			MINUS = 31,
			DIV = 32,
			MOD = 33,
			IDIV = 34,
			NOT_OP = 35,
			OPEN_BRACE = 36,
			CLOSE_BRACE = 37,
			LESS_THAN = 38,
			GREATER_THAN = 39,
			EQUALS = 40,
			GT_EQ = 41,
			LT_EQ = 42,
			NOT_EQ = 43,
			ARROW = 44,
			ADD_ASSIGN = 45,
			SUB_ASSIGN = 46,
			MULT_ASSIGN = 47,
			AT_ASSIGN = 48,
			DIV_ASSIGN = 49,
			MOD_ASSIGN = 50,
			AND_ASSIGN = 51,
			OR_ASSIGN = 52,
			XOR_ASSIGN = 53,
			LEFT_SHIFT_ASSIGN = 54,
			RIGHT_SHIFT_ASSIGN = 55,
			POWER_ASSIGN = 56,
			IDIV_ASSIGN = 57,
			SKIP_ = 58
		};



		//virtual antlrcpp::Any visitAtom(NobilisParser::AtomContext *ctx) override;

		virtual antlrcpp::Any visitDeclare_stmt(NobilisParser::Declare_stmtContext *ctx) override;

		virtual antlrcpp::Any visitParameters(NobilisParser::ParametersContext *ctx) override;

		virtual antlrcpp::Any visitStmt(NobilisParser::StmtContext *ctx) override;

		virtual antlrcpp::Any visitFunction_declare(NobilisParser::Function_declareContext *ctx) override;

		virtual antlrcpp::Any visitUnaryExpr(NobilisParser::UnaryExprContext *ctx) override;

		virtual antlrcpp::Any visitPowerExpr(NobilisParser::PowerExprContext *ctx) override;

		virtual antlrcpp::Any visitAtomExpr(NobilisParser::AtomExprContext *ctx) override;

		virtual antlrcpp::Any visitParenExpr(NobilisParser::ParenExprContext *ctx) override;

		virtual antlrcpp::Any visitArithExpr(NobilisParser::ArithExprContext *ctx) override;

		virtual antlrcpp::Any visitMuldivmodExpr(NobilisParser::MuldivmodExprContext *ctx) override;

		virtual antlrcpp::Any visitNameAtom(NobilisParser::NameAtomContext *ctx) override;

		virtual antlrcpp::Any visitStringAtom(NobilisParser::StringAtomContext *ctx) override;

		virtual antlrcpp::Any visitIntegerAtom(NobilisParser::IntegerAtomContext *ctx) override;

		virtual antlrcpp::Any visitFloatAtom(NobilisParser::FloatAtomContext *ctx) override;

		virtual antlrcpp::Any visitTrueAtom(NobilisParser::TrueAtomContext *ctx) override;

		virtual antlrcpp::Any visitFalseAtom(NobilisParser::FalseAtomContext *ctx) override;

	};
}
