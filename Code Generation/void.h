#pragma once

#include "type.h"
#include <string>



class Void : public Type
{


public:
	Void(bool isTemp = false) : Type(isTemp) {}
	virtual bool isPrintable()const override;
	virtual std::string toString()const override;
	virtual std::string type()const override;
};
