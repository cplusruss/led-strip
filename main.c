/*******************************************************************************
                      Bicycle Helmet Microcontroller Software
               Copyright (c) NixTech, Inc. 2012 All Rights Reserved
                            Rev. A, MSP430F5328
 ******************************************************************************/

#include <intrinsics.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

#include "msp430.h"
#include "main.h"
#include "lookup.h"
#include "HAL.h"
#include "I2C.h"
#include "UART.h"
#include "EEProm.h"
#include "Accel.h"
#include "Factory.h"
#include "PatternsFactory.h"
#include "PatternsGenerated.h"

void main(void)
{
	WDTCTL = WDTPW + WDTHOLD;       //Stop the WDT before any initialization begins
	__no_operation();


	initLEDPorts();					//Initialize the digital IO ports for LED outputs and Column mux
	initPowerSupply();				//Initialize Port U for Vanode (LED ports are now set low)
	initPorts();					//Initialize Bluetooth, buttons, POT and all IO user periphery
	initClocks();					//Initialize system clocks
	initUART();                     //Initialize UART
	runTests();                     //Will run factory tests if SEL and DOWN are both pressed at powerup
    checkBattery();                 //Check digital output for battery low (if battery is low, blink LED)
	checkEEPromVirginity();         //Check if we have successfully written data to EEProm
	readEEPromVariables();			//Read values from EEProm
    startAccel();                   //Start the accelerometer
	clearImageMemories();	        //Clear image memory
	configureTimerInterrupt();		//This starts the interrupt timers for the display
	initFrameCountTicks();		    //Set up event timers for polling various buttons, etc. in main()
	Pattern_Change_Occured = TRUE;  //Start first frame of pattern
    __bis_SR_register(GIE);         //Enter LPM0, enable interrupts

    Pattern_ID = PATTERN_ALL_WHITE;
	while (1)
	{
	    readAccel();                           //Compute accelerometer values
        readLightSensor();                     //Read the light sensor
	    readButton();                          //Perform button operations
		computeNewScenes();			           //Compute next scenes when pattern change occurs
	    displayNewFrame();                     //Display new frame from scene and brightness
	    CPUSleep();                            //Check for CPU sleep condition from button
	}


}

void checkBattery(void)
{
	// Check for low battery (digital low = batt low)
	if ( (P5IN & LOW_BATT_PIN) == 0x0)
	{
		__no_operation();	//Put breakpoint here .. this is where we check for low battery

	    int i;
		for (i = 2; i >= 0; i--)
		{
			// If battery is low, blink first LED of Column 2 RED (6 times)
		    TurnOnSingleLED_PWM(0x02, ~0x01, ROW_OFF_BYTE, ROW_OFF_BYTE);
			__delay_cycles(5e6);
            TurnOnSingleLED_PWM(0x02, ROW_OFF_BYTE, ROW_OFF_BYTE, ROW_OFF_BYTE);
			__delay_cycles(5e6);
		}
	}
	else
	{
		__no_operation();  //Put breakpoint here .. battery voltage > 2.2V
	}
}

void initFrameCountTicks(void)
{
    FrameCountTicks.Button  = CurrentFrameCountTick + FrameCountTicksThresh.Button;
    FrameCountTicks.Accel  = CurrentFrameCountTick + FrameCountTicksThresh.Accel;
    FrameCountTicks.AccelTraining = CurrentFrameCountTick + FrameCountTicksThresh.AccelTraining;
    FrameCountTicks.LightSensor  = CurrentFrameCountTick + FrameCountTicksThresh.LightSensor;
}

void incrementPattern(void)
{
    if (Event_Change_Flag == FALSE)
    {
        if (Pattern_ID < PATTERN_END_INDEX)
        {
            Pattern_ID++;
            goto patternChange;
        }
        else
        {
            Pattern_ID = PATTERN_START_INDEX;
            goto patternChange;
        }
    }

return;

patternChange:
    SpeedFactor = readEEPromByteWithVirginCheck(Pattern_Speed_addr[Pattern_ID], IAmAVirgin);
    Active_Pattern_ID = Pattern_ID;      //Store the last pattern
    Pattern_ID = PATTERN_ALL_BLACK;      //Display all black pattern
    Pattern_ID_Frame_Number = 0;
    writeEEPromByteWithVirginCheck(Last_Pattern_Displayed_addr, Active_Pattern_ID, IAmAVirgin);
    Pattern_Change_Occured = TRUE;
}

