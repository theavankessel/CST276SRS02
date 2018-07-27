#pragma once

class AbstractClass
{
public:
	virtual void primitiveOperation1() = 0;
	virtual void primitiveOperation2() = 0;
	void templateMethod();
};