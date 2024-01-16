#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	float a[100][100];
		float b[100][100];
		int i;
		int j;
		int x;
		int y;

		printf("enter number of rows and number of columns perspectively\n");
			fflush(stdout);

		scanf("%d%d",&x,&y);
		printf("\nEnter elements of matrix:\n");

		for(i=0;i<x;i++)
		{
			for(j=0;j<y;j++)
			{
				printf("enter element a%d%d: \n",i+1,j+1);
					fflush(stdout);

				scanf("%f",&a[i][j]);
			}
		}

		printf("your entered matrix is:\n");

		for(i=0;i<x;i++)
			{
				for(j=0;j<y;j++)
				{
					printf("%.2f\t",a[i][j]);
					b[j][i]=a[i][j];

				}
				printf("\n");
			}
		printf("your transpose matrix is: \n");
		for(i=0;i<y;i++)
				{
					for(j=0;j<x;j++)
					{
						printf("%.2f\t",b[i][j]);
					}
					printf("\n");
				}
		return 0;
}