void readLightSensor(void)
{
	// Read the light sensor and change current brightness
    if (Event_Change_Flag == FALSE)
    {
        Current_Brightness_Multiplier_Value = LightSensorToBrightnessLookup(Light_Sensor_Value);
        Current_Brightness_Multiplier_Value = 30;
    }
    else
    {
        Current_Brightness_Multiplier_Value = 12;   //Brightness of event change flag
    }
}

void displayNewFrame(void)
{
	//Format new frame for display
	if (Current_Brightness_Multiplier_Value != Last_Brightness_Multiplier_Value || New_Frame_to_Display)
	{
		Last_Brightness_Multiplier_Value = Current_Brightness_Multiplier_Value;

		adjustBrightness();
		transfigureImageMatrix();
		New_Frame_to_Display = FALSE;
	}
}

void runTests(void)
{
	//Run Factory Test Mode
	if (RUN_FACTORY_TEST == TRUE)
	{
		factoryTest();
	}
}

void checkEEPromVirginity(void)
{
    UChar8 Virgin_E2C_Read_Byte_A = 0x00;
    UChar8 Virgin_E2C_Read_Byte_B = 0x00;
    UChar8 Virgin_E2C_Compare_Byte_A = 0x00;
    UChar8 Virgin_E2C_Compare_Byte_B = 0x00;
    BOOL Virgin_Byte_A = TRUE;
    BOOL Virgin_Byte_B = TRUE;
    Virgin_E2C_Read_Byte_A = readEEPromByteWithVirginCheck(Virgin_E2C_Prom_addr_A, FALSE);
    Virgin_E2C_Read_Byte_B = readEEPromByteWithVirginCheck(Virgin_E2C_Prom_addr_B, FALSE);
    Virgin_E2C_Compare_Byte_A = getDefaultEEPromValue(Virgin_E2C_Prom_addr_A);
    Virgin_E2C_Compare_Byte_B = getDefaultEEPromValue(Virgin_E2C_Prom_addr_B);
    if (Virgin_E2C_Read_Byte_A == Virgin_E2C_Compare_Byte_A) Virgin_Byte_A = FALSE;
    if (Virgin_E2C_Read_Byte_B == Virgin_E2C_Compare_Byte_B) Virgin_Byte_B = FALSE;
    if (Virgin_Byte_A == TRUE  || Virgin_Byte_B == TRUE)    IAmAVirgin = TRUE;
    if (Virgin_Byte_A == FALSE && Virgin_Byte_B == FALSE)   IAmAVirgin = FALSE;

    __no_operation();
}

void readEEPromVariables(void)
{
	//Default startup state - read all EEProm variables at powerup
	Max_Brightness_Scale = readEEPromByteWithVirginCheck(Factory_MAX_Brightness_addr, IAmAVirgin);
	SwRev = readEEPromByteWithVirginCheck(Software_Rev_addr, IAmAVirgin);
	Pattern_ID = readEEPromByteWithVirginCheck(Last_Pattern_Displayed_addr, IAmAVirgin);
    SpeedFactor = readEEPromByteWithVirginCheck(Pattern_Speed_addr[Pattern_ID], IAmAVirgin);

	//Data validation
	if (Pattern_ID > PATTERN_END_INDEX) Pattern_ID = PATTERN_START_INDEX;
	if (Max_Brightness_Scale == 22) Max_Brightness_Scale = 21;
}

void readButtonPin(void)
{
    //Read the button pin

    //Turn off columns
    Column_Pins |= COL_OFF_BYTE;

    //Temporarily make Pin 1.0 an input (This is GRN_0)
    P1DIR &= ~BUTTON;
    P1REN |= BUTTON;

    if ((Button_Pins & BUTTON) == 0x0)
    {
        Button_Pushed = TRUE;
    	Pattern_ID = PATTERN_ROLLING_BALL;

    }
    else
    {
    	Button_Pushed = FALSE;
    	Pattern_ID = PATTERN_TWO_BALLS;
    }

    //Make pin P1.0 an output again (This is GRN_0)
    P1DIR |= BIT0;                       // Set P4.0-P2.7 outputs (Green LED port)
    P1DS |= BIT0;                        // Set P4.0-P2.7 drive strength high
}

