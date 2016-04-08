/*******************************************************************************
                      Bicycle Helmet Microcontroller Software
               Copyright (c) NixTech, Inc. 2012 All Rights Reserved
                            Rev. A, MSP430F5328
 ******************************************************************************/

#include "HAL.h"

#ifndef MAIN_H_
#define MAIN_H_

#define HW_DEBUG_MSP430F5328  0
#define DISABLE_TI_3V_LDO     1    //Disable the LDOO from TI Port U that drives Vanode, and use external 3.3V regulator
#define RUN_FACTORY_TEST      0    //Start in Factory Test
#define ACCEL_TRAINING_MODE   1

BOOL IAmAVirgin = TRUE;
UChar8 SwRev;

//Operating States
STATE NormalOperatingMode = TRUE;
STATE FactoryTestMode = FALSE;
BOOL SleepCommand = FALSE;

//High level hardware definitions
#define CLKA_TIMER_FREQUENCY		                  1e6		//Local oscillator frequency for ISR
#define NUMBER_OF_BRIGHTNESS_BITS 	                  5			//Valid values are 3, 4 or 5 bits of brighntness control for each pixel
#define BUTTON_LOW_COUNT_UNTIL_DECLARED_LOW           50       //Tick counts until SEL button is held low

//Button
UInt16 BUTTONHeldDownCount = 0;
UInt16 BUTTONStayedHighCount = 0;
UInt16 BUTTONPressCount = 0;
BOOL BUTTONIsLow = FALSE;
BOOL BUTTONIsHigh = TRUE;
BOOL BUTTONWentLow = FALSE;
BOOL BUTTONWentHigh = FALSE;
BOOL BUTTONStayedLow = FALSE;
BOOL BUTTONStayedHigh = FALSE;

BOOL Button_Pushed = FALSE;

//Accelerometer
BOOL Accel_Recording = FALSE;

//Light Sensor

//Operating State
struct _state {
    const UChar8 Normal;
    const UChar8 FactoryTest;
};
struct _state State = {0,1};

struct _frameCountTicks {
    UInt16 LightSensor;
	UInt16 Accel;
	UInt16 AccelTraining;
	UInt16 Button;
};
struct _frameCountTicks FrameCountTicks = {1,1,1,1};

struct _frameCountTicksThresh {
    UInt16 LightSensor;
    UInt16 Accel;
    UInt16 AccelTraining;
    UInt16 Button;
};
struct _frameCountTicksThresh FrameCountTicksThresh = {10,10,800,10};

//Display
UInt16 Brightness_Bit_Count = 0;				//Brightness bit counter (each brightness interval is considered a bit)
UInt16 Column_Count = 0;						//Simple column counter
UInt16 Column_Register = COL_OFF_BYTE;			//Register which determines current column to drive mux (0x1 - 0x8)
UInt16 CurrentFrameCountTick = 0;				//Current Frame
UInt16 ImageMatrix [8][8] = {0,0}; 				//Variable which stores entire image matrix
UInt16 ImageMatrixBrightness [8][8] = {0,0};  	//Variable which stores entire image matrix after brightness contro
UChar8 Red_Row_Pins_Row = ROW_OFF_BYTE;
UChar8 Green_Row_Pins_Row = ROW_OFF_BYTE;
UChar8 Blue_Row_Pins_Row = ROW_OFF_BYTE;
UChar8 Red_Row_Pins_Image[NUM_COLS][NUMBER_OF_BRIGHTNESS_BITS] = {0,0};
UChar8 Green_Row_Pins_Image[NUM_COLS][NUMBER_OF_BRIGHTNESS_BITS] = {0,0};
UChar8 Blue_Row_Pins_Image[NUM_COLS][NUMBER_OF_BRIGHTNESS_BITS] = {0,0};
UInt16 SMCLK_SCALE_FACTOR = 39;					//Scaled from 640KHz (Original toggle rate of 22 gives 100Hz) to 25MHz
UInt16 TimerA0_Toggle_Rate;						//Number of ticks in Timer A0 which gives us 100Hz
UInt16 TimerA0_Toggle_Rate_Bit0_Brightness_Levels;
UInt16 TimerA0_Toggle_Rate_Bit1_Brightness_Levels;
UInt16 TimerA0_Toggle_Rate_Bit2_Brightness_Levels;
UInt16 TimerA0_Toggle_Rate_Bit3_Brightness_Levels;
UInt16 TimerA0_Toggle_Rate_Bit4_Brightness_Levels;
UInt16 TimerA1_Delay_Value;
UInt16 TimerA1_Toggle_Rate_Bit0_Row_Disable;
UInt16 TimerA1_Toggle_Rate_Bit1_Row_Disable;
UInt16 TimerA1_Toggle_Rate_Bit2_Row_Disable;
UInt16 TimerA1_Toggle_Rate_Bit3_Row_Disable;
UInt16 TimerA1_Toggle_Rate_Bit4_Row_Disable;
BOOL Column_Completed = FALSE;					//Check whether the column is completed in the ISR
BOOL Event_Change_Flag;                         //Used to keep track of synchronous patterns
                                                //(i.e. when providing user feedback)
