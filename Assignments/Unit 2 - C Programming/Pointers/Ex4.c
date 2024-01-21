#include <stdio.h>
#include <string.h>
int main()
{
	int arr[15];
	int i, *ptr=arr;
	int size;
	printf("enter number of elements to be inserted {max 15): ");
	fflush(stdout);
	scanf("%d",&size);
	printf("\nenter elements of array: \n");
	for(i=0;i<size;i++)
	{
		printf("\nelement number %d: ", i+1);
		fflush(stdout);
		scanf("%d",ptr);
		ptr++;
	}
	ptr=&arr[size-1];
	for(i=size-1;i>=0;i--)
	{
		printf("\n\nelement number %d:  %d", i+1, *ptr);
		ptr--;
	}
	return 0;
}