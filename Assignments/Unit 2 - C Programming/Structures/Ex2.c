#include <stdio.h>
#include <string.h>


struct Sdistance
{
	int feet;
	float inch;
};


int main()
{
	struct Sdistance one;
	struct Sdistance two;
	struct Sdistance sum;
	printf("enter 1st distance feet: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&one.feet);
	printf("enter 1st distance inch: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&one.inch);
	printf("enter 2nd distance feet: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&two.feet);
	printf("enter 2nd distance inch: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&two.inch);
	sum.feet=one.feet+two.feet;
	sum.inch=one.inch+two.inch;
	if(sum.inch>12.0)
	{
		sum.feet++;
		sum.inch-=12.0;
	}
	printf("your distance is= %d' %.2f\"",sum.feet,sum.inch);
	return 0;
}
