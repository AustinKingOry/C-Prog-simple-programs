/*program to calculate the volume and surface area of a cylinder*/
#include<stdio.h>
int main()
{
	int r, d, h;
	double pi,area, volume;
	r = 21;
	d = r * 2;
	h = 18;
	pi = 3.14;
	area = 2*(pi *(r * r) + (pi * d * h));
	volume = (pi * r * r) * h;
	printf("surface area is: %.2f \nthe volume is: %.2f", area,volume);
	return 0;
}
