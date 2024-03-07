/*
 * AlarmMonitor.h
 *
 *  Created on: Mar 2, 2024
 *      Author: Abdelrahman
 */

#ifndef ALARMMONITOR_H_
#define ALARMMONITOR_H_

enum AM_states{
	AlarmOFF,
	AlarmON
}AM_state_id;

unsigned int AlarmDuration = 60000; //60 second timer

void HighPressureDetected ();
state_define(AlarmON);
state_define(AlarmOFF);


#endif /* ALARMMONITOR_H_ */
