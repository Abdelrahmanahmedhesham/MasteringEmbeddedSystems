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
	int i;
	struct Sstudent s[10];
	printf("Enter student information: \n");
	for(i=0;i<10;i++)
	{
		printf("enter data for student number %d:\n",i+1);
		printf("Enter student name: ");
		fflush(stdin);
		fflush(stdout);
		scanf("%s",s[i].name);
		printf("Enter student roll number: ");
		fflush(stdin);
		fflush(stdout);
		scanf("%d",&s[i].roll);
		printf("Enter student mark: ");
		fflush(stdout);
		fflush(stdin);
		scanf("%f",&s[i].mark);
		printf("\n\n");
	}
	printf("\n\ndisplaying student information: \n\n");
	for(i=0;i<10;i++)
	{
		printf("displaying data for student number %d:\n",i+1);
		printf("student name: %s\n",s[i].name);
		printf("student roll number: %d\n",s[i].roll);
		printf("student mark: %.2f\n\n",s[i].mark);
	}
	return 0;
}
