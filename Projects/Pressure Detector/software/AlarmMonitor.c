/*
 * AlarmMonitor.c
 *
 *  Created on: Mar 2, 2024
 *      Author: Abdelrahman
 */

#include "AlarmMonitor.h"
#include "state.h"
#include "driver.h"
extern unsigned int flag;
extern unsigned int Psensor_pull_time;
void HighPressureDetected ()
{
	if(flag==1)
	{
		AM_state_id=AlarmON;
		state(AlarmON) ();
	}
	else if(flag==0)
	{
		AM_state_id=AlarmOFF;
		state(AlarmOFF) ();
	}
}

state_define(AlarmON)
{
	state(AC_on) ();
	Delay(AlarmDuration);
	state(AlarmOFF) ();
}

state_define(AlarmOFF)
{
	AM_state_id=AlarmOFF;
	state(AC_off) ();
	Delay(Psensor_pull_time - AlarmDuration);

}
