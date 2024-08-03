#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog")
{
	this->_brain = new Brain();
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
		this->_brain = new Brain( *other._brain );
		std::cout << "Dog has been copied (Overload)." << std::endl;
	}
	return *this;
}

Dog::~Dog()
{
	delete  this->_brain;
    std::cout << "Dog has been destroyed." << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << "Guauu Guauu!!!" << std::endl;
}