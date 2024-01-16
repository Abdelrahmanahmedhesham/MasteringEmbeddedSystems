#include <stdio.h>
#include <string.h>

typedef struct Scomplex
{
	float real;
	float imag;
}Scomplex;

Scomplex add(Scomplex one,Scomplex two);

int main()
{
	Scomplex one;
	Scomplex two;
	Scomplex sum;
	printf("enter 1st real number: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&one.real);
	printf("enter 1st imaginary number: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&one.imag);
	printf("enter 2nd real number: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&two.real);
	printf("enter 2nd imaginary number: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&two.imag);
	sum=add(one,two);
	printf("your sum is= %.2f + %.2fi",sum.real,sum.imag);
	return 0;
}


Scomplex add(Scomplex one,Scomplex two)
{
	Scomplex sum;
	sum.real=one.real+two.real;
	sum.imag=one.imag+two.imag;
	return sum;
}