void readButton(void)
{
    if (CurrentFrameCountTick >= FrameCountTicksThresh.Button)
    {
        if (Button_Pushed == TRUE)
        {
            BUTTONIsLow = TRUE;
            BUTTONIsHigh = FALSE;
        }
        else
        {
            BUTTONIsLow = FALSE;
            BUTTONIsHigh = TRUE;
        }

        //Is High
        if (BUTTONIsHigh == TRUE)
        {
            BUTTONStayedLow = FALSE;
        }
        //Went High
        if (BUTTONWentLow && BUTTONIsHigh)
        {

        }
        //Stays high
        if (BUTTONWentHigh && BUTTONIsHigh)
        {
            BUTTONStayedHigh = TRUE;
            BUTTONHeldDownCount = 0;
        }

        //Is low
        if (BUTTONIsLow)
        {
            //Do nothing
        }
        //Went low
        if (BUTTONWentHigh && BUTTONIsLow)
        {
            BUTTONStayedLow = FALSE;
            BUTTONHeldDownCount = 0;

            //Toggle accelerometer to UART
            Accel_Recording = ~Accel_Recording;

            //Send start packet
            tx_byte(0xFF);
            tx_byte(0x00);
            tx_byte(0xFF);
            tx_byte(0x00);
        }
        //Stays low
        if (BUTTONWentLow && BUTTONIsLow)
        {
            BUTTONHeldDownCount++;

            if (BUTTONHeldDownCount > BUTTON_LOW_COUNT_UNTIL_DECLARED_LOW)
            {
            	__no_operation();
            	BUTTONHeldDownCount = 0;
            	SleepCommand = TRUE;
            }
        }

        BUTTONWentHigh = BUTTONIsHigh;
        BUTTONWentLow = BUTTONIsLow;

        FrameCountTicks.Button = CurrentFrameCountTick  + FrameCountTicksThresh.Button;
    }
}

void initPowerSupply(void)
{
	LDOKEYPID = 0x9628;			//See p. 936 of user guide
#if DISABLE_TI_3V_LDO == 0
	LDOPWRCTL = LDOOEN;			//3.3V LDO Enable
 	PUCTL = PUOPE + PUOUT0;		//Port U output enable and ON for VANODE driver
#endif
#if DISABLE_TI_3V_LDO == 1
    LDOPWRCTL &= ~LDOOEN;         //3.3V LDO Disable
    PUCTL = PUOPE + PUOUT0;      //Port U output enable and ON for VANODE driver
#endif

	LDOKEYID = 0x0;             // Disable access to config registers
	__delay_cycles(1000);
}

void initClocks(void)
{
	PMAPPWD = 0x02D52;                        // Enable Write-access to modify port mapping registers
	P4MAP7 = PM_MCLK;
	PMAPPWD = 0;                              // Disable Write-Access to modify port mapping registers

	// Increase Vcore setting to level3 to support fsystem=25MHz
	// NOTE: Change core voltage one level at a time..
	SetVCoreUp (0x01);
	SetVCoreUp (0x02);
	SetVCoreUp (0x03);
	UCSCTL3 = SELREF_2;                       // Set DCO FLL reference
    UCSCTL4 |= SELA_2;                        // Set ACLK = REFO

	//(see p. 51 of chip datasheet)
	// DCOx = 0, MODx = 0, DCORSELx = 5 gives a range of 23.7-54.1 MHz for the DCO frequency over
	// recommended ranges of supply voltage (in this case, Vcc >= 3.0V)
	__bis_SR_register(SCG0);                  // Disable the FLL control loop
	UCSCTL0 = 0x0000;                         // Set lowest possible DCOx, MODx
	UCSCTL1 = DCORSEL_7;                      // Select DCO range 50MHz operation
	UCSCTL2 = FLLD_1 + 762;                   // Set DCO Multiplier for 25MHz
											  // (N + 1) * FLLRef = Fdco
											  // (762 + 1) * 32768 = 25MHz
											  // Set FLL Div = fDCOCLK/2
	__bic_SR_register(SCG0);                  // Enable the FLL control loop

	// Worst-case settling time for the DCO when the DCO range bits have been
	// changed is n x 32 x 32 x f_MCLK / f_FLL_reference. See UCS chapter in 5xx
	// UG for optimization
	// 32 x 32 x 25 MHz / 32,768 Hz ~ 780k MCLK cycles for DCO to settle
	__delay_cycles(1500000);			//782000 * 2 ~ 1,500,000 (Twice as many clock cycles)

	// Loop until XT1,XT2 & DCO stabilizes - In this case only DCO has to stabilize
	do
	{
	  UCSCTL7 &= ~(XT2OFFG + XT1LFOFFG + DCOFFG);
											  // Clear XT2,XT1,DCO fault flags
	  SFRIFG1 &= ~OFIFG;                      // Clear fault flags
	} while (SFRIFG1&OFIFG);                  // Test oscillator fault flag
}

