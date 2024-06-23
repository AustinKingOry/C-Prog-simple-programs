/*a program to calculate the surface area and volume of a semi-cylinder*/
#include<stdio.h>
int main()
{
	int len,wid,he,rad,d;
	float pi,vol, s_area;
	len=32;
	wid=18;
	he=32;
	rad=9;
	d=18;
	pi=3.14;
	vol=0.5(pi*(rad*rad)*he);
	s_area=(pi*r*r)+(0.5(pi*d*h))+(len*wid);
	printf("the volume is: %f",vol);
	printf("the surface area: %f",s_area);
	return 0;
}
