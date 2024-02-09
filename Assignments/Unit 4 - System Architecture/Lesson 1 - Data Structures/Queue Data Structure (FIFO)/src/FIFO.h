/*
 * FIFO.h
 *
 *  Created on: Feb 9, 2024
 *      Author: Abdelrahman
 */

#ifndef FIFO_H_
#define FIFO_H_

#ifndef NULL
#define NULL   ((void *) 0)
#endif


#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define element_type uint8_t
#define width1 5


// Type Definitions
typedef struct
{
	unsigned int length;
	unsigned int count;
	element_type* head;
	element_type* base;
	element_type* tail;
}FIFO_buff_t;

typedef enum
{
	FIFO_Noerror,
	FIFO_Full,
	FIFO_Empty,
	FIFO_Null
}FIFO_buffer_status;


//APIs
FIFO_buffer_status Fifo_Init (FIFO_buff_t *FIFO_Buffer , element_type *buff , uint32_t length);
FIFO_buffer_status Fifo_Enqueue (FIFO_buff_t *FIFO_Buffer , element_type item);
FIFO_buffer_status Fifo_Dequeue (FIFO_buff_t *FIFO_Buffer , element_type* item);
FIFO_buffer_status Fifo_is_full (FIFO_buff_t *FIFO_Buffer);
void FIFO_Print(FIFO_buff_t *FIFO_Buffer);
#endif /* FIFO_H_ */

