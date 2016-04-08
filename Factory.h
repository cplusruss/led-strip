/*******************************************************************************
                      Bicycle Helmet Microcontroller Software
               Copyright (c) NixTech, Inc. 2012 All Rights Reserved
                            Rev. A, MSP430F5328
 ******************************************************************************/

#include "HAL.h"

#ifndef FACTORY_H_
#define FACTORY_H_

void TurnOnSingleLED(char,char);
void LEDButtonsTest(void);
void EEPromSetup(void);
void EEPromStressTest(void);
void ButtonTest(void);
void TurnOnLED_PWM(char, char, char, char);
void TurnOnSingleLED_PWM(char, char, char, char);
void TurnOffLED(char,  char);

extern void delay_ms(unsigned int);

//Random memory array
int currentByte;
volatile unsigned char randomMemoryArrayToWrite[128];
volatile unsigned char randomMemoryArrayToRead[128];
BOOL randomMemoryArraysAreIdentical;

#include "Factory.h"
#include "EEProm.h"
#include "HAL.h"
#include <stdlib.h>


void factoryTest(void)
{
    LEDButtonsTest();                                   /* TEST 1 */
    EEPromSetup();                                      /* TEST 2 */

    //MIC Test
}


void EEPromSetup(void)
{
    volatile int i;
    BOOL TestPassed = FALSE;
    unsigned char EEPromWrittenBytes[128] = {0x00};
    unsigned char EEPromDefaultBytes[128] = {0x00};

    //Take Virginity and Write defaults

    //Set EEProm virginity + EEProm default values
    writeEEPromByte(Virgin_E2C_Prom_addr_A, getDefaultEEPromValue(Virgin_E2C_Prom_addr_A));
    writeEEPromByte(Virgin_E2C_Prom_addr_B, getDefaultEEPromValue(Virgin_E2C_Prom_addr_B));
    writeEEPromByte(Factory_MAX_Brightness_addr, getDefaultEEPromValue(Factory_MAX_Brightness_addr));
    writeEEPromByte(Software_Rev_addr, getDefaultEEPromValue(Software_Rev_addr));
    writeEEPromByte(MIC_Sensitivity_addr, getDefaultEEPromValue(MIC_Sensitivity_addr));
    writeEEPromByte(MIC_Mode_Active_addr, getDefaultEEPromValue(MIC_Mode_Active_addr));
    writeEEPromByte(Favorite_Color_addr, getDefaultEEPromValue(Favorite_Color_addr));
    writeEEPromByte(Pattern_Speed_Global_addr, getDefaultEEPromValue(Pattern_Speed_Global_addr));
    writeEEPromByte(Last_Pattern_Displayed_addr, getDefaultEEPromValue(Last_Pattern_Displayed_addr));
    writeEEPromByte(Custom_Color_Index_Frame_A_addr, getDefaultEEPromValue(Custom_Color_Index_Frame_A_addr));
    writeEEPromByte(Custom_Color_Index_Frame_B_addr, getDefaultEEPromValue(Custom_Color_Index_Frame_B_addr));
    writeEEPromByte(Custom_Color_Index_Frame_C_addr, getDefaultEEPromValue(Custom_Color_Index_Frame_C_addr));
    writeEEPromByte(Op_Amp_High_Gain_addr, getDefaultEEPromValue(Op_Amp_High_Gain_addr));
    for (i = 0; i <= 30; i++)
    {
        writeEEPromByte(Pattern_Speed_addr[i + 3], getDefaultEEPromValue(Pattern_Speed_addr[i + 3]));
    }

    //Read back memory
    EEPromWrittenBytes[0] = readEEPromByte(Virgin_E2C_Prom_addr_A);
    EEPromWrittenBytes[1] = readEEPromByte(Virgin_E2C_Prom_addr_B);
    EEPromWrittenBytes[2] = readEEPromByte(Factory_MAX_Brightness_addr);
    EEPromWrittenBytes[3] = readEEPromByte(Software_Rev_addr);
    EEPromWrittenBytes[4] = readEEPromByte(MIC_Sensitivity_addr);
    EEPromWrittenBytes[5] = readEEPromByte(MIC_Mode_Active_addr);
    EEPromWrittenBytes[6] = readEEPromByte(Favorite_Color_addr);
    EEPromWrittenBytes[7] = readEEPromByte(Pattern_Speed_Global_addr);
    EEPromWrittenBytes[8] = readEEPromByte(Last_Pattern_Displayed_addr);
    EEPromWrittenBytes[9] = readEEPromByte(Custom_Color_Index_Frame_A_addr);
    EEPromWrittenBytes[10] = readEEPromByte(Custom_Color_Index_Frame_B_addr);
    EEPromWrittenBytes[11] = readEEPromByte(Custom_Color_Index_Frame_C_addr);
    EEPromWrittenBytes[12] = readEEPromByte(Op_Amp_High_Gain_addr);
    for (i = 0; i <= 30; i++)
    {
        EEPromWrittenBytes[i + 13] = readEEPromByte(Pattern_Speed_addr[i + 3]);
    }

    //Read back defaults
    EEPromDefaultBytes[0] = getDefaultEEPromValue(Virgin_E2C_Prom_addr_A);
    EEPromDefaultBytes[1] = getDefaultEEPromValue(Virgin_E2C_Prom_addr_B);
    EEPromDefaultBytes[2] = getDefaultEEPromValue(Factory_MAX_Brightness_addr);
    EEPromDefaultBytes[3] = getDefaultEEPromValue(Software_Rev_addr);
    EEPromDefaultBytes[4] = getDefaultEEPromValue(MIC_Sensitivity_addr);
    EEPromDefaultBytes[5] = getDefaultEEPromValue(MIC_Mode_Active_addr);
    EEPromDefaultBytes[6] = getDefaultEEPromValue(Favorite_Color_addr);
    EEPromDefaultBytes[7] = getDefaultEEPromValue(Pattern_Speed_Global_addr);
    EEPromDefaultBytes[8] = getDefaultEEPromValue(Last_Pattern_Displayed_addr);
    EEPromDefaultBytes[9] = getDefaultEEPromValue(Custom_Color_Index_Frame_A_addr);
    EEPromDefaultBytes[10] = getDefaultEEPromValue(Custom_Color_Index_Frame_B_addr);
    EEPromDefaultBytes[11] = getDefaultEEPromValue(Custom_Color_Index_Frame_C_addr);
    EEPromDefaultBytes[12] = getDefaultEEPromValue(Op_Amp_High_Gain_addr);
    for (i = 0; i <= 30; i++)
    {
        EEPromDefaultBytes[i + 13] = getDefaultEEPromValue(Pattern_Speed_addr[i + 3]);
    }

    //Compare read back memory to default values
    for (i = 0; i < 128; i++)
    {
        if (EEPromWrittenBytes[i] == EEPromDefaultBytes[i])
        {
            __no_operation();

            TestPassed = TRUE;
        }
        else
        {
            __no_operation();

            TestPassed = FALSE;
            goto testCompleted;
        }
    }

 testCompleted:
    //Turn on LED green (pass) or red (fail)
    if (TestPassed == TRUE)
    {
        while ( (Button_Pins & BUTTON) != 0x0)
        {
            //Turn on green LED #1
            TurnOnSingleLED_PWM(0x01, ROW_OFF_BYTE, ~0x01, ROW_OFF_BYTE);
            __no_operation();
        }
    }
    else
    {
        while (1)
        {
            //Turn on red LED #1
            TurnOnSingleLED_PWM(0x01, ~0x01, ROW_OFF_BYTE, ROW_OFF_BYTE);
            __no_operation();
        }
    }
}

