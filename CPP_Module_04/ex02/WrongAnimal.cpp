#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	_type = "Default";
	std::cout << "(WrongAnimal)" << this->_type << " has been created." << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
	_type = type;
	std::cout << "(WrongAnimal)" << this->_type << " has been created." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	*this = other;
	std::cout << "(WrongAnimal)" << this->_type << " has been copied (Constructor)." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	if ( this != &other )
	{
		this->_type = other._type;
		std::cout << "(WrongAnimal)" << this->_type << " has been copied (Overload)." << std::endl;
	}
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "(WrongAnimal)" << this->_type << " has been destroyed." << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "(WrongAnimal)" << this->_type << " has made a sound" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->_type);
}