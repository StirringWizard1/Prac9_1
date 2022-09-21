#include "Prefix.h"
#include <iostream>
#include <string>

int main ()
{
	Prefix Hi;

	std::string str;

	getline(std::cin, str);
	std::cout << Hi.evaluate(str) << std::endl;
	return 0;
}