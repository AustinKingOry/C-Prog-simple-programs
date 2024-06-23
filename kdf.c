#include<stdio.h>
int main()
{
	int we,age;
	double he;
	char ps[100];
	char ge;
	printf("input gender:");scanf("%c",&ge);
	printf("input height:");scanf("%f",&he);
	printf("input age:");scanf("%d",&age);
	printf("input weight:");scanf("%d",&we);
	
	if (he>=1.5 && we>=55 && we<=100 && age>=18 && age<=26){
		if(ge =='f'||ge=='F'){
			printf("input pregnancy status:");scanf("%s",&ps);
			//printf("input pregnancy status:");gets(ps);
			if (ps=="pregnant "){
				printf("not qualified due to pregnancy");
			}
			else if(ps=="not pregnant"){
				printf("qualified");
			}
			else{
				printf("invalid pregnancy status");
			}
			//end if
		}
		else if(ge=='m'||'M'){
			printf("Qualified");
		}
		//to handle invalid inputs
		else{
			printf("invalid input");
		}
		//end the if
	}
	else{
		printf("expectations not met. Disqualified!!!");
	}
	//end if
	return 0;
}
