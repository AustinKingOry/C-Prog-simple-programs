#include<stdio.h>
int main()
{
	int x,y;
	printf("input first number:\n");scanf("%d",&x);
	printf("input second number:\n");scanf("%d",&y);
	x>y?printf("%d",x,"is greater than Y"):printf("%d",y,"is greater than X");
	return 0;
}
