//program to calculate the area of a trapezium
/*the program was created by limo and austin*/
#include<stdio.h>
int main()
{
	int a, b, height, first;
	double area;
	a = 15;
	b = 25;
	height = 10;
	first = a + b;
	area = 0.5 * first * height;
	printf("area: %f", area);
	return 0;
}
