#include "stdafx.h"
#include <cassert>
#include <string>
#include "dateValidatorI18N.h"

int main()
{
	using namespace std::literals::string_literals;
	DateValidatorI18N newDateValidator;
	assert(newDateValidator.is_good(DateValidatorI18N::Format::DMY, "1/1/2014"s));
	assert(!newDateValidator.is_good(DateValidatorI18N::Format::DMY, "2014/1/1"s));

    return 0;
}

