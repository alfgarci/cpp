#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;

		ClapTrap();

	public:
		ClapTrap(std::string name);
		~ClapTrap();
		
		ClapTrap(const ClapTrap &other);
		ClapTrap &operator=(const ClapTrap &other);

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif