#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog has been created." << std::endl;
}

Dog::Dog(const Dog& other)
{
	*this = other;
	std::cout << "Dog has been copied (Constructor)." << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	if ( this != &other )
	{
		this->_type = other._type;
		std::cout << "Dog has been copied (Overload)." << std::endl;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog has been destroyed." << std::endl;
}

void    Dog::makeSound() const
{
	std::cout << "Guauu Guauu!!!" << std::endl;
}