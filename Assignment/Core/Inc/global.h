/*
 * global.h
 *
 *  Created on: Oct 22, 2023
 *      Author: OS
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include"button.h"
#include"software_timer.h"
#include"displayLed.h"
#include "fsm_normal_state.h"
#include "scheduler.h"
#include "fsm_pedestrian.h"

#define INIT 0

#define TIMER	  5

#define RedGreen  1
#define RedAm  	  2
#define GreenRed  3
#define AmRed     4
#define ManRed   10
#define ManAm    11
#define ManGreen 12

#define Pedestrian_INIT 7
#define Pedestrian_RED	8
#define Pedestrian_GREEN	9

extern int timeRed;
extern int timeYellow;
extern int timeGreen;
extern int status;
extern int time1,time2;
extern int pedestrian_flag;

#endif /* INC_GLOBAL_H_ */