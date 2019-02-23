#pragma once
#include "sequence.h"
#include "object.h"
#include <vector>
#include <string>



class List : public Sequence
{
private:
	std::vector<Object*> _lst;

public:
	List(const std::string& strList, bool isTemp = false);
	~List();
public:
	virtual bool isPrintable()const override;
	virtual std::string toString()const override;
	virtual std::string type()const override;
	virtual size_t length()const override;
};

