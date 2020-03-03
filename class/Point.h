#pragma once
class Point
{
public:
	int x;
	int y;
	void print();
	Point(int a, int b); 
	Point();
	Point(const Point& a);
	double rast(const Point& a);
	Point& operator = (int a);
};

