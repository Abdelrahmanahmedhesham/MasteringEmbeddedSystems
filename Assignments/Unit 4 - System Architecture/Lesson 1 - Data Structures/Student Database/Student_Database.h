/*
 * Student_Database.h
 *
 *  Created on: Feb 13, 2024
 *      Author: Abdelrahman
 */

#ifndef STUDENT_DATABASE_H_
#define STUDENT_DATABASE_H_

#include <stdio.h>
#include <string.h>
#include <strings.h>
//#include <conio.h>
#include <stdlib.h>
#define NULL ((void *)0)
#define DPRINTF(...)	{fflush(stdin); \
		fflush(stdout);\
		printf(__VA_ARGS__);\
		fflush(stdin); \
		fflush(stdout);}
struct Sdata
{
	char name[40];
	int ID;
	float height;
	float mark;
	int age;
};

struct Sstudent
{
	struct Sdata student;
	struct Sstudent* PNextStudent;
};

struct Sstudent *GPfirststudent = NULL;

void Add_Student();
int view_student();
int delete_student();
void delete_Allstudents();
void view_Allstudents();
void No_of_students();

int  Total;

#endif /* STUDENT_DATABASE_H_ */
