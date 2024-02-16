/*
 * US.h
 *
 *  Created on: Feb 14, 2024
 *      Author: Abdelrahman
 */

#ifndef US_H_
#define US_H_

#include "stdio.h"
#include "state.h"

enum {
	US_busy,
}US_state_id;

STATE_define(US_busy);
void US_init();

/* STATE pointer to function */
extern void (*US_state) ();



#endif /* US_H_ */
