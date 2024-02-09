/*
 * main.c
 *
 *  Created on: Feb 9, 2024
 *      Author: Abdelrahman
 */

#include <FIFO.h>

int main()
{
	element_type UART_buffer[width1];
	element_type i,temp;
	FIFO_buff_t FIFO_UART;

	if(Fifo_Init(&FIFO_UART , UART_buffer , 5 )==FIFO_Noerror)
		printf("FIFO Buffer initialized successfully!\n");
	else
		printf("FIFO Buffer is nonexistent (NULL) !!");

	for(i=0;i<7;i++)
	{
		if(Fifo_Enqueue(&FIFO_UART , i )==FIFO_Noerror)
			printf("FIFO Enqueue = %d\n",i);
		else
			printf("FIFO Enqueue failed!!!\n");
	}
	FIFO_Print(&FIFO_UART);
	if(Fifo_Dequeue(&FIFO_UART , &temp )==FIFO_Noerror)
		printf("FIFO Dequeued\n");
	if(Fifo_Dequeue(&FIFO_UART , &temp )==FIFO_Noerror)
		printf("FIFO Dequeued\n");
	FIFO_Print(&FIFO_UART);
	return 0;
}
