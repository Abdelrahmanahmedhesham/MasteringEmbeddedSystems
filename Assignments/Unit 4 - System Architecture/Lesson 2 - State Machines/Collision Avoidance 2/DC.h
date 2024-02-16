/*
 * DC.h
 *
 *  Created on: Feb 14, 2024
 *      Author: Abdelrahman
 */

#ifndef DC_H_
#define DC_H_

#include "stdio.h"
#include "state.h"

enum {
	DC_start,
	DC_stop
}DC_state_id;

STATE_define(DC_start);
STATE_define(DC_stop);
void DC_init();


/* STATE pointer to function */
extern void (*DC_state) ();


#endif /* DC_H_ */
