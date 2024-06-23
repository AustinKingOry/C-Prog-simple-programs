#include<stdio.h>
int getLargest(int a,int b,int c){
	if(a>b && a>c){
	return(a);
	}
	else if(b>a && b>c){
		printf("%d is the largest",b);
	}
	else if(c>a && c>b){
		printf("%d is the largest",c);
	}
	else{
		printf("ERROR!!!");
	}
}
int main(){
	int x,y,z;
	printf("Input first integer:\n");scanf("%d",&x);
	printf("Input second integer:\n");scanf("%d",&y);
	printf("Input third integer:\n");scanf("%d",&z);
	getLargest(x,y,z);
	return 0;
}
