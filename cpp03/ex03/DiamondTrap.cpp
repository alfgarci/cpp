#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;

	std::cout << "DiamondTrap" << this->_name << " has been created." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), FragTrap(other), ScavTrap(other)
{
	*this = other;
	std::cout << "DiamondTrap " << _name << " has been copied (Constructor)." << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &other)
{
	if (this != &other)
	{
		this->ClapTrap::_name = other.ClapTrap::_name;
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap" << this->_name <<  << std::endl;
}

void	DiamondTrap::whoAmI( void ) {
	std::cout << "I am a DiamondTrap named " << this->_name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}