#include<stdio.h>
#include<math.h>
int main(){
	int num;
	printf("input a whole number:\n");scanf("%d",&num);
	if (num%2==0||num%3==0||num%5==0||num%7==0||sqrt((num)%2==0)){
		printf("%d is not a prime number",num);
   }
	else{
		printf("%d is a prime number",num);
   }
 return 0;
}
