#pragma once
#include "strategy.h"

class Context
{
private:
	Strategy * strategy_;

public:
	void setStrategy(Strategy& strategy);
	void operation();
};