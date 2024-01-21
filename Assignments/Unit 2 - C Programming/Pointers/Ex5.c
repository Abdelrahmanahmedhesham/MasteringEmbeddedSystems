#include <stdio.h>
#include <string.h>

struct employee
{
	char *name;
	int ID;

};


int main()
{
	printf("Write a program in C to show a pointer to an array which contents are pointer to structure:\n");


	static struct employee emp1={"adel",2000};
	static struct employee emp2={"ahmed",2001};
	static struct employee emp3={"yasser",2002};
	struct employee(*arr[])={&emp1,&emp2,&emp3};
	struct employee(*(*ptr)[3])=&arr;
	printf("employer two name is: %s \n",(**(*ptr+1)).name);
	printf("employer two ID is: %d\n",(**(*ptr+1)).ID);
	printf("employer three name is: %s\n",(**(*ptr+2)).name);
	printf("employer three ID is: %d\n",(**(*ptr+2)).ID);
	printf("employer one name is: %s\n",(**(*ptr)).name);
	printf("employer one ID is: %d\n",(**(*ptr)).ID);

	return 0;
}
