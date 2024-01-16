#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
	int x;
	int y;
	printf("enter base number: \n");
	fflush(stdout);
	scanf("%d",&x);
	printf("enter power number: \n");
	fflush(stdout);
	scanf("%d",&y);
	printf("%d^%d= %d",x,y,pwrfn(x,y));
	return 0;
}

int pwrfn(int x,int y)
{
	if(y>1)
		return x*pwrfn(x,y-1);

}