void SetVCoreUp(unsigned int level)
{
  PMMCTL0_H = PMMPW_H;                                                // Open PMM registers for write
  SVSMHCTL = SVSHE + SVSHRVL0 * level + SVMHE + SVSMHRRL0 * level;    // Set SVS/SVM high side new level
  SVSMLCTL = SVSLE + SVMLE + SVSMLRRL0 * level;                       // Set SVM low side to new level
  while ((PMMIFG & SVSMLDLYIFG) == 0);                                // Wait till SVM is settled
  PMMIFG &= ~(SVMLVLRIFG + SVMLIFG);                                  // Clear already set flags
  PMMCTL0_L = PMMCOREV0 * level;                                      // Set VCore to new level
  if ((PMMIFG & SVMLIFG))
    while ((PMMIFG & SVMLVLRIFG) == 0);                               // Wait till new level reached
  SVSMLCTL = SVSLE + SVSLRVL0 * level + SVMLE + SVSMLRRL0 * level;    // Set SVS/SVM low side to new level
  PMMCTL0_H = 0x00;                                                   // Lock PMM registers for write access
}

void CPUSleep(void)
{
	if (SleepCommand == TRUE)
	{
        P5DIR |= ENABLE_5V;            //Disable 5V Supply
        P5OUT &= ~ENABLE_5V;
    	TA1CCTL0 &= ~CCIE;             //Disable the CCR0 interrupt for timer A0
        TA1CCTL1 &= ~CCIE;             //Disable the CCR0 interrupt for timer A1
    	P1DIR &= ~BUTTON;              //P1.0 is input
    	P1IFG &= ~BUTTON;              //Clear pending interrupts
    	P1IES |= BUTTON;               //Interrupt on falling edge

    	if ((P1IN & BUTTON) == 0x1)
    	{
    		__delay_cycles(1e6);                      //Debounce rising edge of switch
        	 P1IE |= BUTTON;                          //Interrupt Enable
    	    __bis_SR_register(LPM4_bits);             //Enter LPM4
    	}
    	__no_operation();
	}
}

void initLEDPorts(void)
{
	//Set up the column register pins
	Column_Pins = COL_OFF_BYTE;
	P4DS = 0xFF;	  					//Set P10.0-P2.7  drive strength high
	P4DIR = 0xFF;		                //Col pins are outputs
	P4REN = 0x00;                       //disable internal pu/pd res

	//LED Pins
	P2DIR = 0xFF;     					// Set P6.0-P1.7 outputs (Blue LED port)
	P2DS = 0xFF;	  					// Set P6.0-P1.7 drive strength high
	Red_Row_Pins = ROW_OFF_BYTE;		// Clear the row

	P1DIR = 0xFF;     					// Set P4.0-P2.7 outputs (Green LED port)
	P1DS = 0xFF;	  					// Set P4.0-P2.7 drive strength high
	Green_Row_Pins = ROW_OFF_BYTE;		// Clear the row

	P6DIR = 0xFF;     					// Set P2.0-P2.7 outputs (Blue LED port)
	P6DS = 0xFF;	  					// Set P2.0-P2.7 drive strength high
	Blue_Row_Pins = ROW_OFF_BYTE;		// Clear the row
	  __delay_cycles(75);                //Wait for ports/DCO to settle before turning on Vanode to drive LED columns
}

void initPorts(void)
{
    //I2C Pins
	P5DIR |= I2C_SDA + I2C_SCL;        //I2C_SDA and I2C_SCL outputs
    P5OUT |= I2C_SDA;                  //I2C_SDA = 1,
    P5OUT &= ~I2C_SCL;		           //I2C_SCL = 0

    //Low Battery Pin
    P5DIR &= ~LOW_BATT_PIN;
    P5REN &= ~LOW_BATT_PIN;

    __delay_cycles(300);

    //5V Enable
    P5DIR |= ENABLE_5V;                //Enable_5V Output
    P5OUT |= ENABLE_5V;

    //Test Points
    P6DIR |= TP49_PIN7_TEST_9_RED_6  + TP50_PIN8_TEST_10_RED_7;
    P1DIR |= PIN24_J9_6__ROW_ON_OFF_TIME__TEST_2_GRN_6 + PIN25_J9_5__DISPLAY_INTERRUPT__TEST_3_GRN_7;
    P2DIR |= PIN32_J9_4__MAIN_EXECUTION__TEST_4_BLU_6 + PIN33_J9_3__ADC_TIMER_B0__TEST_5_BLU_7;
    P3DIR |= PIN37_J6_10__TEST_6_TX + PIN38_J6_9__TEST_7_RX;
	Test_Pins_P6 |= TP49_PIN7_TEST_9_RED_6  + TP50_PIN8_TEST_10_RED_7;
	Test_Pins_P1 |= PIN24_J9_6__ROW_ON_OFF_TIME__TEST_2_GRN_6 + PIN25_J9_5__DISPLAY_INTERRUPT__TEST_3_GRN_7;
	Test_Pins_P2 |= PIN32_J9_4__MAIN_EXECUTION__TEST_4_BLU_6 + PIN33_J9_3__ADC_TIMER_B0__TEST_5_BLU_7;
	Test_Pins_P3 |= PIN37_J6_10__TEST_6_TX + PIN38_J6_9__TEST_7_RX;
}


