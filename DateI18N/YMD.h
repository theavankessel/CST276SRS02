#pragma once
#include <iostream>
#include "iDateValidator.h"

class YMD : public IDateValidator
{
	bool is_good(std::string const date) const override;
};