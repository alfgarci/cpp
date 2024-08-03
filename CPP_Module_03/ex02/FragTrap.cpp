#include "FragTrap.hpp"

FragTrap::FragTrap()
{
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout << "FragTrap" << this->_name << " has been created." << std::endl;
}

FragTrap::FragTrap(const FragTrap &other)
{
	*this = other;
	std::cout << "FragTrap " << _name << " has been copied (Constructor)." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
		std::cout << "FragTrap " << _name << " has been copied (Overload)." << std::endl;
	}
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap" << this->_name << " has been destroyed." << std::endl;
}

void	FragTrap::attack( std::string const& target ) {
	if ( this->_energyPoints <= 0 )
		std::cout << "FragTrap " << this->_name << " has no energy to attack :(" << std::endl;
	else
	{
	std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints -= 1;
	}
}

void	FragTrap::highFive( void )
{
	std::cout << "FragTrap " << this->_name << " requests a high five! :)" << std::endl;
}