/*
 * CA.c
 *
 *  Created on: Feb 14, 2024
 *      Author: Abdelrahman
 */

#include "DC.h"

/* Variables */
static int DC_Speed = 0;


/* STATE pointer to function */
void (*DC_state) ();


void DC_init()
{
	/* Init PWM */
	printf("DC init \n");
}

void DC_Motor_Set(int Speed)
{
	DC_Speed = Speed;
	DC_state = STATE(DC_start);
	printf("CA --------Speed=%d--------> DC \n",DC_Speed);
}
STATE_define(DC_start)
{
	/* State_Name */
	DC_state_id = DC_start;
	printf("DC_start State: Speed = %d \n",DC_Speed);
}

STATE_define(DC_stop)
{
	/* State_Name */
	DC_state_id = DC_stop;
	printf("DC_stop State: Speed = %d \n",DC_Speed);
	DC_state = STATE(DC_start);
}
