#include <iostream>
#include "ClapTrap.hpp"

int main()
{
	ClapTrap clap1("ClapTrap1");

	ClapTrap clap2(clap1);

	ClapTrap clap3("CalpTrap3");
	clap3 = clap1;

	clap1.attack("target");

	clap1.takeDamage(5);

	clap1.beRepaired(3);

	clap1.takeDamage(15);

	return 0;
}
