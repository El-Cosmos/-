#include <iostream>
#include "Point.h"
#include "Triangle.h"
using namespace std;

int main()
{
	int x;
	Point p1(0,0);
	Point p2(0,2);
	Point p3(3,0);
	try
	{
		Triangle t1(p1, p2, p3);
		double d = t1.square();
		printf("\nsquare=%lf\n", d);
		double k = t1.perimeter();
		printf("\nperimeter=%4.2f\n", k);
	}
	catch (int a)
	{
		if (!a)printf("triangle is the line\n");
	}
	return 0;
	/*P.x = 0;
	P.y = 0;
	P.print();
	P1.x = 1;
	P1.y = 2;
	P1.print();*/
	/*double k = P1.rast(P2);
	printf("%lf", k);
	return 0;*/
}
