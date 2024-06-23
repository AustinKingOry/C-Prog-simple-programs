#include<stdio.h>
int main()
{
	int math,eng,total;
	double avg;
	printf("input maths:\n");scanf("%d",&math);
	printf("input english:\n");scanf("%d",&eng);
	total= math+eng;
	avg=total/2;
	avg>=40?printf("pass","average is: %d", avg,"total is: %d", total):printf("fail","average is: %d", avg, "total is: %d", total);
	return 0;
}
