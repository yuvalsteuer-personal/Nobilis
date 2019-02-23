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
	auto left = visit(ctx->left);

	auto right = visit(ctx->right);
	//if(visit.)
	auto result = (int)pow(atoi(ctx->left->getText().c_str()), atoi(ctx->right->getText().c_str()));
	return pow(atoi(ctx->left->getText().c_str()), atoi(ctx->right->getText().c_str()));
	//return visitChildren(ctx);
}

antlrcpp::Any GeneralVisitor::visitAtomExpr(NobilisParser::AtomExprContext * ctx)
{
	std::cout << "<ATOM_EXPR>";
	return visitChildren(ctx);
}

antlrcpp::Any GeneralVisitor::visitParenExpr(NobilisParser::ParenExprContext * ctx)
{
	return visitChildren(ctx);
}

antlrcpp::Any GeneralVisitor::visitArithExpr(NobilisParser::ArithExprContext * ctx)
{

	return visitChildren(ctx);
}

antlrcpp::Any GeneralVisitor::visitMuldivmodExpr(NobilisParser::MuldivmodExprContext * ctx)
{
	return visitChildren(ctx);
}



antlrcpp::Any GeneralVisitor::visitNameAtom(NobilisParser::NameAtomContext * ctx)
{
	std::cout << "(Name)";
	return visitChildren(ctx);
}

antlrcpp::Any GeneralVisitor::visitStringAtom(NobilisParser::StringAtomContext * ctx)
{
	std::cout << "(String)";
	return visitChildren(ctx);
}

antlrcpp::Any GeneralVisitor::visitIntegerAtom(NobilisParser::IntegerAtomContext * ctx)
{
	std::cout << "(Integer)";
	return visitChildren(ctx);
}

antlrcpp::Any GeneralVisitor::visitFloatAtom(NobilisParser::FloatAtomContext * ctx)
{
	std::cout << "(Float)";
	return visitChildren(ctx);
}

antlrcpp::Any GeneralVisitor::visitTrueAtom(NobilisParser::TrueAtomContext * ctx)
{
	std::cout << "(True)";
	return visitChildren(ctx);
}

antlrcpp::Any GeneralVisitor::visitFalseAtom(NobilisParser::FalseAtomContext * ctx)
{
	std::cout << "(False)";
	return visitChildren(ctx);
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
