#pragma once
#include "sequence.h"
#include <string>



class String : public Sequence
{
private:
	std::string _str = "";

public:
	String(std::string str = "", bool isTemp = false);

	//virtual
	virtual bool isPrintable()const override;
	virtual std::string toString()const override;
	virtual std::string type()const override;
	virtual size_t length()const override;
};
