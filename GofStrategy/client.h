#pragma once
#include "context.h"
#include "concreteStrategy1.h"

class Client
{
private:
	Context context_;
	ConcreteStrategy1 concreteStrategy_;

public:
	void operation();
};