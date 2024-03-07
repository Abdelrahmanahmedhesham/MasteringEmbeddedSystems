#include <stdint.h>
#include <stdio.h>

#include "driver.h"
#include "state.h"
state_define(reading);
state_define(waiting);
state_define(HighPressureDetection);
void set_pressure_val ();
void HighPressureDetection();
state_define(AlarmON);
state_define(AlarmOFF);
state_define(AC_on);
state_define(AC_off);
void HighPressureDetected ();
unsigned int threshold = 20;  //option to change threshold according to preference from main source file
unsigned int flag;
extern int pVal;
int main ()
{
	GPIO_INITIALIZATION();     //GPIO_INITIALIZATION is considered as PS sensor init and alarm actuator init so no init functions created for both
	while (1)
	{
		state(reading) ();
		HighPressureDetection ();

	}

return 0;
}


void HighPressureDetection()
{
	if(pVal>threshold)
	{
		HighPressureDetected();
	}
}
