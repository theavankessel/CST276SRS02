#pragma once
#include <iostream>
#include "abstractClass.h"

class ConcreteClass0 : public AbstractClass
{
public:
	void primitiveOperation1() override;
	void primitiveOperation2() override;
};