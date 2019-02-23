#pragma once
#include <string>
#include "interperterException.h"
#include "object.h"

class TypeException : public InterperterException
{
private:
	std::string _strException = "TypeError : object of type \'int\' has no len()";
public:
	TypeException(Object* typeEx);
	virtual const char* what() const throw() override;
};
