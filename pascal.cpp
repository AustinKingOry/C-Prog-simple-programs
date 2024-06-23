//program shaded part
#include<stdio.h>
int main()
{
	int len,wid,rectarea;
	float pi,r,circlearea,shaded;
	len=67;
	wid=52;
	pi=3.14;
	r=2.8;
	rectarea=len*wid;
	circlearea=pi*r*r;
	shaded=rectarea-circlearea;
	printf("shaded%f",shaded);
	return 0; p-'[ '
} 
