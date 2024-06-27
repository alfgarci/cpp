#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					_fixedPointValue;
		static const int	_fractionalBits = 8;
	
	public:
		Fixed();
		Fixed(const Fixed &n);
		Fixed(const int n);
		Fixed(const float n);
		Fixed &operator=(const Fixed &n);
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		bool	operator>(const Fixed &n) const;
		bool	operator<(const Fixed &n) const;
		bool	operator>=(const Fixed &n) const;
		bool	operator<=(const Fixed &n) const;
		bool	operator==(const Fixed &n) const;
		bool	operator!=(const Fixed &n) const;

		Fixed	operator+(const Fixed &n) const;
		Fixed	operator-(const Fixed &n) const;
		Fixed	operator*(const Fixed &n) const;
		Fixed	operator/(const Fixed &n) const;
		Fixed&	operator++(void);
		Fixed	operator++(int);
		Fixed&	operator--(void);
		Fixed	operator--(int);

		static Fixed& min(Fixed &a, Fixed &b);
		static const Fixed& min(const Fixed &a, const Fixed &b);
		static Fixed& max(Fixed &a, Fixed &b);
		static const Fixed& max(const Fixed &a, const Fixed &b);
};

std::ostream& operator<<(std::ostream& o, Fixed const &i);

#endif