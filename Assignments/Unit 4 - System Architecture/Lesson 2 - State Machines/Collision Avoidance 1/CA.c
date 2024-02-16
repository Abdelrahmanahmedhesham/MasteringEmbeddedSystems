/*
 * CA.c
 *
 *  Created on: Feb 14, 2024
 *      Author: Abdelrahman
 */

#include <CA.h>
//variables
unsigned int speed, distance , threshold = 50;

//state pointer to function

void (*state_pointer)();


state_define(CA_waiting)
{
	//state name
	CA_state_id=CA_waiting;

	//state action
	speed = 0;
	//DC motor (speed)
	//event check
	(distance<= threshold)? (state_pointer = state(CA_waiting)):(state_pointer = state(CA_driving));
	printf("CA_waiting state: distance =%d  speed =%d",distance,speed);
}

state_define(CA_driving)
{
	//state name
	CA_state_id=CA_driving;

	//state action
	speed = 30;
	//DC motor (speed)
	//event check
	//us_get_distance(distance)
	distance=US_get_distance_random(45,55,1);
	(distance<= threshold)? (state_pointer = state(CA_waiting)):(state_pointer = state(CA_driving));
	printf("CA_driving state: distance =%d  speed =%d",distance,speed);
}

int US_get_distance_random(int l, int r, int count)
{
	int i;
	for (i=0 ; i< count ; i++)
	{
		int rand_num=(rand()%(r-l+1))+1;
		return rand_num ;
	}

	return 0;
}
