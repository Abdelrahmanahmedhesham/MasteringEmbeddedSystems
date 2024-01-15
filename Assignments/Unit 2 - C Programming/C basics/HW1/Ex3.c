$include <stdio.h>

int main()
{
	int x;
	int y;
	printf("Enter two integers:\n");
	fflush(stdout);fflush(stdin);
	scanf("%d %d",&x,&y);
	printf("Sum: %d", x+y);
	return 0;
}