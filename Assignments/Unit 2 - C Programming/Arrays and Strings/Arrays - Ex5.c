#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int a[100];
		int x;
		int i;
		int element;

		printf("enter number of elements: \n");
			fflush(stdout);

		scanf("%d",&x);
		for(i=0;i<x;i++)
		{
			scanf("%d",&a[i]);

		}
		printf("enter element to be searched: \n");
			fflush(stdout);

		scanf("%d",&element);
		for(i=0;i<x;i++)
		{
			if(a[i]==element)
			{
				printf("location of number %d is = %d",element,i+1);
				break;
			}

		}
			if(i==x)
				printf("Sorry! we couldn't find your number in the array of elements.");

		return 0;

}
