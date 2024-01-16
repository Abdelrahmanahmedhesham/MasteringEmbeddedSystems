#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int a[100];
	int x;
	int i;
	int element;
	int loc;

	printf("enter number of elements: \n");
		fflush(stdout);

	scanf("%d",&x);
	for(i=0;i<x;i++)
	{
		scanf("%d",&a[i]);

	}
	printf("enter element to be inserted: \n");
		fflush(stdout);

	scanf("%d",&element);
	printf("enter location: \n");
		fflush(stdout);

	scanf("%d",&loc);
	for(i=x;i>=loc;i--)
	{
		a[i]=a[i-1];

	}
	a[loc-1]=element;
	for(i=0;i<=x;i++)
		{
			printf("%d  ",a[i]);
		}
	return 0;
}
