/*******************************************************************************
                      Bicycle Helmet Microcontroller Software
               Copyright (c) NixTech, Inc. 2012 All Rights Reserved
                            Rev. A, MSP430F5328
 ******************************************************************************/

#include <stdio.h>
#include <math.h>

#include "main.h"
#include "HAL.h"
#include "I2C.h"
#include "UART.h"


#ifndef ACCEL_H_
#define ACCEL_H_

#define LIS331D_ADDRESS  0x3A     //0011101 (Write)
#define LIS331D_READ     0x1
#define LIS331D_WRITE    0x0

BOOL AccelIsWorking = TRUE;

volatile char x_accel = 0x00;
volatile char y_accel = 0x00;
volatile char z_accel = 0x00;

volatile char x_accel_data[128] = {0x00};
volatile char y_accel_data[128] = {0x00};
volatile char z_accel_data[128] = {0x00};

volatile char xyz_magnitude_accel = 0x00;
volatile char xyz_magnitude_filtered_accel = 0x00;

char readAccel(void);
char startAccel(void);
void computeAccel(void);

char startAccel(void)
{
  char receivedByte;

  __no_operation();

  //Set up CTRL_REG_1 = 01000111b
  I2C_start_condition(); //ST
  I2C_send_byte(LIS331D_ADDRESS | LIS331D_WRITE); //SAD + W = 00111010 = start write
  if (I2C_wait_for_ack() == FALSE) goto didNotGetACK;
  I2C_send_byte(0x20+0x0); //SUB(7) + LSB = 0x20 + 0x0
  if (I2C_wait_for_ack() == FALSE) goto didNotGetACK;
  I2C_send_byte(0x47); //DATA
  if (I2C_wait_for_ack() == FALSE) goto didNotGetACK;
  I2C_stop_condition();

  //Read the WHO_AM_I status register = 00111011b
  I2C_start_condition(); //ST
  I2C_send_byte(LIS331D_ADDRESS | LIS331D_WRITE); //SAD + W = 00111010 = start write
  if (I2C_wait_for_ack() == FALSE) goto didNotGetACK;
  I2C_send_byte(0x0F+0x0); //SUB(7) + LSB = 0x0F + 0x0
  if (I2C_wait_for_ack() == FALSE) goto didNotGetACK;

  I2C_start_condition(); //SR
  I2C_send_byte(LIS331D_ADDRESS | LIS331D_READ); //SAD + R = 00111011 = start read
  if (I2C_wait_for_ack() == FALSE) goto didNotGetACK;

  receivedByte = I2C_receive_byte(); //DATA
  receivedByte = receivedByte & 0xFF;
  __no_operation();

  //NMAK

  I2C_stop_condition();

  printf("Accelerometer Started\nReceived Byte = 0x%x \n", receivedByte);
  goto finishedI2CTransfer;

didNotGetACK:
  I2C_stop_condition();
  AccelIsWorking = FALSE;

finishedI2CTransfer:
  __delay_cycles(1);
  return receivedByte;
}

