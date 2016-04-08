/*******************************************************************************
                      Bicycle Helmet Microcontroller Software
               Copyright (c) NixTech, Inc. 2012 All Rights Reserved
                            Rev. A, MSP430F5328
 ******************************************************************************/

#include "msp430.h"

#ifndef HAL_H_
#define HAL_H_

#define MSP430F5328		1
#define DEVICE_TYPE 	MSP430F5328

typedef volatile unsigned char UChar8;
typedef volatile unsigned int  UInt16;
typedef volatile unsigned long ULong;
typedef unsigned char BOOL;
typedef unsigned char STATE;
#define TRUE 						1
#define FALSE 						0

#define NUM_ROWS					6			//Total number of pixel rows
#define NUM_COLS 					8			//Total number of pixel columns
#define NUM_COLOR_CHANNELS			3
#define RED_CHANNEL					0
#define GREEN_CHANNEL				1
#define BLUE_CHANNEL				2

//These levels match the use of NFET and PFET in schematic
#define ROW_ON_BYTE   				0xC0
#define ROW_OFF_BYTE  				0x3F
#define COL_ON_BYTE  				0x00
#define COL_OFF_BYTE   				0xFF

//Hardware pin definitions
//LED pins
#define Red_Row_Pins				P2OUT		// Red Row of LEDs
#define Green_Row_Pins  			P1OUT		// Green Row of LEDs
#define Blue_Row_Pins   			P6OUT		// Blue Row of LEDs
#define Column_Pins     			P4OUT		// Column driver pin

//Button inputs
#define BUTTON                      BIT0
#define Button_Pins                 P1IN        // Port 1 is for the button

//Port 5 Inputs
#define MIC							BIT1
#define BATT_LOW					BIT4

//I2C
#define I2C_SDA						BIT1
#define I2C_SCL						BIT0
#define I2C_OUT						P5OUT
#define I2C_DIR						P5DIR
#define I2C_IN						P5IN

//IC Inputs
#define LOW_BATT_PIN				BIT4
#define ENABLE_5V                   BIT2

//Test Pins (Defined CCW Pin 1 to Pin 64)
#define Test_Pins_P6				P6OUT		//
#define Test_Pins_P1				P1OUT		//
#define Test_Pins_P2				P2OUT		//
#define Test_Pins_P3				P3OUT		//

#define TP49_PIN7_TEST_9_RED_6		                    BIT6		//
#define TP50_PIN8_TEST_10_RED_7		                    BIT7		//
#define PIN24_J9_6__ROW_ON_OFF_TIME__TEST_2_GRN_6		BIT6		//
#define PIN25_J9_5__DISPLAY_INTERRUPT__TEST_3_GRN_7	    BIT7		//
#define PIN32_J9_4__MAIN_EXECUTION__TEST_4_BLU_6		BIT6		//
#define PIN33_J9_3__ADC_TIMER_B0__TEST_5_BLU_7			BIT7		//
#define PIN37_J6_10__TEST_6_TX				            BIT3		//
#define PIN38_J6_9__TEST_7_RX				            BIT4		//

#endif /* HAL_H_ */

