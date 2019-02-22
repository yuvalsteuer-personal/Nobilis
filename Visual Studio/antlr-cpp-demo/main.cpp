/* /*Copyright (c) 2012-2017 The ANTLR Project. All rights reserved.
 * Use of this file is governed by the BSD 3-clause license that
 * can be found in the LICENSE.txt file in the project root.*/

//
//  main.cpp
//  antlr4-cpp-demo
//
//  Created by Mike Lischke on 13.03.16.
//

#pragma once
//#include <iostream>

#include "antlr4-runtime.h"
#include "NobilisLexer.h"
#include "NobilisParser.h"
#include "NobilisBaseVisitor.h"
//#include "tree/ParseTreeWalker.h"
//#include <Windows.h>
//#include "NobilisBaseListener.h"
#pragma execution_character_set("utf-8")

using namespace antlrcpptest;
using namespace antlr4;
using namespace antlrcpp;

int main(int argc, const char * argv[])
{

	ANTLRInputStream input("3 ** 4");
	std::cout << input.toString() << std::endl;
	NobilisLexer lexer(&input);
	CommonTokenStream tokens(&lexer);
	tokens.fill();
	for (auto& token : tokens.getTokens())
	{
		std::cout << token->toString() << std::endl;
	}
	NobilisParser parser(&tokens);
	tree::ParseTree *tree = parser.stmt();
	//tree::ParseTreeWalker python3Walker;//NobilisBaseListener listener;//python3Walker.walk(&listener,tree);
	NobilisBaseVisitor base_visitor;

	std::cout << base_visitor.visit(tree).as<double>() << std::endl;

	std::wstring s = antlrcpp::s2ws(tree->toStringTree(&parser)) + L"\n";

	//OutputDebugString(s.data()); // Only works properly since VS 2015.
	std::wcout << "Parse Tree: " << s << std::endl;// Unicode output in the console is very limited.

	system("PAUSE");
	return 0;
}