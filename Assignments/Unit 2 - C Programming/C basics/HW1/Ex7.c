#include <stdio.h>

int main() {

		float x;
		float y;
		printf("enter value of a: ");
		fflush(stdout);fflush(stdin);
		scanf("%f",&x);
		printf("enter value of b: ");
		fflush(stdout);fflush(stdin);
		scanf("%f",&y);
		x=x+y;
		y=x-y;
		x=x-y;
		printf("After swapping, value of a = %f \nAfter swapping, value of b = %f",x,y);


	return 0;
}
