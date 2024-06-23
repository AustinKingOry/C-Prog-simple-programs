#include<stdio.h>
double rectArea(int a,int b){
	return ((a*b)-(0.25*3.14*b*b));
}
int main(){
	int x,y;
	double area;
	printf("input length x:");scanf("%d",&x);
	printf("input width y:");scanf("%d",&y);
	area = rectArea(x,y);
	printf("AREA: %.2f",area);
	return 0;
}
