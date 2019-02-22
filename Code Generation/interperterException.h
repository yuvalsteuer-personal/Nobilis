#pragma once
#include <exception>




class InterperterException : public std::exception
{
public:
	virtual const char* what()const throw() override;

};	

