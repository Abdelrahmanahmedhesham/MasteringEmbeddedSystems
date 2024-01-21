#include <stdio.h>
#include <string.h>


int main()
{
	char alpha[26];
	int i;
	char *ptr;
	ptr=alpha;
	for(i=0;i<26;i++)
	{
		*ptr=i+'A';
		ptr++;
	}
	ptr=alpha;
	for(i=0;i<26;i++)
	{
		printf("%c    ",*ptr);
		ptr++;
	}
	return 0;
}
