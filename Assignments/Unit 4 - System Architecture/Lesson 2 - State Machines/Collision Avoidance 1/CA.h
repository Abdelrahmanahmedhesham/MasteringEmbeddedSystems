/*
 * CA.h
 *
 *  Created on: Feb 14, 2024
 *      Author: Abdelrahman
 */

#ifndef CA_H_
#define CA_H_
#include <state.h>

//define states
enum {
	CA_waiting,
	CA_driving
}CA_state_id;

state_define(CA_waiting);
state_define(CA_driving);
int US_get_distance_random(int l, int r, int count);

//state pointer to function
extern void (*state_pointer)();
#endif /* CA_H_ */
