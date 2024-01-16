#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
	printf("enter your sentence: ");
	fflush(stdout);
	reverse();
	return 0;
}

int reverse()
{

	char c;
	fflush(stdout);
		scanf("%c",&c);

	if(c!='\n')
	{
		reverse();
		printf("%c",c);


	}


}