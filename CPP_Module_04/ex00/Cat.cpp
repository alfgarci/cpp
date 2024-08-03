#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
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
		std::cout << "Cat has been copied (Overload)." << std::endl;
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat has been destroyed." << std::endl;
}

void    Cat::makeSound() const
{
	std::cout << "Meeeaaaawwwww!!!" << std::endl;
}