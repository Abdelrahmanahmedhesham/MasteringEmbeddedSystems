#ifndef STATE_H_
#define STATE_H_

#define state_define(_stateFUN_) void ST_##_stateFUN_()
#define state(_stateFUN_) ST_##_stateFUN_

#endif  /* STATE_H_ */