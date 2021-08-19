/*
Copyright (c) [2012-2020] Microchip Technology Inc.  

    All rights reserved.

    You are permitted to use the accompanying software and its derivatives 
    with Microchip products. See the Microchip license agreement accompanying 
    this software, if any, for additional info regarding your rights and 
    obligations.
    
    MICROCHIP SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT 
    WARRANTY OF ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT 
    LIMITATION, ANY WARRANTY OF MERCHANTABILITY, TITLE, NON-INFRINGEMENT 
    AND FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT WILL MICROCHIP OR ITS
    LICENSORS BE LIABLE OR OBLIGATED UNDER CONTRACT, NEGLIGENCE, STRICT 
    LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR OTHER LEGAL EQUITABLE 
    THEORY FOR ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES INCLUDING BUT NOT 
    LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES, 
    OR OTHER SIMILAR COSTS. 
    
    To the fullest extend allowed by law, Microchip and its licensors 
    liability will not exceed the amount of fees, if any, that you paid 
    directly to Microchip to use this software. 
    
    THIRD PARTY SOFTWARE:  Notwithstanding anything to the contrary, any 
    third party software accompanying this software is subject to the terms 
    and conditions of the third party's license agreement.  To the extent 
    required by third party licenses covering such third party software, 
    the terms of such license will apply in lieu of the terms provided in 
    this notice or applicable license.  To the extent the terms of such 
    third party licenses prohibit any of the restrictions described here, 
    such restrictions will not apply to such third party software.
*/
#include "mcc_generated_files/system/system.h"

#include "mcc_generated_files/system/system.h"

/*----------------------------------------------------------------------------
 *   Extern variables
 *----------------------------------------------------------------------------*/
extern volatile uint8_t measurement_done_touch;

/*----------------------------------------------------------------------------
 *   Global variables
 *----------------------------------------------------------------------------*/
uint8_t key_status1 = 0;

uint8_t  scroller_status1   = 0;
uint16_t scroller_position1 = 0;

/*----------------------------------------------------------------------------
 *   prototypes
 *----------------------------------------------------------------------------*/
void touch_status_display1(void);

int main(void)
{
    SYSTEM_Initialize();
 
    while(1)
    {
        touch_process();

	    if (measurement_done_touch == 1)
        {
		    measurement_done_touch = 0;
            touch_status_display1();
	    }
    }    
}

/*============================================================================
void touch_status_display(void)
------------------------------------------------------------------------------
Purpose: Sample code snippet to demonstrate how to check the status of the
         sensors
Input  : none
Output : none
Notes  : none
============================================================================*/
void touch_status_display1(void)
{
	key_status1 = get_sensor_state(0) & 0x80;
	if (0u != key_status1)
		LED6_SetLow();
	else
		LED6_SetHigh();

	key_status1 = get_sensor_state(1) & 0x80;
	if (0u != key_status1)
		LED7_SetLow();
	else
		LED7_SetHigh();

	scroller_status1   = get_scroller_state(0);
	scroller_position1 = get_scroller_position(0);

	LED0_SetHigh();
	LED1_SetHigh();
	LED2_SetHigh();
	LED3_SetHigh();
	LED4_SetHigh();
	LED5_SetHigh();

	if (0u != scroller_status1) 
    {
		LED5_SetLow();
		if (scroller_position1 > 43)  LED4_SetLow();
		if (scroller_position1 > 85)  LED3_SetLow();
		if (scroller_position1 > 120) LED2_SetLow();
		if (scroller_position1 > 165) LED1_SetLow();
		if (scroller_position1 > 213) LED0_SetLow();
	}
}