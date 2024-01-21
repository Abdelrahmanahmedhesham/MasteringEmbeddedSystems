#include <stdio.h>
#include <string.h>


int main()
{
	printf("enter string to be reversed: ");
	fflush(stdout);
	char str[100];
	gets(str);
	int i;
	int x =strlen(str);
	char *ptr=str+x-1;
	for(i=x;i>=0;i--)
	{
		printf("%c",*ptr);
		ptr--;
	}

	return 0;
}
