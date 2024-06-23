#include<stdio.h>
int main()
{
	int he;
	float pi,r,vol,area;
	pi=3.14;
	printf("enter the height:");scanf("%d",&he);
	printf("\nenter the radius:");scanf("%d",&r);
	vol=pi*(r*r)*he;
	area=(pi*(r*r))+(pi*(r*2)*he);
	printf("the volume is: %f",vol);
	printf("the surface area is: %f",area);
	return 0;
}
