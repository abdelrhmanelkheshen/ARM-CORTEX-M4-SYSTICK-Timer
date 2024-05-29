/**********************************************************************
[FILE NAME]: <SYSTICK_Private.h>
Author : Abdelrhman El Kheshen
Version: V0
Description: Private Header file for the SYSTICK TIMER Driver.
Date Created: 28/04/2024
Micro-Controller: TM4C123GH6PM (TIVA C)
Micro-Processor: ARM Cortex-M4
***********************************************************************/
/*Guarding of the File*/
#ifndef _SYSTICK_PRIVATE_H_
#define _SYSTICK_PRIVATE_H_
/*****************************/

#define SYSTICK_CTRL_REGISTER                (*(volatile unsigned long*)0xE000E010)
#define SYSTICK_RELOAD_REGISTER              (*(volatile unsigned long*)0xE000E014)
#define SYSTICK_CURRENT_REGISTER             (*(volatile unsigned long*)0xE000E018)















#endif