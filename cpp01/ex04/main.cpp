#include <iostream>
#include "MySed.hpp"

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		MySed	sed(argv[1]);
		sed.replace(argv[2], argv[3]);
	}
	else
	{
		std::cout << "Bad number of arguments. <filename> <to_find> <replace>" << std::endl;
		return (1);
	}
	return (0);
}