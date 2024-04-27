#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
}

Point::Point(const Fixed x, const Fixed y) : _x(x), _y(y)
{
}

Point::Point(const Point &p) : _x(p._x), _y(p._y)
{
}

Point&	Point::operator=( Point &p)
{
	return (p);
}

Point::~Point()
{
}

Fixed Point::getX( void ) const
{
	return this->_x;
}

Fixed Point::getY( void ) const
{
	return this->_y;
}