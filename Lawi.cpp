#include<stdio.h>
int main()
{
int w,h;
double bmi;
printf("input weight");scanf("%d",&w);
printf("input height");scanf("%d",&h);
bmi=w/h*h;
printf("Body mass index %f",bmi);
return 0;
}
