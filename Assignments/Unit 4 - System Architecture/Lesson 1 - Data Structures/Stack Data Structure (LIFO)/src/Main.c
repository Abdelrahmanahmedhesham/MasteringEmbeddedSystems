/*
 ============================================================================
 Name        : Data_Structures_lesson.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

#include "LIFO.h"

int main()
{
	unsigned int i, temp = 0;
	LIFO_buff_t UART_lifo , I2c_lifo;
	unsigned int buffer1[5];
	//static Allocation
	Lifo_Init(&UART_lifo , buffer1 , sizeof(buffer1)/4);

	//Dynamic Allocation
	unsigned int* buffer2= (unsigned int*)malloc(5*sizeof(unsigned int));
	Lifo_Init(&I2c_lifo, buffer2 , sizeof(buffer2)/4);

	//adding items
	for(i=0;i<5;i++)
	{
		if(Lifo_Additem(&UART_lifo ,i )==LIFO_Noerror)
		{
			printf("UART LIFO add item = %d \n",i);
		}
	}
	printf("\n\n");
	//popping items
	for(i=0;i<5;i++)
	{
		if(Lifo_Getitem(&UART_lifo ,&temp)==LIFO_Noerror)
		{
			printf("UART LIFO pop item = %d \n",temp);
		}
	}
	return 0;
}
