/*
 * CA.c
 *
 *  Created on: Feb 14, 2024
 *      Author: Abdelrahman
 */

#include "CA.h"

/* Variables */
static int CA_Speed = 0;
static int CA_Distance = 0;
static int CA_Threshold = 50;

/* STATE pointer to function */
void (*CA_state) ();


void US_Get_Distance(int Distance)
{
	CA_Distance = Distance;
	if(CA_Distance <= CA_Threshold){
		CA_state = STATE(CA_waiting);
	}
	else{
		CA_state = STATE(CA_driving);
	}
	printf("US --------Distance=%d--------> CA \n",CA_Distance);
}
STATE_define(CA_waiting)
{
	/* State_Name */
	CA_state_id = CA_waiting;
	printf("CA_waiting State: Distance = %d  Speed = %d \n",CA_Distance , CA_Speed);
	/* State_Action */
	CA_Speed = 0;
	/* DC_Motor(CA_SPeed) */
	DC_Motor_Set(CA_Speed);

}

STATE_define(CA_driving)
{
	/* State_Name */
	CA_state_id = CA_driving;
	printf("CA_driving State: Distance = %d  Speed = %d \n",CA_Distance , CA_Speed);
	/* State_Action */
	CA_Speed = 30;
	/* DC_Motor(CA_SPeed) */
	DC_Motor_Set(CA_Speed);

}
