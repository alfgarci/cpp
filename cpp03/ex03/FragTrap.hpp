#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
	FragTrap();

public:
	FragTrap(std::string name);
	~FragTrap();

	FragTrap( const FragTrap &other );
	FragTrap &operator=( const FragTrap &other );

	void	attack( std::string const& target );
	void	highFive( void );
};

#endif