//Part of Engineering Tests
//This fills memory with random data and reads it back
//3 green blinks = pass
//3 red blinks = fail
void EEPromStressTest(void)
{
    //Blink LED #1 3 times blue
    //Write all 128 bytes of EEProm with random data, then read back and compare
    //If memory test is good, blink green LED 3 times, or if bad, blink red LED 3 times
    int i;
    for (i = 0; i < 3; i++)
    {
        //Turn on red LED #1
        TurnOnLED_PWM(0x01, ROW_OFF_BYTE, ROW_OFF_BYTE, ~0x01);
        __delay_cycles(5000000);
        Column_Pins = COL_OFF_BYTE;
        __delay_cycles(5000000);
    }

    //Create random memory array  RAM
    for (currentByte = 0; currentByte < 128; currentByte++)
    {
        //randomMemoryArrayToWrite[currentByte] = rand() & 0xFF;
        randomMemoryArrayToWrite[currentByte] = rand() & 0xFF;
    }
    //Write random memory array to EEProm
    for (currentByte = 0; currentByte < 128; currentByte++)
    {
        writeEEPromByte(currentByte, randomMemoryArrayToWrite[currentByte]);
    }
    //Clear variable for memory read back from I2C
    for (currentByte = 0; currentByte < 128; currentByte++)
    {
        randomMemoryArrayToRead[currentByte] = 0x00;
    }
    //Read back random memory array from EEProm
    for (currentByte = 0; currentByte < 128; currentByte++)
    {
       randomMemoryArrayToRead[currentByte] = readEEPromByte(currentByte);
    }

    __no_operation();

    //Check that random memory array we wrote to EEProm is the same as what we read back
      randomMemoryArraysAreIdentical = TRUE;
      for (currentByte = 0; currentByte < 128; currentByte++)
      {
         if (randomMemoryArrayToWrite[currentByte] != randomMemoryArrayToRead[currentByte])
         {
             randomMemoryArraysAreIdentical = FALSE;
         }
      }
        if (randomMemoryArraysAreIdentical == TRUE)
        {

            __no_operation();

            for (i = 0; i < 3; i++)
            {
                //Turn on green LED #1
                TurnOnLED_PWM(0x01, ROW_OFF_BYTE, ~0x01, ROW_OFF_BYTE);
                __delay_cycles(5000000);
                Column_Pins = COL_OFF_BYTE;
                __delay_cycles(5000000);
            }
        }
        if (randomMemoryArraysAreIdentical == FALSE)
        {

            __no_operation();

            for (i = 0; i < 3; i++)
            {
                //Turn on red LED #1
                TurnOnLED_PWM(0x01, ~0x01, ROW_OFF_BYTE, ROW_OFF_BYTE);
                __delay_cycles(5000000);
                Column_Pins = COL_OFF_BYTE;
                __delay_cycles(5000000);
            }
        }
         __delay_cycles(5000000);

        //Clear memory
        for (currentByte = 0; currentByte < 128; currentByte++)
        {
            writeEEPromByte(currentByte, 0x00);
        }
        //Write all 1s to memory array we are reading back from I2C
        //This is to test that we have cleared the memory completely
        for (currentByte = 0; currentByte < 128; currentByte++)
        {
            randomMemoryArrayToRead[currentByte] = 0xFF;
        }
        //Read back random memory array from EEProm
        for (currentByte = 0; currentByte < 128; currentByte++)
        {
           randomMemoryArrayToRead[currentByte] = readEEPromByte(currentByte);
        }
          randomMemoryArraysAreIdentical = TRUE;
          for (currentByte = 0; currentByte < 128; currentByte++)
          {
             if (randomMemoryArrayToRead[currentByte] != 0x00)
             {
                 randomMemoryArraysAreIdentical = FALSE;
             }
          }
            if (randomMemoryArraysAreIdentical == TRUE)
            {
                __no_operation();

                for (i = 0; i < 3; i++)
                {
                    //Turn on green LED #1
                    TurnOnSingleLED_PWM(0x01, ROW_OFF_BYTE, ~0x01, ROW_OFF_BYTE);
                    __delay_cycles(5000000);
                    Column_Pins = COL_OFF_BYTE;
                    __delay_cycles(5000000);
                }
            }
            if (randomMemoryArraysAreIdentical == FALSE)
            {

                __no_operation();

                for (i = 0; i < 3; i++)
                {
                    //Turn on red LED #1
                    TurnOnSingleLED_PWM(0x01, ~0x01, ROW_OFF_BYTE, ROW_OFF_BYTE);
                    __delay_cycles(5000000);
                    Column_Pins = COL_OFF_BYTE;
                    __delay_cycles(5000000);
                }
            }

        //Take Virginity and Write defaults

        //Set EEProm virginity + EEProm default values
        writeEEPromByte(Virgin_E2C_Prom_addr_A, getDefaultEEPromValue(Virgin_E2C_Prom_addr_A));
        writeEEPromByte(Virgin_E2C_Prom_addr_B, getDefaultEEPromValue(Virgin_E2C_Prom_addr_B));
        writeEEPromByte(Factory_MAX_Brightness_addr, getDefaultEEPromValue(Factory_MAX_Brightness_addr));
        writeEEPromByte(Software_Rev_addr, getDefaultEEPromValue(Software_Rev_addr));
        writeEEPromByte(MIC_Sensitivity_addr, getDefaultEEPromValue(MIC_Sensitivity_addr));
        writeEEPromByte(MIC_Mode_Active_addr, getDefaultEEPromValue(MIC_Mode_Active_addr));
        writeEEPromByte(Favorite_Color_addr, getDefaultEEPromValue(Favorite_Color_addr));
        writeEEPromByte(Pattern_Speed_Global_addr, getDefaultEEPromValue(Pattern_Speed_Global_addr));
        writeEEPromByte(Last_Pattern_Displayed_addr, getDefaultEEPromValue(Last_Pattern_Displayed_addr));
        writeEEPromByte(Op_Amp_High_Gain_addr, getDefaultEEPromValue(Op_Amp_High_Gain_addr));
}

