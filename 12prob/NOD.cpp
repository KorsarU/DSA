#include "stdafx.h"
#include "NOD.h"
#include <iostream>

void findNOD(int one, int two);


NOD::NOD()
{
}


NOD::~NOD()
{
}

int NOD::Calculate(int one, int two)
{
	if (one < 0 || two < 00)
	{
		std::cout << "Negative" << std::endl;
		return 0;
	}
	std::cout << "NOD: " << one << std::endl;
	return (two == 0) ? one : Calculate(two, one % two);

}

