#include<stdio.h>
int main()
{
	int price,qty,tprice;
	float tax,cost;
	printf("enter the price:");scanf("%d",&price);
	printf("enter the quantity of the item:");scanf("%d",&qty);
	tprice=price*qty;
	tax=0.16*tprice;
	cost=tprice+tax;
	printf("the total cost is: %.2f", cost);
	printf("\nthe total tax is: %.2f", tax);
}
