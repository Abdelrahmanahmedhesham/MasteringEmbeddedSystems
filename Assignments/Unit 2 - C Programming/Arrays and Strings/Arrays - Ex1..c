#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	float a[2][2];
	float b[2][2];
	float c[2][2];
	int i;
	int j;

	printf("Enter the elements of the 1st matrix\n");

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++)

		{
			printf("\n");
			printf("Enter a%d%d: ", i, j);
			fflush(stdout);


			scanf("%f", &a[i][j]);
		}
	}

	printf("\n");

	printf("Enter the elements of the 2nd matrix\n");

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("\n");
			printf("Enter b%d%d: ", i, j);
			fflush(stdout);

			scanf("%f", &b[i][j]);
		}

	}
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			c[i][j] = a[i][j] + b[i][j];
		}

	}
	printf("\n");
	printf("sum of matrices=\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {

			printf("%.2f\t", c[i][j]);

		}
		printf("\n");


	}

	return 0;
}