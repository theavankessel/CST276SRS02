#include "stdafx.h"
#include <iostream>
#include "dateValidator.h"

void DateValidator::setDateValidator(IDateValidator & dateValidator)
{
	dateValidator_ = &dateValidator;
}

bool DateValidator::is_good(std::string date) const
{
	auto const result{ dateValidator_->is_good(date) };
	return result;
}