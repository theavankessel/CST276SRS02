#include "stdafx.h"
#include "concreteClass1.h"

void ConcreteClass1::primitiveOperation1()
{
#ifndef NDEBUG
	std::cout << "PrimitiveOperation1 inside ConcreteClass1" << std::endl;
#endif
}

void ConcreteClass1::primitiveOperation2()
{
#ifndef NDEBUG
	std::cout << "PrimitiveOperation2 inside ConcreteClass1" << std::endl;
#endif
}
