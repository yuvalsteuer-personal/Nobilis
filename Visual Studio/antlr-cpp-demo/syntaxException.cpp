#pragma once
#include "syntaxException.h"


const char* SyntaxException::what() const throw()
{
	return _strException.c_str();
}