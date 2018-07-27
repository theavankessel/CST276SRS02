#include "stdafx.h"
#include <sstream>
#include <vector>
#include "YMD.h"

bool YMD::is_good(std::string const date) const
{
	auto valid = false;
	// https://stackoverflow.com/questions/10058606/splitting-a-string-by-a-character
	std::stringstream dateStream(date);
	std::string segment;
	std::vector<std::string> seglist;

	while (std::getline(dateStream, segment, '/'))
	{
		seglist.push_back(segment);
	}

	if (seglist.size() != 3)
	{
		valid = false;
	}

	auto year = stoi(seglist[0]);
	auto month = stoi(seglist[1]);
	auto day = stoi(seglist[2]);

	if (month < 1 || month > 12 || day < 1 || day > 31 || year < 1000 || year > 9999)
	{
		valid = false;
	}
	else
	{
		valid = true;
	}

	return valid;
}
