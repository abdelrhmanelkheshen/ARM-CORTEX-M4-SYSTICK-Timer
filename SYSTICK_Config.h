/**********************************************************************
[FILE NAME]: <SYSTICK_Config.h>
Author : Abdelrhman El Kheshen
Version: V0
Description: Configuration Header file for the SYSTICK TIMER Driver.
Date Created: 28/04/2024
Micro-Controller: TM4C123GH6PM (TIVA C)
Micro-Processor: ARM Cortex-M4
***********************************************************************/
/*Guarding of the File*/
#ifndef _SYSTICK_CONFIG_H_
#define _SYSTICK_CONFIG_H_
/*****************************/
#include "SYSTICK_Interface.h"

#define STOP_FUNCTION_AVAILABLE

extern const SysTick_ConfigType systickConfiguration; 


#endif