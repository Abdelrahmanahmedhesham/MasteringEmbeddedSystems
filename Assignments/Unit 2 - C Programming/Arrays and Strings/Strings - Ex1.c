#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
		char a[100];
		char character;
		int i;
		int x=0;
		printf("enter a string: \n");
			fflush(stdout);

		gets(a);
		printf("enter a character: \n");
			fflush(stdout);

		scanf("%c",&character);

		for(i=0;i<= strlen(a);i++)
		{
			if(a[i]==character)
				x++;
		}

		printf("frequency of character entered is = %d",x);

		return 0;

}
