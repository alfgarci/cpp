#include "Point.hpp"

static Fixed crossProduct(const Point a, const Point b)
{
	return (a.getX() * b.getY() - a.getY() * b.getX());
}

bool bsp(const Point a, const Point b, const Point c, const Point point)
{
	// Calculate the vectors that form the sides of the triangle
	Point ab(b.getX() - a.getX(), b.getY() - a.getY());
	Point bc(c.getX() - b.getX(), c.getY() - b.getY());
	Point ca(a.getX() - c.getX(), a.getY() - c.getY());

	// Calculate the vectors from the vertices of the triangle to the point
	Point ap(point.getX() - a.getX(), point.getY() - a.getY());
	Point bp(point.getX() - b.getX(), point.getY() - b.getY());
	Point cp(point.getX() - c.getX(), point.getY() - c.getY());

	// Calculate the cross products between the sides and the vectors
	Fixed c1 = crossProduct(ab, ap);
	Fixed c2 = crossProduct(bc, bp);
	Fixed c3 = crossProduct(ca, cp);

	// If the cross products have the same sign, the point is inside the triangle
	return (c1 >= 0 && c2 >= 0 && c3 >= 0) || (c1 <= 0 && c2 <= 0 && c3 <= 0);
}