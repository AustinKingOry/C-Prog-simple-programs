#include<stdio.h>
int main()
{
	int length, width, area, perimeter;
	length = 25;
	width = 10;
	area = length * width;
	perimeter = 2 * (length + width);
	printf("area: %d", area);
	printf("perimeter: %d", perimeter);
	return 0;
}
