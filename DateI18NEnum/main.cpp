#include "stdafx.h"
#include <cassert>
#include <string>
#include "dateValidatorI18N.h"

int main()
{
	using namespace std::literals::string_literals;
	DateValidatorI18N newDateValidator;

	assert(!newDateValidator.is_good(DateValidatorI18N::Format::YMD, "1/1/2014"s));
	assert(newDateValidator.is_good(DateValidatorI18N::Format::YMD, "2014/1/1"s));
	assert(!newDateValidator.is_good(DateValidatorI18N::Format::YMD, "2000/13/13"));

	assert(newDateValidator.is_good(DateValidatorI18N::Format::MDY, "1/1/2014"s));
	assert(!newDateValidator.is_good(DateValidatorI18N::Format::MDY, "2014/1/1"s));
	assert(newDateValidator.is_good(DateValidatorI18N::Format::MDY, "12/13/2000"s));

	assert(newDateValidator.is_good(DateValidatorI18N::Format::DMY, "1/1/2014"s));
	assert(!newDateValidator.is_good(DateValidatorI18N::Format::DMY, "2014/1/1"s));
	assert(!newDateValidator.is_good(DateValidatorI18N::Format::DMY, "12/13/2000"s));

	// Added test cases for YDM
	assert(!newDateValidator.is_good(DateValidatorI18N::Format::YDM, "1/1/2014"s));
	assert(newDateValidator.is_good(DateValidatorI18N::Format::YDM, "2014/12/12"s));
	assert(!newDateValidator.is_good(DateValidatorI18N::Format::YDM, "2000/13/13"s));

    return 0;
}

