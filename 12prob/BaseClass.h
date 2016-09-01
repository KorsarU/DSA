#pragma once
class BaseClass
{
public:
	BaseClass();
	~BaseClass();
	virtual int Calculate(int one, int two) = 0;
};

