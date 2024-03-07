/*
 * PressureSensorDriver.h
 *
 *  Created on: Mar 2, 2024
 *      Author: Abdelrahman
 */

#ifndef PRESSURESENSORDRIVER_H_
#define PRESSURESENSORDRIVER_H_


enum PS_states{
	reading,
	waiting
}PS_state_id;

int pVal=0;
unsigned int Psensor_pull_time=100000;   //100 second between every sensor read
void set_pressure_val ();

state_define(reading);
state_define(waiting);


#endif /* PRESSURESENSORDRIVER_H_ */
