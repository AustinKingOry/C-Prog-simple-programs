#include<stdio.h>
int main()

	int we;
	float he,bmi;
	printf("enter the weight in kgs");scanf("%d",&we);
	printf("enter the height in feet");scanf("%f",&he);
	bmi=we/(he*he);
	printf("your BMI is: %f", bmi);
	return 0;
}
