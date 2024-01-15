#include "stdio.h"

int main()
{

	int x;
	printf("Enter an integer : ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&x);
	printf("You entered : %d",x);
	return 0;
}