#include<stdio.h>
int main()
{
	int len,wid,area,per;
	printf("input the length:");scanf("%d",&len);
	printf("input the width:");scanf("%d",&wid);
	area=len*wid;
	per=2*(len+wid);
	printf("the area is: %d", area);
	printf("\nthe perimeter is: %d",per);
	return 0;
}
