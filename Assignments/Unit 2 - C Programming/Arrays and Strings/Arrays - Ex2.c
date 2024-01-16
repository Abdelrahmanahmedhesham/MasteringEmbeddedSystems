#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int i;
		int x;
		float z[1000];
		printf("enter number of data: ");
			fflush(stdout);


		scanf("%d",&x);
		for(i=0;i<x;i++)
		{
			printf("enter number: ");
				fflush(stdout);

			scanf("%f",&z[i]);
		}
		z[i+1]=0;
		int a;
		float average=0;
		for(a=0;a<x;a++)
		{
			average=average+z[a];
		}
		average=average/x;
		printf("your average is %.2f",average);

		return 0;
}
