#pragma once

class Strategy
{
private:
	virtual void doAlgorithm() = 0;

public:
	void Algorithm();
};