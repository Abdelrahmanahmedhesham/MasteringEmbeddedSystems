#include <stdio.h>

int main()
{
	float x;
	float y;
	printf("Enter two numbers: ");
	fflush(stdout);fflush(stdin);
	scanf("%f %f",&x,&y);
	printf("Product: %f",x*y);
	return 0;
}