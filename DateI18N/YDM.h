#pragma once
#include <iostream>
#include "iDateValidator.h"

// Added to incorporate YDM

class YDM : public IDateValidator
{
	bool is_good(std::string const date) const override;
};

