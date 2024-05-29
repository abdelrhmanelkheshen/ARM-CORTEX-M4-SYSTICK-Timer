/**********************************************************************
[FILE NAME]: <NVIC_Private.h>
Author : Abdelrhman El Kheshen
Version: V0
Description: Private Header file for the NVIC [Nested Vector Interrupt Controller] Driver.
Date Created: 28/04/2024
Micro-Controller: TM4C123GH6PM (TIVA C)
Micro-Processor: ARM Cortex-M4
***********************************************************************/
/*Guarding of the File*/
#ifndef _NVIC_PRIVATE_H_
#define _NVIC_PRIVATE_H_
/*****************************/

/*******These Registers are for Programmable Priorities [HW-MicroController Interrupts*****************/

/*The Processor Interrupts only need global interrupt enable and they have their own Priorities Registers*/
/*EN0 for the first 32 interrupts in the vector table*/
#define NVIC_EN0_REGISTER                (*(volatile unsigned long*)0xE000E100)
/*EN1 for the Second 32 interrupts in the vector table*/
#define NVIC_EN1_REGISTER                (*(volatile unsigned long*)0xE000E104)
/*EN2 for the third 32 interrupts in the vector table*/
#define NVIC_EN2_REGISTER                (*(volatile unsigned long*)0xE000E108)
/*EN3 for the Fourth 32 interrupts in the vector table*/
#define NVIC_EN3_REGISTER                (*(volatile unsigned long*)0xE000E10C)
/*EN4 for the fifth 32 interrupts in the vector table*/
#define NVIC_EN4_REGISTER                (*(volatile unsigned long*)0xE000E110)


/*DIS0 for the first 32 interrupts in the vector table*/
#define NVIC_DIS0_REGISTER                (*(volatile unsigned long*)0xE000E180)
/*DIS1 for the Second 32 interrupts in the vector table*/
#define NVIC_DIS1_REGISTER                (*(volatile unsigned long*)0xE000E184)
/*DIS2 for the third 32 interrupts in the vector table*/
#define NVIC_DIS2_REGISTER                (*(volatile unsigned long*)0xE000E188)
/*DIS3 for the Fourth 32 interrupts in the vector table*/
#define NVIC_DIS3_REGISTER                (*(volatile unsigned long*)0xE000E18C)
/*DIS4 for the fifth 32 interrupts in the vector table*/
#define NVIC_DIS4_REGISTER                (*(volatile unsigned long*)0xE000E190)


/*Define Interrupt Priority*/
#define NVIC_PRI0_REGISTER                 (*(volatile unsigned long*)0xE000E400)
#define NVIC_PRI1_REGISTER                 (*(volatile unsigned long*)0xE000E404)
#define NVIC_PRI2_REGISTER                 (*(volatile unsigned long*)0xE000E408)
#define NVIC_PRI3_REGISTER                 (*(volatile unsigned long*)0xE000E40C)
#define NVIC_PRI4_REGISTER                 (*(volatile unsigned long*)0xE000E410)
#define NVIC_PRI5_REGISTER                 (*(volatile unsigned long*)0xE000E414)
#define NVIC_PRI6_REGISTER                 (*(volatile unsigned long*)0xE000E418)
#define NVIC_PRI7_REGISTER                 (*(volatile unsigned long*)0xE000E41C)
#define NVIC_PRI8_REGISTER                 (*(volatile unsigned long*)0xE000E420)
#define NVIC_PRI9_REGISTER                 (*(volatile unsigned long*)0xE000E424)
#define NVIC_PRI10_REGISTER                (*(volatile unsigned long*)0xE000E428)
#define NVIC_PRI11_REGISTER                (*(volatile unsigned long*)0xE000E42C)
#define NVIC_PRI12_REGISTER                (*(volatile unsigned long*)0xE000E430)
#define NVIC_PRI13_REGISTER                (*(volatile unsigned long*)0xE000E434)
#define NVIC_PRI14_REGISTER                (*(volatile unsigned long*)0xE000E438)
#define NVIC_PRI15_REGISTER                (*(volatile unsigned long*)0xE000E43C)
#define NVIC_PRI16_REGISTER                (*(volatile unsigned long*)0xE000E440)
#define NVIC_PRI17_REGISTER                (*(volatile unsigned long*)0xE000E444)
#define NVIC_PRI18_REGISTER                (*(volatile unsigned long*)0xE000E448)
#define NVIC_PRI19_REGISTER                (*(volatile unsigned long*)0xE000E44C)
#define NVIC_PRI20_REGISTER                (*(volatile unsigned long*)0xE000E450)
#define NVIC_PRI21_REGISTER                (*(volatile unsigned long*)0xE000E454)
#define NVIC_PRI22_REGISTER                (*(volatile unsigned long*)0xE000E458)
#define NVIC_PRI23_REGISTER                (*(volatile unsigned long*)0xE000E45C)
#define NVIC_PRI24_REGISTER                (*(volatile unsigned long*)0xE000E460)
#define NVIC_PRI25_REGISTER                (*(volatile unsigned long*)0xE000E464)
#define NVIC_PRI26_REGISTER                (*(volatile unsigned long*)0xE000E468)
#define NVIC_PRI27_REGISTER                (*(volatile unsigned long*)0xE000E46C)
#define NVIC_PRI28_REGISTER                (*(volatile unsigned long*)0xE000E470)
#define NVIC_PRI29_REGISTER                (*(volatile unsigned long*)0xE000E474)
#define NVIC_PRI30_REGISTER                (*(volatile unsigned long*)0xE000E478)
#define NVIC_PRI31_REGISTER                (*(volatile unsigned long*)0xE000E47C)
#define NVIC_PRI32_REGISTER                (*(volatile unsigned long*)0xE000E480)
#define NVIC_PRI33_REGISTER                (*(volatile unsigned long*)0xE000E484)
#define NVIC_PRI34_REGISTER                (*(volatile unsigned long*)0xE000E488)

/*Setting Priorities for System's [Processor] Priorities*/
#define NVIC_SYSTEM_PRI1_REGISTER          (*(volatile unsigned long*)0xE000ED18)
#define NVIC_SYSTEM_PRI2_REGISTER          (*(volatile unsigned long*)0xE000ED1C)
#define NVIC_SYSTEM_PRI3_REGISTER          (*(volatile unsigned long*)0xE000ED20)

/*To Enable Bus Faults or Memory Faults or to force A SW interrupt*/
#define NVIC_SYSTEM_HANDLER_CONTROL_REGISTER    (*(volatile unsigned long*)0xE000ED24)

#define NVIC_SYSTEM_CFG_CTRL_REGISTER           (*(volatile unsigned long*)0xE000ED14)


#define NVIC_SYSTEM_INT_CTRL_REGISTER           (*(volatile unsigned long*)0xE000ED04)




 




#endif