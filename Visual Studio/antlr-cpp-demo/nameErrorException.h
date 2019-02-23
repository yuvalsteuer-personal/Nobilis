#pragma once
#include "interperterException.h"
#include <string>



class NameErrorException : public InterperterException
{
private:
	std::string _name;

public:
	NameErrorException(std::string name) : _name(name) {}

	virtual const char* what()const throw() override;
};
