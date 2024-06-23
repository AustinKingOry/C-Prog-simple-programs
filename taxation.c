#include<stdio.h>
int main()
{
	char gender;
	int salary;
	float tax,netpay;
	printf("input gender");scanf("%c",&gender);
	printf("input the basic salary:");scanf("%d",&salary);
	if (gender == "m"){
		tax = salary * 0.18;
	}
	else{
		tax = salary * 0.16;
	}
	netpay = salary - tax;
	printf("the net pay is: %f\n", netpay);
	printf("the tax is: %f", tax);
	return 0;
}
