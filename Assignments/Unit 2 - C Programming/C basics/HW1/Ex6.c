#include <stdio.h>
void main()
{

	float x;
	float y;
	float z;
	printf("enter value of a: ");
	fflush(stdout);fflush(stdin);
	scanf("%f",&x);
	printf("enter value of b: ");
	fflush(stdout);fflush(stdin);
	scanf("%f",&y);
	z=x;
	x=y;
	y=z;
	printf("After swapping, value of a = %f \nAfter swapping, value of b = %f",x,z);
}