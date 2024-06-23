#include<stdio.h>
int main()
{
	int we;
	float he,bmi,hm;
	printf("enter the weight in kgs"); scanf("%d",&we);
	printf("enter the height in feet"); scanf("%f",&he);
	/*1foot is equal to .3048m*/
	hm=he*0.3048;
	bmi=we/(hm*hm);
   	printf("your BMI is: %.2f", bmi);
	return 0;
}
