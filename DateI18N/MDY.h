#pragma once
#include <iostream>
#include "iDateValidator.h"

class MDY : public IDateValidator
{
	bool is_good(std::string const date) const override;
};