#include <stdio.h>
int main()
{
	int number;
	number = 100;
	do
	{
		if(number % 2==0){
			printf("%d\n",number);
			number--;	
		}
		else{
			number--;
		}
	}while(number > 0);
	//end do
	return 0;
}
