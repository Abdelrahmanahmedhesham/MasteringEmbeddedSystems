/*
 ============================================================================
 Name        : Student_data_Lab.c
 Author      : Abdelrahman
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <Student_Database.h>


int main()
{
	int choice;
	while(1)
	{
		system("cls");
		DPRINTF("\n\t\t======Main Menu======\n")
		DPRINTF("\n\t======please choose option======\n")
		DPRINTF("1: Add Student\n2: View Student\n3: Delete Student\n4: View All Students\n5: Delete All Students\n6: Print number of registered students\n\nchoice: ")
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:
			Add_Student();
			break;
		case 2:
			view_student();
			break;
		case 3:
			delete_student();
			break;
		case 4:
			view_Allstudents();
			break;
		case 5:
			delete_Allstudents();
			Total=0;
			break;
		case 6:
			No_of_students();
		}



	}
	return 0;
}

void Add_Student()
{
	struct Sstudent *PNewStudent;
	struct Sstudent *PLastStudent;
	DPRINTF("\n\t=======you chose to add a student=========")
	if(GPfirststudent== NULL) //list is empty
	{
		PNewStudent = (struct Sstudent *) malloc(sizeof(struct Sstudent));
		GPfirststudent=PNewStudent;
	}
	else //list is not empty
	{
		PLastStudent=GPfirststudent;
		while(PLastStudent->PNextStudent)
			PLastStudent=PLastStudent->PNextStudent;

		PNewStudent = (struct Sstudent *) malloc(sizeof(struct Sstudent));
		PLastStudent->PNextStudent=PNewStudent;
	}

	//Element insertion
	char temp[40];
	char t[40];
	DPRINTF("\nEnter student ID:\n")
	gets(t);
	gets(temp);
	PNewStudent->student.ID=atoi(temp);
	DPRINTF("Enter student name:\n")
	gets(PNewStudent->student.name);
	DPRINTF("Enter student age:\n")
	gets(temp);
	PNewStudent->student.age=atoi(temp);
	DPRINTF("Enter student height:\n")
	gets(temp);
	PNewStudent->student.height=atof(temp);
	DPRINTF("Enter student mark:\n")
	gets(temp);
	PNewStudent->student.mark=atof(temp);
	DPRINTF("\t========Student data addition completed========\n")
	Total++;
}


int view_student()
{
	struct Sstudent *PCurrentStudent=GPfirststudent;
	int id;
	int count=0;
	DPRINTF("\n\t========you chose to view a student========\n")
	if(!PCurrentStudent)
	{
		DPRINTF("\n====list is empty====\n")
	}
	else
	{
		DPRINTF("\nenter ID of student:\n")
		scanf("%d",&id);
		while(PCurrentStudent)
		{
			if(id==PCurrentStudent->student.ID)
			{
				DPRINTF("\nstudent name: %s\n",PCurrentStudent->student.name)
				DPRINTF("student id: %d\n",PCurrentStudent->student.ID)
				DPRINTF("student age: %d\n",PCurrentStudent->student.age)
				DPRINTF("student mark: %f\n",PCurrentStudent->student.mark)
				DPRINTF("student height: %f\n",PCurrentStudent->student.height)
				return 1;
			}
			else
			{
				PCurrentStudent=PCurrentStudent->PNextStudent;
				count++;
			}
		}
		if(count==Total)
			DPRINTF("\nStudent not found!\n")
	}
	return 0;
}


void view_Allstudents()
{
	struct Sstudent *PCurrentStudent=GPfirststudent;
	DPRINTF("\n\t========you chose to view all students========\n")
	if(!PCurrentStudent)
	{
		DPRINTF("\n====list is empty====\n")
	}
	else
	{
		while(PCurrentStudent)
		{
			DPRINTF("\nstudent name: %s\n",PCurrentStudent->student.name)
					DPRINTF("student id: %d\n",PCurrentStudent->student.ID)
					DPRINTF("student age: %d\n",PCurrentStudent->student.age)
					DPRINTF("student mark: %f\n",PCurrentStudent->student.mark)
					DPRINTF("student height: %f\n",PCurrentStudent->student.height)
					DPRINTF("\t\t=====\n")
					PCurrentStudent=PCurrentStudent->PNextStudent;
		}
	}
}


int delete_student()
{
	unsigned int id;
	char temp[40];
	DPRINTF("\n\t=======You chose to delete student=======\n")
	DPRINTF("Enter student ID to be deleted:\n")
	scanf("%d",&id);
	gets(temp);
	id= atoi(temp);
	if(GPfirststudent)
	{
		struct Sstudent *PCurrentStudent=GPfirststudent;
		struct Sstudent *PPreviousStudent=NULL;
		while(PCurrentStudent)
		{
			if(PCurrentStudent->student.ID==id)
			{
				if(PPreviousStudent)
					PPreviousStudent->PNextStudent=PCurrentStudent->PNextStudent;
				else
					GPfirststudent=PCurrentStudent->PNextStudent;
				free (PCurrentStudent);
				Total--;
				return 1;
			}
			PPreviousStudent=PCurrentStudent;
			PCurrentStudent=PCurrentStudent->PNextStudent;
		}
		DPRINTF("\n\t=======ID not found=======\n")
	}
	printf("\n\t List already empty \n");

	return 0;
}


void delete_Allstudents()
{
	if(!GPfirststudent)
	{
		printf("\n\t List already empty \n");
	}
	else
	{
		struct Sstudent *PCurrentStudent=GPfirststudent;
		struct Sstudent *PTempStudent;
		while(PCurrentStudent)
		{
			PTempStudent=PCurrentStudent;
			PCurrentStudent=PCurrentStudent->PNextStudent;
			free (PTempStudent);
		}
		printf("\n\t\t===========Deletion of all students successful!==========");
	}
}

void No_of_students()
{
	DPRINTF("\n\n No. of students registered is %d\n\n",Total)
}
