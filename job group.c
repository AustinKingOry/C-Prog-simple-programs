#include<stdio.h>
int main()
{
	int sal;
	char jg;
	double tax;
	printf("input job group:\n");scanf("%c",&jg);
	printf("input salary:\n");scanf("%d",&sal);
	jg=='j'||'J'?(tax=sal*0.03):(tax=sal*0.05);
	printf("salary:%d\n",sal);
	printf("Tax:%.2f",tax);
	return 0;
}

