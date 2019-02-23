#pragma once
#include "integer.h"


bool Integer::isPrintable()const
{
	return true;
}
std::string Integer::type() const
{
	return std::string("<type \'int\'>");
}
std::string Integer::toString()const
{
	return _value.to_string();
}

Number Integer::getValue() const
{
	return _value;
}

void Integer::setValue(Number value)
{
	_value = value;
}
