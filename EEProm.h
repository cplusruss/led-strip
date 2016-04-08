/*******************************************************************************
                      Bicycle Helmet Microcontroller Software
               Copyright (c) NixTech, Inc. 2012 All Rights Reserved
                            Rev. A, MSP430F5328
 ******************************************************************************/

#include "HAL.h"

#ifndef EEPROM_H_
#define EEPROM_H_

#define FULL_MEM_TEST                       1
#define MC_SLAVE_ADDR    0x57     //1010111 = Slave Address (see p. 7 of Microcchip datasheet)

BOOL EEPromIsWorking = TRUE;
int defaultMemoryMapValues[128];

#define Virgin_E2C_Prom_addr_A              0
#define Virgin_E2C_Prom_addr_B              1
#define Factory_MAX_Brightness_addr         2
#define Software_Rev_addr                   3
#define MIC_Sensitivity_addr                4
#define MIC_Mode_Active_addr                5
#define Favorite_Color_addr                 6
#define Pattern_Speed_Global_addr           7
#define Last_Pattern_Displayed_addr         8
#define Custom_Color_Index_Frame_A_addr     9
#define Custom_Color_Index_Frame_B_addr     10
#define Custom_Color_Index_Frame_C_addr     11
#define Op_Amp_High_Gain_addr               12

//Index of Pattern_Speed_addr is Pattern_ID  (Pattern_ID = 3 is Pattern 1)
                                            //0   1   2   3*
const unsigned char Pattern_Speed_addr[34] = {13, 13, 13, 13, 14, 15, 16, 17, 18, 19, 20,
                                                          21, 22, 23, 24, 25, 26, 27, 28,
                                                          29, 30, 31, 32, 33, 34, 35, 36,
                                                          37, 38, 39, 40, 41, 42, 43};


unsigned char EEPromAddressByte;
unsigned char EEPromReadDataByte;
unsigned char EEPromWrittenDataByte;

void writeEEPromByte(unsigned char, unsigned char);
unsigned char readEEPromByte(unsigned char);
unsigned char readEEPromByteWithVirginCheck(unsigned char, BOOL);
void writeEEPromByteWithVirginCheck(unsigned char, unsigned char, BOOL);
unsigned char getDefaultEEPromValue(unsigned char);

#include "EEProm.h"
#include "I2C.h"
#include "HAL.h"

void writeEEPromByte(unsigned char addressByte, unsigned char dataByte)
{
      I2C_start_condition();
      I2C_send_byte(0xAE); //10101110 = Write command
      if (I2C_wait_for_ack() == FALSE) goto didNotGetACK;
      I2C_send_byte(addressByte);
      if (I2C_wait_for_ack() == FALSE) goto didNotGetACK;
      I2C_send_byte(dataByte);
      if (I2C_wait_for_ack() == FALSE) goto didNotGetACK;
      I2C_stop_condition();
      goto finishedI2CTransfer;

didNotGetACK:
  I2C_stop_condition();
  EEPromIsWorking = FALSE;

finishedI2CTransfer:
    __delay_cycles(WRITE_DELAY_CYCLES); // This gives 11.5 ms period at 25MHz
}

unsigned char readEEPromByte(unsigned char addressByte)
{
  char receivedByte;

  I2C_start_condition();
  I2C_send_byte(0xAE); //10101110 = Write command to write address pointer inside memory chip
  if (I2C_wait_for_ack() == FALSE) goto didNotGetACK;
  I2C_send_byte(addressByte);
  if (I2C_wait_for_ack() == FALSE) goto didNotGetACK;
  I2C_start_condition();
  I2C_send_byte(0xAF); //10101111 = Read command
  if (I2C_wait_for_ack() == FALSE) goto didNotGetACK;
  receivedByte = I2C_receive_byte();
  if (I2C_wait_for_ack() == TRUE) goto didNotGetACK;    //Error condition (we want a NACK, see Fig. 8-2 in datasheet)
  I2C_stop_condition();
  goto finishedI2CTransfer;

didNotGetACK:
  I2C_stop_condition();
  EEPromIsWorking = FALSE;

finishedI2CTransfer:
  __delay_cycles(WRITE_DELAY_CYCLES);   // This gives 11.5 ms period at 25MHz
  return receivedByte;
}

unsigned char readEEPromByteWithVirginCheck(unsigned char addressByte, BOOL virginFlag)
{
    if (virginFlag == TRUE)
    {
        return getDefaultEEPromValue(addressByte);
    }
    else
    {
        return readEEPromByte(addressByte);
    }
}

