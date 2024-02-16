/*
 * main.c
 *
 *  Created on: Feb 14, 2024
 *      Author: Abdelrahman
 */


#include <CA.h>


void setup ()
{
	//init all drivers
	//init IRQs
	//init HAL US driver & DC driver
	//init BLOCK
	//set states pointers for each block
	state_pointer= state(CA_waiting);

}

int main()
{
	setup();
	while(1)
	{
		state_pointer();
	}
	return 0;
}