//Factory settings
UChar8 Max_Brightness_Scale = 8;				//Valid range = 8-22
BOOL giveMeMaxBrightnessTimerA1;				//Do not turn off ROW bits in global factory max-brightness configuration

//Brightness Control Potentiometer Variables
UInt16 Last_Brightness_Multiplier_Value = 0;
UInt16 Current_Brightness_Multiplier_Value;
UInt16 Light_Sensor_Value;

//Pattern and Secne Related Variables
const UChar8 PATTERN_END_INDEX = 16;
const UChar8 PATTERN_START_INDEX = 3;
UChar8 Pattern_ID_StartIndex = 3;
UChar8 Pattern_ID_EndIndex = 3;

//Factory patterns
#define FACTORY_PATTERN_START_INDEX 240
#define PATTERN_ALL_BLACK   250
#define PATTERN_RED_FLASH   249
#define PATTERN_GREEN_FLASH 248
#define PATTERN_UP_DOWN_SELECT  247

//User accessible special patterns
#define PATTERN_ALL_WHITE   3
#define PATTERN_ACCELEROMETER 4
#define PATTERN_RANDOM_ALL  5
#define PATTERN_RANDOM_SINGLE 6
#define PATTERN_ROLLING_BALL 7
#define PATTERN_TWO_BALLS 8

UChar8 SpeedFactor = 1;

BOOL Pattern_Change_Occured;
UChar8 Active_Pattern_ID = 3;
UChar8 Pattern_ID = 3;
UInt16 Pattern_ID_Frame_Number = 0;
UInt16 Pattern_ID_Frame_Time_With_Speed = 0;
UInt16 Pattern_ID_Frame_Time = 0;
UInt16 Frame_Count_Time_to_Next_Scene = 1;
BOOL New_Frame_to_Display = FALSE;

//Method Declarations
void initPowerSupply(void);
void initClocks(void);
void SetVCoreUp(unsigned int);
void CPUSleep(void);
void initPorts(void);
void runTests(void);
void checkBattery(void);
void initLEDPorts(void);
void readEEPromVariables(void);
void clearImageMemories(void);
void readLightSensor(void);
void adjustSpeed(void);
void adjustBrightness(void);
void transfigureImageMatrix(void);
void configureTimerInterrupt(void);
void setupTimerA1DelayValues(void);
void createNextFrame(void);
void getNextBits(unsigned int, unsigned int);
void initFrameCountTicks(void);
void readButton(void);
void readButtonPin(void);
void adjustSpeed(void);
void incrementPattern(void);
void computeNewScenes(void);
void displayNewFrame(void);
void factoryTest(void);
void checkEEPromVirginity(void);


//External Method Declarations
extern void I2C_start_condition(void);
extern void I2C_stop_condition(void);
extern BOOL I2C_wait_for_ack(void);
extern void I2C_send_byte(unsigned char);
extern unsigned char I2C_receive_byte();
extern void writeEEPromByte(unsigned char, unsigned char);
extern unsigned char readEEPromByte(unsigned char);

#endif /* MAIN_H_ */
