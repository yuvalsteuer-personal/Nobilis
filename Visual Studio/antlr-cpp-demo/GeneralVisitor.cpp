#pragma once
#include "GeneralVisitor.h"
using namespace antlrcpptest;






antlrcpp::Any GeneralVisitor::visitStmt(NobilisParser::StmtContext * ctx)
{
	return visitChildren(ctx);
}

antlrcpp::Any GeneralVisitor::visitFunction_declare(NobilisParser::Function_declareContext * ctx)
{
	return visitChildren(ctx);
}

antlrcpp::Any GeneralVisitor::visitUnaryExpr(NobilisParser::UnaryExprContext * ctx)
{
	return visitChildren(ctx);
}

antlrcpp::Any GeneralVisitor::visitPowerExpr(NobilisParser::PowerExprContext * ctx)
{
	auto v = visit(ctx->expr(0)).as<Integer*>();
	std::cout << "power result: " << v->toString() << std::endl;
	auto result = (int)pow(atoi(ctx->left->getText().c_str()), atoi(ctx->right->getText().c_str()));
	return pow(atoi(ctx->left->getText().c_str()), atoi(ctx->right->getText().c_str()));
}

antlrcpp::Any GeneralVisitor::visitAtomExpr(NobilisParser::AtomExprContext * ctx)
{
	xt
	return visitChildren(ctx);
}

antlrcpp::Any GeneralVisitor::visitParenExpr(NobilisParser::ParenExprContext * ctx)
{
	std::cout << std::endl << ctx->expr()->getText() << std::endl;
	ctx->middle
	auto v = visit(ctx->expr()).as<Integer*>();
	std::cout << v->toString();
	return v;
}

antlrcpp::Any GeneralVisitor::visitArithExpr(NobilisParser::ArithExprContext * ctx)
{
	switch (ctx->op->getType())
	{
		case ADD: return visit(ctx->expr(0)).as<Integer*>()->getValue() + visit(ctx->expr(1)).as<Integer*>()->getValue();
		case MINUS: return visit(ctx->expr(0)).as<Integer*>()->getValue() - visit(ctx->expr(1)).as<Integer*>()->getValue();
	}
}

antlrcpp::Any GeneralVisitor::visitMuldivmodExpr(NobilisParser::MuldivmodExprContext * ctx)
{
	return visitChildren(ctx);
}



antlrcpp::Any GeneralVisitor::visitNameAtom(NobilisParser::NameAtomContext * ctx)
{	
	return visitChildren(ctx);
}

antlrcpp::Any GeneralVisitor::visitStringAtom(NobilisParser::StringAtomContext * ctx)
{
	return new String(ctx->getText(),true);
}

antlrcpp::Any GeneralVisitor::visitIntegerAtom(NobilisParser::IntegerAtomContext * ctx)
{
	return new Integer(atoi(ctx->getText().c_str()), true);
}

antlrcpp::Any GeneralVisitor::visitFloatAtom(NobilisParser::FloatAtomContext * ctx)
{
	return new Float(atof(ctx->getText().c_str()), true);
}

antlrcpp::Any GeneralVisitor::visitTrueAtom(NobilisParser::TrueAtomContext * ctx)
{
	return new Boolean(true, true);
}

antlrcpp::Any GeneralVisitor::visitFalseAtom(NobilisParser::FalseAtomContext * ctx)
{
	return new Boolean(false, true);
}

/*antlrcpp::Any GeneralVisitor::visitAtom(NobilisParser::AtomContext * ctx)
{
	std::cout << "<ATOM>";
	return visitChildren(ctx);
}*/
antlrcpp::Any GeneralVisitor::visitDeclare_stmt(NobilisParser::Declare_stmtContext * ctx)
{
	return visitChildren(ctx);
}

antlrcpp::Any GeneralVisitor::visitParameters(NobilisParser::ParametersContext * ctx)
{
	return visitChildren(ctx);
}
