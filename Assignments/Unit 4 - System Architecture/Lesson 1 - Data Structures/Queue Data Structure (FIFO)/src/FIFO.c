/*
 ============================================================================
 Name        : FIFO.c
 Author      : Abdelrahman
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <FIFO.h>

FIFO_buffer_status Fifo_Init (FIFO_buff_t *FIFO_Buffer , element_type *buff , uint32_t length)
{
	if(buff==NULL)
		return FIFO_Null;
	FIFO_Buffer->base=buff;
	FIFO_Buffer->tail=buff;
	FIFO_Buffer->head=buff;
	FIFO_Buffer->length=length;
	FIFO_Buffer->count=0;

	return FIFO_Noerror;
}
FIFO_buffer_status Fifo_Enqueue (FIFO_buff_t *FIFO_Buffer , element_type item)
{
	if(!FIFO_Buffer->base || !FIFO_Buffer->head || !FIFO_Buffer->tail)
		return FIFO_Null;
	if(Fifo_is_full(FIFO_Buffer)==FIFO_Full)
		return FIFO_Full;
	*(FIFO_Buffer->head)=item;
	FIFO_Buffer->count++;

	if(FIFO_Buffer->head==(FIFO_Buffer->base + FIFO_Buffer->length*sizeof(element_type)))
		FIFO_Buffer->head=FIFO_Buffer->base;
	else
		FIFO_Buffer->head++;

	return FIFO_Noerror;
}
FIFO_buffer_status Fifo_Dequeue (FIFO_buff_t *FIFO_Buffer , element_type* item)
{
	if(!FIFO_Buffer->base || !FIFO_Buffer->head || !FIFO_Buffer->tail)
		return FIFO_Null;
	if(FIFO_Buffer->count==0)
		return FIFO_Empty;

	*item=*(FIFO_Buffer->tail);
	FIFO_Buffer->count--;

	if(FIFO_Buffer->tail==(FIFO_Buffer->base + FIFO_Buffer->length*sizeof(element_type)))
		FIFO_Buffer->tail=FIFO_Buffer->base;
	else
		FIFO_Buffer->tail++;
	return FIFO_Noerror;
}
FIFO_buffer_status Fifo_is_full (FIFO_buff_t *FIFO_Buffer)
{
	if(!FIFO_Buffer->base || !FIFO_Buffer->head || !FIFO_Buffer->tail)
		return FIFO_Null;
	if(FIFO_Buffer->count==FIFO_Buffer->length)
		return FIFO_Full;

	return FIFO_Noerror;
}
void FIFO_Print(FIFO_buff_t *FIFO_Buffer)
{
	element_type *temp;
	int i;
	printf("======FIFO PRINT STARTING======\n");
	if(FIFO_Buffer->count==0)
		printf("\n\n======FIFO is empty=====\n");
	else
	{
		temp=FIFO_Buffer->tail;
		for(i=0;i<FIFO_Buffer->count;i++)
		{
			printf("\t %d \n",*temp);
			temp++;

		}
		printf("======FIFO PRINT DONE======\n");
	}

}
