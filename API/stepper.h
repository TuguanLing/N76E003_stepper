#ifndef __STEPPER_H
#define __STEPPER_H

#include "N76E003.h"

#define speed 	20 //速度

#define microsteps	32 //细分
#define steps		microsteps*200//步数

//IO接口定义
sbit en 	= P1^0;//使能
sbit pulse 	= P1^1;//脉冲信号
sbit dir 	= P1^2;//正反转

void rotate(float rotate_angle,char rotate_dir);

#endif
//
