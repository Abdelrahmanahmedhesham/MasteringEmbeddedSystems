#include <stdio.h>
#include <string.h>


struct Sstudent
{
	char name[50];
	int roll;
	float mark;
};



int main()
{
	struct Sstudent s;
	printf("Enter student information: \n");
	printf("Enter student name: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%s",s.name);
	printf("Enter student roll number: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&s.roll);
	printf("Enter student mark: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%f",&s.mark);
	printf("displaying student information: \n");
	printf("student name: %s\n",s.name);
	printf("student roll number: %d\n",s.roll);
	printf("student mark: %.2f",s.mark);

	return 0;
}
