#include <stdio.h>
#include <string.h>
#define pi 3.14
#define area(r) (pi*(r)*(r))


int main()
{
	float r;
	printf("Enter radius: ");
	fflush(stdout);
	scanf("%f",&r);
	printf("area=%.2f",area(r));

	return 0;
}
