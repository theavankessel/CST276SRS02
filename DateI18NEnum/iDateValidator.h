#pragma once
#include <string>
class IDateValidator
{
public:
	virtual bool is_good(std::string const date) const = 0;
};