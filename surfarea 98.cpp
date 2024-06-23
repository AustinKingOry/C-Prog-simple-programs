#include<stdio.h>
int main()
{
	int r,h;
	double pi, areacir,areacyl,surfarea;
	r=14;
	pi=3.14;
	h=18;
	areacir=pi*r*r;
	areacyl=pi*r*r*h;
	surfarea=2*(pi*(r*r))+(pi*r+r*h);
	printf ("surface area is:%.2f",surfarea);
	return 0;
}