void TurnOnLED(char col,  char red, char green, char blue)
{

    Column_Pins = COL_OFF_BYTE;
    Red_Row_Pins = ROW_OFF_BYTE;
    Green_Row_Pins = ROW_OFF_BYTE;
    Blue_Row_Pins = ROW_OFF_BYTE;

    Green_Row_Pins = green;
    Red_Row_Pins = red;
    Blue_Row_Pins = blue;
    Column_Pins = ~col;
}

void TurnOnLED_PWM(char col,  char red, char green, char blue)
{
    int i;
    for ( i = 0; i < 150; i++)
    {
        Column_Pins = 0xFF;
        Red_Row_Pins = ROW_OFF_BYTE;
        Green_Row_Pins = ROW_OFF_BYTE;
        Blue_Row_Pins = ROW_OFF_BYTE;
        Green_Row_Pins = green;
        Red_Row_Pins = red;
        Blue_Row_Pins = blue;
        Column_Pins = ~col;
        __delay_cycles(1);

        Column_Pins = COL_OFF_BYTE;
        Red_Row_Pins = ROW_OFF_BYTE;
        Green_Row_Pins = ROW_OFF_BYTE;
        Blue_Row_Pins = ROW_OFF_BYTE;
        Column_Pins = COL_OFF_BYTE;
        __delay_cycles(150);

    }
}



