#include "stdafx.h"
#include "context.h"

void Context::setStrategy(Strategy & strategy)
{	
	strategy_ = &strategy;
}

void Context::operation()
{
	// ...
	if (strategy_ != nullptr)
	{
		strategy_->Algorithm();
	}
	// ...
}
