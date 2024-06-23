#include<stdio.h>
#include<stdio.h>
double cirArea(int a,int b){
	return ((3.14*b*b)-(3.14*a*a));
}
int main(){
	int r1,r2;
	double area;
	printf("input smaller radius r1:");scanf("%d",&r1);
	printf("input bigger radius r2:");scanf("%d",&r2);
	area = cirArea(r1,r2);
	printf("AREA: %.2f",area);
	return 0;
}
