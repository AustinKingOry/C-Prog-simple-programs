#include<stdio.h>
int main()
{
	int normalHours,totalHours,normalPay,overtime,overpay;
	printf("input the number of hours worked:\n");scanf("%d",&totalHours);
	normalHours = 40;
	if(totalHours > normalHours){
		overtime = totalHours-normalHours;
		normalPay = normalHours*250;
		overpay = overtime * 500;
		int totalPay = normalPay + overpay;
	}
	else{
		overtime = 0;
		overpay = 0;
		normalPay = totalHours*250;
		int totalPay = normalPay + overpay;
	}
	//end if
	printf("the normal pay is\n %d",normalPay);
	printf("the overtime worked is %d",overtime,"with an overtime pay is %d",overpay);
	return 0;
}
