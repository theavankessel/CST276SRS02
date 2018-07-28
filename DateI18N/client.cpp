#include "stdafx.h"
#include "client.h"
#include <string>
#include <cassert>
#include "dateValidator.h"

void Client::operation()
{
	using namespace std::literals::string_literals;
	DateValidator context;

	context.setDateValidator(ymd_);	
	assert(!context.is_good("1/1/2014"s));
	assert(context.is_good("2014/1/1"s));
	assert(!context.is_good("2000/13/13"));

	context.setDateValidator(mdy_);
	assert(context.is_good("1/1/2014"s));
	assert(!context.is_good("2014/1/1"s));
	assert(context.is_good("12/13/2000"s));

	context.setDateValidator(dmy_);
	assert(context.is_good("1/1/2014"s));
	assert(!context.is_good("2014/1/1"s));
	assert(!context.is_good("12/13/2000"s));

	// Added test cases for YDM
	context.setDateValidator(ydm_);
	assert(!context.is_good("1/1/2014"s));
	assert(context.is_good("2014/12/12"s));
	assert(!context.is_good("2000/13/13"s));
}