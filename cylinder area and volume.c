/*program to calculate area&volume of a cylinder*/
#include<stdio.h>
int main()
{
	int r,d, h, rsquared;
	double pi, area, volume;
	r = 21;
	d = r*2;
	h = 18;
	pi = 3.14;
	rsquared = r * r;
	area = 2*(pi*rsquared)+(pi*d*h);
	volume = (pi * rsquared) * h;
	printf("area: %f", area);
	printf("volume: %f", volume);
	return 0;
}

