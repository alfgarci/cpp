#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;

		ClapTrap();

	public:
		ClapTrap(std::string name);
		~ClapTrap();
		
		ClapTrap(const ClapTrap& new);
		ClapTrap &operator=(const ClapTrap &new);

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif