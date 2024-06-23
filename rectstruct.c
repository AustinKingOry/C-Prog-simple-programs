#include<stdio.h>
struct rectangle{
	int l,w,per,area;
};
int main(){
	struct rectangle rect1;
//	rect1.l = 25;
//	rect1.w = 10;
	printf("input length:\n");scanf("%d",&rect1.l);
	printf("input width:\n");scanf("%d",&rect1.w);
	rect1.area = rect1.l*rect1.w;
	rect1.per = 2*(rect1.l * rect1.w);
	printf("Area:%d\n",rect1.area);
	printf("Perimeter:%d",rect1.per);
	return 0;
}
