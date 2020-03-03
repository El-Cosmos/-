#pragma once
#include "Point.h"
class Triangle
{
private: Point p1;
		 Point p2;
		 Point p3;
public:
	double square();
	Triangle(Point a, Point b, Point c); 
	double perimeter();

};