void computeNewScenes(void)
{
	//Now compute new scenes
	if (CurrentFrameCountTick >= Frame_Count_Time_to_Next_Scene || Pattern_Change_Occured == TRUE)
	{
		createNextFrame();     //This writes to ImageMatrix (LED bitmap)
		Pattern_Change_Occured = FALSE;
		New_Frame_to_Display = TRUE;
	}
}

void createNextFrame(void)
{
    Pattern_ID_Frame_Number++;

    if (Pattern_ID == PATTERN_ACCELEROMETER)
    {
        Pattern_ID_Frame_Number = x_accel;
    }

	switch (Pattern_ID)
	{
		//User interface patterns
		case PATTERN_ALL_BLACK      : __Pattern_All_Black(); break;
		case PATTERN_RED_FLASH      : __Pattern_Red_Flash(); break;
		case PATTERN_GREEN_FLASH    : __Pattern_Green_Flash(); break;

		//Built in customizable patterns
		case PATTERN_ALL_WHITE      : Pattern_0_All_White(); break;
		case PATTERN_ACCELEROMETER  : Pattern_1_Accelerometer(); break;
		case PATTERN_RANDOM_ALL     : Pattern_2_Random_All(); break;
		case PATTERN_RANDOM_SINGLE  : Pattern_3_Random_Single(); break;
		case PATTERN_ROLLING_BALL   : Pattern_6_Rolling_Ball(); break;
		case PATTERN_TWO_BALLS      : Pattern_6_Two_Balls(); break;

		//Patterns from PC pattern generator application
		case 9 : Pattern_4_U_S_A(); break;
		case 10 : Pattern_5_COP(); break;
		case 11 : Pattern_6_BALL_8(); break;
		case 12 : Pattern_7_2_RODS(); break;
		case 13 : Pattern_8_SPIRAL_SWIPE(); break;
		case 14 : Pattern_10_MIDDLE_SWIPE(); break;
		case 15 : Pattern_12_RASTA(); break;
		case 16 : Pattern_13_EXPAND_CONTRACT(); break;

	    default: Pattern_0_All_White(); break;
	}

	adjustSpeed();
}

void adjustSpeed(void)
{
    SpeedFactor = 1;

	//Speed adjustment
	if (Pattern_ID < FACTORY_PATTERN_START_INDEX)
	{
		Pattern_ID_Frame_Time_With_Speed = Pattern_ID_Frame_Time  * SpeedFactor;
		Frame_Count_Time_to_Next_Scene = CurrentFrameCountTick + Pattern_ID_Frame_Time_With_Speed;
	}
	else
	{
		//Factory patterns are not affected by user speed setting
		Frame_Count_Time_to_Next_Scene = CurrentFrameCountTick + Pattern_ID_Frame_Time;
	}
}

void adjustBrightness(void)
{
	//Adjust the brightness based on the light sensor reading
	//ADC reading is a 5-bit unsigned integer value
	UInt16 CurrentColumn;
	UInt16 CurrentRow;
	UInt16 Red_Value;
	UInt16 Green_Value;
	UInt16 Blue_Value;
	UChar8 Temp_Red_Value;
	UInt16 Temp2_Red_Value;
	UChar8 Temp_Green_Value;
	UInt16 Temp2_Green_Value;
	UChar8 Temp_Blue_Value;
	UInt16 Temp2_Blue_Value;

	for (CurrentColumn = 0; CurrentColumn < NUM_COLS; CurrentColumn++)
	{
		for (CurrentRow = 0; CurrentRow < NUM_ROWS; CurrentRow++)
		{
			Temp_Red_Value = ImageMatrix[CurrentColumn][CurrentRow] >> 10;
			Temp2_Red_Value = Temp_Red_Value * Current_Brightness_Multiplier_Value;
			Red_Value = (Temp2_Red_Value << 5) & 0x7C00;
			Temp_Green_Value = (ImageMatrix[CurrentColumn][CurrentRow] >> 5) & 0x1F;
			Temp2_Green_Value = Temp_Green_Value * Current_Brightness_Multiplier_Value;
			Green_Value = Temp2_Green_Value & 0x03E0;
			Temp_Blue_Value = ImageMatrix[CurrentColumn][CurrentRow] & 0x1F;
			Temp2_Blue_Value = Temp_Blue_Value * Current_Brightness_Multiplier_Value;
			Blue_Value = (Temp2_Blue_Value >> 5) & 0x001F;
			ImageMatrixBrightness[CurrentColumn][CurrentRow] = Red_Value | Green_Value | Blue_Value;
		}
	}
}

