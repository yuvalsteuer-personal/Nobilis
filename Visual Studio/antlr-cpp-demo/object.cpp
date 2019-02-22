#include "object.h"



void Object::setTemp(bool status)
{
	_isTemp = status;
}

bool Object::getIsTemp() const
{
	return _isTemp;
}
