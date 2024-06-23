#include<stdio.h>
struct marks{
	int m,e,total;
	double avg;
};
int main(){
	struct marks k;
	printf("input marks for maths:\n");scanf("%d",&k.m);
	printf("input marks for english:\n");scanf("%d",&k.e);
	k.total = k.m + k.e;
	k.avg = k.total/2;
	printf("Total: %d\n",k.total);
	printf("Average: %.2f\n",k.avg);
	return 0;
}
