
#pragma once
#include "object.h"
#include <string>



class Sequence : public Object
{

public:
	Sequence(bool isTemp = false) : Object(isTemp) {}



	virtual size_t length()const;
	virtual bool isPrintable()const override = 0;
	virtual std::string toString()const override = 0;
	virtual std::string type()const override;
};
