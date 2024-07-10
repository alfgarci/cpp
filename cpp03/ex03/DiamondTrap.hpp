#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string _name;

public:
	DiamondTrap( std::string name );
	~DiamondTrap();

	DiamondTrap( const DiamondTrap &other );
	DiamondTrap &operator=( const DiamondTrap &other );

	using	ScavTrap::attack;
	void	whoAmI( void );
};

#endif