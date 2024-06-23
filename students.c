#include<stdio.h>
int main()
{
	char grade,mean;
	int x,total,arraySize;
	double avg;
	int marks[0];
	char names[0];
	total=0;
	printf("input name:\n");scanf("%d",&names[0]);
	printf("innput marks:\n");scanf("%d",&marks[0]);
	printf("NAME MARK GRADE\n");
	arraySize = sizeof(marks)/sizeof(marks[0]);
	for(x=0;x<arraySize;x++){
		total+=marks[x];
		if(marks[x]>=80){
			grade='A';
		}
		else if(marks[x]>=70){
			grade='B';
		}
		else if(marks[x]>=60){
			grade='C';
		}
		else if(marks[x]>=50){
			grade='D';
		}
		else if(marks[x]>=0){
			grade='E';
		}
		else{
			printf("error!!!");
		}
		//end if
		printf("%s %d %c",names[x],marks[x],grade);
		printf("input name:\n");scanf("%d",&names[x]);
		printf("innput marks:\n");scanf("%d",&marks[x]);
		arraySize=sizeof(marks)/sizeof(marks[0]);
	}
	//endfor
	avg=total/arraySize;
	if(avg>=80){
			grade='A';
		}
		else if(avg>=70){
			grade='B';
		}
		else if(avg>=60){
			grade='C';
		}
		else if(avg>=50){
			grade='D';
		}
		else if(avg>=0){
			grade='E';
		}
		else{
			printf("error!!!");
		}
		//end if
		printf("Class Mean %c",mean);
		return 0;
}
