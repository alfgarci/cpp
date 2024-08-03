#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	_type = "Default";
	std::cout << "(AAnimal)" << this->_type << " has been created." << std::endl;
}

AAnimal::AAnimal(std::string type)
{
	_type = type;
	std::cout << "(AAnimal)" << this->_type << " has been created." << std::endl;
}

AAnimal::AAnimal(const AAnimal& other)
{
	*this = other;
	std::cout << "(AAnimal)" << this->_type << " has been copied (Constructor)." << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
	if ( this != &other )
	{
		this->_type = other._type;
		std::cout << "(AAnimal)" << this->_type << " has been copied (Overload)." << std::endl;
	}
	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << "(AAnimal)" << this->_type << " has been destroyed." << std::endl;
}

/*
void AAnimal::makeSound() const
{
	std::cout << "(AAnimal)" << this->_type << " has made a sound" << std::endl;
}
*/

std::string	AAnimal::getType() const
{
	return (this->_type);
}