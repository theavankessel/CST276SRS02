#pragma once
#include <iostream>
#include "iDateValidator.h"

class DateValidatorI18N : public IDateValidator
{
public:
	enum class Format { YMD, DMY, MDY };
	bool is_good(std::string const date) const override;
	bool is_good(Format const format, std::string const date);

private:
	Format format_;
};