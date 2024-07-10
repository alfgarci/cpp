#include "Animal.hpp"

Animal::Animal()
{
	_type = "Default";
	std::cout << "(Animal)" << this->_type << " has been created." << std::endl;
}

Animal::Animal( std::string type )
{
	_type = type;
	std::cout << "(Animal)" << this->_type << " has been created." << std::endl;
}

Animal::Animal( const Animal& other )
{
	*this = other;
	std::cout << "(Animal)" << this->_type << " has been copied (Constructor)." << std::endl;
}

Animal& Animal::operator=( const Animal& other )
{
	if ( this != &other )
	{
		this->_type = other._type;
		std::cout << "(Animal)" << this->_type << " has been copied (Overload)." << std::endl;
	}
	return *this;
}

Animal::~Animal( void )
{
	std::cout << "(Animal)" << this->_type << " has been destroyed." << std::endl;
}

void Animal::makeSound( void ) const
{
	std::cout << "(Animal)" << this->_type << " has made a sound" << std::endl;
}

std::string	Animal::getType( void ) const
{
	return (this->_type);
}