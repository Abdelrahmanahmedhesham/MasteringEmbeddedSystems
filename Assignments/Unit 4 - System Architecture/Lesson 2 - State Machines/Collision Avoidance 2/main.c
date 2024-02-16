/*
 * main.c
 *
 *  Created on: Feb 14, 2024
 *      Author: Abdelrahman
 */


#include "CA.h"
#include "US.h"
#include "DC.h"

void Setup()
{
	/* init all drivers */
	/* inti IRQ */
	/* init HAL Drivers */
	/* init Block */
	US_init();
	DC_init();
	/* Set State pointer for each block */
	CA_state = STATE(CA_waiting);
	US_state = STATE(US_busy);
	DC_state = STATE(DC_start);
}
int main()
{
	Setup();

	while(1)
	{
		/* Call state for each block */
		US_state();
		CA_state();
		DC_state();

	}
	return 0;
}
