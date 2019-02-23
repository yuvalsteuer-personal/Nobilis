#pragma once

#include "object.h"
#include <string>



class Boolean : public Object
{
private:
	bool _value = true;

public:
	Boolean(bool value = true, bool isTemp = false) : _value(value), Object(isTemp) {}

	bool getValue()const;
	void setValue(bool value);


	//virtual
public:
	virtual bool isPrintable()const override;
	virtual std::string toString()const override;
	virtual std::string type()const override;
};
