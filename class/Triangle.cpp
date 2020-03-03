#include "Triangle.h"
#include <math.h>

double Triangle::square()
{
	int x1 = p1.x;
	int x2 = p2.x;
	int x3 = p3.x;
	int y1 = p1.y;
	int y2 = p2.y;
	int y3 = p3.y;
	double s = fabs(1 / 2 * ((x1 - x3) * (y2 - y3) - (x2 - x3) * (y1 - y3));
	return s;
}

Triangle::Triangle(Point a, Point b, Point c)
{
	p1 = a;
	p2 = b;
	p3 = c;
	if (!square())
	{
		p1 = p2 = p3 = 0;
		throw(0);
	}
}

double Triangle::perimeter()
{
	double k = (p1.rast(p2) + p1.rast(p3) + p2.rast(p3));
	return k;
}
