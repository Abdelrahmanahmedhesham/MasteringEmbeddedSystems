#include "stdio.h"

int main()
{

		float x,y,z;
		printf("Enter Three numbers: ");
		fflush(stdin);fflush(stdout);
		scanf("%f %f %f",&x, &y, &z);
		if(x>y)
		{
			if(x>z)
			{
				printf("largest number= %f",x);
			}
		}
		else if (y>x)
		{
			if(y>z)
			{
				printf("largest number= %f",y);
			}
			else
				printf("largest number= %f",z);
		}
	
		return 0;

}