#include "stdafx.h"
#include <vector>
#include <sstream>
#include <cassert>
#include "dateValidatorI18N.h"

bool DateValidatorI18N::is_good(std::string const date) const
{
	auto valid = false;
	// https://stackoverflow.com/questions/10058606/splitting-a-string-by-a-character
	std::stringstream dateStream(date);
	std::string segment;
	std::vector<std::string> seglist;

	switch (format_)
	{
		case Format::YMD:
		{
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
		}
		break;

		case Format::DMY:
		{
			while (std::getline(dateStream, segment, '/'))
			{
				seglist.push_back(segment);
			}

			if (seglist.size() != 3)
			{
				valid = false;
			}

			auto day = stoi(seglist[0]);
			auto month = stoi(seglist[1]);
			auto year = stoi(seglist[2]);

			if (month < 1 || month > 12 || day < 1 || day > 31 || year < 1000 || year > 9999)
			{
				valid = false;
			}
			else
			{
				valid = true;
			}
		}
		break;

		case Format::MDY:
		{
			while (std::getline(dateStream, segment, '/'))
			{
				seglist.push_back(segment);
			}

			if (seglist.size() != 3)
			{
				valid = false;
			}

			auto month = stoi(seglist[0]);
			auto day = stoi(seglist[1]);
			auto year = stoi(seglist[2]);

			if (month < 1 || month > 12 || day < 1 || day > 31 || year < 1000 || year > 9999)
			{
				valid = false;
			}
			else
			{
				valid = true;
			}
		}
		break;

		default:
		{
			assert(false);
		}
		break;
	}
	return valid;
}

bool DateValidatorI18N::is_good(Format const format, std::string const date) 
{
	format_ = format;
	auto const result{ is_good(date) };
	return result;
}

