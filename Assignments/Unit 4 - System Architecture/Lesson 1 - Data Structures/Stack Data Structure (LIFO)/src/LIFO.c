/*
 * LIFO.c
 *
 *  Created on: Feb 9, 2024
 *      Author: Abdelrahman
 */

#include "LIFO.h"

buffer_status Lifo_Init (LIFO_buff_t *LIFO_Buffer , unsigned int *buff , unsigned int length )
{
	if(buff == NULL)
		return LIFO_Null;

	LIFO_Buffer->base=buff;
	LIFO_Buffer->head=buff;
	LIFO_Buffer->length=length;
	LIFO_Buffer->count=0;


	return LIFO_Noerror;
}

buffer_status Lifo_Additem (LIFO_buff_t *LIFO_Buffer , unsigned int item)
{
	if( !LIFO_Buffer->base || !LIFO_Buffer ->head)
		return LIFO_Null;
	if( LIFO_Buffer->count == LIFO_Buffer->length)
			return LIFO_Full;
	*(LIFO_Buffer->head)= item;
	LIFO_Buffer->count++;
	LIFO_Buffer->head++;
	return LIFO_Noerror;
}
buffer_status Lifo_Getitem (LIFO_buff_t *LIFO_Buffer , unsigned int* item)
{
	if( !LIFO_Buffer->base || !LIFO_Buffer->head)
		return LIFO_Null;

	if(LIFO_Buffer->count == 0)
		return LIFO_Empty;

	LIFO_Buffer->count--;
	LIFO_Buffer->head--;
	*item=*(LIFO_Buffer->head);

	return LIFO_Noerror;
}
