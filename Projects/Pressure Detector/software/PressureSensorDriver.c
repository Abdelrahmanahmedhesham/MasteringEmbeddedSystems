/*
 * PressureSensorDriver.c
 *
 *  Created on: Mar 2, 2024
 *      Author: Abdelrahman
 */


#include "PressureSensorDriver.h"
#include "state.h"
#include "driver.h"
extern unsigned int flag;
extern unsigned int threshold;
void set_pressure_val ()
{
	pVal= getPressureVal();
}

state_define(reading)
{
	PS_state_id=reading;
	set_pressure_val();
	state(waiting) ();
}

state_define(waiting)
{
	PS_state_id=waiting;
	if(pVal<=threshold)
	{
		flag = 0;
		Delay(Psensor_pull_time);
	}
	else if(pVal>threshold)
	{
		flag = 1;
	}
}
