/*******************************************************************************
                      Bicycle Helmet Microcontroller Software
               Copyright (c) NixTech, Inc. 2012 All Rights Reserved
                            Rev. A, MSP430F5328
 ******************************************************************************/

#include "HAL.h"

#ifndef I2C_H_
#define I2C_H_

#define DEVICEID_EEPROM_24AA01        0
#define DEVICEID_LIS331DL             1
#define WRITE_DELAY_CYCLES           200000

unsigned char I2C_Byte_to_send;
unsigned char I2C_Received_byte;
BOOL I2C_ACK_Status = FALSE;

void initI2CPorts(void);
void I2C_start_condition(void);
void I2C_stop_condition(void);
BOOL I2C_wait_for_ack(void);
void I2C_send_byte(unsigned char);
unsigned char I2C_receive_byte(void);

void I2C_start_condition(void)
{
       //Wait half a cycle of 100kHz (at 25MHz, this is 125 clocks)
       __delay_cycles(200);

       I2C_OUT |= I2C_SDA + I2C_SCL;    //I2C_SDA = 1, I2C_SCL = 1
       I2C_DIR |= I2C_SDA + I2C_SCL;    //Assign directions of pins 3.0 (I2C_SCL, pin 35) and 3.0 (I2C_SDA, pin 34) as outputs

       //Wait delay condition 7 (min = 600ns) at 25MHz, this is 15 clocks
       __delay_cycles(200);
       I2C_OUT &= ~I2C_SDA;    //I2C_SDA = 0
       I2C_OUT |= I2C_SCL;    //I2C_SCL = 1

       //Wait delay condition 6 (min = 600ns) at 25MHz, this is 15 clocks
       __delay_cycles(200);
       I2C_OUT &=  ~I2C_SDA;    //I2C_SDA = 0,
       I2C_OUT &=  ~I2C_SCL;    //I2C_SCL = 0

       //Wait half a cycle of 100kHz (at 25MHz, this is 125 clocks)
       __delay_cycles(200);
}

void I2C_stop_condition(void)
{
    I2C_OUT &=  ~I2C_SDA;    //I2C_SDA = 0, I2C_SCL = 0
    I2C_OUT &=  ~I2C_SCL;
   I2C_DIR |= I2C_SDA + I2C_SCL;    //Assign directions of pins 3.0 (I2C_SCL, pin 35) and 3.0 (I2C_SDA, pin 34) as outputs

   //Wait half a cycle of 100kHz (at 25MHz, this is 125 clocks)
   __delay_cycles(200);

   I2C_OUT &= ~I2C_SDA;    //I2C_SDA = 0
   I2C_OUT |= I2C_SCL;    //I2C_SCL = 1

   //Wait delay condition 10 (min = 600ns) at 25MHz, this is 15 clocks
   __delay_cycles(600);
   I2C_OUT |= I2C_SDA + I2C_SCL;    //I2C_SDA = 1, I2C_SCL = 1

   __delay_cycles(200);
}

BOOL I2C_wait_for_ack(void)
{
  unsigned char tempByte1;
  BOOL tempByte2;

   //Wait half a cycle of 100kHz (at 25MHz, this is 125 clocks)
   //__delay_cycles(200);
   I2C_OUT &=  ~I2C_SDA;    //I2C_SDA = 0,
   I2C_OUT &=  ~I2C_SCL;    //I2C_SCL = 0
   I2C_DIR |= I2C_SCL;    //Assign directions of pins 3.0 (I2C_SCL, pin 35) = output
   I2C_DIR &= ~I2C_SDA;    //and 3.0 (I2C_SDA, pin 34) = input

     //Wait half a cycle of 100kHz (at 25MHz, this is 125 clocks)
     __delay_cycles(600);
     I2C_OUT |= I2C_SCL;  //I2C_SDA = X, I2C_SCL = 1
     //Wait half a cycle of 100kHz (at 25MHz, this is 125 clocks)
     __delay_cycles(200);
     tempByte1 = I2C_IN & I2C_SDA;
     __delay_cycles(200);
     I2C_OUT &= ~I2C_SCL;  //I2C_SDA = X, I2C_SCL = 0
     tempByte1 = tempByte1 & 0x01;
    if (tempByte1 == 0x01)
    {
        tempByte2 = FALSE;
    }
    if (tempByte1 == 0x00)
    {
        tempByte2 = TRUE;
    }

     //Wait half a cycle of 100kHz (at 25MHz, this is 125 clocks)
     __delay_cycles(200);

  return tempByte2;


}

