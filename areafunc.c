#include<stdio.h>
float getArea(int rad){
	return((3.14*rad*rad)/1000000);
}
int main(){
	int r;
	double area;
	printf("input the radius in metres:\n");scanf("%d",&r);
	area = getArea(r);
	printf("AREA: %f KM2",area);
	return 0;
}
