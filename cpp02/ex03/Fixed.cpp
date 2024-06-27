#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_fixedPointValue = 0;
}

Fixed::Fixed(const Fixed &n)
{
	this->setRawBits(n.getRawBits());
}

Fixed::Fixed(const int n)
{
	this->_fixedPointValue = n << _fractionalBits;
}

Fixed::Fixed(const float n)
{
	this->_fixedPointValue = round(n * ( 1 << _fractionalBits));
}

Fixed& Fixed::operator=(const Fixed &n)
{
	if (this != &n)
		this->_fixedPointValue = n.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
}

int	Fixed::getRawBits(void) const
{
	return this->_fixedPointValue;
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedPointValue = raw;
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->getRawBits()) / (1 << _fractionalBits));
}

int		Fixed::toInt(void) const
{
	return (this->_fixedPointValue >> _fractionalBits);
}

bool	Fixed::operator>(const Fixed &n) const
{
	return this->getRawBits() > n.getRawBits();
}

bool	Fixed::operator<(const Fixed &n) const
{
	return this->getRawBits() < n.getRawBits();
}

bool	Fixed::operator>=(const Fixed &n) const
{
	return this->getRawBits() >= n.getRawBits();
}

bool	Fixed::operator<=(const Fixed &n) const
{
	return this->getRawBits() <= n.getRawBits();
}

bool	Fixed::operator==(const Fixed &n) const
{
	return this->getRawBits() == n.getRawBits();
}

bool	Fixed::operator!=(const Fixed &n) const
{
	return this->getRawBits() != n.getRawBits();
}


std::ostream& operator<<(std::ostream& os, Fixed const &i)
{
	os << i.toFloat();
	return (os);
}

Fixed	Fixed::operator+(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &rhs) const
{
	return Fixed((this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/( const Fixed &rhs ) const
{
	return Fixed((this->toFloat() / rhs.toFloat()));
}

Fixed&	Fixed::operator++(void)
{
	++this->_fixedPointValue;
	return (*this);
}

Fixed&	Fixed::operator--(void)
{
	--this->_fixedPointValue;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;
	tmp._fixedPointValue = this->_fixedPointValue;
	this->_fixedPointValue++;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;
	tmp._fixedPointValue = this->_fixedPointValue;
	this->_fixedPointValue--;
	return (tmp);
}

Fixed&	Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

const	Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	if ( a.getRawBits() < b.getRawBits() )
		return (a);
	return (b);
}

Fixed&	Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

const	Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}