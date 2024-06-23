#include<stdio.h>
int main()
{
	int a,b,h;
	float pi,r,circle,trap,shaded;
	a = 18;
	b = 25;
	h=15;
	pi=3.14;
	r=4.5;
	circle=pi*(r*r);
	trap=0.5*(a+b)*h;
	shaded=trap-circle;
	printf("The area of the trapezium is: %.2f",trap);
	printf("\nThe area of the inner cirlce is: %.3f",circle);
	printf("\nThe shaded area is: %.2f", shaded);
	return 0;
}
