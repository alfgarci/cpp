#include <iostream>
#include "FragTrap.hpp"

int main()
{
	FragTrap frag1("FragTrap1");

	FragTrap frag2(frag1);

	FragTrap frag3("FragTrap3");
	frag3 = frag1;

	frag1.attack("target");

	frag1.takeDamage(5);

	frag1.beRepaired(3);

	frag1.takeDamage(15);

	frag2.highFive();

	return 0;
}
