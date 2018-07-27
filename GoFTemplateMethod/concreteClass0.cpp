#include "stdafx.h"
#include "concreteClass0.h"

void ConcreteClass0::primitiveOperation1()
{
#ifndef NDEBUG
	std::cout << "PrimitiveOperation1 in ConcreteClass0" << std::endl;
#endif
}

void ConcreteClass0::primitiveOperation2()
{
#ifndef NDEBUG
	std::cout << "PrimitiveOperation2 inside ConcreteClass0" << std::endl;
#endif
}
