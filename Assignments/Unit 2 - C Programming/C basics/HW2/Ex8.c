#include "stdio.h"

int main()
{

		float x;
		float y;
		char op;
		float ans;
		printf("enter operator either + , - , * or divide: ");
		fflush(stdin);fflush(stdout);
		scanf("%c",&op);
		printf("enter 2 operands :  ");
		fflush(stdin);fflush(stdout);
			scanf("%f %f",&x,&y);
		switch(op)
		{
		case '+':
			ans=x+y;
			printf("%.1f + %.1f = %.1f",x,y,ans);
			break;
		case '-':
			ans=x-y;
			printf("%.1f - %.1f = %.1f",x,y,ans);
			break;
		case '*':
			ans=x*y;
			printf("%.1f * %.1f = %.1f",x,y,ans);
			break;
		case '/':
			ans=x/y;
			printf("%.1f / %.1f = %.1f",x,y,ans);
			break;

		default:
			printf("Error!!! operator is not correct.");
		}
	return 0;
}