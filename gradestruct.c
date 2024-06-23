#include<stdio.h>
struct marks{
	int m,e,total;
	double avg;
};
int main(){
	struct marks marks1;
	printf("input marks for maths:\n");scanf("%d",&marks1.m);
	printf("input marks for english:\n");scanf("%d",&marks1.e);
	marks1.total = marks1.m + marks1.e;
	marks1.avg = marks1.total/2;
	printf("Total: %d\n",marks1.total);
	printf("Average: %.2f\n",marks1.avg);
	//determine the grade
	if(marks1.avg>=80 && marks1.avg<=100){
		printf("Grade: A\n");
	}
	else if(marks1.avg>=70 && marks1.avg<=79){
		printf("Grade: B\n");
	}
	else if(marks1.avg>=60 && marks1.avg<=69){
		printf("Grade: C\n");
	}
	else if(marks1.avg<60){
		printf("Grade: D\n");
	}
	else{
		printf("Error!!: Could Not Determine Grade!\n");
	}
	//end if 
	return 0;
}
