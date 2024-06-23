#include<stdio.h>
int main()
{
	int code,salary;
	float tax,netpay;
	printf("input code:\n");scanf("%d",&code);
	printf("input salary:\n");scanf("%d",&salary);
	code==1?(tax=salary*0.18):(tax=salary*0.16);
	netpay=salary-tax;
	printf("salary is:%d\n",salary);
	printf("netpay is:%.1f\n",netpay);
	printf("tax is:%.1f",tax);
	return 0;
}