void I2C_send_byte(unsigned char byteToSend)
{
  unsigned int bitCounter;
  unsigned char tempByte;

   //Wait half a cycle of 100kHz (at 25MHz, this is 125 clocks)
   __delay_cycles(200);
   I2C_OUT &=  ~I2C_SDA;    //I2C_SDA = 0, I2C_SCL = 0
   I2C_OUT &=  ~I2C_SCL;
   I2C_DIR |= I2C_SDA + I2C_SCL;    //Assign directions of pins 3.0 (I2C_SCL, pin 35) and 3.0 (I2C_SDA, pin 34) as outputs

  for (bitCounter = 0; bitCounter < 8; bitCounter++)
  {
     //Wait half a cycle of 100kHz (at 25MHz, this is 125 clocks)
     __delay_cycles(200);
     tempByte = (byteToSend >> (7 - bitCounter)) & 0x01;
     if (tempByte == 0x00)
     {
         I2C_OUT &=  ~I2C_SDA;    //I2C_SDA = 0, I2C_SCL = 0
         I2C_OUT &=  ~I2C_SCL;
     }

     //Write the data bit
     //Wait half a cycle of 100kHz (at 25MHz, this is 125 clocks)
     __delay_cycles(200);
     if (tempByte == 0x01)
     {
         I2C_OUT |= I2C_SDA;  //I2C_SDA = 1
     }
     if (tempByte == 0x00)
     {
         I2C_OUT &= ~I2C_SDA;    //I2C_SDA = 0
     }

     //Toggle the clock
     //Wait half a cycle of 100kHz (at 25MHz, this is 125 clocks)
     __delay_cycles(200);
     I2C_OUT |= I2C_SCL;    //I2C_SCL = 1
     __delay_cycles(200);
     I2C_OUT &= ~I2C_SCL;  //I2C_SCL = 0

     if (bitCounter == 7)
     {
         __delay_cycles(1);

     }
     else
     {
         //Set data back to 0
         __delay_cycles(200);
         I2C_OUT &= ~I2C_SDA;  //I2C_SDA = 0
         __delay_cycles(200);
     }
  }

}

unsigned char I2C_receive_byte(void)
{
  unsigned int bitCounter;
   char tempByte1;
   char tempByte2;

   //Wait half a cycle of 100kHz (at 25MHz, this is 125 clocks)
   __delay_cycles(200);
   I2C_OUT &=  ~I2C_SDA;    //I2C_SDA = 0, I2C_SCL = 0
   I2C_OUT &=  ~I2C_SCL;
   I2C_DIR &= ~I2C_SDA;       //and 3.0 (I2C_SDA, pin 34) = input

  for (bitCounter = 0; bitCounter < 8; bitCounter++)
  {
     //Wait half a cycle of 100kHz (at 25MHz, this is 125 clocks)
     __delay_cycles(200);
     I2C_OUT |= I2C_SCL;  //I2C_SDA = X, I2C_SCL = 1
     //Wait half a cycle of 100kHz (at 25MHz, this is 125 clocks)
     __delay_cycles(200);
     tempByte1 = I2C_IN & I2C_SDA;
     I2C_OUT &= ~I2C_SCL;  //I2C_SDA = X, I2C_SCL = 0
     tempByte1 = (tempByte1 >> 0x01);   //Shift to BIT0 position
     tempByte1 = tempByte1 & 0x01;
     tempByte2 = (tempByte2 << 0x01) | tempByte1;



     if (bitCounter == 7)
     {
         __delay_cycles(100);
     }
     else
     {
         //Wait half a cycle of 100kHz (at 25MHz, this is 125 clocks)
         __delay_cycles(200);
     }
  }

  return tempByte2;
}



#endif /* I2C_H_ */

