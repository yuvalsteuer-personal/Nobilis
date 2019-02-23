#pragma once
#pragma once

#include "Object.h"
#include <string>



class Integer : public Object
{
private:
	int _value = 0;

public:
	Integer(int value = 0, bool isTemp = false) : _value(value), Object(isTemp) {}

	int getValue()const;
	void setValue(int value);

	//virtuals
public:
	virtual std::string toString()const override;
	virtual bool isPrintable()const override;
	virtual std::string type()const override;
};
