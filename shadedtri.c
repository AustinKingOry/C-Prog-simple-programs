/*program to calculate area of a shaded triangle with a circle*/
#include<stdio.h>
int main()
{
	int b,h;
	float r, pi, tri,circle,shaded;
	h=14;
	b=24;
	r=2.5;
	pi=3.14;
	tri=0.5*b*h;
	circle=pi*r*r;
	shaded=tri-circle;
	printf("\narea of the shaded part: %.2f \narea of triangle:%.1f", shaded,tri);
	return 0;
}

