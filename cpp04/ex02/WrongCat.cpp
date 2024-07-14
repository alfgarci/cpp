#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("Cat")
{
    std::cout << "WrongCat has been created." << std::endl;
}

WrongCat::WrongCat(const WrongCat& other)
{
	*this = other;
	std::cout << "WrongCat has been copied (Constructor)." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	if ( this != &other )
	{
		this->_type = other._type;
		std::cout << "WrongCat has been copied (Overload)." << std::endl;
	}
	return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat has been destroyed." << std::endl;
}

void    WrongCat::makeSound() const
{
    std::cout << "Meeeaaaawwwww!!!" << std::endl;
}