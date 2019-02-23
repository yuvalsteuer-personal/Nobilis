#include "object.h"



void Object::setTemp(bool status)
{
	_isTemp = status;
}

bool Object::getIsTemp() const
{
	return _isTemp;
}

std::string Object::toString() const
{
	return std::string("<type \'object\'>");
}

std::string Object::type() const
{
	return std::string("<type \'object\'>");
}
