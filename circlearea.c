/*program to calculate the area of a circle*/
#include<stdio.h>
int main()
{
	double pi, area;
	/*rsqrd means radius squared*/
	int r, rsqrd;
	r = 12;
	pi = 3.14;
	rsqrd = r * r;
	area = pi * rsqrd;
	printf("area: %f", area);
	return 0;
}
