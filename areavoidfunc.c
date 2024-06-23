#include<stdio.h>
void getArea(){
	int rad;
	double area;
	printf("input the radius in metres:\n");scanf("%d",&rad);
	area = (3.14*rad*rad)/1000000;
	printf("AREA:%f",area);
}
int main(){
	getArea();
	return 0;
}