void writeEEPromByteWithVirginCheck(unsigned char addressByte, unsigned char dataByte, BOOL virginFlag)
{
    if (virginFlag == TRUE)
    {
        //Do nothing
    }
    else
    {
        writeEEPromByte(addressByte, dataByte);
    }
}

unsigned char getDefaultEEPromValue(unsigned char addressByte)
{
    //Default
    defaultMemoryMapValues[Virgin_E2C_Prom_addr_A] = 0xA5;
    defaultMemoryMapValues[Virgin_E2C_Prom_addr_B] = 0x5A;
    defaultMemoryMapValues[Factory_MAX_Brightness_addr] = 0x12;   // = 17 dec
    defaultMemoryMapValues[Software_Rev_addr] = 0x02;
    defaultMemoryMapValues[MIC_Sensitivity_addr] = 0xFF;
    defaultMemoryMapValues[MIC_Mode_Active_addr] = FALSE;
    defaultMemoryMapValues[Favorite_Color_addr] = 0x04;
    defaultMemoryMapValues[Pattern_Speed_Global_addr] = 0x01;
    defaultMemoryMapValues[Last_Pattern_Displayed_addr] = 3;
    defaultMemoryMapValues[Custom_Color_Index_Frame_A_addr] = 0x02;
    defaultMemoryMapValues[Custom_Color_Index_Frame_B_addr] = 0x03;
    defaultMemoryMapValues[Custom_Color_Index_Frame_C_addr] = 0x04;
    defaultMemoryMapValues[Op_Amp_High_Gain_addr] = FALSE;
    defaultMemoryMapValues[Pattern_Speed_addr[3]] =  0x0B;
    defaultMemoryMapValues[Pattern_Speed_addr[4]] =  0x01;
    defaultMemoryMapValues[Pattern_Speed_addr[5]] =  0x01;
    defaultMemoryMapValues[Pattern_Speed_addr[6]] =  0x01;
    defaultMemoryMapValues[Pattern_Speed_addr[7]] =  0x01;
    defaultMemoryMapValues[Pattern_Speed_addr[8]] =  0x07;
    defaultMemoryMapValues[Pattern_Speed_addr[9]] =  0x03;
    defaultMemoryMapValues[Pattern_Speed_addr[10]] = 0x04;
    defaultMemoryMapValues[Pattern_Speed_addr[11]] = 0x19;
    defaultMemoryMapValues[Pattern_Speed_addr[12]] = 0x04;
    defaultMemoryMapValues[Pattern_Speed_addr[13]] = 0x02;
    defaultMemoryMapValues[Pattern_Speed_addr[14]] = 0x07;
    defaultMemoryMapValues[Pattern_Speed_addr[15]] = 0x04;
    defaultMemoryMapValues[Pattern_Speed_addr[16]] = 0x06;
    defaultMemoryMapValues[Pattern_Speed_addr[17]] = 0x05;
    defaultMemoryMapValues[Pattern_Speed_addr[18]] = 0x03;
    defaultMemoryMapValues[Pattern_Speed_addr[19]] = 0x05;
    defaultMemoryMapValues[Pattern_Speed_addr[20]] = 0x07;
    defaultMemoryMapValues[Pattern_Speed_addr[21]] = 0x06;
    defaultMemoryMapValues[Pattern_Speed_addr[22]] = 0x08;
    defaultMemoryMapValues[Pattern_Speed_addr[23]] = 0x05;
    defaultMemoryMapValues[Pattern_Speed_addr[24]] = 0x06;
    defaultMemoryMapValues[Pattern_Speed_addr[25]] = 0x0B;
    defaultMemoryMapValues[Pattern_Speed_addr[26]] = 0x09;
    defaultMemoryMapValues[Pattern_Speed_addr[27]] = 0x06;
    defaultMemoryMapValues[Pattern_Speed_addr[28]] = 0x07;
    defaultMemoryMapValues[Pattern_Speed_addr[29]] = 0x04;
    defaultMemoryMapValues[Pattern_Speed_addr[30]] = 0x01;
    defaultMemoryMapValues[Pattern_Speed_addr[31]] = 0x01;
    defaultMemoryMapValues[Pattern_Speed_addr[32]] = 0x09;
    defaultMemoryMapValues[Pattern_Speed_addr[33]] = 0x09;

    return defaultMemoryMapValues[addressByte];
}

#endif /* EEPROM_H_ */