char readAccel(void)
{
    if (CurrentFrameCountTick >= FrameCountTicksThresh.Accel)
    {
      __no_operation();

      //Read the OUT_X register = XD[7], see p. 19 of LIS331DL datasheet
      I2C_start_condition();                                           //ST
      I2C_send_byte(LIS331D_ADDRESS | LIS331D_WRITE);                  //SAD + W = 00111001 = start write
      if (I2C_wait_for_ack() == FALSE) goto didNotGetACK;              //SAK
      I2C_send_byte(0x29+0x0);                                         //SUB(7) + LSB = 0x29 + 0x0
      if (I2C_wait_for_ack() == FALSE) goto didNotGetACK;              //SAK
      I2C_start_condition();                                           //SR
      I2C_send_byte(LIS331D_ADDRESS | LIS331D_READ);                   //SAD + R = 00111001 = start read
      if (I2C_wait_for_ack() == FALSE) goto didNotGetACK;              //SAK
      x_accel = I2C_receive_byte();                                    //DATA
      x_accel = x_accel & 0xFF;
      __no_operation();                                                //NMAK
      I2C_stop_condition();                                            //SP

      //Read the OUT_Y register = XD[7]
      I2C_start_condition();                                           //ST
      I2C_send_byte(LIS331D_ADDRESS | LIS331D_WRITE);                  //SAD + W = 00111001 = start write
      if (I2C_wait_for_ack() == FALSE) goto didNotGetACK;              //SAK
      I2C_send_byte(0x2B+0x0);                                         //SUB(7) + LSB = 0x2B + 0x0
      if (I2C_wait_for_ack() == FALSE) goto didNotGetACK;              //SAK
      I2C_start_condition();                                           //SR
      I2C_send_byte(LIS331D_ADDRESS | LIS331D_READ);                   //SAD + R = 00111001 = start read
      if (I2C_wait_for_ack() == FALSE) goto didNotGetACK;              //SAK
      y_accel = I2C_receive_byte();                                    //DATA
      y_accel = y_accel & 0xFF;
      __no_operation();                                                //NMAK
      I2C_stop_condition();                                            //SP

      //Read the OUT_Z register = XD[7]
      I2C_start_condition();                                           //ST
      I2C_send_byte(LIS331D_ADDRESS | LIS331D_WRITE);                  //SAD + W = 00111001 = start write
      if (I2C_wait_for_ack() == FALSE) goto didNotGetACK;              //SAK
      I2C_send_byte(0x2D+0x0);                                         //SUB(7) + LSB = 0x2B + 0x0
      if (I2C_wait_for_ack() == FALSE) goto didNotGetACK;              //SAK
      I2C_start_condition();                                           //SR
      I2C_send_byte(LIS331D_ADDRESS | LIS331D_READ);                   //SAD + R = 00111001 = start read
      if (I2C_wait_for_ack() == FALSE) goto didNotGetACK;              //SAK
      z_accel = I2C_receive_byte() & 0xFF;                             //DATA
      z_accel = z_accel & 0xFF;
      __no_operation();                                                //NMAK
      I2C_stop_condition();                                            //SP

      //Start data dump to UART port
      if (Accel_Recording)
      {
          //Toggle Pin 3.2 - this is the frequency of 3 bytes tx'd

        if ( (Test_Pins_P3 & BIT2) == 0x0)
        {
           Test_Pins_P3 |= BIT2;
        }
        else
        {
           Test_Pins_P3 &= ~BIT2;
        }


          tx_byte(x_accel);
          tx_byte(y_accel);
          tx_byte(z_accel);
      }


      xyz_magnitude_accel = (int) sqrt( x_accel^2 + y_accel^2 + z_accel^2 );          //Max is 442 with 8 bit values

      goto finishedI2CTransfer;

    didNotGetACK:
      I2C_stop_condition();
      AccelIsWorking = FALSE;

    finishedI2CTransfer:
      __delay_cycles(1);

      FrameCountTicks.Accel = CurrentFrameCountTick  + FrameCountTicksThresh.Accel;
    }
    return TRUE;
}


void computeAccel(void)
{
    if (CurrentFrameCountTick >= FrameCountTicksThresh.Accel)
    {
        static volatile char i;
        char j;
        int cum;
        int norm;
        char accelValues[128] = {0x00};

        readAccel();

        i++;
        accelValues[i] = x_accel;   //This is the total vector magnitude   (largest values is 442)

        if (i >= 127)
        {
            i = 0;
            cum = 0;

            //Running average
            for (j = 0; j <= 127; j++)
            {
               cum += accelValues[j];
            }
            norm = (int)(cum / 128);

            //Normalize to [1..48]
            //Largest value possible is 442*128 = 56576
                 // 442/48 LEDs = Mag 9 / LED
            xyz_magnitude_filtered_accel = norm;
        }

        FrameCountTicks.Accel = CurrentFrameCountTick  + FrameCountTicksThresh.Accel;
    }
}
#endif /* ACCEL_H_ */



