#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixedPointValue = 0;
}

Fixed::Fixed(const Fixed &n)
{
	std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(n.getRawBits());
}

Fixed& Fixed::operator=(const Fixed &n)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &n)
		this->_fixedPointValue = n.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPointValue;
}

void    Fixed::setRawBits(int const raw)
{
	this->_fixedPointValue = raw;
}