#include "stdio.h"

int main()
{

	int x;
	printf("enter an integer you want to check: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	if(x%2==0)
	{
		printf("%d is even.", x);
	}
	else
		printf("%d is odd.", x);
	return 0;
}