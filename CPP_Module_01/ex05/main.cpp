#include <iostream>
#include "Harl.hpp"

int main()
{
	std::string	input;
	Harl		harl;

	do
	{
		std::cout << "Level: ";
		std::cin >> input;
		harl.complain(input);
	}
	while (input.compare("exit"));

	return (0);
}