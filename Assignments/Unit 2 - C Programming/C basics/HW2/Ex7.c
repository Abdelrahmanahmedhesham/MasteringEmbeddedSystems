#include "stdio.h"

int main()
{

		int x;
		int i;
		int product=1;
		printf("Enter a number:");
		fflush(stdin);fflush(stdout);
		scanf("%d",&x);
		if(x>0)
		{
			for(i=1;i<=x;i++)
			{
				product*=i;
			}
			printf("factorial of %d = %d",x,product);
		}else if(x<0)
			printf("Error!!! Factorial of negative number doesn't exist.");
		if (x==0)
			printf("factorial of zero is 1");
	return 0;
}