void TurnOnSingleLED_PWM(char col,  char red, char green, char blue)
{
    int i;
    for ( i = 0; i < 300; i++)
    {
        Column_Pins = 0xFF;
        Red_Row_Pins = ROW_OFF_BYTE;
        Green_Row_Pins = ROW_OFF_BYTE;
        Blue_Row_Pins = ROW_OFF_BYTE;
        Green_Row_Pins = green;
        Red_Row_Pins = red;
        Blue_Row_Pins = blue;
        Column_Pins = ~col;
        __delay_cycles(100);

        Column_Pins = COL_OFF_BYTE;
        Red_Row_Pins = ROW_OFF_BYTE;
        Green_Row_Pins = ROW_OFF_BYTE;
        Blue_Row_Pins = ROW_OFF_BYTE;
        Column_Pins = COL_OFF_BYTE;
        __delay_cycles(15000);
    }
}



void TurnOffLED(char col,  char pixel)
{
    Column_Pins = COL_OFF_BYTE;
    Red_Row_Pins = ROW_OFF_BYTE;
    Green_Row_Pins = ROW_OFF_BYTE;
    Blue_Row_Pins = ROW_OFF_BYTE;

    Green_Row_Pins = ~pixel;
    Red_Row_Pins = ~pixel;
    Blue_Row_Pins = ~pixel;
    Column_Pins = COL_OFF_BYTE;
}

