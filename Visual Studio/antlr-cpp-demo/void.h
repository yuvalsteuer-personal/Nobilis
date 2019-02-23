#pragma once

#include "object.h"
#include <string>



class Void : public Object
{


public:
	Void(bool isTemp = false) : Object(isTemp) {}



	virtual bool isPrintable()const override;
	virtual std::string toString()const override;
	virtual std::string type()const override;
};
