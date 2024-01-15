#include "stdio.h"

int main()
{

		int x;
		int sum=0;
		int i;
		printf("enter a number:");
		fflush(stdin);fflush(stdout);
		scanf("%d",&x);
		for(i=0;i<=x;i++)
		{
			sum+=i;
		}
		printf("sum = %d",sum);
	return 0;
