#include<stdio.h>
int getSum(int x,int y){
	   return(x+y);
}
int main(){
	int a,b,total;
	a=20;
	b=30;
	total= getSum(a,b);
	printf("Total:%d",total);
	return 0;
}
