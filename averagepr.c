/*a program to calculate the  total and average of two subjects*/
#include<stdio.h>
int main()
{
	int mat,eng,total;
	float average;
	printf("enter the marks the maths:");scanf("%d",&mat);
	printf("enter the marks for english:");scanf("%d",&eng);
	total=mat+eng;
	average=total/2;
	printf("the total marks is:%d",total);
	printf("\nthe average of the two is:%.0f",average);
	return 0;
}
