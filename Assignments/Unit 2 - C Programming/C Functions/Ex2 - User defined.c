#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int n;
int main()
{

	printf("Enter number for factorial: ");
	fflush(stdout);
	scanf("%d",&n);
	printf("your factorial of %d is: %ld",n ,factorial(n) );

	return 0;
}

int factorial(int n)
{
	int f=1;

	for(;n>0;n--)
	{
		f*=n;
	}
	return f;

}