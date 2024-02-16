/*
 * US.c
 *
 *  Created on: Feb 14, 2024
 *      Author: Abdelrahman
 */

#include "US.h"

/* Variables */
static int US_Distance = 0;


/* STATE pointer to function */
void (*US_state) ();


void US_init()
{
	/* Init US driver */
	printf("US_init \n");
}
STATE_define(US_busy)
{
	/* State_Name */
	US_state_id = US_busy;

	/* US_Get_Distance */
	US_Distance = US_GetDistanceRandom(45, 55, 1);

	printf("US_waiting State: Distance = %d \n",US_Distance);
	US_Get_Distance(US_Distance);
	US_state = STATE(US_busy);
}

int US_GetDistanceRandom(int l , int r , int count)
{
	 /* this will generate random number in range l and r */
	int i;
	for(i=0; i<count; ++i){
		int rand_num = (rand() % (r - l + 1)) + l;
		return rand_num;
	}
}
