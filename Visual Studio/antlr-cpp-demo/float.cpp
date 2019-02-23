#pragma once
#include "float.h"



Float::Float(double value, bool isTemp) : _value(value), Object(isTemp) {}

double Float::getValue() const
{
	return _value;
}

void Float::setValue(double value)
{
	_value = value;
}

std::string Float::toString() const
{
	return std::to_string(_value);
}

bool Float::isPrintable() const
{
	return true;
}

std::string Float::type() const
{
	return std::string("<type \'float\'>");
}
