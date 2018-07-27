#pragma once
#include "iDateValidator.h"

class DateValidator 
{
private:
	IDateValidator * dateValidator_;

public:
	void setDateValidator(IDateValidator & dateValidator);
	bool is_good(std::string const date) const;
};