#pragma once


#include "object.h"
#include "number.h"
#include <string>



class Float : public Object
{
private:
	double _value = 0;

public:
	Float(double value = 0, bool isTemp = false);

	double getValue()const;
	void setValue(double value);

	//virtuals
public:
	virtual std::string toString()const override;
	virtual bool isPrintable()const override;
	virtual std::string type()const override;
};
