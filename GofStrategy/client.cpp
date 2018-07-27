#include "stdafx.h"
#include "client.h"

void Client::operation()
{
	// ...
	context_.setStrategy(concreteStrategy_);

	// ...
	context_.operation();
}