void LEDButtonsTest(void)
{
    /******************************
     *
     * Test Red, Green, Blue columns
     *
     ******************************/

    //Test all RED pixels
    int i, j;
    for (i = 0; i < 150; i++)
    {
        for (j = 0; j < NUM_COLS; j++)
        {
            char col = (0x1 << j);
            TurnOnLED_PWM(col, ROW_ON_BYTE, ROW_OFF_BYTE, ROW_OFF_BYTE);
        }
    }

    while ((Button_Pins & BUTTON) != 0x0) {
        for (j = 0; j < NUM_COLS; j++)
        {
            char col = (0x1 << j);
            TurnOnLED_PWM(col, ROW_ON_BYTE, ROW_OFF_BYTE, ROW_OFF_BYTE);
        }
    }

    //Test all GREEN pixels
    for (i = 0; i < 150; i++)
    {
        for (j = 0; j < NUM_COLS; j++)
        {
            char col = (0x1 << j);
            TurnOnLED_PWM(col, ROW_OFF_BYTE, ROW_ON_BYTE, ROW_OFF_BYTE);
        }
    }
    //Test UP button

    //Test all BLUE pixels
    for (i = 0; i < 150; i++)
    {
        for (j = 0; j < NUM_COLS; j++)
        {
            char col = (0x1 << j);
            TurnOnLED_PWM(col, ROW_OFF_BYTE, ROW_OFF_BYTE, ROW_ON_BYTE);
        }
    }
    //Test DOWN button
    while ((Button_Pins & BUTTON) != 0x0) {
        for (j = 0; j < NUM_COLS; j++)
        {
            char col = (0x1 << j);
            TurnOnLED_PWM(col, ROW_OFF_BYTE, ROW_OFF_BYTE, ROW_ON_BYTE);
        }
    }


    __delay_cycles(8000000);

    /******************************
     *
     * Test single white LEDs
     *
     ******************************/


    //Test WHITE leds
    TurnOnSingleLED_PWM(0x01, ~0x01, ~0x01, ~0x01); __delay_cycles(350000);
    TurnOnSingleLED_PWM(0x01, ~0x02, ~0x02, ~0x02); __delay_cycles(350000);
    TurnOnSingleLED_PWM(0x01, ~0x04, ~0x04, ~0x04); __delay_cycles(350000);     //Col0
    TurnOnSingleLED_PWM(0x01, ~0x08, ~0x08, ~0x08); __delay_cycles(350000);
    TurnOnSingleLED_PWM(0x01, ~0x10, ~0x10, ~0x10); __delay_cycles(350000);
    TurnOnSingleLED_PWM(0x01, ~0x20, ~0x20, ~0x20); __delay_cycles(350000);

    TurnOnSingleLED_PWM(0x02, ~0x01, ~0x01, ~0x01); __delay_cycles(350000);
    TurnOnSingleLED_PWM(0x02, ~0x02, ~0x02, ~0x02); __delay_cycles(350000);
    TurnOnSingleLED_PWM(0x02, ~0x04, ~0x04, ~0x04); __delay_cycles(350000);     //Col1
    TurnOnSingleLED_PWM(0x02, ~0x08, ~0x08, ~0x08); __delay_cycles(350000);
    TurnOnSingleLED_PWM(0x02, ~0x10, ~0x10, ~0x10); __delay_cycles(350000);
    TurnOnSingleLED_PWM(0x02, ~0x20, ~0x20, ~0x20); __delay_cycles(350000);

    TurnOnSingleLED_PWM(0x04, ~0x01, ~0x01, ~0x01); __delay_cycles(350000);
    TurnOnSingleLED_PWM(0x04, ~0x02, ~0x02, ~0x02); __delay_cycles(350000);
    TurnOnSingleLED_PWM(0x04, ~0x04, ~0x04, ~0x04); __delay_cycles(350000);     //Col2
    TurnOnSingleLED_PWM(0x04, ~0x08, ~0x08, ~0x08); __delay_cycles(350000);
    TurnOnSingleLED_PWM(0x04, ~0x10, ~0x10, ~0x10); __delay_cycles(350000);
    TurnOnSingleLED_PWM(0x04, ~0x20, ~0x20, ~0x20); __delay_cycles(350000);

    TurnOnSingleLED_PWM(0x08, ~0x01, ~0x01, ~0x01); __delay_cycles(350000);
    TurnOnSingleLED_PWM(0x08, ~0x02, ~0x02, ~0x02); __delay_cycles(350000);
    TurnOnSingleLED_PWM(0x08, ~0x04, ~0x04, ~0x04); __delay_cycles(350000);     //Col3
    TurnOnSingleLED_PWM(0x08, ~0x08, ~0x08, ~0x08); __delay_cycles(350000);
    TurnOnSingleLED_PWM(0x08, ~0x10, ~0x10, ~0x10); __delay_cycles(350000);
    TurnOnSingleLED_PWM(0x08, ~0x20, ~0x20, ~0x20); __delay_cycles(350000);

    TurnOnSingleLED_PWM(0x10, ~0x01, ~0x01, ~0x01); __delay_cycles(350000);
    TurnOnSingleLED_PWM(0x10, ~0x02, ~0x02, ~0x02); __delay_cycles(350000);
    TurnOnSingleLED_PWM(0x10, ~0x04, ~0x04, ~0x04); __delay_cycles(350000);     //Col4
    TurnOnSingleLED_PWM(0x10, ~0x08, ~0x08, ~0x08); __delay_cycles(350000);
    TurnOnSingleLED_PWM(0x10, ~0x10, ~0x10, ~0x10); __delay_cycles(350000);
    TurnOnSingleLED_PWM(0x10, ~0x20, ~0x20, ~0x20); __delay_cycles(350000);

    TurnOnSingleLED_PWM(0x20, ~0x01, ~0x01, ~0x01); __delay_cycles(350000);
    TurnOnSingleLED_PWM(0x20, ~0x02, ~0x02, ~0x02); __delay_cycles(350000);
    TurnOnSingleLED_PWM(0x20, ~0x04, ~0x04, ~0x04); __delay_cycles(350000);     //Col5
    TurnOnSingleLED_PWM(0x20, ~0x08, ~0x08, ~0x08); __delay_cycles(350000);
    TurnOnSingleLED_PWM(0x20, ~0x10, ~0x10, ~0x10); __delay_cycles(350000);
    TurnOnSingleLED_PWM(0x20, ~0x20, ~0x20, ~0x20); __delay_cycles(350000);

    TurnOnSingleLED_PWM(0x40, ~0x01, ~0x01, ~0x01); __delay_cycles(350000);
    TurnOnSingleLED_PWM(0x40, ~0x02, ~0x02, ~0x02); __delay_cycles(350000);
    TurnOnSingleLED_PWM(0x40, ~0x04, ~0x04, ~0x04); __delay_cycles(350000);     //Col6
    TurnOnSingleLED_PWM(0x40, ~0x08, ~0x08, ~0x08); __delay_cycles(350000);
    TurnOnSingleLED_PWM(0x40, ~0x10, ~0x10, ~0x10); __delay_cycles(350000);
    TurnOnSingleLED_PWM(0x40, ~0x20, ~0x20, ~0x20); __delay_cycles(350000);

    TurnOnSingleLED_PWM(0x80, ~0x01, ~0x01, ~0x01); __delay_cycles(350000);
    TurnOnSingleLED_PWM(0x80, ~0x02, ~0x02, ~0x02); __delay_cycles(350000);
    TurnOnSingleLED_PWM(0x80, ~0x04, ~0x04, ~0x04); __delay_cycles(350000);     //Col7
    TurnOnSingleLED_PWM(0x80, ~0x08, ~0x08, ~0x08); __delay_cycles(350000);
    TurnOnSingleLED_PWM(0x80, ~0x10, ~0x10, ~0x10); __delay_cycles(350000);
    TurnOnSingleLED_PWM(0x80, ~0x20, ~0x20, ~0x20); __delay_cycles(350000);

    Column_Pins = COL_OFF_BYTE;
}

void ButtonTest(void)
{

}

void TurnOnSingleLED(char row, char col)
{
    //Turn on LEDs at a specified column
    Column_Pins = COL_OFF_BYTE;
    Green_Row_Pins = ~row;
    Red_Row_Pins = ~row;
    Blue_Row_Pins = ~row;
    Column_Pins = ~col;
}


#endif /* FACTORY_H_ */
