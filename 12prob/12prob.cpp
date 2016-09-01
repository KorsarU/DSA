// 12prob.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "NOD.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	NOD *nod = new NOD();
	nod->Calculate(1111111, 1234567);
	std::cout << std::endl;
	nod->Calculate(59871, 69854751);
	std::cout << std::endl;
	nod->Calculate(111, 12321);
	std::cout << std::endl;
	nod->Calculate(111, 12);
	std::cout << std::endl;
	system("pause");
	return 0;
}