void clearImageMemories(void)
{
	UInt16 CurrentColumn;
	UInt16 CurrentRow;
	for (CurrentColumn = 0; CurrentColumn < NUM_COLS; CurrentColumn++)
	{
		for (CurrentRow = 0; CurrentRow < NUM_ROWS; CurrentRow++)
		{
			ImageMatrix[CurrentColumn][CurrentRow] = 0;
			ImageMatrixBrightness[CurrentColumn][CurrentRow] = 0;
		}
	}
	__no_operation();
}

void getNextBits(unsigned int ImageMatrixColumn, unsigned int AddressOfBrightnessBit)
{
	UInt16 CurrentRowPixel;
	UInt16 BrightnessBit[NUM_COLOR_CHANNELS];
	UInt16 PixelValue;
	Red_Row_Pins_Row = 0x0000;
	Green_Row_Pins_Row = 0x0000;
	Blue_Row_Pins_Row = 0x0000;
	PixelValue = 0x0000;
	//Extract bits from the ImageMatrix column
	for (CurrentRowPixel = 0; CurrentRowPixel < NUM_COLS; CurrentRowPixel++)
	{
		PixelValue = ImageMatrixBrightness[ImageMatrixColumn][CurrentRowPixel];
		BrightnessBit[RED_CHANNEL] = (PixelValue >> AddressOfBrightnessBit + 10) & 0x0001;
		BrightnessBit[GREEN_CHANNEL] = (PixelValue >> AddressOfBrightnessBit + 5) & 0x0001;
		BrightnessBit[BLUE_CHANNEL] = (PixelValue >> AddressOfBrightnessBit + 0) & 0x0001;
		BrightnessBit[RED_CHANNEL] = BrightnessBit[RED_CHANNEL] << CurrentRowPixel;
		BrightnessBit[GREEN_CHANNEL] = BrightnessBit[GREEN_CHANNEL] << CurrentRowPixel;
		BrightnessBit[BLUE_CHANNEL] = BrightnessBit[BLUE_CHANNEL] << CurrentRowPixel;
		Red_Row_Pins_Row |= BrightnessBit[RED_CHANNEL];
		Green_Row_Pins_Row  |= BrightnessBit[GREEN_CHANNEL];
		Blue_Row_Pins_Row |= BrightnessBit[BLUE_CHANNEL];
	}
}

void transfigureImageMatrix()
{
	UInt16 CurrentBrightnessBit;
	UInt16 CurrentColumn;
	UInt16 CurrentRow;
	UInt16 Red_Value;
	UInt16 Green_Value;
	UInt16 Blue_Value;

	for (CurrentColumn = 0; CurrentColumn < NUM_COLS; CurrentColumn++)
	{
		for (CurrentBrightnessBit = 0; CurrentBrightnessBit < NUMBER_OF_BRIGHTNESS_BITS; CurrentBrightnessBit++)
		{
			getNextBits(CurrentColumn, CurrentBrightnessBit);
			Red_Row_Pins_Image[CurrentColumn][CurrentBrightnessBit] = (~Red_Row_Pins_Row & 0x3F) | 0xC0;
			Green_Row_Pins_Image[CurrentColumn][CurrentBrightnessBit] = (~Green_Row_Pins_Row & 0x3F) | 0xC0;
			Blue_Row_Pins_Image[CurrentColumn][CurrentBrightnessBit] = (~Blue_Row_Pins_Row & 0x3F) | 0xC0;
		}
	}
}

