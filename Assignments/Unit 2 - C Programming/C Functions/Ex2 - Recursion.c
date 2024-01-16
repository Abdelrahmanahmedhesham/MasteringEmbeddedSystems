#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	unsigned int n;
	printf("Enter number for factorial: ");
	fflush(stdout);
	scanf("%d",&n);
	printf("your factorial of %d is: %ld",n ,factorial(n) );

	return 0;
}

int factorial(int n)
{
	if(n==1)
		return 1;
	else
		return n*factorial(n-1);

}
