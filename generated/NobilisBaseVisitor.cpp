
// Generated from Nobilis.g4 by ANTLR 4.7.2


#include "NobilisBaseVisitor.h"
#include <math.h>

using namespace antlrcpptest;

antlrcpp::Any antlrcpptest::NobilisBaseVisitor::visitStmt(NobilisParser::StmtContext * ctx)
{
	return visitChildren(ctx);
}

antlrcpp::Any antlrcpptest::NobilisBaseVisitor::visitFunction_declare(NobilisParser::Function_declareContext * ctx)
{
	return visitChildren(ctx);
}

antlrcpp::Any antlrcpptest::NobilisBaseVisitor::visitUnaryExpr(NobilisParser::UnaryExprContext * ctx)
{
	return visitChildren(ctx);
}

antlrcpp::Any antlrcpptest::NobilisBaseVisitor::visitPowerExpr(NobilisParser::PowerExprContext * ctx)
{
	//auto left = visit(ctx->left->);
	
	//auto right = visit(ctx->right);
	//if(visit.)
	std::cout << "left: " << ctx->left->getText() << std::endl;
	std::cout << "op: " << ctx->op->getText() << std::endl;
	std::cout << "right: " << ctx->right->getText() << std::endl;
	auto result = (int)pow(atoi(ctx->left->getText().c_str()), atoi(ctx->right->getText().c_str()));
	std::cout << ctx->left->getText() << " ** " << ctx->right->getText() << " = " << result << std::endl;
	return pow(atoi(ctx->left->getText().c_str()),atoi(ctx->right->getText().c_str())); 
	//return visitChildren(ctx);
}

antlrcpp::Any antlrcpptest::NobilisBaseVisitor::visitAtomExpr(NobilisParser::AtomExprContext * ctx)
{

	return visitChildren(ctx);
}

antlrcpp::Any antlrcpptest::NobilisBaseVisitor::visitParenExpr(NobilisParser::ParenExprContext * ctx)
{
	return visitChildren(ctx);
}

antlrcpp::Any antlrcpptest::NobilisBaseVisitor::visitArithExpr(NobilisParser::ArithExprContext * ctx)
{
	
	return visitChildren(ctx);
}

antlrcpp::Any antlrcpptest::NobilisBaseVisitor::visitMuldivmodExpr(NobilisParser::MuldivmodExprContext * ctx)
{
	return visitChildren(ctx);
}

antlrcpp::Any antlrcpptest::NobilisBaseVisitor::visitAtom(NobilisParser::AtomContext * ctx)
{
	return visitChildren(ctx);
}

antlrcpp::Any antlrcpptest::NobilisBaseVisitor::visitDeclare_stmt(NobilisParser::Declare_stmtContext * ctx)
{
	return visitChildren(ctx);
}

antlrcpp::Any antlrcpptest::NobilisBaseVisitor::visitParameters(NobilisParser::ParametersContext * ctx)
{
	return visitChildren(ctx);
}
