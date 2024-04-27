#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " has been created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &new)
{
	
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << "has been destroyed." << std::endl;
}