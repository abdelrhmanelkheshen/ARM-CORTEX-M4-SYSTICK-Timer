/**********************************************************************
[FILE NAME]: <SYSTICK_Interface.h>
Author : Abdelrhman El Kheshen
Version: V0
Description: Interface Header file for the SYSTICK TIMER Driver.
Date Created: 28/04/2024
Micro-Controller: TM4C123GH6PM (TIVA C)
Micro-Processor: ARM Cortex-M4
***********************************************************************/
/*Guarding of the File*/
#ifndef _SYSTICK_INTERFACE_H_
#define _SYSTICK_INTERFACE_H_
/*****************************/


#include "std_types.h"

#define SYSTICK_PRIORITY_MASK         (0x1FFFFFFF)
#define SYSTICK_INTERRUPT_PRIORITY    (3)
#define SYSTICK_PRIORITY_BITS_POS     (29)

#define CURRENT_REG                   ((uint8)0)
#define TIME_IN_SEC                   ((uint32)15999999)
#define DIV_FOR_MILLI                 ((uint16)1000)
#define CLEAR_REG                     ((uint8)0x0)
#define MASK_FOR_INTERRUPT_AND_ENABLE ((uint8)0x07)
#define MASK_FOR_SYSTEM_CLOCK         ((uint8)0x4)
#define MASK_FOR_INTERRUPT_ENABLE     ((uint8)0x2)
#define MASK_FOR_ENABLE_SYSTICK       ((uint8)0x01)


typedef enum
 {
   systemClkSrcDiv4,
   systemClkSrc
 }CLOCK;   

typedef enum
 {
   disableInt,
   enableInt
 }INTEN;   
 
typedef enum
 {
   LEVEL0,
   LEVEL1,
   LEVEL2,
   LEVEL3,
   LEVEL4,
   LEVEL5,
   LEVEL6,
   LEVEL7
 }INT_PRIORITY;   
  
 
 
 
typedef struct {
    uint32 period;          //how many sec all in all
    uint32 DIV;             // indicate unit
    CLOCK clockSource;
    INTEN enableIRQ;
    INT_PRIORITY irqPriority;
} SysTick_ConfigType;



/*************************** Function Prototypes*************************
 Service Name: Systick_Init
* Sync/Async: Synchronous
* Reentrancy: reentrant
* Parameters (in): Tick_Time - Time in miliseconds
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Function to Setup the SysTick Timer configuration to count in miliseconds:
*              - Set the Reload value
*              - Enable SysTick Timer with System clock 16Mhz
*              - Enable SysTick Timer Interrupt and set its priority
************************************************************************************/	

void Systick_Init(SysTick_ConfigType *ptr2configg);


/************************************************************************************
* Service Name: SysTick_Stop
* Sync/Async: Synchronous
* Reentrancy: reentrant
* Parameters (in): None
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Function to Stop the SysTick Timer.
************************************************************************************/

void SysTick_Stop(void);

/************************************************************************************
* Service Name: SysTick_SetCallBack
* Sync/Async: Synchronous
* Reentrancy: reentrant
* Parameters (in): FuncPointer - Call Back function address
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Function to Setup the SysTick Timer call back
************************************************************************************/
void SysTick_SetCallBack(void (*FuncPointer)(void));



#endif