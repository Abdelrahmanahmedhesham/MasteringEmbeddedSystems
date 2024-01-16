#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char a[100];
		int i;

		printf("enter a string: ");
			fflush(stdout);

		gets(a);

		for(i=0;;i++)
		{
			if(a[i]=='\0')
				break;
		}
		printf("length of string is = %d",i);

		return 0;


}
