#include "stdafx.h"
#include "concreteClass1.h"
#include "concreteClass0.h"
#include "abstractClass.h"

int main()
{
	ConcreteClass0 concreteClass0;
	ConcreteClass1 concreteClass1;

	concreteClass0.templateMethod();
	concreteClass1.templateMethod();

    return 0;
}

