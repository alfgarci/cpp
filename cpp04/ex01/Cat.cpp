#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	this->_brain = new Brain();
    std::cout << "Cat has been created." << std::endl;
}

Cat::Cat(const Cat& other)
{
	*this = other;
	std::cout << "Cat has been copied (Constructor)." << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	if ( this != &other )
	{
		this->_type = other._type;
		this->_brain = new Brain( *other._brain );
		std::cout << "Cat has been copied (Overload)." << std::endl;
	}
	return *this;
}

Cat::~Cat()
{
	delete  this->_brain;
    std::cout << "Cat has been destroyed." << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "Meeeaaaawwwww!!!" << std::endl;
}