/*
 * state.h
 *
 *  Created on: Feb 16, 2024
 *      Author: Abdelrahman
 */

#ifndef STATE_H_
#define STATE_H_


/* Automatic state function generated */
#define STATE_define(_stateFUN_) void ST_##_stateFUN_()
#define STATE(_stateFUN_) ST_##_stateFUN_


//States connection
void US_Get_Distance(int Distance);
void DC_Motor_Set(int Speed);

#endif /* STATE_H_ */
