#pragma once

#include <iostream>
#include "iDateValidator.h"

class DMY : public IDateValidator
{
	bool is_good(std::string const date) const override;
};