/*calcuting the final velocity*/
#include<stdio.h>
int main()
{
	int acc, t,u,v;
	printf("enter the initial velocity:");scanf("%d",&u);
	printf("enter the time:");scanf("%d",&t);
	printf("enter the acceleration:");scanf("%d",&acc);
	v=u+acc*t;
	printf("The final velocity is:%d m/s",v);
	return 0;
}
