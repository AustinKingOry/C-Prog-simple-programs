#include<stdio.h>
int main(){
	int x,total;
	float avg;
	int num[5];
	total= 0;
	for(x=0;x<5;x++){
		printf("Input a number:\n");scanf("%d",&num[x]);
		total+=num[x];
	}
	avg=total/5;
	printf("Total:%d\n",total);
	printf("Average:%f",avg);
	return 0;
}
