#pragma once

#include <string>

class Object
{
private:
	bool _isTemp = false;

public:

	Object(bool isTemp = false) : _isTemp(isTemp) {}



	void setTemp(bool status);
	bool getIsTemp()const;

	//virtuals
	virtual bool isPrintable()const = 0;
	virtual std::string toString()const;
	virtual std::string type()const;
};