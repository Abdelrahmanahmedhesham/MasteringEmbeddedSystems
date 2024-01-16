#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int primenumber(int num);
int main()
{
	int i, n1, n2, flag;
	printf("please enter 2 numbers (intervals): ");
	fflush(stdout);

	scanf("%d%d",&n1, &n2);
	printf("prime numbers between %d and %d are: ",n1, n2);
	fflush(stdin);
	for(i=n1;i<=n2;i++)
	{
		flag=primenumber(i);
		if(flag==0)
		{
			printf("%d \n",i);
		}


	}
return 0;

}



int primenumber(int num)
{
	int j;
	int flag=0;
	for(j=2;j<=(num-1);j++)
	{	if(num%j==0)
	{
		flag=1;
		break;
	}
	}
	return flag;
}