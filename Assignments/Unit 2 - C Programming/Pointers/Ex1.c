#include <stdio.h>
#include <string.h>


int main()
{
	int m=29;
	int *ab=&m;
	printf("address of m: %p\n",&m);
	printf("value of m: %d\n\n",m);
	printf("address of pointer ab: %p\n",ab);
	printf("content of pointer ab: %d\n\n",*ab);
	m=34;
	printf("address of pointer ab: %p\n",ab);
	printf("content of pointer ab: %d\n\n",*ab);
	*ab=7;
	printf("address of m: %p\n",ab);
	printf("value of m: %d\n\n",*ab);
	return 0;
}
