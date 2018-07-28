#pragma once
#include <iostream>
#include "iDateValidator.h"
#include "dateValidator.h"
#include "YMD.h"
#include "MDY.h"
#include "DMY.h"
#include "YDM.h"

class Client
{
public:
	void operation();

private:
	IDateValidator * dateValidator_;
	YMD ymd_;
	MDY mdy_;
	DMY dmy_;
	YDM ydm_;
	std::string date_;

};