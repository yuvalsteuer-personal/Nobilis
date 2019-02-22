#pragma once
#include "interperterException.h"




class IndentationException : public InterperterException
{
public:
	virtual const char* what() const throw() override;
};
