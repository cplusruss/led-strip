/*******************************************************************************
                      Bicycle Helmet Microcontroller Software
               Copyright (c) NixTech, Inc. 2012 All Rights Reserved
                            Rev. A, MSP430F5328
 ******************************************************************************/

#ifndef LOOKUP_H_
#define LOOKUP_H_

int LightSensorToBrightnessLookup(int);
int lin2TimerA1(int);

int LightSensorToBrightnessLookup(int linearValue)
{
    int linMap[] = {0,3,4,5,5,5,6,6,6,7,7,8,8,9,10,10,11,12,13,14,15,16,17,18,20,21,23,25,26,28,31,31};
    return linMap[linearValue];
}

int lin2TimerA1(int linearValue)
{
    int timerMap[] = {7,7,8,8,9,9,10,10,11,11,12,12,13,13,14,14,15,15,16,16,17,17,18,18,19,19,20,20,21,21,21,21};
    int lookedUpValue = 0;
    if (linearValue > 29)
    {
        giveMeMaxBrightnessTimerA1 = TRUE;
    }
    else
    {
        giveMeMaxBrightnessTimerA1 = FALSE;
    }

    lookedUpValue = timerMap[linearValue];
    return lookedUpValue;
}

void delay_ms(unsigned int delay)
{
    while (delay--)
    {
        __delay_cycles(25000);  //@25MHz MCLK will give 1 ms per delay
    }
}

#endif
