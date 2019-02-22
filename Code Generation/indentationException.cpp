#pragma once
#include "indentationException.h"


const char* IndentationException::what()const throw()
{
	return "IndentationError: unexpected indent!";
}