#include "Point.h"
#include <stdio.h>
#include <math.h>

void Point::print()
{
		printf("%d %d", x, y)
}

Point::Point(int a, int b):x(a), y(b)
{
	
	
}

Point::Point()
{
}

Point::Point(const Point& a)
{
	x = a.x;
	y = a.y;
	printf("copy constructor\n");
}

double Point::rast(const Point& a)
{
	double d;
	d = sqrt(fabs(a.x - x) * fabs(a.x - x) + fabs(a.y - y) * fabs(a.y - y));
	return d;
}


Point& Point::operator=(int a)
{
	x = a;
	y = a;
	return *this;
}
