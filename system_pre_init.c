/*******************************************************************************
                      Bicycle Helmet Microcontroller Software
               Copyright (c) NixTech, Inc. 2012 All Rights Reserved
                            Rev. A, MSP430F5328
 ******************************************************************************/
 
#include <intrinsics.h>
#include "msp430.h"

int _system_pre_init(void)
{
  WDTCTL = WDTPW | WDTHOLD;      //Disable Watchdog timer to prevent reset during
  	  	  	  	  	  	  	  	 // long variable initialization sequences
  return 1;
}
