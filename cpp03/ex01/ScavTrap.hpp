#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	ScavTrap();

public:
	ScavTrap( std::string name );
	~ScavTrap();

	ScavTrap(const ScavTrap &other);
	ScavTrap &operator=(const ScavTrap &other);

	void	attack(std::string const& target);
	void	guardGate();
};

#endif