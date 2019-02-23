#pragma once
#pragma once

#include "object.h"
#include "number.h"
#include <string>



class Integer : public Object
{
private:
	Number _value = 0;

public:
	Integer(Number value = 0, bool isTemp = false) : _value(value), Object(isTemp) {}

	Number getValue()const;
	void setValue(Number value);

	//virtuals
public:
	virtual std::string toString()const override;
	virtual bool isPrintable()const override;
	virtual std::string type()const override;
};
