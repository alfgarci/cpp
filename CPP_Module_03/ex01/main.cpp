#include <iostream>
#include "ScavTrap.hpp"

int main()
{
	ScavTrap scav1("ScavTrap1");

	ScavTrap scav2(scav1);

	ScavTrap scav3("ScavTrap3");
	scav3 = scav1;

	scav1.attack("target");

	scav1.takeDamage(5);

	scav1.beRepaired(3);

	scav1.takeDamage(15);

	scav2.guardGate();

	return 0;
}
