#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char a[100];
	int i;
	printf("enter string: ");
		fflush(stdout);

	scanf("%s",&a);
	printf("your reverse string is: ");
	for(i=strlen(a);i>0;i--)
	{
		printf("%c",a[i-1]);
	}
	 return 0;
}