void configureTimerInterrupt(void)
{
	// TimerA0 setup
    // This is the timer for display
	TimerA0_Toggle_Rate =  22 * SMCLK_SCALE_FACTOR;			//This gives us a frame rate of ~115Hz
	TimerA0_Toggle_Rate_Bit0_Brightness_Levels = TimerA0_Toggle_Rate;
	TimerA0_Toggle_Rate_Bit1_Brightness_Levels = TimerA0_Toggle_Rate * 2;
	TimerA0_Toggle_Rate_Bit2_Brightness_Levels = TimerA0_Toggle_Rate * 4;
	TimerA0_Toggle_Rate_Bit3_Brightness_Levels = TimerA0_Toggle_Rate * 8;
	TimerA0_Toggle_Rate_Bit4_Brightness_Levels = TimerA0_Toggle_Rate * 16;

	TA1CCTL0 = CCIE;                									//Enable the CCR0 interrupt for timer A0
	TA1CCR0 = TimerA0_Toggle_Rate_Bit0_Brightness_Levels;				//This is number of clock ticks for Timer A0 to trigger

	// TimerA1 setup
	// This is the timer for row disabling (max brightness)
	setupTimerA1DelayValues();

	TA1CCTL1 = CCIE;                						            //Enable the CCR0 interrupt for timer A1
	TA1CCR1 = TimerA1_Toggle_Rate_Bit0_Row_Disable;				        //This is number of clock ticks for Timer A1 to trigger

	//SMCLK is has an 8us resolution
	//CCR0 is 32678 for 1Hz operation, so we can scale timings from there
	//SMCLK, Divide by 1, continuous mode up, clear
	TA1CTL = TASSEL__SMCLK + ID__1 + MC__UP + TACLR;		            //Start the timer and ISR
}

void setupTimerA1DelayValues(void)
{
	TimerA1_Delay_Value = Max_Brightness_Scale * SMCLK_SCALE_FACTOR;
	TimerA1_Toggle_Rate_Bit0_Row_Disable = TimerA1_Delay_Value;
	TimerA1_Toggle_Rate_Bit1_Row_Disable = TimerA1_Delay_Value * 2;
	TimerA1_Toggle_Rate_Bit2_Row_Disable = TimerA1_Delay_Value * 4;
	TimerA1_Toggle_Rate_Bit3_Row_Disable = TimerA1_Delay_Value * 8;
	TimerA1_Toggle_Rate_Bit4_Row_Disable = TimerA1_Delay_Value * 16;
}

// Timer A1 ISR
#pragma vector=TIMER1_A1_VECTOR
__interrupt void TIMER1_A1_ISR(void)
{
	  switch(__even_in_range(TA1IV,14))
	  {
	    case 0: break;
	    case 2:
	    	if (giveMeMaxBrightnessTimerA1 == FALSE)
	    	{
	    		Red_Row_Pins |= ROW_OFF_BYTE;
				Green_Row_Pins |= ROW_OFF_BYTE;
				Blue_Row_Pins |= ROW_OFF_BYTE;

				Test_Pins_P1 &= ~PIN24_J9_6__ROW_ON_OFF_TIME__TEST_2_GRN_6;  //Off time
	    	}

	             break;
	    case 4:  break;
	    case 6:  break;                         // CCR3 not used
	    case 8:  break;                         // CCR4 not used
	    case 10: break;                         // CCR5 not used
	    case 12: break;                         // Reserved not used
	    case 14: break;                         // overflow
	    default: break;
	 }
}

