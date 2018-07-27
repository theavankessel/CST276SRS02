#pragma once
#include <iostream>

class IDateValidator
{
public:
	virtual bool is_good(std::string const date) const = 0;
};
