#include "Point.hpp"

int main( void )
{
	Point	a(0, 0);
	Point	b(4, 0);
	Point	c(2, 4);

	Point	pointInside(2, 2);
	Point	pointEdge(2, 0); //inside
	Point	pointOutside(6, 0);

	if (bsp(a, b, c, pointOutside))
		std::cout << "The point is inside the triangle." << std::endl;
	else
		std::cout << "The point is outside the triangle." << std::endl;

	return(0);
}