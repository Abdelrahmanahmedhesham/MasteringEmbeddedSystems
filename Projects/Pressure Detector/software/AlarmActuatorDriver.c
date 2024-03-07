/*
 * AlarmActuatorDriver.c
 *
 *  Created on: Mar 2, 2024
 *      Author: Abdelrahman
 */
#include "AlarmActuatorDriver.h"
#include "state.h"
#include "driver.h"

state_define(AC_on)
{
	Set_Alarm_actuator(0);

}

state_define(AC_off)
{
	Set_Alarm_actuator(1);
}