// Timer A0 ISR
#pragma vector=TIMER1_A0_VECTOR
__interrupt void TIMER1_A0_ISR(void)
{
	Test_Pins_P1 |= PIN24_J9_6__ROW_ON_OFF_TIME__TEST_2_GRN_6;   //On time

	//Toggle
	if ( (Test_Pins_P1 & PIN25_J9_5__DISPLAY_INTERRUPT__TEST_3_GRN_7) == 0x0)
	{
		Test_Pins_P1 |= PIN25_J9_5__DISPLAY_INTERRUPT__TEST_3_GRN_7;
	}
	else
	{
		Test_Pins_P1 &= ~PIN25_J9_5__DISPLAY_INTERRUPT__TEST_3_GRN_7;
	}

	//Column code
	if (Column_Completed == TRUE)
	{
		Red_Row_Pins |= ROW_OFF_BYTE;
		Green_Row_Pins |= ROW_OFF_BYTE;
		Blue_Row_Pins |= ROW_OFF_BYTE;
		Column_Pins |= COL_OFF_BYTE;
		Column_Completed = FALSE;
	}

	//Clear pins
	Red_Row_Pins |= ROW_OFF_BYTE;
	Green_Row_Pins |= ROW_OFF_BYTE;
	Blue_Row_Pins |= ROW_OFF_BYTE;

	//Brightness bit code
	switch (Brightness_Bit_Count)
	{
		case 0:
			TA1CCR0 = TimerA0_Toggle_Rate_Bit0_Brightness_Levels;
			TA1CCR1 = TimerA1_Toggle_Rate_Bit0_Row_Disable;
			Red_Row_Pins &= Red_Row_Pins_Image[Column_Count][Brightness_Bit_Count];
			Green_Row_Pins &= Green_Row_Pins_Image[Column_Count][Brightness_Bit_Count];
            Blue_Row_Pins &= Blue_Row_Pins_Image[Column_Count][Brightness_Bit_Count];
			break;
		case 1:
			TA1CCR0 = TimerA0_Toggle_Rate_Bit1_Brightness_Levels;
			TA1CCR1 = TimerA1_Toggle_Rate_Bit1_Row_Disable;
			Red_Row_Pins &= Red_Row_Pins_Image[Column_Count][Brightness_Bit_Count];
			Green_Row_Pins &= Green_Row_Pins_Image[Column_Count][Brightness_Bit_Count];
			Blue_Row_Pins &= Blue_Row_Pins_Image[Column_Count][Brightness_Bit_Count];
			break;
		case 2:
			TA1CCR0 = TimerA0_Toggle_Rate_Bit2_Brightness_Levels;
			TA1CCR1 = TimerA1_Toggle_Rate_Bit2_Row_Disable;
			Red_Row_Pins &= Red_Row_Pins_Image[Column_Count][Brightness_Bit_Count];
			Green_Row_Pins &= Green_Row_Pins_Image[Column_Count][Brightness_Bit_Count];
			Blue_Row_Pins &= Blue_Row_Pins_Image[Column_Count][Brightness_Bit_Count];
			break;
		case 3:
			TA1CCR0 = TimerA0_Toggle_Rate_Bit3_Brightness_Levels;
			TA1CCR1 = TimerA1_Toggle_Rate_Bit3_Row_Disable;
			Red_Row_Pins &= Red_Row_Pins_Image[Column_Count][Brightness_Bit_Count];
			Green_Row_Pins &= Green_Row_Pins_Image[Column_Count][Brightness_Bit_Count];
			Blue_Row_Pins &= Blue_Row_Pins_Image[Column_Count][Brightness_Bit_Count];
			break;
		case 4:
			TA1CCR0 = TimerA0_Toggle_Rate_Bit4_Brightness_Levels;
			TA1CCR1 = TimerA1_Toggle_Rate_Bit4_Row_Disable;
			Red_Row_Pins &= Red_Row_Pins_Image[Column_Count][Brightness_Bit_Count];
			Green_Row_Pins &= Green_Row_Pins_Image[Column_Count][Brightness_Bit_Count];
			Blue_Row_Pins &= Blue_Row_Pins_Image[Column_Count][Brightness_Bit_Count];
			Brightness_Bit_Count = 0;
			Column_Completed = TRUE;

		    Test_Pins_P3 |= PIN37_J6_10__TEST_6_TX;
		    Test_Pins_P3 &= ~PIN37_J6_10__TEST_6_TX;

			break;
		default:
			break;
	}

	//Increment to next brightness interval
	if (Column_Completed == FALSE) Brightness_Bit_Count++;

	//Turn on columns in multiplexer
	switch (Column_Count)
	{
		case 6: Column_Register = ~0x01; break;
		case 7: Column_Register = ~0x02; break;
		case 4: Column_Register = ~0x04; break;
		case 5: Column_Register = ~0x08; break;
		case 3: Column_Register = ~0x10; break;
		case 2: Column_Register = ~0x20; break;
		case 1: Column_Register = ~0x40; break;
		case 0: Column_Register = ~0x80;
			readButtonPin();
        	break;

		default: break;
	}

	if (Column_Completed == TRUE)
	{
		Column_Count++;

		if (Column_Count == NUM_COLS)
		{
			Column_Count = 0;

			if (CurrentFrameCountTick > 0xFFFF)
				CurrentFrameCountTick = 0x0000;
			else
			{
				//Increment frame count, every 30 hz, (this count rolls over)
				CurrentFrameCountTick++;
			}
		}
	}
	Column_Pins = Column_Register;
}


// Port 1 interrupt service routine
/*
#pragma vector=PORT1_VECTOR
__interrupt void Port_1(void)
{

	  _BIC_SR_IRQ(LPM4_bits);                   //Exit LPM4

	  //Power-on reset
	  PMMCTL0 |= 0xA5;                          //Unlock the PMM register
	  PMMCTL0 |= PMMSWPOR;                      //Power-on reset (self-clearing bit)

}

*/

