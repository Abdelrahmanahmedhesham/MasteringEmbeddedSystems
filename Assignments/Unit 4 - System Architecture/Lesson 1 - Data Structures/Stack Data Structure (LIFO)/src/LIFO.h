/*
 * LIFO.h
 *
 *  Created on: Feb 9, 2024
 *      Author: Abdelrahman
 */

#ifndef NULL
#define NULL   ((void *) 0)
#endif


#ifndef LIFO_H_
#define LIFO_H_

#include <stdio.h>
#include <stdlib.h>

// Type Definitions
typedef struct
{
	unsigned int length;
	unsigned int count;
	unsigned int* head;
	unsigned int* base;
}LIFO_buff_t;

typedef enum
{
	LIFO_Noerror,
	LIFO_Full,
	LIFO_Empty,
	LIFO_Null
}buffer_status;


//APIs
buffer_status Lifo_Additem (LIFO_buff_t *LIFO_Buffer , unsigned int item);
buffer_status Lifo_Getitem (LIFO_buff_t *LIFO_Buffer , unsigned int* item);
buffer_status Lifo_Init (LIFO_buff_t *LIFO_Buffer , unsigned int *buff , unsigned int length );



#endif /* LIFO_H_ */
