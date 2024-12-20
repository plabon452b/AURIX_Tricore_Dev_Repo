/*
 * Navigation.c
 *
 *  Created on: Mar 31, 2023
 *      Author: plabon
 */


#include "IfxPort.h"

#define IN_1         &MODULE_P10,2
#define IN_2         &MODULE_P10,1
#define IN_3         &MODULE_P10,3
#define IN_4         &MODULE_P10,5

/*----------------------------------Function Implementations------------------------------*/

void initNavigation(void)
{
    /* Initialization of the input pins for motor driver */
    IfxPort_setPinModeOutput(IN_1, IfxPort_OutputMode_pushPull, IfxPort_OutputIdx_general);
    IfxPort_setPinModeOutput(IN_2, IfxPort_OutputMode_pushPull, IfxPort_OutputIdx_general);
    IfxPort_setPinModeOutput(IN_3, IfxPort_OutputMode_pushPull, IfxPort_OutputIdx_general);
    IfxPort_setPinModeOutput(IN_4, IfxPort_OutputMode_pushPull, IfxPort_OutputIdx_general);
    IfxPort_setPinLow(IN_1);
    IfxPort_setPinLow(IN_2);
    IfxPort_setPinLow(IN_3);
    IfxPort_setPinLow(IN_4);
}


void forward (void)
{
    IfxPort_setPinHigh(IN_1);
    IfxPort_setPinLow(IN_2);
    IfxPort_setPinHigh(IN_3);
    IfxPort_setPinLow(IN_4);
}
void backward(void){
    IfxPort_setPinLow(IN_1);
    IfxPort_setPinHigh(IN_2);
    IfxPort_setPinLow(IN_3);
    IfxPort_setPinHigh(IN_4);
}

void hard_left (void)
{
    IfxPort_setPinLow(IN_1);
    IfxPort_setPinHigh(IN_2);
    IfxPort_setPinHigh(IN_3);
    IfxPort_setPinLow(IN_4);
}

void hard_right (void)
{
    IfxPort_setPinHigh(IN_1);
    IfxPort_setPinLow(IN_2);
    IfxPort_setPinLow(IN_3);
    IfxPort_setPinHigh(IN_4);
}

void stop(void){
    IfxPort_setPinLow(IN_1);
    IfxPort_setPinLow(IN_2);
    IfxPort_setPinLow(IN_3);
    IfxPort_setPinLow(IN_4);
}










