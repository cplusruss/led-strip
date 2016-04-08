/*******************************************************************************
                      Bicycle Helmet Microcontroller Software
               Copyright (c) NixTech, Inc. 2012 All Rights Reserved
                            Rev. A, MSP430F5328
 ******************************************************************************/

#include "HAL.h"

#ifndef FACTORYPATTERNS_H_
#define FACTORYPATTERNS_H_

extern volatile unsigned int Custom_Color_Frame;
extern volatile unsigned int Favorite_Color;

extern volatile unsigned int Pattern_ID_Frame_Time;
extern volatile unsigned int Pattern_ID_Frame_Number;
extern volatile unsigned int ImageMatrix [8][8];
extern volatile unsigned char Pattern_ID;
extern volatile unsigned char Active_Pattern_ID;
extern BOOL Event_Change_Flag;
extern void clearImageMemories(void);

void __Pattern_All_Black(void);
void __Pattern_Red_Flash(void);
void __Pattern_Green_Flash(void);
void __Pattern_Moustache_Preview(void);
void __Pattern_VU_Meter_Preview(void);
void __Pattern_Clockwise_Preview(void);
void __Pattern_Two_Sided_Preview(void);

void Pattern_0_All_White(void);
void Pattern_1_Accelerometer(void);
void Pattern_2_Random_All(void);
void Pattern_3_Random_Single(void);
void Pattern_5_Favorite_Color(void);
void Pattern_6_Rolling_Ball(void);
void Pattern_6_Two_Balls(void);

#include "PatternsFactory.h"
#include <stdlib.h>


void __Pattern_All_Black(void)
{
    switch (Pattern_ID_Frame_Number)
    {
        case 1:
            Event_Change_Flag = TRUE;
            Pattern_ID_Frame_Time = 2;
        break;
        case 2:
            ImageMatrix[0][0] = 0x0000; ImageMatrix[0][1] = 0x0000; ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
            ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
            ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
            ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
            ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
            ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
            ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
            ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
            Pattern_ID_Frame_Time = 20;
        break;
        case 3:
            ImageMatrix[0][0] = 0x0000; ImageMatrix[0][1] = 0x0000; ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
            ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
            ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
            ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
            ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
            ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
            ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
            ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
            Pattern_ID_Frame_Time = 20;
        break;
        case 4:
            Pattern_ID = Active_Pattern_ID;     //Reset to previous pattern
            Event_Change_Flag = FALSE;
            Pattern_ID_Frame_Time = 2;
        break;

        default:
            Pattern_ID = Active_Pattern_ID;
            Event_Change_Flag = FALSE;
            Pattern_ID_Frame_Time = 2;
            Pattern_ID_Frame_Number = 0;
        break;
    }
}
void __Pattern_Red_Flash(void)
{
    Event_Change_Flag = TRUE;
    switch (Pattern_ID_Frame_Number)
    {
        case 1:
            ImageMatrix[0][0] = 0x0000; ImageMatrix[0][1] = 0x0000; ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
            ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
            ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
            ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
            ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
            ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
            ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
            ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
            Pattern_ID_Frame_Time = 30;
        break;
        case 2:
            ImageMatrix[0][0] = 0x7C00; ImageMatrix[0][1] = 0x7C00; ImageMatrix[0][2] = 0x7C00; ImageMatrix[0][3] = 0x7C00; ImageMatrix[0][4] = 0x7C00; ImageMatrix[0][5] = 0x7C00;
            ImageMatrix[1][0] = 0x7C00; ImageMatrix[1][1] = 0x7C00; ImageMatrix[1][2] = 0x7C00; ImageMatrix[1][3] = 0x7C00; ImageMatrix[1][4] = 0x7C00; ImageMatrix[1][5] = 0x7C00;
            ImageMatrix[2][0] = 0x7C00; ImageMatrix[2][1] = 0x7C00; ImageMatrix[2][2] = 0x7C00; ImageMatrix[2][3] = 0x7C00; ImageMatrix[2][4] = 0x7C00; ImageMatrix[2][5] = 0x7C00;
            ImageMatrix[3][0] = 0x7C00; ImageMatrix[3][1] = 0x7C00; ImageMatrix[3][2] = 0x7C00; ImageMatrix[3][3] = 0x7C00; ImageMatrix[3][4] = 0x7C00; ImageMatrix[3][5] = 0x7C00;
            ImageMatrix[4][0] = 0x7C00; ImageMatrix[4][1] = 0x7C00; ImageMatrix[4][2] = 0x7C00; ImageMatrix[4][3] = 0x7C00; ImageMatrix[4][4] = 0x7C00; ImageMatrix[4][5] = 0x7C00;
            ImageMatrix[5][0] = 0x7C00; ImageMatrix[5][1] = 0x7C00; ImageMatrix[5][2] = 0x7C00; ImageMatrix[5][3] = 0x7C00; ImageMatrix[5][4] = 0x7C00; ImageMatrix[5][5] = 0x7C00;
            ImageMatrix[6][0] = 0x7C00; ImageMatrix[6][1] = 0x7C00; ImageMatrix[6][2] = 0x7C00; ImageMatrix[6][3] = 0x7C00; ImageMatrix[6][4] = 0x7C00; ImageMatrix[6][5] = 0x7C00;
            ImageMatrix[7][0] = 0x7C00; ImageMatrix[7][1] = 0x7C00; ImageMatrix[7][2] = 0x7C00; ImageMatrix[7][3] = 0x7C00; ImageMatrix[7][4] = 0x7C00; ImageMatrix[7][5] = 0x7C00;
            Pattern_ID_Frame_Time = 30;
        break;
        case 3:
            ImageMatrix[0][0] = 0x0000; ImageMatrix[0][1] = 0x0000; ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
            ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
            ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
            ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
            ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
            ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
            ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
            ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
            Pattern_ID_Frame_Time = 30;
        break;
        case 4:
            ImageMatrix[0][0] = 0x7C00; ImageMatrix[0][1] = 0x7C00; ImageMatrix[0][2] = 0x7C00; ImageMatrix[0][3] = 0x7C00; ImageMatrix[0][4] = 0x7C00; ImageMatrix[0][5] = 0x7C00;
            ImageMatrix[1][0] = 0x7C00; ImageMatrix[1][1] = 0x7C00; ImageMatrix[1][2] = 0x7C00; ImageMatrix[1][3] = 0x7C00; ImageMatrix[1][4] = 0x7C00; ImageMatrix[1][5] = 0x7C00;
            ImageMatrix[2][0] = 0x7C00; ImageMatrix[2][1] = 0x7C00; ImageMatrix[2][2] = 0x7C00; ImageMatrix[2][3] = 0x7C00; ImageMatrix[2][4] = 0x7C00; ImageMatrix[2][5] = 0x7C00;
            ImageMatrix[3][0] = 0x7C00; ImageMatrix[3][1] = 0x7C00; ImageMatrix[3][2] = 0x7C00; ImageMatrix[3][3] = 0x7C00; ImageMatrix[3][4] = 0x7C00; ImageMatrix[3][5] = 0x7C00;
            ImageMatrix[4][0] = 0x7C00; ImageMatrix[4][1] = 0x7C00; ImageMatrix[4][2] = 0x7C00; ImageMatrix[4][3] = 0x7C00; ImageMatrix[4][4] = 0x7C00; ImageMatrix[4][5] = 0x7C00;
            ImageMatrix[5][0] = 0x7C00; ImageMatrix[5][1] = 0x7C00; ImageMatrix[5][2] = 0x7C00; ImageMatrix[5][3] = 0x7C00; ImageMatrix[5][4] = 0x7C00; ImageMatrix[5][5] = 0x7C00;
            ImageMatrix[6][0] = 0x7C00; ImageMatrix[6][1] = 0x7C00; ImageMatrix[6][2] = 0x7C00; ImageMatrix[6][3] = 0x7C00; ImageMatrix[6][4] = 0x7C00; ImageMatrix[6][5] = 0x7C00;
            ImageMatrix[7][0] = 0x7C00; ImageMatrix[7][1] = 0x7C00; ImageMatrix[7][2] = 0x7C00; ImageMatrix[7][3] = 0x7C00; ImageMatrix[7][4] = 0x7C00; ImageMatrix[7][5] = 0x7C00;
            Pattern_ID_Frame_Time = 30;
        break;
        case 5:
            ImageMatrix[0][0] = 0x0000; ImageMatrix[0][1] = 0x0000; ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
            ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
            ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
            ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
            ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
            ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
            ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
            ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
            Pattern_ID_Frame_Time = 30;
        break;
        case 6:
            ImageMatrix[0][0] = 0x7C00; ImageMatrix[0][1] = 0x7C00; ImageMatrix[0][2] = 0x7C00; ImageMatrix[0][3] = 0x7C00; ImageMatrix[0][4] = 0x7C00; ImageMatrix[0][5] = 0x7C00;
            ImageMatrix[1][0] = 0x7C00; ImageMatrix[1][1] = 0x7C00; ImageMatrix[1][2] = 0x7C00; ImageMatrix[1][3] = 0x7C00; ImageMatrix[1][4] = 0x7C00; ImageMatrix[1][5] = 0x7C00;
            ImageMatrix[2][0] = 0x7C00; ImageMatrix[2][1] = 0x7C00; ImageMatrix[2][2] = 0x7C00; ImageMatrix[2][3] = 0x7C00; ImageMatrix[2][4] = 0x7C00; ImageMatrix[2][5] = 0x7C00;
            ImageMatrix[3][0] = 0x7C00; ImageMatrix[3][1] = 0x7C00; ImageMatrix[3][2] = 0x7C00; ImageMatrix[3][3] = 0x7C00; ImageMatrix[3][4] = 0x7C00; ImageMatrix[3][5] = 0x7C00;
            ImageMatrix[4][0] = 0x7C00; ImageMatrix[4][1] = 0x7C00; ImageMatrix[4][2] = 0x7C00; ImageMatrix[4][3] = 0x7C00; ImageMatrix[4][4] = 0x7C00; ImageMatrix[4][5] = 0x7C00;
            ImageMatrix[5][0] = 0x7C00; ImageMatrix[5][1] = 0x7C00; ImageMatrix[5][2] = 0x7C00; ImageMatrix[5][3] = 0x7C00; ImageMatrix[5][4] = 0x7C00; ImageMatrix[5][5] = 0x7C00;
            ImageMatrix[6][0] = 0x7C00; ImageMatrix[6][1] = 0x7C00; ImageMatrix[6][2] = 0x7C00; ImageMatrix[6][3] = 0x7C00; ImageMatrix[6][4] = 0x7C00; ImageMatrix[6][5] = 0x7C00;
            ImageMatrix[7][0] = 0x7C00; ImageMatrix[7][1] = 0x7C00; ImageMatrix[7][2] = 0x7C00; ImageMatrix[7][3] = 0x7C00; ImageMatrix[7][4] = 0x7C00; ImageMatrix[7][5] = 0x7C00;
            Pattern_ID_Frame_Time = 30;
        break;
        case 7:
            ImageMatrix[0][0] = 0x7C00; ImageMatrix[0][1] = 0x7C00; ImageMatrix[0][2] = 0x7C00; ImageMatrix[0][3] = 0x7C00; ImageMatrix[0][4] = 0x7C00; ImageMatrix[0][5] = 0x7C00;
            ImageMatrix[1][0] = 0x7C00; ImageMatrix[1][1] = 0x7C00; ImageMatrix[1][2] = 0x7C00; ImageMatrix[1][3] = 0x7C00; ImageMatrix[1][4] = 0x7C00; ImageMatrix[1][5] = 0x7C00;
            ImageMatrix[2][0] = 0x7C00; ImageMatrix[2][1] = 0x7C00; ImageMatrix[2][2] = 0x7C00; ImageMatrix[2][3] = 0x7C00; ImageMatrix[2][4] = 0x7C00; ImageMatrix[2][5] = 0x7C00;
            ImageMatrix[3][0] = 0x7C00; ImageMatrix[3][1] = 0x7C00; ImageMatrix[3][2] = 0x7C00; ImageMatrix[3][3] = 0x7C00; ImageMatrix[3][4] = 0x7C00; ImageMatrix[3][5] = 0x7C00;
            ImageMatrix[4][0] = 0x7C00; ImageMatrix[4][1] = 0x7C00; ImageMatrix[4][2] = 0x7C00; ImageMatrix[4][3] = 0x7C00; ImageMatrix[4][4] = 0x7C00; ImageMatrix[4][5] = 0x7C00;
            ImageMatrix[5][0] = 0x7C00; ImageMatrix[5][1] = 0x7C00; ImageMatrix[5][2] = 0x7C00; ImageMatrix[5][3] = 0x7C00; ImageMatrix[5][4] = 0x7C00; ImageMatrix[5][5] = 0x7C00;
            ImageMatrix[6][0] = 0x7C00; ImageMatrix[6][1] = 0x7C00; ImageMatrix[6][2] = 0x7C00; ImageMatrix[6][3] = 0x7C00; ImageMatrix[6][4] = 0x7C00; ImageMatrix[6][5] = 0x7C00;
            ImageMatrix[7][0] = 0x7C00; ImageMatrix[7][1] = 0x7C00; ImageMatrix[7][2] = 0x7C00; ImageMatrix[7][3] = 0x7C00; ImageMatrix[7][4] = 0x7C00; ImageMatrix[7][5] = 0x7C00;
            Pattern_ID_Frame_Time = 30;
        case 8:
            ImageMatrix[0][0] = 0x0000; ImageMatrix[0][1] = 0x0000; ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
            ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
            ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
            ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
            ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
            ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
            ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
            ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
            Pattern_ID_Frame_Time = 30;
        break;
        case 9:
            Pattern_ID = Active_Pattern_ID;     //Reset to previous pattern
            Event_Change_Flag = FALSE;
            Pattern_ID_Frame_Time = 2;
        break;

        default:
            Pattern_ID = Active_Pattern_ID;
            Event_Change_Flag = FALSE;
            Pattern_ID_Frame_Time = 2;
            Pattern_ID_Frame_Number = 0;
        break;
    }
}
void __Pattern_Green_Flash(void)
{
    Event_Change_Flag = TRUE;
    switch (Pattern_ID_Frame_Number)
    {
        case 1:
            ImageMatrix[0][0] = 0x0000; ImageMatrix[0][1] = 0x0000; ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
            ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
            ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
            ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
            ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
            ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
            ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
            ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
            Pattern_ID_Frame_Time = 30;
        break;
        case 2:
            ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x03E0; ImageMatrix[0][5] = 0x03E0;
            ImageMatrix[1][0] = 0x03E0; ImageMatrix[1][1] = 0x03E0; ImageMatrix[1][2] = 0x03E0; ImageMatrix[1][3] = 0x03E0; ImageMatrix[1][4] = 0x03E0; ImageMatrix[1][5] = 0x03E0;
            ImageMatrix[2][0] = 0x03E0; ImageMatrix[2][1] = 0x03E0; ImageMatrix[2][2] = 0x03E0; ImageMatrix[2][3] = 0x03E0; ImageMatrix[2][4] = 0x03E0; ImageMatrix[2][5] = 0x03E0;
            ImageMatrix[3][0] = 0x03E0; ImageMatrix[3][1] = 0x03E0; ImageMatrix[3][2] = 0x03E0; ImageMatrix[3][3] = 0x03E0; ImageMatrix[3][4] = 0x03E0; ImageMatrix[3][5] = 0x03E0;
            ImageMatrix[4][0] = 0x03E0; ImageMatrix[4][1] = 0x03E0; ImageMatrix[4][2] = 0x03E0; ImageMatrix[4][3] = 0x03E0; ImageMatrix[4][4] = 0x03E0; ImageMatrix[4][5] = 0x03E0;
            ImageMatrix[5][0] = 0x03E0; ImageMatrix[5][1] = 0x03E0; ImageMatrix[5][2] = 0x03E0; ImageMatrix[5][3] = 0x03E0; ImageMatrix[5][4] = 0x03E0; ImageMatrix[5][5] = 0x03E0;
            ImageMatrix[6][0] = 0x03E0; ImageMatrix[6][1] = 0x03E0; ImageMatrix[6][2] = 0x03E0; ImageMatrix[6][3] = 0x03E0; ImageMatrix[6][4] = 0x03E0; ImageMatrix[6][5] = 0x03E0;
            ImageMatrix[7][0] = 0x03E0; ImageMatrix[7][1] = 0x03E0; ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
            Pattern_ID_Frame_Time = 30;
        break;
        case 3:
            ImageMatrix[0][0] = 0x0000; ImageMatrix[0][1] = 0x0000; ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
            ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
            ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
            ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
            ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
            ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
            ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
            ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
            Pattern_ID_Frame_Time = 30;
        break;
        case 4:
            ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x03E0; ImageMatrix[0][5] = 0x03E0;
            ImageMatrix[1][0] = 0x03E0; ImageMatrix[1][1] = 0x03E0; ImageMatrix[1][2] = 0x03E0; ImageMatrix[1][3] = 0x03E0; ImageMatrix[1][4] = 0x03E0; ImageMatrix[1][5] = 0x03E0;
            ImageMatrix[2][0] = 0x03E0; ImageMatrix[2][1] = 0x03E0; ImageMatrix[2][2] = 0x03E0; ImageMatrix[2][3] = 0x03E0; ImageMatrix[2][4] = 0x03E0; ImageMatrix[2][5] = 0x03E0;
            ImageMatrix[3][0] = 0x03E0; ImageMatrix[3][1] = 0x03E0; ImageMatrix[3][2] = 0x03E0; ImageMatrix[3][3] = 0x03E0; ImageMatrix[3][4] = 0x03E0; ImageMatrix[3][5] = 0x03E0;
            ImageMatrix[4][0] = 0x03E0; ImageMatrix[4][1] = 0x03E0; ImageMatrix[4][2] = 0x03E0; ImageMatrix[4][3] = 0x03E0; ImageMatrix[4][4] = 0x03E0; ImageMatrix[4][5] = 0x03E0;
            ImageMatrix[5][0] = 0x03E0; ImageMatrix[5][1] = 0x03E0; ImageMatrix[5][2] = 0x03E0; ImageMatrix[5][3] = 0x03E0; ImageMatrix[5][4] = 0x03E0; ImageMatrix[5][5] = 0x03E0;
            ImageMatrix[6][0] = 0x03E0; ImageMatrix[6][1] = 0x03E0; ImageMatrix[6][2] = 0x03E0; ImageMatrix[6][3] = 0x03E0; ImageMatrix[6][4] = 0x03E0; ImageMatrix[6][5] = 0x03E0;
            ImageMatrix[7][0] = 0x03E0; ImageMatrix[7][1] = 0x03E0; ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
            Pattern_ID_Frame_Time = 30;
        break;
        case 5:
            ImageMatrix[0][0] = 0x0000; ImageMatrix[0][1] = 0x0000; ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
            ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
            ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
            ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
            ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
            ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
            ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
            ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
            Pattern_ID_Frame_Time = 30;
        break;
        case 6:
            ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x03E0; ImageMatrix[0][5] = 0x03E0;
            ImageMatrix[1][0] = 0x03E0; ImageMatrix[1][1] = 0x03E0; ImageMatrix[1][2] = 0x03E0; ImageMatrix[1][3] = 0x03E0; ImageMatrix[1][4] = 0x03E0; ImageMatrix[1][5] = 0x03E0;
            ImageMatrix[2][0] = 0x03E0; ImageMatrix[2][1] = 0x03E0; ImageMatrix[2][2] = 0x03E0; ImageMatrix[2][3] = 0x03E0; ImageMatrix[2][4] = 0x03E0; ImageMatrix[2][5] = 0x03E0;
            ImageMatrix[3][0] = 0x03E0; ImageMatrix[3][1] = 0x03E0; ImageMatrix[3][2] = 0x03E0; ImageMatrix[3][3] = 0x03E0; ImageMatrix[3][4] = 0x03E0; ImageMatrix[3][5] = 0x03E0;
            ImageMatrix[4][0] = 0x03E0; ImageMatrix[4][1] = 0x03E0; ImageMatrix[4][2] = 0x03E0; ImageMatrix[4][3] = 0x03E0; ImageMatrix[4][4] = 0x03E0; ImageMatrix[4][5] = 0x03E0;
            ImageMatrix[5][0] = 0x03E0; ImageMatrix[5][1] = 0x03E0; ImageMatrix[5][2] = 0x03E0; ImageMatrix[5][3] = 0x03E0; ImageMatrix[5][4] = 0x03E0; ImageMatrix[5][5] = 0x03E0;
            ImageMatrix[6][0] = 0x03E0; ImageMatrix[6][1] = 0x03E0; ImageMatrix[6][2] = 0x03E0; ImageMatrix[6][3] = 0x03E0; ImageMatrix[6][4] = 0x03E0; ImageMatrix[6][5] = 0x03E0;
            ImageMatrix[7][0] = 0x03E0; ImageMatrix[7][1] = 0x03E0; ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
            Pattern_ID_Frame_Time = 30;
        break;
        case 7:
            ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x03E0; ImageMatrix[0][5] = 0x03E0;
            ImageMatrix[1][0] = 0x03E0; ImageMatrix[1][1] = 0x03E0; ImageMatrix[1][2] = 0x03E0; ImageMatrix[1][3] = 0x03E0; ImageMatrix[1][4] = 0x03E0; ImageMatrix[1][5] = 0x03E0;
            ImageMatrix[2][0] = 0x03E0; ImageMatrix[2][1] = 0x03E0; ImageMatrix[2][2] = 0x03E0; ImageMatrix[2][3] = 0x03E0; ImageMatrix[2][4] = 0x03E0; ImageMatrix[2][5] = 0x03E0;
            ImageMatrix[3][0] = 0x03E0; ImageMatrix[3][1] = 0x03E0; ImageMatrix[3][2] = 0x03E0; ImageMatrix[3][3] = 0x03E0; ImageMatrix[3][4] = 0x03E0; ImageMatrix[3][5] = 0x03E0;
            ImageMatrix[4][0] = 0x03E0; ImageMatrix[4][1] = 0x03E0; ImageMatrix[4][2] = 0x03E0; ImageMatrix[4][3] = 0x03E0; ImageMatrix[4][4] = 0x03E0; ImageMatrix[4][5] = 0x03E0;
            ImageMatrix[5][0] = 0x03E0; ImageMatrix[5][1] = 0x03E0; ImageMatrix[5][2] = 0x03E0; ImageMatrix[5][3] = 0x03E0; ImageMatrix[5][4] = 0x03E0; ImageMatrix[5][5] = 0x03E0;
            ImageMatrix[6][0] = 0x03E0; ImageMatrix[6][1] = 0x03E0; ImageMatrix[6][2] = 0x03E0; ImageMatrix[6][3] = 0x03E0; ImageMatrix[6][4] = 0x03E0; ImageMatrix[6][5] = 0x03E0;
            ImageMatrix[7][0] = 0x03E0; ImageMatrix[7][1] = 0x03E0; ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
            Pattern_ID_Frame_Time = 30;
        case 8:
            ImageMatrix[0][0] = 0x0000; ImageMatrix[0][1] = 0x0000; ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
            ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
            ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
            ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
            ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
            ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
            ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
            ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
            Pattern_ID_Frame_Time = 30;
        break;
        case 9:
            Pattern_ID = Active_Pattern_ID;     //Reset to previous pattern
            Event_Change_Flag = FALSE;
            Pattern_ID_Frame_Time = 2;
        break;

        default:
            Pattern_ID = Active_Pattern_ID;
            Event_Change_Flag = FALSE;
            Pattern_ID_Frame_Time = 2;
            Pattern_ID_Frame_Number = 0;
        break;
    }
}

void __Pattern_Moustache_Preview(void)
{
    Event_Change_Flag = TRUE;
    switch (Pattern_ID_Frame_Number)
    {
    case 1:
         ImageMatrix[0][0] = 0x0000; ImageMatrix[0][1] = 0x0000; ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
         ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
         ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
         ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
         ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
         ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
         ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
         ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
         Pattern_ID_Frame_Time = 2;
     break;

      case 2:
          ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x0000; ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
          ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
          ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
          ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
          ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
          ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
          ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
          ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x001F;
          Pattern_ID_Frame_Time = 2;
      break;

      case 3:
          ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
          ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
          ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
          ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
          ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
          ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
          ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
          ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
          Pattern_ID_Frame_Time = 2;
      break;

      case 4:
          ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
          ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
          ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
          ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
          ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
          ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
          ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
          ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
          Pattern_ID_Frame_Time = 2;
      break;

      case 5:
          ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
          ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
          ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
          ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
          ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
          ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
          ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
          ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
          Pattern_ID_Frame_Time = 2;
      break;

      case 6:
          ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x001F; ImageMatrix[0][5] = 0x0000;
          ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
          ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
          ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
          ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
          ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
          ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
          ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x001F; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
          Pattern_ID_Frame_Time = 2;
      break;

      case 7:
          ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x001F; ImageMatrix[0][5] = 0x001F;
          ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
          ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
          ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
          ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
          ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
          ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
          ImageMatrix[7][0] = 0x001F; ImageMatrix[7][1] = 0x001F; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
          Pattern_ID_Frame_Time = 2;
      break;

      case 8:
          ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x001F; ImageMatrix[0][5] = 0x001F;
          ImageMatrix[1][0] = 0x001F; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
          ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
          ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
          ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
          ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
          ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x001F;
          ImageMatrix[7][0] = 0x001F; ImageMatrix[7][1] = 0x001F; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
          Pattern_ID_Frame_Time = 2;
      break;

      case 9:
          ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x001F; ImageMatrix[0][5] = 0x001F;
          ImageMatrix[1][0] = 0x001F; ImageMatrix[1][1] = 0x001F; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
          ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
          ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
          ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
          ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
          ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x001F; ImageMatrix[6][5] = 0x001F;
          ImageMatrix[7][0] = 0x001F; ImageMatrix[7][1] = 0x001F; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
          Pattern_ID_Frame_Time = 2;
      break;

      case 10:
          ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x001F; ImageMatrix[0][5] = 0x001F;
          ImageMatrix[1][0] = 0x001F; ImageMatrix[1][1] = 0x001F; ImageMatrix[1][2] = 0x001F; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
          ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
          ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
          ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
          ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
          ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x001F; ImageMatrix[6][4] = 0x001F; ImageMatrix[6][5] = 0x001F;
          ImageMatrix[7][0] = 0x001F; ImageMatrix[7][1] = 0x001F; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
          Pattern_ID_Frame_Time = 2;
      break;

      case 11:
          ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x001F; ImageMatrix[0][5] = 0x001F;
          ImageMatrix[1][0] = 0x001F; ImageMatrix[1][1] = 0x001F; ImageMatrix[1][2] = 0x001F; ImageMatrix[1][3] = 0x001F; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
          ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
          ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
          ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
          ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
          ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x001F; ImageMatrix[6][3] = 0x001F; ImageMatrix[6][4] = 0x001F; ImageMatrix[6][5] = 0x001F;
          ImageMatrix[7][0] = 0x001F; ImageMatrix[7][1] = 0x001F; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
          Pattern_ID_Frame_Time = 2;
      break;

      case 12:
          ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x001F; ImageMatrix[0][5] = 0x001F;
          ImageMatrix[1][0] = 0x001F; ImageMatrix[1][1] = 0x001F; ImageMatrix[1][2] = 0x001F; ImageMatrix[1][3] = 0x001F; ImageMatrix[1][4] = 0x001F; ImageMatrix[1][5] = 0x0000;
          ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
          ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
          ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
          ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
          ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x001F; ImageMatrix[6][2] = 0x001F; ImageMatrix[6][3] = 0x001F; ImageMatrix[6][4] = 0x001F; ImageMatrix[6][5] = 0x001F;
          ImageMatrix[7][0] = 0x001F; ImageMatrix[7][1] = 0x001F; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
          Pattern_ID_Frame_Time = 2;
      break;

      case 13:
          ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x001F; ImageMatrix[0][5] = 0x001F;
          ImageMatrix[1][0] = 0x001F; ImageMatrix[1][1] = 0x001F; ImageMatrix[1][2] = 0x001F; ImageMatrix[1][3] = 0x001F; ImageMatrix[1][4] = 0x001F; ImageMatrix[1][5] = 0x001F;
          ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
          ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
          ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
          ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
          ImageMatrix[6][0] = 0x001F; ImageMatrix[6][1] = 0x001F; ImageMatrix[6][2] = 0x001F; ImageMatrix[6][3] = 0x001F; ImageMatrix[6][4] = 0x001F; ImageMatrix[6][5] = 0x001F;
          ImageMatrix[7][0] = 0x001F; ImageMatrix[7][1] = 0x001F; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
          Pattern_ID_Frame_Time = 2;
      break;

      case 14:
          ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x001F; ImageMatrix[0][5] = 0x001F;
          ImageMatrix[1][0] = 0x001F; ImageMatrix[1][1] = 0x001F; ImageMatrix[1][2] = 0x001F; ImageMatrix[1][3] = 0x001F; ImageMatrix[1][4] = 0x001F; ImageMatrix[1][5] = 0x001F;
          ImageMatrix[2][0] = 0x001F; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
          ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
          ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
          ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x001F;
          ImageMatrix[6][0] = 0x001F; ImageMatrix[6][1] = 0x001F; ImageMatrix[6][2] = 0x001F; ImageMatrix[6][3] = 0x001F; ImageMatrix[6][4] = 0x001F; ImageMatrix[6][5] = 0x001F;
          ImageMatrix[7][0] = 0x001F; ImageMatrix[7][1] = 0x001F; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
          Pattern_ID_Frame_Time = 2;
      break;

      case 15:
          ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x001F; ImageMatrix[0][5] = 0x001F;
          ImageMatrix[1][0] = 0x001F; ImageMatrix[1][1] = 0x001F; ImageMatrix[1][2] = 0x001F; ImageMatrix[1][3] = 0x001F; ImageMatrix[1][4] = 0x001F; ImageMatrix[1][5] = 0x001F;
          ImageMatrix[2][0] = 0x001F; ImageMatrix[2][1] = 0x001F; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
          ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
          ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
          ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x001F; ImageMatrix[5][5] = 0x001F;
          ImageMatrix[6][0] = 0x001F; ImageMatrix[6][1] = 0x001F; ImageMatrix[6][2] = 0x001F; ImageMatrix[6][3] = 0x001F; ImageMatrix[6][4] = 0x001F; ImageMatrix[6][5] = 0x001F;
          ImageMatrix[7][0] = 0x001F; ImageMatrix[7][1] = 0x001F; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
          Pattern_ID_Frame_Time = 2;
      break;

      case 16:
          ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x001F; ImageMatrix[0][5] = 0x001F;
          ImageMatrix[1][0] = 0x001F; ImageMatrix[1][1] = 0x001F; ImageMatrix[1][2] = 0x001F; ImageMatrix[1][3] = 0x001F; ImageMatrix[1][4] = 0x001F; ImageMatrix[1][5] = 0x001F;
          ImageMatrix[2][0] = 0x001F; ImageMatrix[2][1] = 0x001F; ImageMatrix[2][2] = 0x001F; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
          ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
          ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
          ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x001F; ImageMatrix[5][4] = 0x001F; ImageMatrix[5][5] = 0x001F;
          ImageMatrix[6][0] = 0x001F; ImageMatrix[6][1] = 0x001F; ImageMatrix[6][2] = 0x001F; ImageMatrix[6][3] = 0x001F; ImageMatrix[6][4] = 0x001F; ImageMatrix[6][5] = 0x001F;
          ImageMatrix[7][0] = 0x001F; ImageMatrix[7][1] = 0x001F; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
          Pattern_ID_Frame_Time = 2;
      break;

      case 17:
          ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x001F; ImageMatrix[0][5] = 0x001F;
          ImageMatrix[1][0] = 0x001F; ImageMatrix[1][1] = 0x001F; ImageMatrix[1][2] = 0x001F; ImageMatrix[1][3] = 0x001F; ImageMatrix[1][4] = 0x001F; ImageMatrix[1][5] = 0x001F;
          ImageMatrix[2][0] = 0x001F; ImageMatrix[2][1] = 0x001F; ImageMatrix[2][2] = 0x001F; ImageMatrix[2][3] = 0x001F; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
          ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
          ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
          ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x001F; ImageMatrix[5][3] = 0x001F; ImageMatrix[5][4] = 0x001F; ImageMatrix[5][5] = 0x001F;
          ImageMatrix[6][0] = 0x001F; ImageMatrix[6][1] = 0x001F; ImageMatrix[6][2] = 0x001F; ImageMatrix[6][3] = 0x001F; ImageMatrix[6][4] = 0x001F; ImageMatrix[6][5] = 0x001F;
          ImageMatrix[7][0] = 0x001F; ImageMatrix[7][1] = 0x001F; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
          Pattern_ID_Frame_Time = 2;
      break;

      case 18:
          ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x001F; ImageMatrix[0][5] = 0x001F;
          ImageMatrix[1][0] = 0x001F; ImageMatrix[1][1] = 0x001F; ImageMatrix[1][2] = 0x001F; ImageMatrix[1][3] = 0x001F; ImageMatrix[1][4] = 0x001F; ImageMatrix[1][5] = 0x001F;
          ImageMatrix[2][0] = 0x001F; ImageMatrix[2][1] = 0x001F; ImageMatrix[2][2] = 0x001F; ImageMatrix[2][3] = 0x001F; ImageMatrix[2][4] = 0x001F; ImageMatrix[2][5] = 0x0000;
          ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
          ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
          ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x001F; ImageMatrix[5][2] = 0x001F; ImageMatrix[5][3] = 0x001F; ImageMatrix[5][4] = 0x001F; ImageMatrix[5][5] = 0x001F;
          ImageMatrix[6][0] = 0x001F; ImageMatrix[6][1] = 0x001F; ImageMatrix[6][2] = 0x001F; ImageMatrix[6][3] = 0x001F; ImageMatrix[6][4] = 0x001F; ImageMatrix[6][5] = 0x001F;
          ImageMatrix[7][0] = 0x001F; ImageMatrix[7][1] = 0x001F; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
          Pattern_ID_Frame_Time = 2;
      break;

      case 19:
          ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x001F; ImageMatrix[0][5] = 0x001F;
          ImageMatrix[1][0] = 0x001F; ImageMatrix[1][1] = 0x001F; ImageMatrix[1][2] = 0x001F; ImageMatrix[1][3] = 0x001F; ImageMatrix[1][4] = 0x001F; ImageMatrix[1][5] = 0x001F;
          ImageMatrix[2][0] = 0x001F; ImageMatrix[2][1] = 0x001F; ImageMatrix[2][2] = 0x001F; ImageMatrix[2][3] = 0x001F; ImageMatrix[2][4] = 0x001F; ImageMatrix[2][5] = 0x001F;
          ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
          ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
          ImageMatrix[5][0] = 0x001F; ImageMatrix[5][1] = 0x001F; ImageMatrix[5][2] = 0x001F; ImageMatrix[5][3] = 0x001F; ImageMatrix[5][4] = 0x001F; ImageMatrix[5][5] = 0x001F;
          ImageMatrix[6][0] = 0x001F; ImageMatrix[6][1] = 0x001F; ImageMatrix[6][2] = 0x001F; ImageMatrix[6][3] = 0x001F; ImageMatrix[6][4] = 0x001F; ImageMatrix[6][5] = 0x001F;
          ImageMatrix[7][0] = 0x001F; ImageMatrix[7][1] = 0x001F; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
          Pattern_ID_Frame_Time = 2;
      break;

      case 20:
          ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x001F; ImageMatrix[0][5] = 0x001F;
          ImageMatrix[1][0] = 0x001F; ImageMatrix[1][1] = 0x001F; ImageMatrix[1][2] = 0x001F; ImageMatrix[1][3] = 0x001F; ImageMatrix[1][4] = 0x001F; ImageMatrix[1][5] = 0x001F;
          ImageMatrix[2][0] = 0x001F; ImageMatrix[2][1] = 0x001F; ImageMatrix[2][2] = 0x001F; ImageMatrix[2][3] = 0x001F; ImageMatrix[2][4] = 0x001F; ImageMatrix[2][5] = 0x001F;
          ImageMatrix[3][0] = 0x001F; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
          ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x001F;
          ImageMatrix[5][0] = 0x001F; ImageMatrix[5][1] = 0x001F; ImageMatrix[5][2] = 0x001F; ImageMatrix[5][3] = 0x001F; ImageMatrix[5][4] = 0x001F; ImageMatrix[5][5] = 0x001F;
          ImageMatrix[6][0] = 0x001F; ImageMatrix[6][1] = 0x001F; ImageMatrix[6][2] = 0x001F; ImageMatrix[6][3] = 0x001F; ImageMatrix[6][4] = 0x001F; ImageMatrix[6][5] = 0x001F;
          ImageMatrix[7][0] = 0x001F; ImageMatrix[7][1] = 0x001F; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
          Pattern_ID_Frame_Time = 2;
      break;

      case 21:
          ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x001F; ImageMatrix[0][5] = 0x001F;
          ImageMatrix[1][0] = 0x001F; ImageMatrix[1][1] = 0x001F; ImageMatrix[1][2] = 0x001F; ImageMatrix[1][3] = 0x001F; ImageMatrix[1][4] = 0x001F; ImageMatrix[1][5] = 0x001F;
          ImageMatrix[2][0] = 0x001F; ImageMatrix[2][1] = 0x001F; ImageMatrix[2][2] = 0x001F; ImageMatrix[2][3] = 0x001F; ImageMatrix[2][4] = 0x001F; ImageMatrix[2][5] = 0x001F;
          ImageMatrix[3][0] = 0x001F; ImageMatrix[3][1] = 0x001F; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
          ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x001F; ImageMatrix[4][5] = 0x001F;
          ImageMatrix[5][0] = 0x001F; ImageMatrix[5][1] = 0x001F; ImageMatrix[5][2] = 0x001F; ImageMatrix[5][3] = 0x001F; ImageMatrix[5][4] = 0x001F; ImageMatrix[5][5] = 0x001F;
          ImageMatrix[6][0] = 0x001F; ImageMatrix[6][1] = 0x001F; ImageMatrix[6][2] = 0x001F; ImageMatrix[6][3] = 0x001F; ImageMatrix[6][4] = 0x001F; ImageMatrix[6][5] = 0x001F;
          ImageMatrix[7][0] = 0x001F; ImageMatrix[7][1] = 0x001F; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
          Pattern_ID_Frame_Time = 2;
      break;

      case 22:
          ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x001F; ImageMatrix[0][5] = 0x001F;
          ImageMatrix[1][0] = 0x001F; ImageMatrix[1][1] = 0x001F; ImageMatrix[1][2] = 0x001F; ImageMatrix[1][3] = 0x001F; ImageMatrix[1][4] = 0x001F; ImageMatrix[1][5] = 0x001F;
          ImageMatrix[2][0] = 0x001F; ImageMatrix[2][1] = 0x001F; ImageMatrix[2][2] = 0x001F; ImageMatrix[2][3] = 0x001F; ImageMatrix[2][4] = 0x001F; ImageMatrix[2][5] = 0x001F;
          ImageMatrix[3][0] = 0x001F; ImageMatrix[3][1] = 0x001F; ImageMatrix[3][2] = 0x001F; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
          ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x001F; ImageMatrix[4][4] = 0x001F; ImageMatrix[4][5] = 0x001F;
          ImageMatrix[5][0] = 0x001F; ImageMatrix[5][1] = 0x001F; ImageMatrix[5][2] = 0x001F; ImageMatrix[5][3] = 0x001F; ImageMatrix[5][4] = 0x001F; ImageMatrix[5][5] = 0x001F;
          ImageMatrix[6][0] = 0x001F; ImageMatrix[6][1] = 0x001F; ImageMatrix[6][2] = 0x001F; ImageMatrix[6][3] = 0x001F; ImageMatrix[6][4] = 0x001F; ImageMatrix[6][5] = 0x001F;
          ImageMatrix[7][0] = 0x001F; ImageMatrix[7][1] = 0x001F; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
          Pattern_ID_Frame_Time = 2;
      break;

      case 23:
          ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x001F; ImageMatrix[0][5] = 0x001F;
          ImageMatrix[1][0] = 0x001F; ImageMatrix[1][1] = 0x001F; ImageMatrix[1][2] = 0x001F; ImageMatrix[1][3] = 0x001F; ImageMatrix[1][4] = 0x001F; ImageMatrix[1][5] = 0x001F;
          ImageMatrix[2][0] = 0x001F; ImageMatrix[2][1] = 0x001F; ImageMatrix[2][2] = 0x001F; ImageMatrix[2][3] = 0x001F; ImageMatrix[2][4] = 0x001F; ImageMatrix[2][5] = 0x001F;
          ImageMatrix[3][0] = 0x001F; ImageMatrix[3][1] = 0x001F; ImageMatrix[3][2] = 0x001F; ImageMatrix[3][3] = 0x001F; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
          ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x001F; ImageMatrix[4][3] = 0x001F; ImageMatrix[4][4] = 0x001F; ImageMatrix[4][5] = 0x001F;
          ImageMatrix[5][0] = 0x001F; ImageMatrix[5][1] = 0x001F; ImageMatrix[5][2] = 0x001F; ImageMatrix[5][3] = 0x001F; ImageMatrix[5][4] = 0x001F; ImageMatrix[5][5] = 0x001F;
          ImageMatrix[6][0] = 0x001F; ImageMatrix[6][1] = 0x001F; ImageMatrix[6][2] = 0x001F; ImageMatrix[6][3] = 0x001F; ImageMatrix[6][4] = 0x001F; ImageMatrix[6][5] = 0x001F;
          ImageMatrix[7][0] = 0x001F; ImageMatrix[7][1] = 0x001F; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
          Pattern_ID_Frame_Time = 2;
      break;

      case 24:
          ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x001F; ImageMatrix[0][5] = 0x001F;
          ImageMatrix[1][0] = 0x001F; ImageMatrix[1][1] = 0x001F; ImageMatrix[1][2] = 0x001F; ImageMatrix[1][3] = 0x001F; ImageMatrix[1][4] = 0x001F; ImageMatrix[1][5] = 0x001F;
          ImageMatrix[2][0] = 0x001F; ImageMatrix[2][1] = 0x001F; ImageMatrix[2][2] = 0x001F; ImageMatrix[2][3] = 0x001F; ImageMatrix[2][4] = 0x001F; ImageMatrix[2][5] = 0x001F;
          ImageMatrix[3][0] = 0x001F; ImageMatrix[3][1] = 0x001F; ImageMatrix[3][2] = 0x001F; ImageMatrix[3][3] = 0x001F; ImageMatrix[3][4] = 0x001F; ImageMatrix[3][5] = 0x0000;
          ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x001F; ImageMatrix[4][2] = 0x001F; ImageMatrix[4][3] = 0x001F; ImageMatrix[4][4] = 0x001F; ImageMatrix[4][5] = 0x001F;
          ImageMatrix[5][0] = 0x001F; ImageMatrix[5][1] = 0x001F; ImageMatrix[5][2] = 0x001F; ImageMatrix[5][3] = 0x001F; ImageMatrix[5][4] = 0x001F; ImageMatrix[5][5] = 0x001F;
          ImageMatrix[6][0] = 0x001F; ImageMatrix[6][1] = 0x001F; ImageMatrix[6][2] = 0x001F; ImageMatrix[6][3] = 0x001F; ImageMatrix[6][4] = 0x001F; ImageMatrix[6][5] = 0x001F;
          ImageMatrix[7][0] = 0x001F; ImageMatrix[7][1] = 0x001F; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
          Pattern_ID_Frame_Time = 2;
      break;

      case 25:
          ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x001F; ImageMatrix[0][5] = 0x001F;
          ImageMatrix[1][0] = 0x001F; ImageMatrix[1][1] = 0x001F; ImageMatrix[1][2] = 0x001F; ImageMatrix[1][3] = 0x001F; ImageMatrix[1][4] = 0x001F; ImageMatrix[1][5] = 0x001F;
          ImageMatrix[2][0] = 0x001F; ImageMatrix[2][1] = 0x001F; ImageMatrix[2][2] = 0x001F; ImageMatrix[2][3] = 0x001F; ImageMatrix[2][4] = 0x001F; ImageMatrix[2][5] = 0x001F;
          ImageMatrix[3][0] = 0x001F; ImageMatrix[3][1] = 0x001F; ImageMatrix[3][2] = 0x001F; ImageMatrix[3][3] = 0x001F; ImageMatrix[3][4] = 0x001F; ImageMatrix[3][5] = 0x001F;
          ImageMatrix[4][0] = 0x001F; ImageMatrix[4][1] = 0x001F; ImageMatrix[4][2] = 0x001F; ImageMatrix[4][3] = 0x001F; ImageMatrix[4][4] = 0x001F; ImageMatrix[4][5] = 0x001F;
          ImageMatrix[5][0] = 0x001F; ImageMatrix[5][1] = 0x001F; ImageMatrix[5][2] = 0x001F; ImageMatrix[5][3] = 0x001F; ImageMatrix[5][4] = 0x001F; ImageMatrix[5][5] = 0x001F;
          ImageMatrix[6][0] = 0x001F; ImageMatrix[6][1] = 0x001F; ImageMatrix[6][2] = 0x001F; ImageMatrix[6][3] = 0x001F; ImageMatrix[6][4] = 0x001F; ImageMatrix[6][5] = 0x001F;
          ImageMatrix[7][0] = 0x001F; ImageMatrix[7][1] = 0x001F; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
          Pattern_ID_Frame_Time = 2;
      break;

      case 26:
          ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x001F; ImageMatrix[0][5] = 0x001F;
          ImageMatrix[1][0] = 0x001F; ImageMatrix[1][1] = 0x001F; ImageMatrix[1][2] = 0x001F; ImageMatrix[1][3] = 0x001F; ImageMatrix[1][4] = 0x001F; ImageMatrix[1][5] = 0x001F;
          ImageMatrix[2][0] = 0x001F; ImageMatrix[2][1] = 0x001F; ImageMatrix[2][2] = 0x001F; ImageMatrix[2][3] = 0x001F; ImageMatrix[2][4] = 0x001F; ImageMatrix[2][5] = 0x001F;
          ImageMatrix[3][0] = 0x001F; ImageMatrix[3][1] = 0x001F; ImageMatrix[3][2] = 0x001F; ImageMatrix[3][3] = 0x001F; ImageMatrix[3][4] = 0x001F; ImageMatrix[3][5] = 0x0000;
          ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x001F; ImageMatrix[4][2] = 0x001F; ImageMatrix[4][3] = 0x001F; ImageMatrix[4][4] = 0x001F; ImageMatrix[4][5] = 0x001F;
          ImageMatrix[5][0] = 0x001F; ImageMatrix[5][1] = 0x001F; ImageMatrix[5][2] = 0x001F; ImageMatrix[5][3] = 0x001F; ImageMatrix[5][4] = 0x001F; ImageMatrix[5][5] = 0x001F;
          ImageMatrix[6][0] = 0x001F; ImageMatrix[6][1] = 0x001F; ImageMatrix[6][2] = 0x001F; ImageMatrix[6][3] = 0x001F; ImageMatrix[6][4] = 0x001F; ImageMatrix[6][5] = 0x001F;
          ImageMatrix[7][0] = 0x001F; ImageMatrix[7][1] = 0x001F; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
          Pattern_ID_Frame_Time = 2;
      break;

       case 27:
           ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x001F; ImageMatrix[0][5] = 0x001F;
           ImageMatrix[1][0] = 0x001F; ImageMatrix[1][1] = 0x001F; ImageMatrix[1][2] = 0x001F; ImageMatrix[1][3] = 0x001F; ImageMatrix[1][4] = 0x001F; ImageMatrix[1][5] = 0x001F;
           ImageMatrix[2][0] = 0x001F; ImageMatrix[2][1] = 0x001F; ImageMatrix[2][2] = 0x001F; ImageMatrix[2][3] = 0x001F; ImageMatrix[2][4] = 0x001F; ImageMatrix[2][5] = 0x001F;
           ImageMatrix[3][0] = 0x001F; ImageMatrix[3][1] = 0x001F; ImageMatrix[3][2] = 0x001F; ImageMatrix[3][3] = 0x001F; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
           ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x001F; ImageMatrix[4][3] = 0x001F; ImageMatrix[4][4] = 0x001F; ImageMatrix[4][5] = 0x001F;
           ImageMatrix[5][0] = 0x001F; ImageMatrix[5][1] = 0x001F; ImageMatrix[5][2] = 0x001F; ImageMatrix[5][3] = 0x001F; ImageMatrix[5][4] = 0x001F; ImageMatrix[5][5] = 0x001F;
           ImageMatrix[6][0] = 0x001F; ImageMatrix[6][1] = 0x001F; ImageMatrix[6][2] = 0x001F; ImageMatrix[6][3] = 0x001F; ImageMatrix[6][4] = 0x001F; ImageMatrix[6][5] = 0x001F;
           ImageMatrix[7][0] = 0x001F; ImageMatrix[7][1] = 0x001F; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
           Pattern_ID_Frame_Time = 2;
       break;

       case 28:
           ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x001F; ImageMatrix[0][5] = 0x001F;
           ImageMatrix[1][0] = 0x001F; ImageMatrix[1][1] = 0x001F; ImageMatrix[1][2] = 0x001F; ImageMatrix[1][3] = 0x001F; ImageMatrix[1][4] = 0x001F; ImageMatrix[1][5] = 0x001F;
           ImageMatrix[2][0] = 0x001F; ImageMatrix[2][1] = 0x001F; ImageMatrix[2][2] = 0x001F; ImageMatrix[2][3] = 0x001F; ImageMatrix[2][4] = 0x001F; ImageMatrix[2][5] = 0x001F;
           ImageMatrix[3][0] = 0x001F; ImageMatrix[3][1] = 0x001F; ImageMatrix[3][2] = 0x001F; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
           ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x001F; ImageMatrix[4][4] = 0x001F; ImageMatrix[4][5] = 0x001F;
           ImageMatrix[5][0] = 0x001F; ImageMatrix[5][1] = 0x001F; ImageMatrix[5][2] = 0x001F; ImageMatrix[5][3] = 0x001F; ImageMatrix[5][4] = 0x001F; ImageMatrix[5][5] = 0x001F;
           ImageMatrix[6][0] = 0x001F; ImageMatrix[6][1] = 0x001F; ImageMatrix[6][2] = 0x001F; ImageMatrix[6][3] = 0x001F; ImageMatrix[6][4] = 0x001F; ImageMatrix[6][5] = 0x001F;
           ImageMatrix[7][0] = 0x001F; ImageMatrix[7][1] = 0x001F; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
           Pattern_ID_Frame_Time = 2;
       break;

       case 29:
           ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x001F; ImageMatrix[0][5] = 0x001F;
           ImageMatrix[1][0] = 0x001F; ImageMatrix[1][1] = 0x001F; ImageMatrix[1][2] = 0x001F; ImageMatrix[1][3] = 0x001F; ImageMatrix[1][4] = 0x001F; ImageMatrix[1][5] = 0x001F;
           ImageMatrix[2][0] = 0x001F; ImageMatrix[2][1] = 0x001F; ImageMatrix[2][2] = 0x001F; ImageMatrix[2][3] = 0x001F; ImageMatrix[2][4] = 0x001F; ImageMatrix[2][5] = 0x001F;
           ImageMatrix[3][0] = 0x001F; ImageMatrix[3][1] = 0x001F; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
           ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x001F; ImageMatrix[4][5] = 0x001F;
           ImageMatrix[5][0] = 0x001F; ImageMatrix[5][1] = 0x001F; ImageMatrix[5][2] = 0x001F; ImageMatrix[5][3] = 0x001F; ImageMatrix[5][4] = 0x001F; ImageMatrix[5][5] = 0x001F;
           ImageMatrix[6][0] = 0x001F; ImageMatrix[6][1] = 0x001F; ImageMatrix[6][2] = 0x001F; ImageMatrix[6][3] = 0x001F; ImageMatrix[6][4] = 0x001F; ImageMatrix[6][5] = 0x001F;
           ImageMatrix[7][0] = 0x001F; ImageMatrix[7][1] = 0x001F; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
           Pattern_ID_Frame_Time = 2;
       break;

       case 30:
           ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x001F; ImageMatrix[0][5] = 0x001F;
           ImageMatrix[1][0] = 0x001F; ImageMatrix[1][1] = 0x001F; ImageMatrix[1][2] = 0x001F; ImageMatrix[1][3] = 0x001F; ImageMatrix[1][4] = 0x001F; ImageMatrix[1][5] = 0x001F;
           ImageMatrix[2][0] = 0x001F; ImageMatrix[2][1] = 0x001F; ImageMatrix[2][2] = 0x001F; ImageMatrix[2][3] = 0x001F; ImageMatrix[2][4] = 0x001F; ImageMatrix[2][5] = 0x001F;
           ImageMatrix[3][0] = 0x001F; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
           ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x001F;
           ImageMatrix[5][0] = 0x001F; ImageMatrix[5][1] = 0x001F; ImageMatrix[5][2] = 0x001F; ImageMatrix[5][3] = 0x001F; ImageMatrix[5][4] = 0x001F; ImageMatrix[5][5] = 0x001F;
           ImageMatrix[6][0] = 0x001F; ImageMatrix[6][1] = 0x001F; ImageMatrix[6][2] = 0x001F; ImageMatrix[6][3] = 0x001F; ImageMatrix[6][4] = 0x001F; ImageMatrix[6][5] = 0x001F;
           ImageMatrix[7][0] = 0x001F; ImageMatrix[7][1] = 0x001F; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
           Pattern_ID_Frame_Time = 2;
       break;

       case 31:
           ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x001F; ImageMatrix[0][5] = 0x001F;
           ImageMatrix[1][0] = 0x001F; ImageMatrix[1][1] = 0x001F; ImageMatrix[1][2] = 0x001F; ImageMatrix[1][3] = 0x001F; ImageMatrix[1][4] = 0x001F; ImageMatrix[1][5] = 0x001F;
           ImageMatrix[2][0] = 0x001F; ImageMatrix[2][1] = 0x001F; ImageMatrix[2][2] = 0x001F; ImageMatrix[2][3] = 0x001F; ImageMatrix[2][4] = 0x001F; ImageMatrix[2][5] = 0x001F;
           ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
           ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
           ImageMatrix[5][0] = 0x001F; ImageMatrix[5][1] = 0x001F; ImageMatrix[5][2] = 0x001F; ImageMatrix[5][3] = 0x001F; ImageMatrix[5][4] = 0x001F; ImageMatrix[5][5] = 0x001F;
           ImageMatrix[6][0] = 0x001F; ImageMatrix[6][1] = 0x001F; ImageMatrix[6][2] = 0x001F; ImageMatrix[6][3] = 0x001F; ImageMatrix[6][4] = 0x001F; ImageMatrix[6][5] = 0x001F;
           ImageMatrix[7][0] = 0x001F; ImageMatrix[7][1] = 0x001F; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
           Pattern_ID_Frame_Time = 2;
       break;

       case 32:
           ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x001F; ImageMatrix[0][5] = 0x001F;
           ImageMatrix[1][0] = 0x001F; ImageMatrix[1][1] = 0x001F; ImageMatrix[1][2] = 0x001F; ImageMatrix[1][3] = 0x001F; ImageMatrix[1][4] = 0x001F; ImageMatrix[1][5] = 0x001F;
           ImageMatrix[2][0] = 0x001F; ImageMatrix[2][1] = 0x001F; ImageMatrix[2][2] = 0x001F; ImageMatrix[2][3] = 0x001F; ImageMatrix[2][4] = 0x001F; ImageMatrix[2][5] = 0x0000;
           ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
           ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
           ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x001F; ImageMatrix[5][2] = 0x001F; ImageMatrix[5][3] = 0x001F; ImageMatrix[5][4] = 0x001F; ImageMatrix[5][5] = 0x001F;
           ImageMatrix[6][0] = 0x001F; ImageMatrix[6][1] = 0x001F; ImageMatrix[6][2] = 0x001F; ImageMatrix[6][3] = 0x001F; ImageMatrix[6][4] = 0x001F; ImageMatrix[6][5] = 0x001F;
           ImageMatrix[7][0] = 0x001F; ImageMatrix[7][1] = 0x001F; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
           Pattern_ID_Frame_Time = 2;
       break;

       case 33:
           ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x001F; ImageMatrix[0][5] = 0x001F;
           ImageMatrix[1][0] = 0x001F; ImageMatrix[1][1] = 0x001F; ImageMatrix[1][2] = 0x001F; ImageMatrix[1][3] = 0x001F; ImageMatrix[1][4] = 0x001F; ImageMatrix[1][5] = 0x001F;
           ImageMatrix[2][0] = 0x001F; ImageMatrix[2][1] = 0x001F; ImageMatrix[2][2] = 0x001F; ImageMatrix[2][3] = 0x001F; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
           ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
           ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
           ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x001F; ImageMatrix[5][3] = 0x001F; ImageMatrix[5][4] = 0x001F; ImageMatrix[5][5] = 0x001F;
           ImageMatrix[6][0] = 0x001F; ImageMatrix[6][1] = 0x001F; ImageMatrix[6][2] = 0x001F; ImageMatrix[6][3] = 0x001F; ImageMatrix[6][4] = 0x001F; ImageMatrix[6][5] = 0x001F;
           ImageMatrix[7][0] = 0x001F; ImageMatrix[7][1] = 0x001F; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
           Pattern_ID_Frame_Time = 2;
       break;

       case 34:
           ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x001F; ImageMatrix[0][5] = 0x001F;
           ImageMatrix[1][0] = 0x001F; ImageMatrix[1][1] = 0x001F; ImageMatrix[1][2] = 0x001F; ImageMatrix[1][3] = 0x001F; ImageMatrix[1][4] = 0x001F; ImageMatrix[1][5] = 0x001F;
           ImageMatrix[2][0] = 0x001F; ImageMatrix[2][1] = 0x001F; ImageMatrix[2][2] = 0x001F; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
           ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
           ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
           ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x001F; ImageMatrix[5][4] = 0x001F; ImageMatrix[5][5] = 0x001F;
           ImageMatrix[6][0] = 0x001F; ImageMatrix[6][1] = 0x001F; ImageMatrix[6][2] = 0x001F; ImageMatrix[6][3] = 0x001F; ImageMatrix[6][4] = 0x001F; ImageMatrix[6][5] = 0x001F;
           ImageMatrix[7][0] = 0x001F; ImageMatrix[7][1] = 0x001F; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
           Pattern_ID_Frame_Time = 2;
       break;

       case 35:
           ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x001F; ImageMatrix[0][5] = 0x001F;
           ImageMatrix[1][0] = 0x001F; ImageMatrix[1][1] = 0x001F; ImageMatrix[1][2] = 0x001F; ImageMatrix[1][3] = 0x001F; ImageMatrix[1][4] = 0x001F; ImageMatrix[1][5] = 0x001F;
           ImageMatrix[2][0] = 0x001F; ImageMatrix[2][1] = 0x001F; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
           ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
           ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
           ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x001F; ImageMatrix[5][5] = 0x001F;
           ImageMatrix[6][0] = 0x001F; ImageMatrix[6][1] = 0x001F; ImageMatrix[6][2] = 0x001F; ImageMatrix[6][3] = 0x001F; ImageMatrix[6][4] = 0x001F; ImageMatrix[6][5] = 0x001F;
           ImageMatrix[7][0] = 0x001F; ImageMatrix[7][1] = 0x001F; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
           Pattern_ID_Frame_Time = 2;
       break;

       case 36:
           ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x001F; ImageMatrix[0][5] = 0x001F;
           ImageMatrix[1][0] = 0x001F; ImageMatrix[1][1] = 0x001F; ImageMatrix[1][2] = 0x001F; ImageMatrix[1][3] = 0x001F; ImageMatrix[1][4] = 0x001F; ImageMatrix[1][5] = 0x001F;
           ImageMatrix[2][0] = 0x001F; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
           ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
           ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
           ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x001F;
           ImageMatrix[6][0] = 0x001F; ImageMatrix[6][1] = 0x001F; ImageMatrix[6][2] = 0x001F; ImageMatrix[6][3] = 0x001F; ImageMatrix[6][4] = 0x001F; ImageMatrix[6][5] = 0x001F;
           ImageMatrix[7][0] = 0x001F; ImageMatrix[7][1] = 0x001F; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
           Pattern_ID_Frame_Time = 2;
       break;

       case 37:
           ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x001F; ImageMatrix[0][5] = 0x001F;
           ImageMatrix[1][0] = 0x001F; ImageMatrix[1][1] = 0x001F; ImageMatrix[1][2] = 0x001F; ImageMatrix[1][3] = 0x001F; ImageMatrix[1][4] = 0x001F; ImageMatrix[1][5] = 0x001F;
           ImageMatrix[2][0] = 0x001F; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
           ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
           ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
           ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x001F;
           ImageMatrix[6][0] = 0x001F; ImageMatrix[6][1] = 0x001F; ImageMatrix[6][2] = 0x001F; ImageMatrix[6][3] = 0x001F; ImageMatrix[6][4] = 0x001F; ImageMatrix[6][5] = 0x001F;
           ImageMatrix[7][0] = 0x001F; ImageMatrix[7][1] = 0x001F; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
           Pattern_ID_Frame_Time = 2;
       break;

       case 38:
           ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x001F; ImageMatrix[0][5] = 0x001F;
           ImageMatrix[1][0] = 0x001F; ImageMatrix[1][1] = 0x001F; ImageMatrix[1][2] = 0x001F; ImageMatrix[1][3] = 0x001F; ImageMatrix[1][4] = 0x001F; ImageMatrix[1][5] = 0x001F;
           ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
           ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
           ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
           ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
           ImageMatrix[6][0] = 0x001F; ImageMatrix[6][1] = 0x001F; ImageMatrix[6][2] = 0x001F; ImageMatrix[6][3] = 0x001F; ImageMatrix[6][4] = 0x001F; ImageMatrix[6][5] = 0x001F;
           ImageMatrix[7][0] = 0x001F; ImageMatrix[7][1] = 0x001F; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
           Pattern_ID_Frame_Time = 2;
       break;

       case 39:
           ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x001F; ImageMatrix[0][5] = 0x001F;
           ImageMatrix[1][0] = 0x001F; ImageMatrix[1][1] = 0x001F; ImageMatrix[1][2] = 0x001F; ImageMatrix[1][3] = 0x001F; ImageMatrix[1][4] = 0x001F; ImageMatrix[1][5] = 0x0000;
           ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
           ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
           ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
           ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
           ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x001F; ImageMatrix[6][2] = 0x001F; ImageMatrix[6][3] = 0x001F; ImageMatrix[6][4] = 0x001F; ImageMatrix[6][5] = 0x001F;
           ImageMatrix[7][0] = 0x001F; ImageMatrix[7][1] = 0x001F; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
           Pattern_ID_Frame_Time = 2;
       break;

       case 40:
           ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x001F; ImageMatrix[0][5] = 0x001F;
           ImageMatrix[1][0] = 0x001F; ImageMatrix[1][1] = 0x001F; ImageMatrix[1][2] = 0x001F; ImageMatrix[1][3] = 0x001F; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
           ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
           ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
           ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
           ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
           ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x001F; ImageMatrix[6][3] = 0x001F; ImageMatrix[6][4] = 0x001F; ImageMatrix[6][5] = 0x001F;
           ImageMatrix[7][0] = 0x001F; ImageMatrix[7][1] = 0x001F; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
           Pattern_ID_Frame_Time = 2;
       break;

       case 41:
           ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x001F; ImageMatrix[0][5] = 0x001F;
           ImageMatrix[1][0] = 0x001F; ImageMatrix[1][1] = 0x001F; ImageMatrix[1][2] = 0x001F; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
           ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
           ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
           ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
           ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
           ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x001F; ImageMatrix[6][4] = 0x001F; ImageMatrix[6][5] = 0x001F;
           ImageMatrix[7][0] = 0x001F; ImageMatrix[7][1] = 0x001F; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
           Pattern_ID_Frame_Time = 2;
       break;

       case 42:
           ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x001F; ImageMatrix[0][5] = 0x001F;
           ImageMatrix[1][0] = 0x001F; ImageMatrix[1][1] = 0x001F; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
           ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
           ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
           ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
           ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
           ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x001F; ImageMatrix[6][5] = 0x001F;
           ImageMatrix[7][0] = 0x001F; ImageMatrix[7][1] = 0x001F; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
           Pattern_ID_Frame_Time = 2;
       break;

       case 43:
           ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x001F; ImageMatrix[0][5] = 0x001F;
           ImageMatrix[1][0] = 0x001F; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
           ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
           ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
           ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
           ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
           ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x001F;
           ImageMatrix[7][0] = 0x001F; ImageMatrix[7][1] = 0x001F; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
           Pattern_ID_Frame_Time = 2;
       break;

       case 44:
           ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x001F; ImageMatrix[0][5] = 0x001F;
           ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
           ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
           ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
           ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
           ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
           ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
           ImageMatrix[7][0] = 0x001F; ImageMatrix[7][1] = 0x001F; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
           Pattern_ID_Frame_Time = 2;
       break;

       case 45:
           ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x001F; ImageMatrix[0][5] = 0x0000;
           ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
           ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
           ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
           ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
           ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
           ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
           ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x001F; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
           Pattern_ID_Frame_Time = 2;
       break;

       case 46:
           ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
           ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
           ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
           ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
           ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
           ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
           ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
           ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
           Pattern_ID_Frame_Time = 2;
       break;

       case 47:
           ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
           ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
           ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
           ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
           ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
           ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
           ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
           ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
           Pattern_ID_Frame_Time = 2;
       break;

       case 48:
           ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
           ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
           ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
           ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
           ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
           ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
           ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
           ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
           Pattern_ID_Frame_Time = 2;
       break;

       case 49:
           ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x0000; ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
           ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
           ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
           ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
           ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
           ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
           ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
           ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x001F;
           Pattern_ID_Frame_Time = 2;
       break;

       case 50:
           ImageMatrix[0][0] = 0x0000; ImageMatrix[0][1] = 0x0000; ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
           ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
           ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
           ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
           ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
           ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
           ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
           ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
           Pattern_ID_Frame_Time = 2;
       break;

        case 51:
            Pattern_ID = Active_Pattern_ID;     //Reset to previous pattern
            Event_Change_Flag = FALSE;
            Pattern_ID_Frame_Time = 2;
        break;

        default:
            Pattern_ID = Active_Pattern_ID;
            Event_Change_Flag = FALSE;
            Pattern_ID_Frame_Time = 2;
            Pattern_ID_Frame_Number = 0;
        break;
    }
}
void __Pattern_VU_Meter_Preview(void)
{
    Event_Change_Flag = TRUE;
     switch (Pattern_ID_Frame_Number)
     {
     case 1:
           ImageMatrix[0][0] = 0x0000; ImageMatrix[0][1] = 0x0000; ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
           ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
           ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
           ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
           ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
           ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
           ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
           ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
           Pattern_ID_Frame_Time = 2;
       break;

        case 2:
            ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x0000; ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
            ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
            ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
            ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
            ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
            ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
            ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
            ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x03E0;
            Pattern_ID_Frame_Time = 2;
        break;

        case 3:
            ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
            ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
            ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
            ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
            ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
            ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
            ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
            ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
            Pattern_ID_Frame_Time = 2;
        break;

        case 4:
            ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
            ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
            ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
            ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
            ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
            ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
            ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
            ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
            Pattern_ID_Frame_Time = 2;
        break;

        case 5:
            ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
            ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
            ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
            ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
            ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
            ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
            ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
            ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
            Pattern_ID_Frame_Time = 2;
        break;

        case 6:
            ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x03E0; ImageMatrix[0][5] = 0x0000;
            ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
            ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
            ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
            ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
            ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
            ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
            ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x03E0; ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
            Pattern_ID_Frame_Time = 2;
        break;

        case 7:
            ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x03E0; ImageMatrix[0][5] = 0x7AC0;
            ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
            ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
            ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
            ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
            ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
            ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
            ImageMatrix[7][0] = 0x7AC0; ImageMatrix[7][1] = 0x03E0; ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
            Pattern_ID_Frame_Time = 2;
        break;

        case 8:
            ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x03E0; ImageMatrix[0][5] = 0x7AC0;
            ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
            ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
            ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
            ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
            ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
            ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x7AC0;
            ImageMatrix[7][0] = 0x7AC0; ImageMatrix[7][1] = 0x03E0; ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
            Pattern_ID_Frame_Time = 2;
        break;

        case 9:
            ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x03E0; ImageMatrix[0][5] = 0x7AC0;
            ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
            ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
            ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
            ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
            ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
            ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x7AC0; ImageMatrix[6][5] = 0x7AC0;
            ImageMatrix[7][0] = 0x7AC0; ImageMatrix[7][1] = 0x03E0; ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
            Pattern_ID_Frame_Time = 2;
        break;

        case 10:
            ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x03E0; ImageMatrix[0][5] = 0x7AC0;
            ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
            ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
            ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
            ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
            ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
            ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x7AC0; ImageMatrix[6][4] = 0x7AC0; ImageMatrix[6][5] = 0x7AC0;
            ImageMatrix[7][0] = 0x7AC0; ImageMatrix[7][1] = 0x03E0; ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
            Pattern_ID_Frame_Time = 2;
        break;

        case 11:
            ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x03E0; ImageMatrix[0][5] = 0x7AC0;
            ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
            ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
            ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
            ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
            ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
            ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x7AC0; ImageMatrix[6][3] = 0x7AC0; ImageMatrix[6][4] = 0x7AC0; ImageMatrix[6][5] = 0x7AC0;
            ImageMatrix[7][0] = 0x7AC0; ImageMatrix[7][1] = 0x03E0; ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
            Pattern_ID_Frame_Time = 2;
        break;

        case 12:
            ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x03E0; ImageMatrix[0][5] = 0x7AC0;
            ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x0000;
            ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
            ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
            ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
            ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
            ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x7AC0; ImageMatrix[6][2] = 0x7AC0; ImageMatrix[6][3] = 0x7AC0; ImageMatrix[6][4] = 0x7AC0; ImageMatrix[6][5] = 0x7AC0;
            ImageMatrix[7][0] = 0x7AC0; ImageMatrix[7][1] = 0x03E0; ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
            Pattern_ID_Frame_Time = 2;
        break;

        case 13:
            ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x03E0; ImageMatrix[0][5] = 0x7AC0;
            ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
            ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
            ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
            ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
            ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
            ImageMatrix[6][0] = 0x7AC0; ImageMatrix[6][1] = 0x7AC0; ImageMatrix[6][2] = 0x7AC0; ImageMatrix[6][3] = 0x7AC0; ImageMatrix[6][4] = 0x7AC0; ImageMatrix[6][5] = 0x7AC0;
            ImageMatrix[7][0] = 0x7AC0; ImageMatrix[7][1] = 0x03E0; ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
            Pattern_ID_Frame_Time = 2;
        break;

        case 14:
            ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x03E0; ImageMatrix[0][5] = 0x7AC0;
            ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
            ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
            ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
            ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
            ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x7AC0;
            ImageMatrix[6][0] = 0x7AC0; ImageMatrix[6][1] = 0x7AC0; ImageMatrix[6][2] = 0x7AC0; ImageMatrix[6][3] = 0x7AC0; ImageMatrix[6][4] = 0x7AC0; ImageMatrix[6][5] = 0x7AC0;
            ImageMatrix[7][0] = 0x7AC0; ImageMatrix[7][1] = 0x03E0; ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
            Pattern_ID_Frame_Time = 2;
        break;

        case 15:
            ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x03E0; ImageMatrix[0][5] = 0x7AC0;
            ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
            ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x7AC0; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
            ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
            ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
            ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x7AC0; ImageMatrix[5][5] = 0x7AC0;
            ImageMatrix[6][0] = 0x7AC0; ImageMatrix[6][1] = 0x7AC0; ImageMatrix[6][2] = 0x7AC0; ImageMatrix[6][3] = 0x7AC0; ImageMatrix[6][4] = 0x7AC0; ImageMatrix[6][5] = 0x7AC0;
            ImageMatrix[7][0] = 0x7AC0; ImageMatrix[7][1] = 0x03E0; ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
            Pattern_ID_Frame_Time = 2;
        break;

        case 16:
            ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x03E0; ImageMatrix[0][5] = 0x7AC0;
            ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
            ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x7AC0; ImageMatrix[2][2] = 0x7AC0; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
            ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
            ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
            ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x7AC0; ImageMatrix[5][4] = 0x7AC0; ImageMatrix[5][5] = 0x7AC0;
            ImageMatrix[6][0] = 0x7AC0; ImageMatrix[6][1] = 0x7AC0; ImageMatrix[6][2] = 0x7AC0; ImageMatrix[6][3] = 0x7AC0; ImageMatrix[6][4] = 0x7AC0; ImageMatrix[6][5] = 0x7AC0;
            ImageMatrix[7][0] = 0x7AC0; ImageMatrix[7][1] = 0x03E0; ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
            Pattern_ID_Frame_Time = 2;
        break;

        case 17:
            ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x03E0; ImageMatrix[0][5] = 0x7AC0;
            ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
            ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x7AC0; ImageMatrix[2][2] = 0x7AC0; ImageMatrix[2][3] = 0x7AC0; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
            ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
            ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
            ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x7AC0; ImageMatrix[5][3] = 0x7AC0; ImageMatrix[5][4] = 0x7AC0; ImageMatrix[5][5] = 0x7AC0;
            ImageMatrix[6][0] = 0x7AC0; ImageMatrix[6][1] = 0x7AC0; ImageMatrix[6][2] = 0x7AC0; ImageMatrix[6][3] = 0x7AC0; ImageMatrix[6][4] = 0x7AC0; ImageMatrix[6][5] = 0x7AC0;
            ImageMatrix[7][0] = 0x7AC0; ImageMatrix[7][1] = 0x03E0; ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
            Pattern_ID_Frame_Time = 2;
        break;

        case 18:
            ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x03E0; ImageMatrix[0][5] = 0x7AC0;
            ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
            ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x7AC0; ImageMatrix[2][2] = 0x7AC0; ImageMatrix[2][3] = 0x7AC0; ImageMatrix[2][4] = 0x7C00; ImageMatrix[2][5] = 0x0000;
            ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
            ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
            ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x7C00; ImageMatrix[5][2] = 0x7AC0; ImageMatrix[5][3] = 0x7AC0; ImageMatrix[5][4] = 0x7AC0; ImageMatrix[5][5] = 0x7AC0;
            ImageMatrix[6][0] = 0x7AC0; ImageMatrix[6][1] = 0x7AC0; ImageMatrix[6][2] = 0x7AC0; ImageMatrix[6][3] = 0x7AC0; ImageMatrix[6][4] = 0x7AC0; ImageMatrix[6][5] = 0x7AC0;
            ImageMatrix[7][0] = 0x7AC0; ImageMatrix[7][1] = 0x03E0; ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
            Pattern_ID_Frame_Time = 2;
        break;

        case 19:
            ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x03E0; ImageMatrix[0][5] = 0x7AC0;
            ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
            ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x7AC0; ImageMatrix[2][2] = 0x7AC0; ImageMatrix[2][3] = 0x7AC0; ImageMatrix[2][4] = 0x7C00; ImageMatrix[2][5] = 0x7C00;
            ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
            ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
            ImageMatrix[5][0] = 0x7C00; ImageMatrix[5][1] = 0x7C00; ImageMatrix[5][2] = 0x7AC0; ImageMatrix[5][3] = 0x7AC0; ImageMatrix[5][4] = 0x7AC0; ImageMatrix[5][5] = 0x7AC0;
            ImageMatrix[6][0] = 0x7AC0; ImageMatrix[6][1] = 0x7AC0; ImageMatrix[6][2] = 0x7AC0; ImageMatrix[6][3] = 0x7AC0; ImageMatrix[6][4] = 0x7AC0; ImageMatrix[6][5] = 0x7AC0;
            ImageMatrix[7][0] = 0x7AC0; ImageMatrix[7][1] = 0x03E0; ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
            Pattern_ID_Frame_Time = 2;
        break;

        case 20:
            ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x03E0; ImageMatrix[0][5] = 0x7AC0;
            ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
            ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x7AC0; ImageMatrix[2][2] = 0x7AC0; ImageMatrix[2][3] = 0x7AC0; ImageMatrix[2][4] = 0x7C00; ImageMatrix[2][5] = 0x7C00;
            ImageMatrix[3][0] = 0x7C00; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
            ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x7C00;
            ImageMatrix[5][0] = 0x7C00; ImageMatrix[5][1] = 0x7C00; ImageMatrix[5][2] = 0x7AC0; ImageMatrix[5][3] = 0x7AC0; ImageMatrix[5][4] = 0x7AC0; ImageMatrix[5][5] = 0x7AC0;
            ImageMatrix[6][0] = 0x7AC0; ImageMatrix[6][1] = 0x7AC0; ImageMatrix[6][2] = 0x7AC0; ImageMatrix[6][3] = 0x7AC0; ImageMatrix[6][4] = 0x7AC0; ImageMatrix[6][5] = 0x7AC0;
            ImageMatrix[7][0] = 0x7AC0; ImageMatrix[7][1] = 0x03E0; ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
            Pattern_ID_Frame_Time = 2;
        break;

        case 21:
            ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x03E0; ImageMatrix[0][5] = 0x7AC0;
            ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
            ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x7AC0; ImageMatrix[2][2] = 0x7AC0; ImageMatrix[2][3] = 0x7AC0; ImageMatrix[2][4] = 0x7C00; ImageMatrix[2][5] = 0x7C00;
            ImageMatrix[3][0] = 0x7C00; ImageMatrix[3][1] = 0x7C00; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
            ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x7C00; ImageMatrix[4][5] = 0x7C00;
            ImageMatrix[5][0] = 0x7C00; ImageMatrix[5][1] = 0x7C00; ImageMatrix[5][2] = 0x7AC0; ImageMatrix[5][3] = 0x7AC0; ImageMatrix[5][4] = 0x7AC0; ImageMatrix[5][5] = 0x7AC0;
            ImageMatrix[6][0] = 0x7AC0; ImageMatrix[6][1] = 0x7AC0; ImageMatrix[6][2] = 0x7AC0; ImageMatrix[6][3] = 0x7AC0; ImageMatrix[6][4] = 0x7AC0; ImageMatrix[6][5] = 0x7AC0;
            ImageMatrix[7][0] = 0x7AC0; ImageMatrix[7][1] = 0x03E0; ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
            Pattern_ID_Frame_Time = 2;
        break;

        case 22:
            ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x03E0; ImageMatrix[0][5] = 0x7AC0;
            ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
            ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x7AC0; ImageMatrix[2][2] = 0x7AC0; ImageMatrix[2][3] = 0x7AC0; ImageMatrix[2][4] = 0x7C00; ImageMatrix[2][5] = 0x7C00;
            ImageMatrix[3][0] = 0x7C00; ImageMatrix[3][1] = 0x7C00; ImageMatrix[3][2] = 0x7C00; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
            ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x7C00; ImageMatrix[4][4] = 0x7C00; ImageMatrix[4][5] = 0x7C00;
            ImageMatrix[5][0] = 0x7C00; ImageMatrix[5][1] = 0x7C00; ImageMatrix[5][2] = 0x7AC0; ImageMatrix[5][3] = 0x7AC0; ImageMatrix[5][4] = 0x7AC0; ImageMatrix[5][5] = 0x7AC0;
            ImageMatrix[6][0] = 0x7AC0; ImageMatrix[6][1] = 0x7AC0; ImageMatrix[6][2] = 0x7AC0; ImageMatrix[6][3] = 0x7AC0; ImageMatrix[6][4] = 0x7AC0; ImageMatrix[6][5] = 0x7AC0;
            ImageMatrix[7][0] = 0x7AC0; ImageMatrix[7][1] = 0x03E0; ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
            Pattern_ID_Frame_Time = 2;
        break;

        case 23:
            ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x03E0; ImageMatrix[0][5] = 0x7AC0;
            ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
            ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x7AC0; ImageMatrix[2][2] = 0x7AC0; ImageMatrix[2][3] = 0x7AC0; ImageMatrix[2][4] = 0x7C00; ImageMatrix[2][5] = 0x7C00;
            ImageMatrix[3][0] = 0x7C00; ImageMatrix[3][1] = 0x7C00; ImageMatrix[3][2] = 0x7C00; ImageMatrix[3][3] = 0x7C00; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
            ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x7C00; ImageMatrix[4][3] = 0x7C00; ImageMatrix[4][4] = 0x7C00; ImageMatrix[4][5] = 0x7C00;
            ImageMatrix[5][0] = 0x7C00; ImageMatrix[5][1] = 0x7C00; ImageMatrix[5][2] = 0x7AC0; ImageMatrix[5][3] = 0x7AC0; ImageMatrix[5][4] = 0x7AC0; ImageMatrix[5][5] = 0x7AC0;
            ImageMatrix[6][0] = 0x7AC0; ImageMatrix[6][1] = 0x7AC0; ImageMatrix[6][2] = 0x7AC0; ImageMatrix[6][3] = 0x7AC0; ImageMatrix[6][4] = 0x7AC0; ImageMatrix[6][5] = 0x7AC0;
            ImageMatrix[7][0] = 0x7AC0; ImageMatrix[7][1] = 0x03E0; ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
            Pattern_ID_Frame_Time = 2;
        break;

        case 24:
            ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x03E0; ImageMatrix[0][5] = 0x7AC0;
            ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
            ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x7AC0; ImageMatrix[2][2] = 0x7AC0; ImageMatrix[2][3] = 0x7AC0; ImageMatrix[2][4] = 0x7C00; ImageMatrix[2][5] = 0x7C00;
            ImageMatrix[3][0] = 0x7C00; ImageMatrix[3][1] = 0x7C00; ImageMatrix[3][2] = 0x7C00; ImageMatrix[3][3] = 0x7C00; ImageMatrix[3][4] = 0x7C00; ImageMatrix[3][5] = 0x0000;
            ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x7C00; ImageMatrix[4][2] = 0x7C00; ImageMatrix[4][3] = 0x7C00; ImageMatrix[4][4] = 0x7C00; ImageMatrix[4][5] = 0x7C00;
            ImageMatrix[5][0] = 0x7C00; ImageMatrix[5][1] = 0x7C00; ImageMatrix[5][2] = 0x7AC0; ImageMatrix[5][3] = 0x7AC0; ImageMatrix[5][4] = 0x7AC0; ImageMatrix[5][5] = 0x7AC0;
            ImageMatrix[6][0] = 0x7AC0; ImageMatrix[6][1] = 0x7AC0; ImageMatrix[6][2] = 0x7AC0; ImageMatrix[6][3] = 0x7AC0; ImageMatrix[6][4] = 0x7AC0; ImageMatrix[6][5] = 0x7AC0;
            ImageMatrix[7][0] = 0x7AC0; ImageMatrix[7][1] = 0x03E0; ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
            Pattern_ID_Frame_Time = 2;
        break;

        case 25:
            ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x03E0; ImageMatrix[0][5] = 0x7AC0;
            ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
            ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x7AC0; ImageMatrix[2][2] = 0x7AC0; ImageMatrix[2][3] = 0x7AC0; ImageMatrix[2][4] = 0x7C00; ImageMatrix[2][5] = 0x7C00;
            ImageMatrix[3][0] = 0x7C00; ImageMatrix[3][1] = 0x7C00; ImageMatrix[3][2] = 0x7C00; ImageMatrix[3][3] = 0x7C00; ImageMatrix[3][4] = 0x7C00; ImageMatrix[3][5] = 0x7C00;
            ImageMatrix[4][0] = 0x7C00; ImageMatrix[4][1] = 0x7C00; ImageMatrix[4][2] = 0x7C00; ImageMatrix[4][3] = 0x7C00; ImageMatrix[4][4] = 0x7C00; ImageMatrix[4][5] = 0x7C00;
            ImageMatrix[5][0] = 0x7C00; ImageMatrix[5][1] = 0x7C00; ImageMatrix[5][2] = 0x7AC0; ImageMatrix[5][3] = 0x7AC0; ImageMatrix[5][4] = 0x7AC0; ImageMatrix[5][5] = 0x7AC0;
            ImageMatrix[6][0] = 0x7AC0; ImageMatrix[6][1] = 0x7AC0; ImageMatrix[6][2] = 0x7AC0; ImageMatrix[6][3] = 0x7AC0; ImageMatrix[6][4] = 0x7AC0; ImageMatrix[6][5] = 0x7AC0;
            ImageMatrix[7][0] = 0x7AC0; ImageMatrix[7][1] = 0x03E0; ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
            Pattern_ID_Frame_Time = 2;
        break;

        case 26:
               ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x03E0; ImageMatrix[0][5] = 0x7AC0;
               ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
               ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x7AC0; ImageMatrix[2][2] = 0x7AC0; ImageMatrix[2][3] = 0x7AC0; ImageMatrix[2][4] = 0x7C00; ImageMatrix[2][5] = 0x7C00;
               ImageMatrix[3][0] = 0x7C00; ImageMatrix[3][1] = 0x7C00; ImageMatrix[3][2] = 0x7C00; ImageMatrix[3][3] = 0x7C00; ImageMatrix[3][4] = 0x7C00; ImageMatrix[3][5] = 0x7C00;
               ImageMatrix[4][0] = 0x7C00; ImageMatrix[4][1] = 0x7C00; ImageMatrix[4][2] = 0x7C00; ImageMatrix[4][3] = 0x7C00; ImageMatrix[4][4] = 0x7C00; ImageMatrix[4][5] = 0x7C00;
               ImageMatrix[5][0] = 0x7C00; ImageMatrix[5][1] = 0x7C00; ImageMatrix[5][2] = 0x7AC0; ImageMatrix[5][3] = 0x7AC0; ImageMatrix[5][4] = 0x7AC0; ImageMatrix[5][5] = 0x7AC0;
               ImageMatrix[6][0] = 0x7AC0; ImageMatrix[6][1] = 0x7AC0; ImageMatrix[6][2] = 0x7AC0; ImageMatrix[6][3] = 0x7AC0; ImageMatrix[6][4] = 0x7AC0; ImageMatrix[6][5] = 0x7AC0;
               ImageMatrix[7][0] = 0x7AC0; ImageMatrix[7][1] = 0x03E0; ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
            Pattern_ID_Frame_Time = 2;
        break;

         case 27:
               ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x03E0; ImageMatrix[0][5] = 0x7AC0;
               ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
               ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x7AC0; ImageMatrix[2][2] = 0x7AC0; ImageMatrix[2][3] = 0x7AC0; ImageMatrix[2][4] = 0x7C00; ImageMatrix[2][5] = 0x7C00;
               ImageMatrix[3][0] = 0x7C00; ImageMatrix[3][1] = 0x7C00; ImageMatrix[3][2] = 0x7C00; ImageMatrix[3][3] = 0x7C00; ImageMatrix[3][4] = 0x7C00; ImageMatrix[3][5] = 0x0000;
               ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x7C00; ImageMatrix[4][2] = 0x7C00; ImageMatrix[4][3] = 0x7C00; ImageMatrix[4][4] = 0x7C00; ImageMatrix[4][5] = 0x7C00;
               ImageMatrix[5][0] = 0x7C00; ImageMatrix[5][1] = 0x7C00; ImageMatrix[5][2] = 0x7AC0; ImageMatrix[5][3] = 0x7AC0; ImageMatrix[5][4] = 0x7AC0; ImageMatrix[5][5] = 0x7AC0;
               ImageMatrix[6][0] = 0x7AC0; ImageMatrix[6][1] = 0x7AC0; ImageMatrix[6][2] = 0x7AC0; ImageMatrix[6][3] = 0x7AC0; ImageMatrix[6][4] = 0x7AC0; ImageMatrix[6][5] = 0x7AC0;
               ImageMatrix[7][0] = 0x7AC0; ImageMatrix[7][1] = 0x03E0; ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
             Pattern_ID_Frame_Time = 2;
         break;

         case 28:
               ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x03E0; ImageMatrix[0][5] = 0x7AC0;
               ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
               ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x7AC0; ImageMatrix[2][2] = 0x7AC0; ImageMatrix[2][3] = 0x7AC0; ImageMatrix[2][4] = 0x7C00; ImageMatrix[2][5] = 0x7C00;
               ImageMatrix[3][0] = 0x7C00; ImageMatrix[3][1] = 0x7C00; ImageMatrix[3][2] = 0x7C00; ImageMatrix[3][3] = 0x7C00; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
               ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x7C00; ImageMatrix[4][3] = 0x7C00; ImageMatrix[4][4] = 0x7C00; ImageMatrix[4][5] = 0x7C00;
               ImageMatrix[5][0] = 0x7C00; ImageMatrix[5][1] = 0x7C00; ImageMatrix[5][2] = 0x7AC0; ImageMatrix[5][3] = 0x7AC0; ImageMatrix[5][4] = 0x7AC0; ImageMatrix[5][5] = 0x7AC0;
               ImageMatrix[6][0] = 0x7AC0; ImageMatrix[6][1] = 0x7AC0; ImageMatrix[6][2] = 0x7AC0; ImageMatrix[6][3] = 0x7AC0; ImageMatrix[6][4] = 0x7AC0; ImageMatrix[6][5] = 0x7AC0;
               ImageMatrix[7][0] = 0x7AC0; ImageMatrix[7][1] = 0x03E0; ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
             Pattern_ID_Frame_Time = 2;
         break;

         case 29:
               ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x03E0; ImageMatrix[0][5] = 0x7AC0;
               ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
               ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x7AC0; ImageMatrix[2][2] = 0x7AC0; ImageMatrix[2][3] = 0x7AC0; ImageMatrix[2][4] = 0x7C00; ImageMatrix[2][5] = 0x7C00;
               ImageMatrix[3][0] = 0x7C00; ImageMatrix[3][1] = 0x7C00; ImageMatrix[3][2] = 0x7C00; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
               ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x7C00; ImageMatrix[4][4] = 0x7C00; ImageMatrix[4][5] = 0x7C00;
               ImageMatrix[5][0] = 0x7C00; ImageMatrix[5][1] = 0x7C00; ImageMatrix[5][2] = 0x7AC0; ImageMatrix[5][3] = 0x7AC0; ImageMatrix[5][4] = 0x7AC0; ImageMatrix[5][5] = 0x7AC0;
               ImageMatrix[6][0] = 0x7AC0; ImageMatrix[6][1] = 0x7AC0; ImageMatrix[6][2] = 0x7AC0; ImageMatrix[6][3] = 0x7AC0; ImageMatrix[6][4] = 0x7AC0; ImageMatrix[6][5] = 0x7AC0;
               ImageMatrix[7][0] = 0x7AC0; ImageMatrix[7][1] = 0x03E0; ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
             Pattern_ID_Frame_Time = 2;
         break;

         case 30:
               ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x03E0; ImageMatrix[0][5] = 0x7AC0;
               ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
               ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x7AC0; ImageMatrix[2][2] = 0x7AC0; ImageMatrix[2][3] = 0x7AC0; ImageMatrix[2][4] = 0x7C00; ImageMatrix[2][5] = 0x7C00;
               ImageMatrix[3][0] = 0x7C00; ImageMatrix[3][1] = 0x7C00; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
               ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x7C00; ImageMatrix[4][5] = 0x7C00;
               ImageMatrix[5][0] = 0x7C00; ImageMatrix[5][1] = 0x7C00; ImageMatrix[5][2] = 0x7AC0; ImageMatrix[5][3] = 0x7AC0; ImageMatrix[5][4] = 0x7AC0; ImageMatrix[5][5] = 0x7AC0;
               ImageMatrix[6][0] = 0x7AC0; ImageMatrix[6][1] = 0x7AC0; ImageMatrix[6][2] = 0x7AC0; ImageMatrix[6][3] = 0x7AC0; ImageMatrix[6][4] = 0x7AC0; ImageMatrix[6][5] = 0x7AC0;
               ImageMatrix[7][0] = 0x7AC0; ImageMatrix[7][1] = 0x03E0; ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
             Pattern_ID_Frame_Time = 2;
         break;

         case 31:
               ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x03E0; ImageMatrix[0][5] = 0x7AC0;
               ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
               ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x7AC0; ImageMatrix[2][2] = 0x7AC0; ImageMatrix[2][3] = 0x7AC0; ImageMatrix[2][4] = 0x7C00; ImageMatrix[2][5] = 0x7C00;
               ImageMatrix[3][0] = 0x7C00; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
               ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x7C00;
               ImageMatrix[5][0] = 0x7C00; ImageMatrix[5][1] = 0x7C00; ImageMatrix[5][2] = 0x7AC0; ImageMatrix[5][3] = 0x7AC0; ImageMatrix[5][4] = 0x7AC0; ImageMatrix[5][5] = 0x7AC0;
               ImageMatrix[6][0] = 0x7AC0; ImageMatrix[6][1] = 0x7AC0; ImageMatrix[6][2] = 0x7AC0; ImageMatrix[6][3] = 0x7AC0; ImageMatrix[6][4] = 0x7AC0; ImageMatrix[6][5] = 0x7AC0;
               ImageMatrix[7][0] = 0x7AC0; ImageMatrix[7][1] = 0x03E0; ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
             Pattern_ID_Frame_Time = 2;
         break;

         case 32:
               ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x03E0; ImageMatrix[0][5] = 0x7AC0;
               ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
               ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x7AC0; ImageMatrix[2][2] = 0x7AC0; ImageMatrix[2][3] = 0x7AC0; ImageMatrix[2][4] = 0x7C00; ImageMatrix[2][5] = 0x7C00;
               ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
               ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
               ImageMatrix[5][0] = 0x7C00; ImageMatrix[5][1] = 0x7C00; ImageMatrix[5][2] = 0x7AC0; ImageMatrix[5][3] = 0x7AC0; ImageMatrix[5][4] = 0x7AC0; ImageMatrix[5][5] = 0x7AC0;
               ImageMatrix[6][0] = 0x7AC0; ImageMatrix[6][1] = 0x7AC0; ImageMatrix[6][2] = 0x7AC0; ImageMatrix[6][3] = 0x7AC0; ImageMatrix[6][4] = 0x7AC0; ImageMatrix[6][5] = 0x7AC0;
               ImageMatrix[7][0] = 0x7AC0; ImageMatrix[7][1] = 0x03E0; ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
             Pattern_ID_Frame_Time = 2;
         break;

         case 33:
               ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x03E0; ImageMatrix[0][5] = 0x7AC0;
               ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
               ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x7AC0; ImageMatrix[2][2] = 0x7AC0; ImageMatrix[2][3] = 0x7AC0; ImageMatrix[2][4] = 0x7C00; ImageMatrix[2][5] = 0x0000;
               ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
               ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
               ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x7C00; ImageMatrix[5][2] = 0x7AC0; ImageMatrix[5][3] = 0x7AC0; ImageMatrix[5][4] = 0x7AC0; ImageMatrix[5][5] = 0x7AC0;
               ImageMatrix[6][0] = 0x7AC0; ImageMatrix[6][1] = 0x7AC0; ImageMatrix[6][2] = 0x7AC0; ImageMatrix[6][3] = 0x7AC0; ImageMatrix[6][4] = 0x7AC0; ImageMatrix[6][5] = 0x7AC0;
               ImageMatrix[7][0] = 0x7AC0; ImageMatrix[7][1] = 0x03E0; ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
             Pattern_ID_Frame_Time = 2;
         break;

         case 34:
               ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x03E0; ImageMatrix[0][5] = 0x7AC0;
               ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
               ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x7AC0; ImageMatrix[2][2] = 0x7AC0; ImageMatrix[2][3] = 0x7AC0; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
               ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
               ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
               ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x7AC0; ImageMatrix[5][3] = 0x7AC0; ImageMatrix[5][4] = 0x7AC0; ImageMatrix[5][5] = 0x7AC0;
               ImageMatrix[6][0] = 0x7AC0; ImageMatrix[6][1] = 0x7AC0; ImageMatrix[6][2] = 0x7AC0; ImageMatrix[6][3] = 0x7AC0; ImageMatrix[6][4] = 0x7AC0; ImageMatrix[6][5] = 0x7AC0;
               ImageMatrix[7][0] = 0x7AC0; ImageMatrix[7][1] = 0x03E0; ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
             Pattern_ID_Frame_Time = 2;
         break;

         case 35:
               ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x03E0; ImageMatrix[0][5] = 0x7AC0;
               ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
               ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x7AC0; ImageMatrix[2][2] = 0x7AC0; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
               ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
               ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
               ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x7AC0; ImageMatrix[5][4] = 0x7AC0; ImageMatrix[5][5] = 0x7AC0;
               ImageMatrix[6][0] = 0x7AC0; ImageMatrix[6][1] = 0x7AC0; ImageMatrix[6][2] = 0x7AC0; ImageMatrix[6][3] = 0x7AC0; ImageMatrix[6][4] = 0x7AC0; ImageMatrix[6][5] = 0x7AC0;
               ImageMatrix[7][0] = 0x7AC0; ImageMatrix[7][1] = 0x03E0; ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
             Pattern_ID_Frame_Time = 2;
         break;

         case 36:
               ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x03E0; ImageMatrix[0][5] = 0x7AC0;
               ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
               ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x7AC0; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
               ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
               ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
               ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x7AC0; ImageMatrix[5][5] = 0x7AC0;
               ImageMatrix[6][0] = 0x7AC0; ImageMatrix[6][1] = 0x7AC0; ImageMatrix[6][2] = 0x7AC0; ImageMatrix[6][3] = 0x7AC0; ImageMatrix[6][4] = 0x7AC0; ImageMatrix[6][5] = 0x7AC0;
               ImageMatrix[7][0] = 0x7AC0; ImageMatrix[7][1] = 0x03E0; ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
             Pattern_ID_Frame_Time = 2;
         break;

         case 37:
               ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x03E0; ImageMatrix[0][5] = 0x7AC0;
               ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
               ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
               ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
               ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
               ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x7AC0;
               ImageMatrix[6][0] = 0x7AC0; ImageMatrix[6][1] = 0x7AC0; ImageMatrix[6][2] = 0x7AC0; ImageMatrix[6][3] = 0x7AC0; ImageMatrix[6][4] = 0x7AC0; ImageMatrix[6][5] = 0x7AC0;
               ImageMatrix[7][0] = 0x7AC0; ImageMatrix[7][1] = 0x03E0; ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
             Pattern_ID_Frame_Time = 2;
         break;

         case 38:
               ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x03E0; ImageMatrix[0][5] = 0x7AC0;
               ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
               ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
               ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
               ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
               ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
               ImageMatrix[6][0] = 0x7AC0; ImageMatrix[6][1] = 0x7AC0; ImageMatrix[6][2] = 0x7AC0; ImageMatrix[6][3] = 0x7AC0; ImageMatrix[6][4] = 0x7AC0; ImageMatrix[6][5] = 0x7AC0;
               ImageMatrix[7][0] = 0x7AC0; ImageMatrix[7][1] = 0x03E0; ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
             Pattern_ID_Frame_Time = 2;
         break;

         case 39:
               ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x03E0; ImageMatrix[0][5] = 0x7AC0;
               ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x0000;
               ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
               ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
               ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
               ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
               ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x7AC0; ImageMatrix[6][2] = 0x7AC0; ImageMatrix[6][3] = 0x7AC0; ImageMatrix[6][4] = 0x7AC0; ImageMatrix[6][5] = 0x7AC0;
               ImageMatrix[7][0] = 0x7AC0; ImageMatrix[7][1] = 0x03E0; ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
             Pattern_ID_Frame_Time = 2;
         break;

         case 40:
               ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x03E0; ImageMatrix[0][5] = 0x7AC0;
               ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
               ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
               ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
               ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
               ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
               ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x7AC0; ImageMatrix[6][3] = 0x7AC0; ImageMatrix[6][4] = 0x7AC0; ImageMatrix[6][5] = 0x7AC0;
               ImageMatrix[7][0] = 0x7AC0; ImageMatrix[7][1] = 0x03E0; ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
             Pattern_ID_Frame_Time = 2;
         break;

         case 41:
               ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x03E0; ImageMatrix[0][5] = 0x7AC0;
               ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
               ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
               ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
               ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
               ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
               ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x7AC0; ImageMatrix[6][4] = 0x7AC0; ImageMatrix[6][5] = 0x7AC0;
               ImageMatrix[7][0] = 0x7AC0; ImageMatrix[7][1] = 0x03E0; ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
             Pattern_ID_Frame_Time = 2;
         break;

         case 42:
               ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x03E0; ImageMatrix[0][5] = 0x7AC0;
               ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
               ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
               ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
               ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
               ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
               ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x7AC0; ImageMatrix[6][5] = 0x7AC0;
               ImageMatrix[7][0] = 0x7AC0; ImageMatrix[7][1] = 0x03E0; ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
             Pattern_ID_Frame_Time = 2;
         break;

         case 43:
               ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x03E0; ImageMatrix[0][5] = 0x7AC0;
               ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
               ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
               ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
               ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
               ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
               ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x7AC0;
               ImageMatrix[7][0] = 0x7AC0; ImageMatrix[7][1] = 0x03E0; ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
             Pattern_ID_Frame_Time = 2;
         break;

         case 44:
               ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x03E0; ImageMatrix[0][5] = 0x7AC0;
               ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
               ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
               ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
               ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
               ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
               ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
               ImageMatrix[7][0] = 0x7AC0; ImageMatrix[7][1] = 0x03E0; ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
             Pattern_ID_Frame_Time = 2;
         break;

         case 45:
               ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x03E0; ImageMatrix[0][5] = 0x0000;
               ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
               ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
               ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
               ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
               ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
               ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
               ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x03E0; ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
             Pattern_ID_Frame_Time = 2;
         break;

         case 46:
               ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
               ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
               ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
               ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
               ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
               ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
               ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
               ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
             Pattern_ID_Frame_Time = 2;
         break;

         case 47:
               ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
               ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
               ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
               ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
               ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
               ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
               ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
               ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
             Pattern_ID_Frame_Time = 2;
         break;

         case 48:
               ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
               ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
               ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
               ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
               ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
               ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
               ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
               ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
             Pattern_ID_Frame_Time = 2;
         break;

         case 49:
               ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x0000; ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
               ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
               ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
               ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
               ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
               ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
               ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
               ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x03E0;
             Pattern_ID_Frame_Time = 2;
         break;

         case 50:
              ImageMatrix[0][0] = 0x0000; ImageMatrix[0][1] = 0x0000; ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
              ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
              ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
              ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
              ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
              ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
              ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
              ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
             Pattern_ID_Frame_Time = 2;
         break;

         case 51:
             Pattern_ID = Active_Pattern_ID;     //Reset to previous pattern
             Event_Change_Flag = FALSE;
             Pattern_ID_Frame_Time = 2;
         break;

         default:
             Pattern_ID = Active_Pattern_ID;
             Event_Change_Flag = FALSE;
             Pattern_ID_Frame_Time = 2;
             Pattern_ID_Frame_Number = 0;
         break;
     }
}
void __Pattern_Clockwise_Preview(void)
{
    Event_Change_Flag = TRUE;
    switch (Pattern_ID_Frame_Number)
    {
    case 1:
         ImageMatrix[0][0] = 0x7AC0; ImageMatrix[0][1] = 0x7AC0; ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
         ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
         ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
         ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
         ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
         ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
         ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
         ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
         Pattern_ID_Frame_Time = 2;
     break;

      case 2:
          ImageMatrix[0][0] = 0x7AC0; ImageMatrix[0][1] = 0x7AC0; ImageMatrix[0][2] = 0x7AC0; ImageMatrix[0][3] = 0x7AC0; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
          ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
          ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
          ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
          ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
          ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
          ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
          ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
          Pattern_ID_Frame_Time = 2;
      break;

      case 3:
          ImageMatrix[0][0] = 0x7AC0; ImageMatrix[0][1] = 0x7AC0; ImageMatrix[0][2] = 0x7AC0; ImageMatrix[0][3] = 0x7AC0; ImageMatrix[0][4] = 0x7AC0; ImageMatrix[0][5] = 0x7AC0;
          ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
          ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
          ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
          ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
          ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
          ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
          ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
          Pattern_ID_Frame_Time = 2;
      break;

      case 4:
          ImageMatrix[0][0] = 0x7AC0; ImageMatrix[0][1] = 0x7AC0; ImageMatrix[0][2] = 0x7AC0; ImageMatrix[0][3] = 0x7AC0; ImageMatrix[0][4] = 0x7AC0; ImageMatrix[0][5] = 0x7AC0;
          ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
          ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
          ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
          ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
          ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
          ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
          ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
          Pattern_ID_Frame_Time = 2;
      break;

      case 5:
          ImageMatrix[0][0] = 0x7AC0; ImageMatrix[0][1] = 0x7AC0; ImageMatrix[0][2] = 0x7AC0; ImageMatrix[0][3] = 0x7AC0; ImageMatrix[0][4] = 0x7AC0; ImageMatrix[0][5] = 0x7AC0;
          ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
          ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
          ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
          ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
          ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
          ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
          ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
          Pattern_ID_Frame_Time = 2;
      break;

      case 6:
          ImageMatrix[0][0] = 0x7AC0; ImageMatrix[0][1] = 0x7AC0; ImageMatrix[0][2] = 0x7AC0; ImageMatrix[0][3] = 0x7AC0; ImageMatrix[0][4] = 0x7AC0; ImageMatrix[0][5] = 0x7AC0;
          ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
          ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
          ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
          ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
          ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
          ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
          ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
          Pattern_ID_Frame_Time = 2;
      break;

      case 7:
          ImageMatrix[0][0] = 0x7AC0; ImageMatrix[0][1] = 0x7AC0; ImageMatrix[0][2] = 0x7AC0; ImageMatrix[0][3] = 0x7AC0; ImageMatrix[0][4] = 0x7AC0; ImageMatrix[0][5] = 0x7AC0;
          ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
          ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x7AC0; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
          ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
          ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
          ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
          ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
          ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
          Pattern_ID_Frame_Time = 2;
      break;

      case 8:
          ImageMatrix[0][0] = 0x7AC0; ImageMatrix[0][1] = 0x7AC0; ImageMatrix[0][2] = 0x7AC0; ImageMatrix[0][3] = 0x7AC0; ImageMatrix[0][4] = 0x7AC0; ImageMatrix[0][5] = 0x7AC0;
          ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
          ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x7AC0; ImageMatrix[2][2] = 0x7AC0; ImageMatrix[2][3] = 0x7AC0; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
          ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
          ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
          ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
          ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
          ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
          Pattern_ID_Frame_Time = 2;
      break;

      case 9:
          ImageMatrix[0][0] = 0x7AC0; ImageMatrix[0][1] = 0x7AC0; ImageMatrix[0][2] = 0x7AC0; ImageMatrix[0][3] = 0x7AC0; ImageMatrix[0][4] = 0x7AC0; ImageMatrix[0][5] = 0x7AC0;
          ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
          ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x7AC0; ImageMatrix[2][2] = 0x7AC0; ImageMatrix[2][3] = 0x7AC0; ImageMatrix[2][4] = 0x7AC0; ImageMatrix[2][5] = 0x7AC0;
          ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
          ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
          ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
          ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
          ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
          Pattern_ID_Frame_Time = 2;
      break;

      case 10:
          ImageMatrix[0][0] = 0x7AC0; ImageMatrix[0][1] = 0x7AC0; ImageMatrix[0][2] = 0x7AC0; ImageMatrix[0][3] = 0x7AC0; ImageMatrix[0][4] = 0x7AC0; ImageMatrix[0][5] = 0x7AC0;
          ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
          ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x7AC0; ImageMatrix[2][2] = 0x7AC0; ImageMatrix[2][3] = 0x7AC0; ImageMatrix[2][4] = 0x7AC0; ImageMatrix[2][5] = 0x7AC0;
          ImageMatrix[3][0] = 0x7AC0; ImageMatrix[3][1] = 0x7AC0; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
          ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
          ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
          ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
          ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
          Pattern_ID_Frame_Time = 2;
      break;

      case 11:
          ImageMatrix[0][0] = 0x7AC0; ImageMatrix[0][1] = 0x7AC0; ImageMatrix[0][2] = 0x7AC0; ImageMatrix[0][3] = 0x7AC0; ImageMatrix[0][4] = 0x7AC0; ImageMatrix[0][5] = 0x7AC0;
          ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
          ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x7AC0; ImageMatrix[2][2] = 0x7AC0; ImageMatrix[2][3] = 0x7AC0; ImageMatrix[2][4] = 0x7AC0; ImageMatrix[2][5] = 0x7AC0;
          ImageMatrix[3][0] = 0x7AC0; ImageMatrix[3][1] = 0x7AC0; ImageMatrix[3][2] = 0x7AC0; ImageMatrix[3][3] = 0x7AC0; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
          ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
          ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
          ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
          ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
          Pattern_ID_Frame_Time = 2;
      break;

      case 12:
          ImageMatrix[0][0] = 0x7AC0; ImageMatrix[0][1] = 0x7AC0; ImageMatrix[0][2] = 0x7AC0; ImageMatrix[0][3] = 0x7AC0; ImageMatrix[0][4] = 0x7AC0; ImageMatrix[0][5] = 0x7AC0;
          ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
          ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x7AC0; ImageMatrix[2][2] = 0x7AC0; ImageMatrix[2][3] = 0x7AC0; ImageMatrix[2][4] = 0x7AC0; ImageMatrix[2][5] = 0x7AC0;
          ImageMatrix[3][0] = 0x7AC0; ImageMatrix[3][1] = 0x7AC0; ImageMatrix[3][2] = 0x7AC0; ImageMatrix[3][3] = 0x7AC0; ImageMatrix[3][4] = 0x7AC0; ImageMatrix[3][5] = 0x7AC0;
          ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
          ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
          ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
          ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
          Pattern_ID_Frame_Time = 2;
      break;

      case 13:
          ImageMatrix[0][0] = 0x7AC0; ImageMatrix[0][1] = 0x7AC0; ImageMatrix[0][2] = 0x7AC0; ImageMatrix[0][3] = 0x7AC0; ImageMatrix[0][4] = 0x7AC0; ImageMatrix[0][5] = 0x7AC0;
          ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
          ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x7AC0; ImageMatrix[2][2] = 0x7AC0; ImageMatrix[2][3] = 0x7AC0; ImageMatrix[2][4] = 0x7AC0; ImageMatrix[2][5] = 0x7AC0;
          ImageMatrix[3][0] = 0x7AC0; ImageMatrix[3][1] = 0x7AC0; ImageMatrix[3][2] = 0x7AC0; ImageMatrix[3][3] = 0x7AC0; ImageMatrix[3][4] = 0x7AC0; ImageMatrix[3][5] = 0x7AC0;
          ImageMatrix[4][0] = 0x7AC0; ImageMatrix[4][1] = 0x7AC0; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
          ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
          ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
          ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
          Pattern_ID_Frame_Time = 2;
      break;

      case 14:
          ImageMatrix[0][0] = 0x7AC0; ImageMatrix[0][1] = 0x7AC0; ImageMatrix[0][2] = 0x7AC0; ImageMatrix[0][3] = 0x7AC0; ImageMatrix[0][4] = 0x7AC0; ImageMatrix[0][5] = 0x7AC0;
          ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
          ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x7AC0; ImageMatrix[2][2] = 0x7AC0; ImageMatrix[2][3] = 0x7AC0; ImageMatrix[2][4] = 0x7AC0; ImageMatrix[2][5] = 0x7AC0;
          ImageMatrix[3][0] = 0x7AC0; ImageMatrix[3][1] = 0x7AC0; ImageMatrix[3][2] = 0x7AC0; ImageMatrix[3][3] = 0x7AC0; ImageMatrix[3][4] = 0x7AC0; ImageMatrix[3][5] = 0x7AC0;
          ImageMatrix[4][0] = 0x7AC0; ImageMatrix[4][1] = 0x7AC0; ImageMatrix[4][2] = 0x7AC0; ImageMatrix[4][3] = 0x7AC0; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
          ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
          ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
          ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
          Pattern_ID_Frame_Time = 2;
      break;

      case 15:
          ImageMatrix[0][0] = 0x7AC0; ImageMatrix[0][1] = 0x7AC0; ImageMatrix[0][2] = 0x7AC0; ImageMatrix[0][3] = 0x7AC0; ImageMatrix[0][4] = 0x7AC0; ImageMatrix[0][5] = 0x7AC0;
          ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
          ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x7AC0; ImageMatrix[2][2] = 0x7AC0; ImageMatrix[2][3] = 0x7AC0; ImageMatrix[2][4] = 0x7AC0; ImageMatrix[2][5] = 0x7AC0;
          ImageMatrix[3][0] = 0x7AC0; ImageMatrix[3][1] = 0x7AC0; ImageMatrix[3][2] = 0x7AC0; ImageMatrix[3][3] = 0x7AC0; ImageMatrix[3][4] = 0x7AC0; ImageMatrix[3][5] = 0x7AC0;
          ImageMatrix[4][0] = 0x7AC0; ImageMatrix[4][1] = 0x7AC0; ImageMatrix[4][2] = 0x7AC0; ImageMatrix[4][3] = 0x7AC0; ImageMatrix[4][4] = 0x7AC0; ImageMatrix[4][5] = 0x7AC0;
          ImageMatrix[5][0] = 0x7AC0; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
          ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
          ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
          Pattern_ID_Frame_Time = 2;
      break;

      case 16:
          ImageMatrix[0][0] = 0x7AC0; ImageMatrix[0][1] = 0x7AC0; ImageMatrix[0][2] = 0x7AC0; ImageMatrix[0][3] = 0x7AC0; ImageMatrix[0][4] = 0x7AC0; ImageMatrix[0][5] = 0x7AC0;
          ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
          ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x7AC0; ImageMatrix[2][2] = 0x7AC0; ImageMatrix[2][3] = 0x7AC0; ImageMatrix[2][4] = 0x7AC0; ImageMatrix[2][5] = 0x7AC0;
          ImageMatrix[3][0] = 0x7AC0; ImageMatrix[3][1] = 0x7AC0; ImageMatrix[3][2] = 0x7AC0; ImageMatrix[3][3] = 0x7AC0; ImageMatrix[3][4] = 0x7AC0; ImageMatrix[3][5] = 0x7AC0;
          ImageMatrix[4][0] = 0x7AC0; ImageMatrix[4][1] = 0x7AC0; ImageMatrix[4][2] = 0x7AC0; ImageMatrix[4][3] = 0x7AC0; ImageMatrix[4][4] = 0x7AC0; ImageMatrix[4][5] = 0x7AC0;
          ImageMatrix[5][0] = 0x7AC0; ImageMatrix[5][1] = 0x7AC0; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
          ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
          ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
          Pattern_ID_Frame_Time = 2;
      break;

      case 17:
          ImageMatrix[0][0] = 0x7AC0; ImageMatrix[0][1] = 0x7AC0; ImageMatrix[0][2] = 0x7AC0; ImageMatrix[0][3] = 0x7AC0; ImageMatrix[0][4] = 0x7AC0; ImageMatrix[0][5] = 0x7AC0;
          ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
          ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x7AC0; ImageMatrix[2][2] = 0x7AC0; ImageMatrix[2][3] = 0x7AC0; ImageMatrix[2][4] = 0x7AC0; ImageMatrix[2][5] = 0x7AC0;
          ImageMatrix[3][0] = 0x7AC0; ImageMatrix[3][1] = 0x7AC0; ImageMatrix[3][2] = 0x7AC0; ImageMatrix[3][3] = 0x7AC0; ImageMatrix[3][4] = 0x7AC0; ImageMatrix[3][5] = 0x7AC0;
          ImageMatrix[4][0] = 0x7AC0; ImageMatrix[4][1] = 0x7AC0; ImageMatrix[4][2] = 0x7AC0; ImageMatrix[4][3] = 0x7AC0; ImageMatrix[4][4] = 0x7AC0; ImageMatrix[4][5] = 0x7AC0;
          ImageMatrix[5][0] = 0x7AC0; ImageMatrix[5][1] = 0x7AC0; ImageMatrix[5][2] = 0x7AC0; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
          ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
          ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
          Pattern_ID_Frame_Time = 2;
      break;

      case 18:
          ImageMatrix[0][0] = 0x7AC0; ImageMatrix[0][1] = 0x7AC0; ImageMatrix[0][2] = 0x7AC0; ImageMatrix[0][3] = 0x7AC0; ImageMatrix[0][4] = 0x7AC0; ImageMatrix[0][5] = 0x7AC0;
          ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
          ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x7AC0; ImageMatrix[2][2] = 0x7AC0; ImageMatrix[2][3] = 0x7AC0; ImageMatrix[2][4] = 0x7AC0; ImageMatrix[2][5] = 0x7AC0;
          ImageMatrix[3][0] = 0x7AC0; ImageMatrix[3][1] = 0x7AC0; ImageMatrix[3][2] = 0x7AC0; ImageMatrix[3][3] = 0x7AC0; ImageMatrix[3][4] = 0x7AC0; ImageMatrix[3][5] = 0x7AC0;
          ImageMatrix[4][0] = 0x7AC0; ImageMatrix[4][1] = 0x7AC0; ImageMatrix[4][2] = 0x7AC0; ImageMatrix[4][3] = 0x7AC0; ImageMatrix[4][4] = 0x7AC0; ImageMatrix[4][5] = 0x7AC0;
          ImageMatrix[5][0] = 0x7AC0; ImageMatrix[5][1] = 0x7AC0; ImageMatrix[5][2] = 0x7AC0; ImageMatrix[5][3] = 0x7AC0; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
          ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
          ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
          Pattern_ID_Frame_Time = 2;
      break;

      case 19:
          ImageMatrix[0][0] = 0x7AC0; ImageMatrix[0][1] = 0x7AC0; ImageMatrix[0][2] = 0x7AC0; ImageMatrix[0][3] = 0x7AC0; ImageMatrix[0][4] = 0x7AC0; ImageMatrix[0][5] = 0x7AC0;
          ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
          ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x7AC0; ImageMatrix[2][2] = 0x7AC0; ImageMatrix[2][3] = 0x7AC0; ImageMatrix[2][4] = 0x7AC0; ImageMatrix[2][5] = 0x7AC0;
          ImageMatrix[3][0] = 0x7AC0; ImageMatrix[3][1] = 0x7AC0; ImageMatrix[3][2] = 0x7AC0; ImageMatrix[3][3] = 0x7AC0; ImageMatrix[3][4] = 0x7AC0; ImageMatrix[3][5] = 0x7AC0;
          ImageMatrix[4][0] = 0x7AC0; ImageMatrix[4][1] = 0x7AC0; ImageMatrix[4][2] = 0x7AC0; ImageMatrix[4][3] = 0x7AC0; ImageMatrix[4][4] = 0x7AC0; ImageMatrix[4][5] = 0x7AC0;
          ImageMatrix[5][0] = 0x7AC0; ImageMatrix[5][1] = 0x7AC0; ImageMatrix[5][2] = 0x7AC0; ImageMatrix[5][3] = 0x7AC0; ImageMatrix[5][4] = 0x7AC0; ImageMatrix[5][5] = 0x0000;
          ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
          ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
          Pattern_ID_Frame_Time = 2;
      break;

      case 20:
          ImageMatrix[0][0] = 0x7AC0; ImageMatrix[0][1] = 0x7AC0; ImageMatrix[0][2] = 0x7AC0; ImageMatrix[0][3] = 0x7AC0; ImageMatrix[0][4] = 0x7AC0; ImageMatrix[0][5] = 0x7AC0;
          ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
          ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x7AC0; ImageMatrix[2][2] = 0x7AC0; ImageMatrix[2][3] = 0x7AC0; ImageMatrix[2][4] = 0x7AC0; ImageMatrix[2][5] = 0x7AC0;
          ImageMatrix[3][0] = 0x7AC0; ImageMatrix[3][1] = 0x7AC0; ImageMatrix[3][2] = 0x7AC0; ImageMatrix[3][3] = 0x7AC0; ImageMatrix[3][4] = 0x7AC0; ImageMatrix[3][5] = 0x7AC0;
          ImageMatrix[4][0] = 0x7AC0; ImageMatrix[4][1] = 0x7AC0; ImageMatrix[4][2] = 0x7AC0; ImageMatrix[4][3] = 0x7AC0; ImageMatrix[4][4] = 0x7AC0; ImageMatrix[4][5] = 0x7AC0;
          ImageMatrix[5][0] = 0x7AC0; ImageMatrix[5][1] = 0x7AC0; ImageMatrix[5][2] = 0x7AC0; ImageMatrix[5][3] = 0x7AC0; ImageMatrix[5][4] = 0x7AC0; ImageMatrix[5][5] = 0x7AC0;
          ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
          ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
          Pattern_ID_Frame_Time = 2;
      break;

      case 21:
          ImageMatrix[0][0] = 0x7AC0; ImageMatrix[0][1] = 0x7AC0; ImageMatrix[0][2] = 0x7AC0; ImageMatrix[0][3] = 0x7AC0; ImageMatrix[0][4] = 0x7AC0; ImageMatrix[0][5] = 0x7AC0;
          ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
          ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x7AC0; ImageMatrix[2][2] = 0x7AC0; ImageMatrix[2][3] = 0x7AC0; ImageMatrix[2][4] = 0x7AC0; ImageMatrix[2][5] = 0x7AC0;
          ImageMatrix[3][0] = 0x7AC0; ImageMatrix[3][1] = 0x7AC0; ImageMatrix[3][2] = 0x7AC0; ImageMatrix[3][3] = 0x7AC0; ImageMatrix[3][4] = 0x7AC0; ImageMatrix[3][5] = 0x7AC0;
          ImageMatrix[4][0] = 0x7AC0; ImageMatrix[4][1] = 0x7AC0; ImageMatrix[4][2] = 0x7AC0; ImageMatrix[4][3] = 0x7AC0; ImageMatrix[4][4] = 0x7AC0; ImageMatrix[4][5] = 0x7AC0;
          ImageMatrix[5][0] = 0x7AC0; ImageMatrix[5][1] = 0x7AC0; ImageMatrix[5][2] = 0x7AC0; ImageMatrix[5][3] = 0x7AC0; ImageMatrix[5][4] = 0x7AC0; ImageMatrix[5][5] = 0x7AC0;
          ImageMatrix[6][0] = 0x7AC0; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
          ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
          Pattern_ID_Frame_Time = 2;
      break;

      case 22:
          ImageMatrix[0][0] = 0x7AC0; ImageMatrix[0][1] = 0x7AC0; ImageMatrix[0][2] = 0x7AC0; ImageMatrix[0][3] = 0x7AC0; ImageMatrix[0][4] = 0x7AC0; ImageMatrix[0][5] = 0x7AC0;
          ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
          ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x7AC0; ImageMatrix[2][2] = 0x7AC0; ImageMatrix[2][3] = 0x7AC0; ImageMatrix[2][4] = 0x7AC0; ImageMatrix[2][5] = 0x7AC0;
          ImageMatrix[3][0] = 0x7AC0; ImageMatrix[3][1] = 0x7AC0; ImageMatrix[3][2] = 0x7AC0; ImageMatrix[3][3] = 0x7AC0; ImageMatrix[3][4] = 0x7AC0; ImageMatrix[3][5] = 0x7AC0;
          ImageMatrix[4][0] = 0x7AC0; ImageMatrix[4][1] = 0x7AC0; ImageMatrix[4][2] = 0x7AC0; ImageMatrix[4][3] = 0x7AC0; ImageMatrix[4][4] = 0x7AC0; ImageMatrix[4][5] = 0x7AC0;
          ImageMatrix[5][0] = 0x7AC0; ImageMatrix[5][1] = 0x7AC0; ImageMatrix[5][2] = 0x7AC0; ImageMatrix[5][3] = 0x7AC0; ImageMatrix[5][4] = 0x7AC0; ImageMatrix[5][5] = 0x7AC0;
          ImageMatrix[6][0] = 0x7AC0; ImageMatrix[6][1] = 0x7AC0; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
          ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
          Pattern_ID_Frame_Time = 2;
      break;

      case 23:
          ImageMatrix[0][0] = 0x7AC0; ImageMatrix[0][1] = 0x7AC0; ImageMatrix[0][2] = 0x7AC0; ImageMatrix[0][3] = 0x7AC0; ImageMatrix[0][4] = 0x7AC0; ImageMatrix[0][5] = 0x7AC0;
          ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
          ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x7AC0; ImageMatrix[2][2] = 0x7AC0; ImageMatrix[2][3] = 0x7AC0; ImageMatrix[2][4] = 0x7AC0; ImageMatrix[2][5] = 0x7AC0;
          ImageMatrix[3][0] = 0x7AC0; ImageMatrix[3][1] = 0x7AC0; ImageMatrix[3][2] = 0x7AC0; ImageMatrix[3][3] = 0x7AC0; ImageMatrix[3][4] = 0x7AC0; ImageMatrix[3][5] = 0x7AC0;
          ImageMatrix[4][0] = 0x7AC0; ImageMatrix[4][1] = 0x7AC0; ImageMatrix[4][2] = 0x7AC0; ImageMatrix[4][3] = 0x7AC0; ImageMatrix[4][4] = 0x7AC0; ImageMatrix[4][5] = 0x7AC0;
          ImageMatrix[5][0] = 0x7AC0; ImageMatrix[5][1] = 0x7AC0; ImageMatrix[5][2] = 0x7AC0; ImageMatrix[5][3] = 0x7AC0; ImageMatrix[5][4] = 0x7AC0; ImageMatrix[5][5] = 0x7AC0;
          ImageMatrix[6][0] = 0x7AC0; ImageMatrix[6][1] = 0x7AC0; ImageMatrix[6][2] = 0x7AC0; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
          ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
          Pattern_ID_Frame_Time = 2;
      break;

      case 24:
          ImageMatrix[0][0] = 0x7AC0; ImageMatrix[0][1] = 0x7AC0; ImageMatrix[0][2] = 0x7AC0; ImageMatrix[0][3] = 0x7AC0; ImageMatrix[0][4] = 0x7AC0; ImageMatrix[0][5] = 0x7AC0;
          ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
          ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x7AC0; ImageMatrix[2][2] = 0x7AC0; ImageMatrix[2][3] = 0x7AC0; ImageMatrix[2][4] = 0x7AC0; ImageMatrix[2][5] = 0x7AC0;
          ImageMatrix[3][0] = 0x7AC0; ImageMatrix[3][1] = 0x7AC0; ImageMatrix[3][2] = 0x7AC0; ImageMatrix[3][3] = 0x7AC0; ImageMatrix[3][4] = 0x7AC0; ImageMatrix[3][5] = 0x7AC0;
          ImageMatrix[4][0] = 0x7AC0; ImageMatrix[4][1] = 0x7AC0; ImageMatrix[4][2] = 0x7AC0; ImageMatrix[4][3] = 0x7AC0; ImageMatrix[4][4] = 0x7AC0; ImageMatrix[4][5] = 0x7AC0;
          ImageMatrix[5][0] = 0x7AC0; ImageMatrix[5][1] = 0x7AC0; ImageMatrix[5][2] = 0x7AC0; ImageMatrix[5][3] = 0x7AC0; ImageMatrix[5][4] = 0x7AC0; ImageMatrix[5][5] = 0x7AC0;
          ImageMatrix[6][0] = 0x7AC0; ImageMatrix[6][1] = 0x7AC0; ImageMatrix[6][2] = 0x7AC0; ImageMatrix[6][3] = 0x7AC0; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
          ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
          Pattern_ID_Frame_Time = 2;
      break;

      case 25:
          ImageMatrix[0][0] = 0x7AC0; ImageMatrix[0][1] = 0x7AC0; ImageMatrix[0][2] = 0x7AC0; ImageMatrix[0][3] = 0x7AC0; ImageMatrix[0][4] = 0x7AC0; ImageMatrix[0][5] = 0x7AC0;
          ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
          ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x7AC0; ImageMatrix[2][2] = 0x7AC0; ImageMatrix[2][3] = 0x7AC0; ImageMatrix[2][4] = 0x7AC0; ImageMatrix[2][5] = 0x7AC0;
          ImageMatrix[3][0] = 0x7AC0; ImageMatrix[3][1] = 0x7AC0; ImageMatrix[3][2] = 0x7AC0; ImageMatrix[3][3] = 0x7AC0; ImageMatrix[3][4] = 0x7AC0; ImageMatrix[3][5] = 0x7AC0;
          ImageMatrix[4][0] = 0x7AC0; ImageMatrix[4][1] = 0x7AC0; ImageMatrix[4][2] = 0x7AC0; ImageMatrix[4][3] = 0x7AC0; ImageMatrix[4][4] = 0x7AC0; ImageMatrix[4][5] = 0x7AC0;
          ImageMatrix[5][0] = 0x7AC0; ImageMatrix[5][1] = 0x7AC0; ImageMatrix[5][2] = 0x7AC0; ImageMatrix[5][3] = 0x7AC0; ImageMatrix[5][4] = 0x7AC0; ImageMatrix[5][5] = 0x7AC0;
          ImageMatrix[6][0] = 0x7AC0; ImageMatrix[6][1] = 0x7AC0; ImageMatrix[6][2] = 0x7AC0; ImageMatrix[6][3] = 0x7AC0; ImageMatrix[6][4] = 0x7AC0; ImageMatrix[6][5] = 0x0000;
          ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
          Pattern_ID_Frame_Time = 2;
      break;

        case 26:
          ImageMatrix[0][0] = 0x7AC0; ImageMatrix[0][1] = 0x7AC0; ImageMatrix[0][2] = 0x7AC0; ImageMatrix[0][3] = 0x7AC0; ImageMatrix[0][4] = 0x7AC0; ImageMatrix[0][5] = 0x7AC0;
          ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
          ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x7AC0; ImageMatrix[2][2] = 0x7AC0; ImageMatrix[2][3] = 0x7AC0; ImageMatrix[2][4] = 0x7AC0; ImageMatrix[2][5] = 0x7AC0;
          ImageMatrix[3][0] = 0x7AC0; ImageMatrix[3][1] = 0x7AC0; ImageMatrix[3][2] = 0x7AC0; ImageMatrix[3][3] = 0x7AC0; ImageMatrix[3][4] = 0x7AC0; ImageMatrix[3][5] = 0x7AC0;
          ImageMatrix[4][0] = 0x7AC0; ImageMatrix[4][1] = 0x7AC0; ImageMatrix[4][2] = 0x7AC0; ImageMatrix[4][3] = 0x7AC0; ImageMatrix[4][4] = 0x7AC0; ImageMatrix[4][5] = 0x7AC0;
          ImageMatrix[5][0] = 0x7AC0; ImageMatrix[5][1] = 0x7AC0; ImageMatrix[5][2] = 0x7AC0; ImageMatrix[5][3] = 0x7AC0; ImageMatrix[5][4] = 0x7AC0; ImageMatrix[5][5] = 0x7AC0;
          ImageMatrix[6][0] = 0x7AC0; ImageMatrix[6][1] = 0x7AC0; ImageMatrix[6][2] = 0x7AC0; ImageMatrix[6][3] = 0x7AC0; ImageMatrix[6][4] = 0x7AC0; ImageMatrix[6][5] = 0x7AC0;
          ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
            Pattern_ID_Frame_Time = 2;
        break;

        case 27:
          ImageMatrix[0][0] = 0x7AC0; ImageMatrix[0][1] = 0x7AC0; ImageMatrix[0][2] = 0x7AC0; ImageMatrix[0][3] = 0x7AC0; ImageMatrix[0][4] = 0x7AC0; ImageMatrix[0][5] = 0x7AC0;
          ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
          ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x7AC0; ImageMatrix[2][2] = 0x7AC0; ImageMatrix[2][3] = 0x7AC0; ImageMatrix[2][4] = 0x7AC0; ImageMatrix[2][5] = 0x7AC0;
          ImageMatrix[3][0] = 0x7AC0; ImageMatrix[3][1] = 0x7AC0; ImageMatrix[3][2] = 0x7AC0; ImageMatrix[3][3] = 0x7AC0; ImageMatrix[3][4] = 0x7AC0; ImageMatrix[3][5] = 0x7AC0;
          ImageMatrix[4][0] = 0x7AC0; ImageMatrix[4][1] = 0x7AC0; ImageMatrix[4][2] = 0x7AC0; ImageMatrix[4][3] = 0x7AC0; ImageMatrix[4][4] = 0x7AC0; ImageMatrix[4][5] = 0x7AC0;
          ImageMatrix[5][0] = 0x7AC0; ImageMatrix[5][1] = 0x7AC0; ImageMatrix[5][2] = 0x7AC0; ImageMatrix[5][3] = 0x7AC0; ImageMatrix[5][4] = 0x7AC0; ImageMatrix[5][5] = 0x7AC0;
          ImageMatrix[6][0] = 0x7AC0; ImageMatrix[6][1] = 0x7AC0; ImageMatrix[6][2] = 0x7AC0; ImageMatrix[6][3] = 0x7AC0; ImageMatrix[6][4] = 0x7AC0; ImageMatrix[6][5] = 0x7AC0;
          ImageMatrix[7][0] = 0x7AC0; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
            Pattern_ID_Frame_Time = 2;
        break;

        case 28:
          ImageMatrix[0][0] = 0x7AC0; ImageMatrix[0][1] = 0x7AC0; ImageMatrix[0][2] = 0x7AC0; ImageMatrix[0][3] = 0x7AC0; ImageMatrix[0][4] = 0x7AC0; ImageMatrix[0][5] = 0x7AC0;
          ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
          ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x7AC0; ImageMatrix[2][2] = 0x7AC0; ImageMatrix[2][3] = 0x7AC0; ImageMatrix[2][4] = 0x7AC0; ImageMatrix[2][5] = 0x7AC0;
          ImageMatrix[3][0] = 0x7AC0; ImageMatrix[3][1] = 0x7AC0; ImageMatrix[3][2] = 0x7AC0; ImageMatrix[3][3] = 0x7AC0; ImageMatrix[3][4] = 0x7AC0; ImageMatrix[3][5] = 0x7AC0;
          ImageMatrix[4][0] = 0x7AC0; ImageMatrix[4][1] = 0x7AC0; ImageMatrix[4][2] = 0x7AC0; ImageMatrix[4][3] = 0x7AC0; ImageMatrix[4][4] = 0x7AC0; ImageMatrix[4][5] = 0x7AC0;
          ImageMatrix[5][0] = 0x7AC0; ImageMatrix[5][1] = 0x7AC0; ImageMatrix[5][2] = 0x7AC0; ImageMatrix[5][3] = 0x7AC0; ImageMatrix[5][4] = 0x7AC0; ImageMatrix[5][5] = 0x7AC0;
          ImageMatrix[6][0] = 0x7AC0; ImageMatrix[6][1] = 0x7AC0; ImageMatrix[6][2] = 0x7AC0; ImageMatrix[6][3] = 0x7AC0; ImageMatrix[6][4] = 0x7AC0; ImageMatrix[6][5] = 0x7AC0;
          ImageMatrix[7][0] = 0x7AC0; ImageMatrix[7][1] = 0x7AC0; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
            Pattern_ID_Frame_Time = 2;
        break;

        case 29:
          ImageMatrix[0][0] = 0x7AC0; ImageMatrix[0][1] = 0x7AC0; ImageMatrix[0][2] = 0x7AC0; ImageMatrix[0][3] = 0x7AC0; ImageMatrix[0][4] = 0x7AC0; ImageMatrix[0][5] = 0x7AC0;
          ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
          ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x7AC0; ImageMatrix[2][2] = 0x7AC0; ImageMatrix[2][3] = 0x7AC0; ImageMatrix[2][4] = 0x7AC0; ImageMatrix[2][5] = 0x7AC0;
          ImageMatrix[3][0] = 0x7AC0; ImageMatrix[3][1] = 0x7AC0; ImageMatrix[3][2] = 0x7AC0; ImageMatrix[3][3] = 0x7AC0; ImageMatrix[3][4] = 0x7AC0; ImageMatrix[3][5] = 0x7AC0;
          ImageMatrix[4][0] = 0x7AC0; ImageMatrix[4][1] = 0x7AC0; ImageMatrix[4][2] = 0x7AC0; ImageMatrix[4][3] = 0x7AC0; ImageMatrix[4][4] = 0x7AC0; ImageMatrix[4][5] = 0x7AC0;
          ImageMatrix[5][0] = 0x7AC0; ImageMatrix[5][1] = 0x7AC0; ImageMatrix[5][2] = 0x7AC0; ImageMatrix[5][3] = 0x7AC0; ImageMatrix[5][4] = 0x7AC0; ImageMatrix[5][5] = 0x7AC0;
          ImageMatrix[6][0] = 0x7AC0; ImageMatrix[6][1] = 0x7AC0; ImageMatrix[6][2] = 0x7AC0; ImageMatrix[6][3] = 0x7AC0; ImageMatrix[6][4] = 0x7AC0; ImageMatrix[6][5] = 0x7AC0;
          ImageMatrix[7][0] = 0x7AC0; ImageMatrix[7][1] = 0x7AC0; ImageMatrix[7][2] = 0x7AC0; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
            Pattern_ID_Frame_Time = 2;
        break;

        case 30:
          ImageMatrix[0][0] = 0x7AC0; ImageMatrix[0][1] = 0x7AC0; ImageMatrix[0][2] = 0x7AC0; ImageMatrix[0][3] = 0x7AC0; ImageMatrix[0][4] = 0x7AC0; ImageMatrix[0][5] = 0x7AC0;
          ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
          ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x7AC0; ImageMatrix[2][2] = 0x7AC0; ImageMatrix[2][3] = 0x7AC0; ImageMatrix[2][4] = 0x7AC0; ImageMatrix[2][5] = 0x7AC0;
          ImageMatrix[3][0] = 0x7AC0; ImageMatrix[3][1] = 0x7AC0; ImageMatrix[3][2] = 0x7AC0; ImageMatrix[3][3] = 0x7AC0; ImageMatrix[3][4] = 0x7AC0; ImageMatrix[3][5] = 0x7AC0;
          ImageMatrix[4][0] = 0x7AC0; ImageMatrix[4][1] = 0x7AC0; ImageMatrix[4][2] = 0x7AC0; ImageMatrix[4][3] = 0x7AC0; ImageMatrix[4][4] = 0x7AC0; ImageMatrix[4][5] = 0x7AC0;
          ImageMatrix[5][0] = 0x7AC0; ImageMatrix[5][1] = 0x7AC0; ImageMatrix[5][2] = 0x7AC0; ImageMatrix[5][3] = 0x7AC0; ImageMatrix[5][4] = 0x7AC0; ImageMatrix[5][5] = 0x7AC0;
          ImageMatrix[6][0] = 0x7AC0; ImageMatrix[6][1] = 0x7AC0; ImageMatrix[6][2] = 0x7AC0; ImageMatrix[6][3] = 0x7AC0; ImageMatrix[6][4] = 0x7AC0; ImageMatrix[6][5] = 0x7AC0;
          ImageMatrix[7][0] = 0x7AC0; ImageMatrix[7][1] = 0x7AC0; ImageMatrix[7][2] = 0x7AC0; ImageMatrix[7][3] = 0x7AC0; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
            Pattern_ID_Frame_Time = 2;
        break;

        case 31:
          ImageMatrix[0][0] = 0x7AC0; ImageMatrix[0][1] = 0x7AC0; ImageMatrix[0][2] = 0x7AC0; ImageMatrix[0][3] = 0x7AC0; ImageMatrix[0][4] = 0x7AC0; ImageMatrix[0][5] = 0x7AC0;
          ImageMatrix[1][0] = 0x7AC0; ImageMatrix[1][1] = 0x7AC0; ImageMatrix[1][2] = 0x7AC0; ImageMatrix[1][3] = 0x7AC0; ImageMatrix[1][4] = 0x7AC0; ImageMatrix[1][5] = 0x7AC0;
          ImageMatrix[2][0] = 0x7AC0; ImageMatrix[2][1] = 0x7AC0; ImageMatrix[2][2] = 0x7AC0; ImageMatrix[2][3] = 0x7AC0; ImageMatrix[2][4] = 0x7AC0; ImageMatrix[2][5] = 0x7AC0;
          ImageMatrix[3][0] = 0x7AC0; ImageMatrix[3][1] = 0x7AC0; ImageMatrix[3][2] = 0x7AC0; ImageMatrix[3][3] = 0x7AC0; ImageMatrix[3][4] = 0x7AC0; ImageMatrix[3][5] = 0x7AC0;
          ImageMatrix[4][0] = 0x7AC0; ImageMatrix[4][1] = 0x7AC0; ImageMatrix[4][2] = 0x7AC0; ImageMatrix[4][3] = 0x7AC0; ImageMatrix[4][4] = 0x7AC0; ImageMatrix[4][5] = 0x7AC0;
          ImageMatrix[5][0] = 0x7AC0; ImageMatrix[5][1] = 0x7AC0; ImageMatrix[5][2] = 0x7AC0; ImageMatrix[5][3] = 0x7AC0; ImageMatrix[5][4] = 0x7AC0; ImageMatrix[5][5] = 0x7AC0;
          ImageMatrix[6][0] = 0x7AC0; ImageMatrix[6][1] = 0x7AC0; ImageMatrix[6][2] = 0x7AC0; ImageMatrix[6][3] = 0x7AC0; ImageMatrix[6][4] = 0x7AC0; ImageMatrix[6][5] = 0x7AC0;
          ImageMatrix[7][0] = 0x7AC0; ImageMatrix[7][1] = 0x7AC0; ImageMatrix[7][2] = 0x7AC0; ImageMatrix[7][3] = 0x7AC0; ImageMatrix[7][4] = 0x7AC0; ImageMatrix[7][5] = 0x7AC0;
            Pattern_ID_Frame_Time = 2;
        break;
        case 32:
            Pattern_ID = Active_Pattern_ID;     //Reset to previous pattern
            Event_Change_Flag = FALSE;
            Pattern_ID_Frame_Time = 2;
        break;

        default:
            Pattern_ID = Active_Pattern_ID;
            Event_Change_Flag = FALSE;
            Pattern_ID_Frame_Time = 2;
            Pattern_ID_Frame_Number = 0;
        break;
    }
}

void Pattern_0_All_White(void)
{
    switch (Pattern_ID_Frame_Number)
    {
        case 1:
            ImageMatrix[0][0] = 0x7FFF; ImageMatrix[0][1] = 0x7FFF; ImageMatrix[0][2] = 0x7FFF; ImageMatrix[0][3] = 0x7FFF; ImageMatrix[0][4] = 0x7FFF; ImageMatrix[0][5] = 0x7FFF;
            ImageMatrix[1][0] = 0x7FFF; ImageMatrix[1][1] = 0x7FFF; ImageMatrix[1][2] = 0x7FFF; ImageMatrix[1][3] = 0x7FFF; ImageMatrix[1][4] = 0x7FFF; ImageMatrix[1][5] = 0x7FFF;
            ImageMatrix[2][0] = 0x7FFF; ImageMatrix[2][1] = 0x7FFF; ImageMatrix[2][2] = 0x7FFF; ImageMatrix[2][3] = 0x7FFF; ImageMatrix[2][4] = 0x7FFF; ImageMatrix[2][5] = 0x7FFF;
            ImageMatrix[3][0] = 0x7FFF; ImageMatrix[3][1] = 0x7FFF; ImageMatrix[3][2] = 0x7FFF; ImageMatrix[3][3] = 0x7FFF; ImageMatrix[3][4] = 0x7FFF; ImageMatrix[3][5] = 0x7FFF;
            ImageMatrix[4][0] = 0x7FFF; ImageMatrix[4][1] = 0x7FFF; ImageMatrix[4][2] = 0x7FFF; ImageMatrix[4][3] = 0x7FFF; ImageMatrix[4][4] = 0x7FFF; ImageMatrix[4][5] = 0x7FFF;
            ImageMatrix[5][0] = 0x7FFF; ImageMatrix[5][1] = 0x7FFF; ImageMatrix[5][2] = 0x7FFF; ImageMatrix[5][3] = 0x7FFF; ImageMatrix[5][4] = 0x7FFF; ImageMatrix[5][5] = 0x7FFF;
            ImageMatrix[6][0] = 0x7FFF; ImageMatrix[6][1] = 0x7FFF; ImageMatrix[6][2] = 0x7FFF; ImageMatrix[6][3] = 0x7FFF; ImageMatrix[6][4] = 0x7FFF; ImageMatrix[6][5] = 0x7FFF;
            ImageMatrix[7][0] = 0x7FFF; ImageMatrix[7][1] = 0x7FFF; ImageMatrix[7][2] = 0x7FFF; ImageMatrix[7][3] = 0x7FFF; ImageMatrix[7][4] = 0x7FFF; ImageMatrix[7][5] = 0x7FFF;
            Pattern_ID_Frame_Time = 2000;
        break;

        case 2:
            ImageMatrix[0][0] = 0x7FFF; ImageMatrix[0][1] = 0x7FFF; ImageMatrix[0][2] = 0x7FFF; ImageMatrix[0][3] = 0x7FFF; ImageMatrix[0][4] = 0x7FFF; ImageMatrix[0][5] = 0x7FFF;
            ImageMatrix[1][0] = 0x7FFF; ImageMatrix[1][1] = 0x7FFF; ImageMatrix[1][2] = 0x7FFF; ImageMatrix[1][3] = 0x7FFF; ImageMatrix[1][4] = 0x7FFF; ImageMatrix[1][5] = 0x7FFF;
            ImageMatrix[2][0] = 0x7FFF; ImageMatrix[2][1] = 0x7FFF; ImageMatrix[2][2] = 0x7FFF; ImageMatrix[2][3] = 0x7FFF; ImageMatrix[2][4] = 0x7FFF; ImageMatrix[2][5] = 0x7FFF;
            ImageMatrix[3][0] = 0x7FFF; ImageMatrix[3][1] = 0x7FFF; ImageMatrix[3][2] = 0x7FFF; ImageMatrix[3][3] = 0x7FFF; ImageMatrix[3][4] = 0x7FFF; ImageMatrix[3][5] = 0x7FFF;
            ImageMatrix[4][0] = 0x7FFF; ImageMatrix[4][1] = 0x7FFF; ImageMatrix[4][2] = 0x7FFF; ImageMatrix[4][3] = 0x7FFF; ImageMatrix[4][4] = 0x7FFF; ImageMatrix[4][5] = 0x7FFF;
            ImageMatrix[5][0] = 0x7FFF; ImageMatrix[5][1] = 0x7FFF; ImageMatrix[5][2] = 0x7FFF; ImageMatrix[5][3] = 0x7FFF; ImageMatrix[5][4] = 0x7FFF; ImageMatrix[5][5] = 0x7FFF;
            ImageMatrix[6][0] = 0x7FFF; ImageMatrix[6][1] = 0x7FFF; ImageMatrix[6][2] = 0x7FFF; ImageMatrix[6][3] = 0x7FFF; ImageMatrix[6][4] = 0x7FFF; ImageMatrix[6][5] = 0x7FFF;
            ImageMatrix[7][0] = 0x7FFF; ImageMatrix[7][1] = 0x7FFF; ImageMatrix[7][2] = 0x7FFF; ImageMatrix[7][3] = 0x7FFF; ImageMatrix[7][4] = 0x7FFF; ImageMatrix[7][5] = 0x7FFF;
            Pattern_ID_Frame_Time = 2000;
        break;

        default:
            Pattern_ID_Frame_Time = 2;
            Pattern_ID_Frame_Number = 0;
        break;
    }
}

void Pattern_1_Accelerometer(void)
{
    ImageMatrix[0][0] = 0x0000; ImageMatrix[0][1] = 0x0000; ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
    ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
    ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
    ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
    ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
    ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
    ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
    ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;

    switch (Pattern_ID_Frame_Number)
    {
        case 1:
            ImageMatrix[0][0] = 0x7C00;
            Pattern_ID_Frame_Time = 4;
        break;
        case 2:
            ImageMatrix[0][1] = 0x7C00;
            Pattern_ID_Frame_Time = 4;
        break;
        case 3:
            ImageMatrix[0][2] = 0x7C00;
            Pattern_ID_Frame_Time = 4;
        break;
        case 4:
            ImageMatrix[0][3] = 0x7C00;
            Pattern_ID_Frame_Time = 4;
        break;
        case 5:
            ImageMatrix[0][4] = 0x7C00;
            Pattern_ID_Frame_Time = 4;
        break;
        case 6:
            ImageMatrix[0][5] = 0x7C00;
            Pattern_ID_Frame_Time = 4;
        break;
        case 7:
            ImageMatrix[1][0] = 0x7C00;
            Pattern_ID_Frame_Time = 4;
        break;
        case 8:
            ImageMatrix[1][1] = 0x7C00;
            Pattern_ID_Frame_Time = 4;
        break;
        case 9:
            ImageMatrix[1][2] = 0x7C00;
            Pattern_ID_Frame_Time = 4;
        break;
        case 10:
            ImageMatrix[1][3] = 0x7C00;
            Pattern_ID_Frame_Time = 4;
        break;
        case 11:
            ImageMatrix[1][4] = 0x7C00;
            Pattern_ID_Frame_Time = 4;
        break;
        case 12:
            ImageMatrix[1][5] = 0x7C00;
            Pattern_ID_Frame_Time = 4;
        break;
        case 13:
            ImageMatrix[2][0] = 0x7C00;
            Pattern_ID_Frame_Time = 4;
        break;
        case 14:
            ImageMatrix[2][1] = 0x7C00;
            Pattern_ID_Frame_Time = 4;
        break;
        case 15:
            ImageMatrix[2][2] = 0x7C00;
            Pattern_ID_Frame_Time = 4;
        break;
        case 16:
            ImageMatrix[2][3] = 0x7C00;
            Pattern_ID_Frame_Time = 4;
        break;
        case 17:
            ImageMatrix[2][4] = 0x7C00;
            Pattern_ID_Frame_Time = 4;
        break;
        case 18:
            ImageMatrix[2][5] = 0x7C00;
            Pattern_ID_Frame_Time = 4;
        break;
        case 19:
            ImageMatrix[3][0] = 0x7C00;
            Pattern_ID_Frame_Time = 4;
        break;
        case 20:
            ImageMatrix[3][1] = 0x7C00;
            Pattern_ID_Frame_Time = 4;
        break;
        case 21:
            ImageMatrix[3][2] = 0x7C00;
            Pattern_ID_Frame_Time = 4;
        break;
        case 22:
            ImageMatrix[3][3] = 0x7C00;
            Pattern_ID_Frame_Time = 4;
        break;
        case 23:
            ImageMatrix[3][4] = 0x7C00;
            Pattern_ID_Frame_Time = 4;
        break;
        case 24:
            ImageMatrix[3][5] = 0x7C00;
            Pattern_ID_Frame_Time = 4;
        break;
        case 25:
            ImageMatrix[4][0] = 0x7C00;
            Pattern_ID_Frame_Time = 4;
        break;
        case 26:
            ImageMatrix[4][1] = 0x7C00;
            Pattern_ID_Frame_Time = 4;
        break;
        case 27:
            ImageMatrix[4][2] = 0x7C00;
            Pattern_ID_Frame_Time = 4;
        break;
        case 28:
            ImageMatrix[4][3] = 0x7C00;
            Pattern_ID_Frame_Time = 4;
        break;
        case 29:
            ImageMatrix[4][4] = 0x7C00;
            Pattern_ID_Frame_Time = 4;
        break;
        case 30:
            ImageMatrix[4][5] = 0x7C00;
            Pattern_ID_Frame_Time = 4;
        break;
        case 31:
            ImageMatrix[5][0] = 0x7C00;
            Pattern_ID_Frame_Time = 4;
        break;
        case 32:
            ImageMatrix[5][1] = 0x7C00;
            Pattern_ID_Frame_Time = 4;
        break;
        case 33:
            ImageMatrix[5][2] = 0x7C00;
            Pattern_ID_Frame_Time = 4;
        break;
        case 34:
            ImageMatrix[5][3] = 0x7C00;
            Pattern_ID_Frame_Time = 4;
        break;
        case 35:
            ImageMatrix[5][4] = 0x7C00;
            Pattern_ID_Frame_Time = 4;
        break;
        case 36:
            ImageMatrix[5][5] = 0x7C00;
            Pattern_ID_Frame_Time = 4;
        break;
        case 37:
            ImageMatrix[6][0] = 0x7C00;
            Pattern_ID_Frame_Time = 4;
        break;
        case 38:
            ImageMatrix[6][1] = 0x7C00;
            Pattern_ID_Frame_Time = 4;
        break;
        case 39:
            ImageMatrix[6][2] = 0x7C00;
            Pattern_ID_Frame_Time = 4;
        break;
        case 40:
            ImageMatrix[6][3] = 0x7C00;
            Pattern_ID_Frame_Time = 4;
        break;
        case 41:
            ImageMatrix[6][4] = 0x7C00;
            Pattern_ID_Frame_Time = 4;
        break;
        case 42:
            ImageMatrix[6][5] = 0x7C00;
            Pattern_ID_Frame_Time = 4;
        break;
        case 43:
            ImageMatrix[7][0] = 0x7C00;
            Pattern_ID_Frame_Time = 4;
        break;
        case 44:
            ImageMatrix[7][1] = 0x7C00;
            Pattern_ID_Frame_Time = 4;
        break;
        case 45:
            ImageMatrix[7][2] = 0x7C00;
            Pattern_ID_Frame_Time = 4;
        break;
        case 46:
            ImageMatrix[7][3] = 0x7C00;
            Pattern_ID_Frame_Time = 4;
        break;
        case 47:
            ImageMatrix[7][4] = 0x7C00;
            Pattern_ID_Frame_Time = 4;
        break;
        case 48:
            ImageMatrix[7][5] = 0x7C00;
            Pattern_ID_Frame_Time = 4;
        break;

        default:
            Pattern_ID_Frame_Time = 2;
            Pattern_ID_Frame_Number = 0;
        break;
    }
}

void Pattern_2_Random_All(void)
{
    volatile unsigned int randomFrameColor = rand() & 0x7FFF;

    switch (Pattern_ID_Frame_Number)
    {
        case 1:
            ImageMatrix[0][0] = randomFrameColor; ImageMatrix[0][1] = randomFrameColor; ImageMatrix[0][2] = randomFrameColor; ImageMatrix[0][3] = randomFrameColor; ImageMatrix[0][4] = randomFrameColor; ImageMatrix[0][5] = randomFrameColor;
            ImageMatrix[1][0] = randomFrameColor; ImageMatrix[1][1] = randomFrameColor; ImageMatrix[1][2] = randomFrameColor; ImageMatrix[1][3] = randomFrameColor; ImageMatrix[1][4] = randomFrameColor; ImageMatrix[1][5] = randomFrameColor;
            ImageMatrix[2][0] = randomFrameColor; ImageMatrix[2][1] = randomFrameColor; ImageMatrix[2][2] = randomFrameColor; ImageMatrix[2][3] = randomFrameColor; ImageMatrix[2][4] = randomFrameColor; ImageMatrix[2][5] = randomFrameColor;
            ImageMatrix[3][0] = randomFrameColor; ImageMatrix[3][1] = randomFrameColor; ImageMatrix[3][2] = randomFrameColor; ImageMatrix[3][3] = randomFrameColor; ImageMatrix[3][4] = randomFrameColor; ImageMatrix[3][5] = randomFrameColor;
            ImageMatrix[4][0] = randomFrameColor; ImageMatrix[4][1] = randomFrameColor; ImageMatrix[4][2] = randomFrameColor; ImageMatrix[4][3] = randomFrameColor; ImageMatrix[4][4] = randomFrameColor; ImageMatrix[4][5] = randomFrameColor;
            ImageMatrix[5][0] = randomFrameColor; ImageMatrix[5][1] = randomFrameColor; ImageMatrix[5][2] = randomFrameColor; ImageMatrix[5][3] = randomFrameColor; ImageMatrix[5][4] = randomFrameColor; ImageMatrix[5][5] = randomFrameColor;
            ImageMatrix[6][0] = randomFrameColor; ImageMatrix[6][1] = randomFrameColor; ImageMatrix[6][2] = randomFrameColor; ImageMatrix[6][3] = randomFrameColor; ImageMatrix[6][4] = randomFrameColor; ImageMatrix[6][5] = randomFrameColor;
            ImageMatrix[7][0] = randomFrameColor; ImageMatrix[7][1] = randomFrameColor; ImageMatrix[7][2] = randomFrameColor; ImageMatrix[7][3] = randomFrameColor; ImageMatrix[7][4] = randomFrameColor; ImageMatrix[7][5] = randomFrameColor;
            Pattern_ID_Frame_Time = 2;
        break;

        case 2:
            ImageMatrix[0][0] = randomFrameColor; ImageMatrix[0][1] = randomFrameColor; ImageMatrix[0][2] = randomFrameColor; ImageMatrix[0][3] = randomFrameColor; ImageMatrix[0][4] = randomFrameColor; ImageMatrix[0][5] = randomFrameColor;
            ImageMatrix[1][0] = randomFrameColor; ImageMatrix[1][1] = randomFrameColor; ImageMatrix[1][2] = randomFrameColor; ImageMatrix[1][3] = randomFrameColor; ImageMatrix[1][4] = randomFrameColor; ImageMatrix[1][5] = randomFrameColor;
            ImageMatrix[2][0] = randomFrameColor; ImageMatrix[2][1] = randomFrameColor; ImageMatrix[2][2] = randomFrameColor; ImageMatrix[2][3] = randomFrameColor; ImageMatrix[2][4] = randomFrameColor; ImageMatrix[2][5] = randomFrameColor;
            ImageMatrix[3][0] = randomFrameColor; ImageMatrix[3][1] = randomFrameColor; ImageMatrix[3][2] = randomFrameColor; ImageMatrix[3][3] = randomFrameColor; ImageMatrix[3][4] = randomFrameColor; ImageMatrix[3][5] = randomFrameColor;
            ImageMatrix[4][0] = randomFrameColor; ImageMatrix[4][1] = randomFrameColor; ImageMatrix[4][2] = randomFrameColor; ImageMatrix[4][3] = randomFrameColor; ImageMatrix[4][4] = randomFrameColor; ImageMatrix[4][5] = randomFrameColor;
            ImageMatrix[5][0] = randomFrameColor; ImageMatrix[5][1] = randomFrameColor; ImageMatrix[5][2] = randomFrameColor; ImageMatrix[5][3] = randomFrameColor; ImageMatrix[5][4] = randomFrameColor; ImageMatrix[5][5] = randomFrameColor;
            ImageMatrix[6][0] = randomFrameColor; ImageMatrix[6][1] = randomFrameColor; ImageMatrix[6][2] = randomFrameColor; ImageMatrix[6][3] = randomFrameColor; ImageMatrix[6][4] = randomFrameColor; ImageMatrix[6][5] = randomFrameColor;
            ImageMatrix[7][0] = randomFrameColor; ImageMatrix[7][1] = randomFrameColor; ImageMatrix[7][2] = randomFrameColor; ImageMatrix[7][3] = randomFrameColor; ImageMatrix[7][4] = randomFrameColor; ImageMatrix[7][5] = randomFrameColor;
            Pattern_ID_Frame_Time = 2;
        break;

        case 3:
            ImageMatrix[0][0] = randomFrameColor; ImageMatrix[0][1] = randomFrameColor; ImageMatrix[0][2] = randomFrameColor; ImageMatrix[0][3] = randomFrameColor; ImageMatrix[0][4] = randomFrameColor; ImageMatrix[0][5] = randomFrameColor;
            ImageMatrix[1][0] = randomFrameColor; ImageMatrix[1][1] = randomFrameColor; ImageMatrix[1][2] = randomFrameColor; ImageMatrix[1][3] = randomFrameColor; ImageMatrix[1][4] = randomFrameColor; ImageMatrix[1][5] = randomFrameColor;
            ImageMatrix[2][0] = randomFrameColor; ImageMatrix[2][1] = randomFrameColor; ImageMatrix[2][2] = randomFrameColor; ImageMatrix[2][3] = randomFrameColor; ImageMatrix[2][4] = randomFrameColor; ImageMatrix[2][5] = randomFrameColor;
            ImageMatrix[3][0] = randomFrameColor; ImageMatrix[3][1] = randomFrameColor; ImageMatrix[3][2] = randomFrameColor; ImageMatrix[3][3] = randomFrameColor; ImageMatrix[3][4] = randomFrameColor; ImageMatrix[3][5] = randomFrameColor;
            ImageMatrix[4][0] = randomFrameColor; ImageMatrix[4][1] = randomFrameColor; ImageMatrix[4][2] = randomFrameColor; ImageMatrix[4][3] = randomFrameColor; ImageMatrix[4][4] = randomFrameColor; ImageMatrix[4][5] = randomFrameColor;
            ImageMatrix[5][0] = randomFrameColor; ImageMatrix[5][1] = randomFrameColor; ImageMatrix[5][2] = randomFrameColor; ImageMatrix[5][3] = randomFrameColor; ImageMatrix[5][4] = randomFrameColor; ImageMatrix[5][5] = randomFrameColor;
            ImageMatrix[6][0] = randomFrameColor; ImageMatrix[6][1] = randomFrameColor; ImageMatrix[6][2] = randomFrameColor; ImageMatrix[6][3] = randomFrameColor; ImageMatrix[6][4] = randomFrameColor; ImageMatrix[6][5] = randomFrameColor;
            ImageMatrix[7][0] = randomFrameColor; ImageMatrix[7][1] = randomFrameColor; ImageMatrix[7][2] = randomFrameColor; ImageMatrix[7][3] = randomFrameColor; ImageMatrix[7][4] = randomFrameColor; ImageMatrix[7][5] = randomFrameColor;
            Pattern_ID_Frame_Time = 2;
        break;

        case 4:
            ImageMatrix[0][0] = randomFrameColor; ImageMatrix[0][1] = randomFrameColor; ImageMatrix[0][2] = randomFrameColor; ImageMatrix[0][3] = randomFrameColor; ImageMatrix[0][4] = randomFrameColor; ImageMatrix[0][5] = randomFrameColor;
            ImageMatrix[1][0] = randomFrameColor; ImageMatrix[1][1] = randomFrameColor; ImageMatrix[1][2] = randomFrameColor; ImageMatrix[1][3] = randomFrameColor; ImageMatrix[1][4] = randomFrameColor; ImageMatrix[1][5] = randomFrameColor;
            ImageMatrix[2][0] = randomFrameColor; ImageMatrix[2][1] = randomFrameColor; ImageMatrix[2][2] = randomFrameColor; ImageMatrix[2][3] = randomFrameColor; ImageMatrix[2][4] = randomFrameColor; ImageMatrix[2][5] = randomFrameColor;
            ImageMatrix[3][0] = randomFrameColor; ImageMatrix[3][1] = randomFrameColor; ImageMatrix[3][2] = randomFrameColor; ImageMatrix[3][3] = randomFrameColor; ImageMatrix[3][4] = randomFrameColor; ImageMatrix[3][5] = randomFrameColor;
            ImageMatrix[4][0] = randomFrameColor; ImageMatrix[4][1] = randomFrameColor; ImageMatrix[4][2] = randomFrameColor; ImageMatrix[4][3] = randomFrameColor; ImageMatrix[4][4] = randomFrameColor; ImageMatrix[4][5] = randomFrameColor;
            ImageMatrix[5][0] = randomFrameColor; ImageMatrix[5][1] = randomFrameColor; ImageMatrix[5][2] = randomFrameColor; ImageMatrix[5][3] = randomFrameColor; ImageMatrix[5][4] = randomFrameColor; ImageMatrix[5][5] = randomFrameColor;
            ImageMatrix[6][0] = randomFrameColor; ImageMatrix[6][1] = randomFrameColor; ImageMatrix[6][2] = randomFrameColor; ImageMatrix[6][3] = randomFrameColor; ImageMatrix[6][4] = randomFrameColor; ImageMatrix[6][5] = randomFrameColor;
            ImageMatrix[7][0] = randomFrameColor; ImageMatrix[7][1] = randomFrameColor; ImageMatrix[7][2] = randomFrameColor; ImageMatrix[7][3] = randomFrameColor; ImageMatrix[7][4] = randomFrameColor; ImageMatrix[7][5] = randomFrameColor;
            Pattern_ID_Frame_Time = 2;
        break;

        case 5:
            ImageMatrix[0][0] = randomFrameColor; ImageMatrix[0][1] = randomFrameColor; ImageMatrix[0][2] = randomFrameColor; ImageMatrix[0][3] = randomFrameColor; ImageMatrix[0][4] = randomFrameColor; ImageMatrix[0][5] = randomFrameColor;
            ImageMatrix[1][0] = randomFrameColor; ImageMatrix[1][1] = randomFrameColor; ImageMatrix[1][2] = randomFrameColor; ImageMatrix[1][3] = randomFrameColor; ImageMatrix[1][4] = randomFrameColor; ImageMatrix[1][5] = randomFrameColor;
            ImageMatrix[2][0] = randomFrameColor; ImageMatrix[2][1] = randomFrameColor; ImageMatrix[2][2] = randomFrameColor; ImageMatrix[2][3] = randomFrameColor; ImageMatrix[2][4] = randomFrameColor; ImageMatrix[2][5] = randomFrameColor;
            ImageMatrix[3][0] = randomFrameColor; ImageMatrix[3][1] = randomFrameColor; ImageMatrix[3][2] = randomFrameColor; ImageMatrix[3][3] = randomFrameColor; ImageMatrix[3][4] = randomFrameColor; ImageMatrix[3][5] = randomFrameColor;
            ImageMatrix[4][0] = randomFrameColor; ImageMatrix[4][1] = randomFrameColor; ImageMatrix[4][2] = randomFrameColor; ImageMatrix[4][3] = randomFrameColor; ImageMatrix[4][4] = randomFrameColor; ImageMatrix[4][5] = randomFrameColor;
            ImageMatrix[5][0] = randomFrameColor; ImageMatrix[5][1] = randomFrameColor; ImageMatrix[5][2] = randomFrameColor; ImageMatrix[5][3] = randomFrameColor; ImageMatrix[5][4] = randomFrameColor; ImageMatrix[5][5] = randomFrameColor;
            ImageMatrix[6][0] = randomFrameColor; ImageMatrix[6][1] = randomFrameColor; ImageMatrix[6][2] = randomFrameColor; ImageMatrix[6][3] = randomFrameColor; ImageMatrix[6][4] = randomFrameColor; ImageMatrix[6][5] = randomFrameColor;
            ImageMatrix[7][0] = randomFrameColor; ImageMatrix[7][1] = randomFrameColor; ImageMatrix[7][2] = randomFrameColor; ImageMatrix[7][3] = randomFrameColor; ImageMatrix[7][4] = randomFrameColor; ImageMatrix[7][5] = randomFrameColor;
            Pattern_ID_Frame_Time = 2;
        break;

        case 6:
            ImageMatrix[0][0] = randomFrameColor; ImageMatrix[0][1] = randomFrameColor; ImageMatrix[0][2] = randomFrameColor; ImageMatrix[0][3] = randomFrameColor; ImageMatrix[0][4] = randomFrameColor; ImageMatrix[0][5] = randomFrameColor;
            ImageMatrix[1][0] = randomFrameColor; ImageMatrix[1][1] = randomFrameColor; ImageMatrix[1][2] = randomFrameColor; ImageMatrix[1][3] = randomFrameColor; ImageMatrix[1][4] = randomFrameColor; ImageMatrix[1][5] = randomFrameColor;
            ImageMatrix[2][0] = randomFrameColor; ImageMatrix[2][1] = randomFrameColor; ImageMatrix[2][2] = randomFrameColor; ImageMatrix[2][3] = randomFrameColor; ImageMatrix[2][4] = randomFrameColor; ImageMatrix[2][5] = randomFrameColor;
            ImageMatrix[3][0] = randomFrameColor; ImageMatrix[3][1] = randomFrameColor; ImageMatrix[3][2] = randomFrameColor; ImageMatrix[3][3] = randomFrameColor; ImageMatrix[3][4] = randomFrameColor; ImageMatrix[3][5] = randomFrameColor;
            ImageMatrix[4][0] = randomFrameColor; ImageMatrix[4][1] = randomFrameColor; ImageMatrix[4][2] = randomFrameColor; ImageMatrix[4][3] = randomFrameColor; ImageMatrix[4][4] = randomFrameColor; ImageMatrix[4][5] = randomFrameColor;
            ImageMatrix[5][0] = randomFrameColor; ImageMatrix[5][1] = randomFrameColor; ImageMatrix[5][2] = randomFrameColor; ImageMatrix[5][3] = randomFrameColor; ImageMatrix[5][4] = randomFrameColor; ImageMatrix[5][5] = randomFrameColor;
            ImageMatrix[6][0] = randomFrameColor; ImageMatrix[6][1] = randomFrameColor; ImageMatrix[6][2] = randomFrameColor; ImageMatrix[6][3] = randomFrameColor; ImageMatrix[6][4] = randomFrameColor; ImageMatrix[6][5] = randomFrameColor;
            ImageMatrix[7][0] = randomFrameColor; ImageMatrix[7][1] = randomFrameColor; ImageMatrix[7][2] = randomFrameColor; ImageMatrix[7][3] = randomFrameColor; ImageMatrix[7][4] = randomFrameColor; ImageMatrix[7][5] = randomFrameColor;
            Pattern_ID_Frame_Time = 2;
        break;

        case 7:
            ImageMatrix[0][0] = randomFrameColor; ImageMatrix[0][1] = randomFrameColor; ImageMatrix[0][2] = randomFrameColor; ImageMatrix[0][3] = randomFrameColor; ImageMatrix[0][4] = randomFrameColor; ImageMatrix[0][5] = randomFrameColor;
            ImageMatrix[1][0] = randomFrameColor; ImageMatrix[1][1] = randomFrameColor; ImageMatrix[1][2] = randomFrameColor; ImageMatrix[1][3] = randomFrameColor; ImageMatrix[1][4] = randomFrameColor; ImageMatrix[1][5] = randomFrameColor;
            ImageMatrix[2][0] = randomFrameColor; ImageMatrix[2][1] = randomFrameColor; ImageMatrix[2][2] = randomFrameColor; ImageMatrix[2][3] = randomFrameColor; ImageMatrix[2][4] = randomFrameColor; ImageMatrix[2][5] = randomFrameColor;
            ImageMatrix[3][0] = randomFrameColor; ImageMatrix[3][1] = randomFrameColor; ImageMatrix[3][2] = randomFrameColor; ImageMatrix[3][3] = randomFrameColor; ImageMatrix[3][4] = randomFrameColor; ImageMatrix[3][5] = randomFrameColor;
            ImageMatrix[4][0] = randomFrameColor; ImageMatrix[4][1] = randomFrameColor; ImageMatrix[4][2] = randomFrameColor; ImageMatrix[4][3] = randomFrameColor; ImageMatrix[4][4] = randomFrameColor; ImageMatrix[4][5] = randomFrameColor;
            ImageMatrix[5][0] = randomFrameColor; ImageMatrix[5][1] = randomFrameColor; ImageMatrix[5][2] = randomFrameColor; ImageMatrix[5][3] = randomFrameColor; ImageMatrix[5][4] = randomFrameColor; ImageMatrix[5][5] = randomFrameColor;
            ImageMatrix[6][0] = randomFrameColor; ImageMatrix[6][1] = randomFrameColor; ImageMatrix[6][2] = randomFrameColor; ImageMatrix[6][3] = randomFrameColor; ImageMatrix[6][4] = randomFrameColor; ImageMatrix[6][5] = randomFrameColor;
            ImageMatrix[7][0] = randomFrameColor; ImageMatrix[7][1] = randomFrameColor; ImageMatrix[7][2] = randomFrameColor; ImageMatrix[7][3] = randomFrameColor; ImageMatrix[7][4] = randomFrameColor; ImageMatrix[7][5] = randomFrameColor;
            Pattern_ID_Frame_Time = 2;
        break;

        case 8:
            ImageMatrix[0][0] = randomFrameColor; ImageMatrix[0][1] = randomFrameColor; ImageMatrix[0][2] = randomFrameColor; ImageMatrix[0][3] = randomFrameColor; ImageMatrix[0][4] = randomFrameColor; ImageMatrix[0][5] = randomFrameColor;
            ImageMatrix[1][0] = randomFrameColor; ImageMatrix[1][1] = randomFrameColor; ImageMatrix[1][2] = randomFrameColor; ImageMatrix[1][3] = randomFrameColor; ImageMatrix[1][4] = randomFrameColor; ImageMatrix[1][5] = randomFrameColor;
            ImageMatrix[2][0] = randomFrameColor; ImageMatrix[2][1] = randomFrameColor; ImageMatrix[2][2] = randomFrameColor; ImageMatrix[2][3] = randomFrameColor; ImageMatrix[2][4] = randomFrameColor; ImageMatrix[2][5] = randomFrameColor;
            ImageMatrix[3][0] = randomFrameColor; ImageMatrix[3][1] = randomFrameColor; ImageMatrix[3][2] = randomFrameColor; ImageMatrix[3][3] = randomFrameColor; ImageMatrix[3][4] = randomFrameColor; ImageMatrix[3][5] = randomFrameColor;
            ImageMatrix[4][0] = randomFrameColor; ImageMatrix[4][1] = randomFrameColor; ImageMatrix[4][2] = randomFrameColor; ImageMatrix[4][3] = randomFrameColor; ImageMatrix[4][4] = randomFrameColor; ImageMatrix[4][5] = randomFrameColor;
            ImageMatrix[5][0] = randomFrameColor; ImageMatrix[5][1] = randomFrameColor; ImageMatrix[5][2] = randomFrameColor; ImageMatrix[5][3] = randomFrameColor; ImageMatrix[5][4] = randomFrameColor; ImageMatrix[5][5] = randomFrameColor;
            ImageMatrix[6][0] = randomFrameColor; ImageMatrix[6][1] = randomFrameColor; ImageMatrix[6][2] = randomFrameColor; ImageMatrix[6][3] = randomFrameColor; ImageMatrix[6][4] = randomFrameColor; ImageMatrix[6][5] = randomFrameColor;
            ImageMatrix[7][0] = randomFrameColor; ImageMatrix[7][1] = randomFrameColor; ImageMatrix[7][2] = randomFrameColor; ImageMatrix[7][3] = randomFrameColor; ImageMatrix[7][4] = randomFrameColor; ImageMatrix[7][5] = randomFrameColor;
            Pattern_ID_Frame_Time = 2;
        break;

        case 9:
            ImageMatrix[0][0] = randomFrameColor; ImageMatrix[0][1] = randomFrameColor; ImageMatrix[0][2] = randomFrameColor; ImageMatrix[0][3] = randomFrameColor; ImageMatrix[0][4] = randomFrameColor; ImageMatrix[0][5] = randomFrameColor;
            ImageMatrix[1][0] = randomFrameColor; ImageMatrix[1][1] = randomFrameColor; ImageMatrix[1][2] = randomFrameColor; ImageMatrix[1][3] = randomFrameColor; ImageMatrix[1][4] = randomFrameColor; ImageMatrix[1][5] = randomFrameColor;
            ImageMatrix[2][0] = randomFrameColor; ImageMatrix[2][1] = randomFrameColor; ImageMatrix[2][2] = randomFrameColor; ImageMatrix[2][3] = randomFrameColor; ImageMatrix[2][4] = randomFrameColor; ImageMatrix[2][5] = randomFrameColor;
            ImageMatrix[3][0] = randomFrameColor; ImageMatrix[3][1] = randomFrameColor; ImageMatrix[3][2] = randomFrameColor; ImageMatrix[3][3] = randomFrameColor; ImageMatrix[3][4] = randomFrameColor; ImageMatrix[3][5] = randomFrameColor;
            ImageMatrix[4][0] = randomFrameColor; ImageMatrix[4][1] = randomFrameColor; ImageMatrix[4][2] = randomFrameColor; ImageMatrix[4][3] = randomFrameColor; ImageMatrix[4][4] = randomFrameColor; ImageMatrix[4][5] = randomFrameColor;
            ImageMatrix[5][0] = randomFrameColor; ImageMatrix[5][1] = randomFrameColor; ImageMatrix[5][2] = randomFrameColor; ImageMatrix[5][3] = randomFrameColor; ImageMatrix[5][4] = randomFrameColor; ImageMatrix[5][5] = randomFrameColor;
            ImageMatrix[6][0] = randomFrameColor; ImageMatrix[6][1] = randomFrameColor; ImageMatrix[6][2] = randomFrameColor; ImageMatrix[6][3] = randomFrameColor; ImageMatrix[6][4] = randomFrameColor; ImageMatrix[6][5] = randomFrameColor;
            ImageMatrix[7][0] = randomFrameColor; ImageMatrix[7][1] = randomFrameColor; ImageMatrix[7][2] = randomFrameColor; ImageMatrix[7][3] = randomFrameColor; ImageMatrix[7][4] = randomFrameColor; ImageMatrix[7][5] = randomFrameColor;
            Pattern_ID_Frame_Time = 2;
        break;

        case 10:
            ImageMatrix[0][0] = randomFrameColor; ImageMatrix[0][1] = randomFrameColor; ImageMatrix[0][2] = randomFrameColor; ImageMatrix[0][3] = randomFrameColor; ImageMatrix[0][4] = randomFrameColor; ImageMatrix[0][5] = randomFrameColor;
            ImageMatrix[1][0] = randomFrameColor; ImageMatrix[1][1] = randomFrameColor; ImageMatrix[1][2] = randomFrameColor; ImageMatrix[1][3] = randomFrameColor; ImageMatrix[1][4] = randomFrameColor; ImageMatrix[1][5] = randomFrameColor;
            ImageMatrix[2][0] = randomFrameColor; ImageMatrix[2][1] = randomFrameColor; ImageMatrix[2][2] = randomFrameColor; ImageMatrix[2][3] = randomFrameColor; ImageMatrix[2][4] = randomFrameColor; ImageMatrix[2][5] = randomFrameColor;
            ImageMatrix[3][0] = randomFrameColor; ImageMatrix[3][1] = randomFrameColor; ImageMatrix[3][2] = randomFrameColor; ImageMatrix[3][3] = randomFrameColor; ImageMatrix[3][4] = randomFrameColor; ImageMatrix[3][5] = randomFrameColor;
            ImageMatrix[4][0] = randomFrameColor; ImageMatrix[4][1] = randomFrameColor; ImageMatrix[4][2] = randomFrameColor; ImageMatrix[4][3] = randomFrameColor; ImageMatrix[4][4] = randomFrameColor; ImageMatrix[4][5] = randomFrameColor;
            ImageMatrix[5][0] = randomFrameColor; ImageMatrix[5][1] = randomFrameColor; ImageMatrix[5][2] = randomFrameColor; ImageMatrix[5][3] = randomFrameColor; ImageMatrix[5][4] = randomFrameColor; ImageMatrix[5][5] = randomFrameColor;
            ImageMatrix[6][0] = randomFrameColor; ImageMatrix[6][1] = randomFrameColor; ImageMatrix[6][2] = randomFrameColor; ImageMatrix[6][3] = randomFrameColor; ImageMatrix[6][4] = randomFrameColor; ImageMatrix[6][5] = randomFrameColor;
            ImageMatrix[7][0] = randomFrameColor; ImageMatrix[7][1] = randomFrameColor; ImageMatrix[7][2] = randomFrameColor; ImageMatrix[7][3] = randomFrameColor; ImageMatrix[7][4] = randomFrameColor; ImageMatrix[7][5] = randomFrameColor;
            Pattern_ID_Frame_Time = 2;
        break;

        default:
            Pattern_ID_Frame_Time = 2;
            Pattern_ID_Frame_Number = 0;
        break;
    }
}
void Pattern_3_Random_Single(void)
{
    //This pattern displays randomly colored LEDs at random positions
    switch (Pattern_ID_Frame_Number)
    {
        case 1:
            ImageMatrix[0][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[1][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[2][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[3][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[4][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[5][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[6][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[7][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            Pattern_ID_Frame_Time = 4;
        break;

        case 2:
            ImageMatrix[0][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[1][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[2][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[3][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[4][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[5][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[6][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[7][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            Pattern_ID_Frame_Time = 8;
        break;

        case 3:
            ImageMatrix[0][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[1][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[2][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[3][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[4][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[5][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[6][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[7][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            Pattern_ID_Frame_Time = 4;
        break;

        case 4:
            ImageMatrix[0][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[1][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[2][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[3][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[4][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[5][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[6][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[7][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            Pattern_ID_Frame_Time = 6;
        break;

        case 5:
            ImageMatrix[0][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[1][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[2][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[3][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[4][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[5][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[6][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[7][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            Pattern_ID_Frame_Time = 4;
        break;

        case 6:
            ImageMatrix[0][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[1][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[2][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[3][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[4][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[5][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[6][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[7][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            Pattern_ID_Frame_Time = 8;
        break;

        case 7:
            ImageMatrix[0][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[1][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[2][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[3][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[4][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[5][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[6][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[7][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            Pattern_ID_Frame_Time = 6;
        break;

        case 8:
            ImageMatrix[0][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[1][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[2][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[3][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[4][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[5][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[6][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[7][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            Pattern_ID_Frame_Time = 2;
        break;

        case 9:
            ImageMatrix[0][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[1][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[2][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[3][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[4][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[5][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[6][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[7][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            Pattern_ID_Frame_Time = 2;
        break;

    case 10:
            ImageMatrix[0][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[0][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[1][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[1][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[2][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[2][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[3][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[3][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[4][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[4][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[5][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[5][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[6][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[6][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            ImageMatrix[7][0] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][1] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][2] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][3] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][4] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand(); ImageMatrix[7][5] = (((rand() & 0x7FFF) < 0x4000)? 0x0000:0x7FFF) & rand();
            Pattern_ID_Frame_Time = 8;
        break;

        default:
            Pattern_ID_Frame_Time = 2;
            Pattern_ID_Frame_Number = 0;
        break;
    }
}
void Pattern_4_Custom_3_Color_Pattern(void)
{
    //This is Blue Powder

    switch (Pattern_ID_Frame_Number)
    {
       case 1:
    /*
        case 1:
            ImageMatrix[0][0] = Custom_Color_Frame_A; ImageMatrix[0][1] = Custom_Color_Frame_A; ImageMatrix[0][2] = Custom_Color_Frame_A; ImageMatrix[0][3] = Custom_Color_Frame_A; ImageMatrix[0][4] = Custom_Color_Frame_A; ImageMatrix[0][5] = Custom_Color_Frame_A;
            ImageMatrix[1][0] = Custom_Color_Frame_A; ImageMatrix[1][1] = Custom_Color_Frame_A; ImageMatrix[1][2] = Custom_Color_Frame_A; ImageMatrix[1][3] = Custom_Color_Frame_A; ImageMatrix[1][4] = Custom_Color_Frame_A; ImageMatrix[1][5] = Custom_Color_Frame_A;
            ImageMatrix[2][0] = Custom_Color_Frame_A; ImageMatrix[2][1] = Custom_Color_Frame_A; ImageMatrix[2][2] = Custom_Color_Frame_A; ImageMatrix[2][3] = Custom_Color_Frame_A; ImageMatrix[2][4] = Custom_Color_Frame_A; ImageMatrix[2][5] = Custom_Color_Frame_A;
            ImageMatrix[3][0] = Custom_Color_Frame_A; ImageMatrix[3][1] = Custom_Color_Frame_A; ImageMatrix[3][2] = Custom_Color_Frame_A; ImageMatrix[3][3] = Custom_Color_Frame_A; ImageMatrix[3][4] = Custom_Color_Frame_A; ImageMatrix[3][5] = Custom_Color_Frame_A;
            ImageMatrix[4][0] = Custom_Color_Frame_A; ImageMatrix[4][1] = Custom_Color_Frame_A; ImageMatrix[4][2] = Custom_Color_Frame_A; ImageMatrix[4][3] = Custom_Color_Frame_A; ImageMatrix[4][4] = Custom_Color_Frame_A; ImageMatrix[4][5] = Custom_Color_Frame_A;
            ImageMatrix[5][0] = Custom_Color_Frame_A; ImageMatrix[5][1] = Custom_Color_Frame_A; ImageMatrix[5][2] = Custom_Color_Frame_A; ImageMatrix[5][3] = Custom_Color_Frame_A; ImageMatrix[5][4] = Custom_Color_Frame_A; ImageMatrix[5][5] = Custom_Color_Frame_A;
            ImageMatrix[6][0] = Custom_Color_Frame_A; ImageMatrix[6][1] = Custom_Color_Frame_A; ImageMatrix[6][2] = Custom_Color_Frame_A; ImageMatrix[6][3] = Custom_Color_Frame_A; ImageMatrix[6][4] = Custom_Color_Frame_A; ImageMatrix[6][5] = Custom_Color_Frame_A;
            ImageMatrix[7][0] = Custom_Color_Frame_A; ImageMatrix[7][1] = Custom_Color_Frame_A; ImageMatrix[7][2] = Custom_Color_Frame_A; ImageMatrix[7][3] = Custom_Color_Frame_A; ImageMatrix[7][4] = Custom_Color_Frame_A; ImageMatrix[7][5] = Custom_Color_Frame_A;
            Pattern_ID_Frame_Time = 20;
        break;

        case 2:
            ImageMatrix[0][0] = Custom_Color_Frame_B; ImageMatrix[0][1] = Custom_Color_Frame_B; ImageMatrix[0][2] = Custom_Color_Frame_B; ImageMatrix[0][3] = Custom_Color_Frame_B; ImageMatrix[0][4] = Custom_Color_Frame_B; ImageMatrix[0][5] = Custom_Color_Frame_B;
            ImageMatrix[1][0] = Custom_Color_Frame_B; ImageMatrix[1][1] = Custom_Color_Frame_B; ImageMatrix[1][2] = Custom_Color_Frame_B; ImageMatrix[1][3] = Custom_Color_Frame_B; ImageMatrix[1][4] = Custom_Color_Frame_B; ImageMatrix[1][5] = Custom_Color_Frame_B;
            ImageMatrix[2][0] = Custom_Color_Frame_B; ImageMatrix[2][1] = Custom_Color_Frame_B; ImageMatrix[2][2] = Custom_Color_Frame_B; ImageMatrix[2][3] = Custom_Color_Frame_B; ImageMatrix[2][4] = Custom_Color_Frame_B; ImageMatrix[2][5] = Custom_Color_Frame_B;
            ImageMatrix[3][0] = Custom_Color_Frame_B; ImageMatrix[3][1] = Custom_Color_Frame_B; ImageMatrix[3][2] = Custom_Color_Frame_B; ImageMatrix[3][3] = Custom_Color_Frame_B; ImageMatrix[3][4] = Custom_Color_Frame_B; ImageMatrix[3][5] = Custom_Color_Frame_B;
            ImageMatrix[4][0] = Custom_Color_Frame_B; ImageMatrix[4][1] = Custom_Color_Frame_B; ImageMatrix[4][2] = Custom_Color_Frame_B; ImageMatrix[4][3] = Custom_Color_Frame_B; ImageMatrix[4][4] = Custom_Color_Frame_B; ImageMatrix[4][5] = Custom_Color_Frame_B;
            ImageMatrix[5][0] = Custom_Color_Frame_B; ImageMatrix[5][1] = Custom_Color_Frame_B; ImageMatrix[5][2] = Custom_Color_Frame_B; ImageMatrix[5][3] = Custom_Color_Frame_B; ImageMatrix[5][4] = Custom_Color_Frame_B; ImageMatrix[5][5] = Custom_Color_Frame_B;
            ImageMatrix[6][0] = Custom_Color_Frame_B; ImageMatrix[6][1] = Custom_Color_Frame_B; ImageMatrix[6][2] = Custom_Color_Frame_B; ImageMatrix[6][3] = Custom_Color_Frame_B; ImageMatrix[6][4] = Custom_Color_Frame_B; ImageMatrix[6][5] = Custom_Color_Frame_B;
            ImageMatrix[7][0] = Custom_Color_Frame_B; ImageMatrix[7][1] = Custom_Color_Frame_B; ImageMatrix[7][2] = Custom_Color_Frame_B; ImageMatrix[7][3] = Custom_Color_Frame_B; ImageMatrix[7][4] = Custom_Color_Frame_B; ImageMatrix[7][5] = Custom_Color_Frame_B;
            Pattern_ID_Frame_Time = 20;
        break;

        case 3:
            ImageMatrix[0][0] = Custom_Color_Frame_C; ImageMatrix[0][1] = Custom_Color_Frame_C; ImageMatrix[0][2] = Custom_Color_Frame_C; ImageMatrix[0][3] = Custom_Color_Frame_C; ImageMatrix[0][4] = Custom_Color_Frame_C; ImageMatrix[0][5] = Custom_Color_Frame_C;
            ImageMatrix[1][0] = Custom_Color_Frame_C; ImageMatrix[1][1] = Custom_Color_Frame_C; ImageMatrix[1][2] = Custom_Color_Frame_C; ImageMatrix[1][3] = Custom_Color_Frame_C; ImageMatrix[1][4] = Custom_Color_Frame_C; ImageMatrix[1][5] = Custom_Color_Frame_C;
            ImageMatrix[2][0] = Custom_Color_Frame_C; ImageMatrix[2][1] = Custom_Color_Frame_C; ImageMatrix[2][2] = Custom_Color_Frame_C; ImageMatrix[2][3] = Custom_Color_Frame_C; ImageMatrix[2][4] = Custom_Color_Frame_C; ImageMatrix[2][5] = Custom_Color_Frame_C;
            ImageMatrix[3][0] = Custom_Color_Frame_C; ImageMatrix[3][1] = Custom_Color_Frame_C; ImageMatrix[3][2] = Custom_Color_Frame_C; ImageMatrix[3][3] = Custom_Color_Frame_C; ImageMatrix[3][4] = Custom_Color_Frame_C; ImageMatrix[3][5] = Custom_Color_Frame_C;
            ImageMatrix[4][0] = Custom_Color_Frame_C; ImageMatrix[4][1] = Custom_Color_Frame_C; ImageMatrix[4][2] = Custom_Color_Frame_C; ImageMatrix[4][3] = Custom_Color_Frame_C; ImageMatrix[4][4] = Custom_Color_Frame_C; ImageMatrix[4][5] = Custom_Color_Frame_C;
            ImageMatrix[5][0] = Custom_Color_Frame_C; ImageMatrix[5][1] = Custom_Color_Frame_C; ImageMatrix[5][2] = Custom_Color_Frame_C; ImageMatrix[5][3] = Custom_Color_Frame_C; ImageMatrix[5][4] = Custom_Color_Frame_C; ImageMatrix[5][5] = Custom_Color_Frame_C;
            ImageMatrix[6][0] = Custom_Color_Frame_C; ImageMatrix[6][1] = Custom_Color_Frame_C; ImageMatrix[6][2] = Custom_Color_Frame_C; ImageMatrix[6][3] = Custom_Color_Frame_C; ImageMatrix[6][4] = Custom_Color_Frame_C; ImageMatrix[6][5] = Custom_Color_Frame_C;
            ImageMatrix[7][0] = Custom_Color_Frame_C; ImageMatrix[7][1] = Custom_Color_Frame_C; ImageMatrix[7][2] = Custom_Color_Frame_C; ImageMatrix[7][3] = Custom_Color_Frame_C; ImageMatrix[7][4] = Custom_Color_Frame_C; ImageMatrix[7][5] = Custom_Color_Frame_C;
            Pattern_ID_Frame_Time = 20;
        break;
        */

        default:
            Pattern_ID_Frame_Time = 2;
            Pattern_ID_Frame_Number = 0;
        break;
    }
}

void Pattern_6_Rolling_Ball(void)
{
    switch (Pattern_ID_Frame_Number)
    {
    case 1:
        ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x0000; ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
        ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
        ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
        ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
        ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
        ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
        ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
        ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 2:
        ImageMatrix[0][0] = 0x0000; ImageMatrix[0][1] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 3:
        ImageMatrix[0][1] = 0x0000; ImageMatrix[0][2] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 4:
        ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 5:
        ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 6:
        ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 7:
        ImageMatrix[0][5] = 0x0000; ImageMatrix[1][0] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 8:
        ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 9:
        ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 10:
        ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 11:
        ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 12:
        ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 13:
        ImageMatrix[1][5] = 0x0000; ImageMatrix[2][0] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 14:
        ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 15:
        ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 16:
        ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 17:
        ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 18:
        ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 19:
        ImageMatrix[2][5] = 0x0000; ImageMatrix[3][0] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 20:
        ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 21:
        ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 22:
        ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 23:
        ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 24:
        ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 25:
        ImageMatrix[3][5] = 0x0000; ImageMatrix[4][0] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 26:
        ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 27:
        ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 28:
        ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 29:
        ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 30:
        ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 31:
        ImageMatrix[4][5] = 0x0000; ImageMatrix[5][0] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 32:
        ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 33:
        ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 34:
        ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 35:
        ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 36:
        ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 37:
        ImageMatrix[5][5] = 0x0000; ImageMatrix[6][0] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 38:
        ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 39:
        ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 40:
        ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 41:
        ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 42:
        ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 43:
        ImageMatrix[6][5] = 0x0000; ImageMatrix[7][0] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 44:
        ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 45:
        ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 46:
        ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 47:
        ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 48:
        ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    default:
        Pattern_ID_Frame_Time = 1;
        Pattern_ID_Frame_Number = 0;
    break;
    }
}

// Pattern = Two_Balls
void Pattern_6_Two_Balls(void)
{
    switch (Pattern_ID_Frame_Number)
    {
    case 1:
        ImageMatrix[0][0] = 0x43FF; ImageMatrix[0][1] = 0x0000; ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
        ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
        ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
        ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
        ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
        ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
        ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
        ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x43FF;
        Pattern_ID_Frame_Time = 2;
    break;

    case 2:
        ImageMatrix[0][0] = 0x0000; ImageMatrix[0][1] = 0x43FF;
        ImageMatrix[7][4] = 0x43FF; ImageMatrix[7][5] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 3:
        ImageMatrix[0][1] = 0x0000; ImageMatrix[0][2] = 0x43FF;
        ImageMatrix[7][3] = 0x43FF; ImageMatrix[7][4] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 4:
        ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x43FF;
        ImageMatrix[7][2] = 0x43FF; ImageMatrix[7][3] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 5:
        ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x43FF;
        ImageMatrix[7][1] = 0x43FF; ImageMatrix[7][2] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 6:
        ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x03FF;
        ImageMatrix[7][0] = 0x03FF; ImageMatrix[7][1] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 7:
        ImageMatrix[0][5] = 0x0000;
        ImageMatrix[1][0] = 0x03FF;
        ImageMatrix[6][5] = 0x03FF;
        ImageMatrix[7][0] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 8:
        ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0110;
        ImageMatrix[6][4] = 0x0110; ImageMatrix[6][5] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 9:
        ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0110;
        ImageMatrix[6][3] = 0x0110; ImageMatrix[6][4] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 10:
        ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0110;
        ImageMatrix[6][2] = 0x0110; ImageMatrix[6][3] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 11:
        ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0110;
        ImageMatrix[6][1] = 0x0110; ImageMatrix[6][2] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 12:
        ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0110;
        ImageMatrix[6][0] = 0x0110; ImageMatrix[6][1] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 13:
        ImageMatrix[1][5] = 0x0000;
        ImageMatrix[2][0] = 0x0110;
        ImageMatrix[5][5] = 0x0110;
        ImageMatrix[6][0] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 14:
        ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0110;
        ImageMatrix[5][4] = 0x0110; ImageMatrix[5][5] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 15:
        ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0110;
        ImageMatrix[5][3] = 0x0110; ImageMatrix[5][4] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 16:
        ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0110;
        ImageMatrix[5][2] = 0x0110; ImageMatrix[5][3] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 17:
        ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0110;
        ImageMatrix[5][1] = 0x0110; ImageMatrix[5][2] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 18:
        ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0110;
        ImageMatrix[5][0] = 0x0110; ImageMatrix[5][1] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 19:
        ImageMatrix[2][5] = 0x0000;
        ImageMatrix[3][0] = 0x0110;
        ImageMatrix[4][5] = 0x0110;
        ImageMatrix[5][0] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 20:
        ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x7C00;
        ImageMatrix[4][4] = 0x7C00; ImageMatrix[4][5] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 21:
        ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x7C00;
        ImageMatrix[4][3] = 0x7C00; ImageMatrix[4][4] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 22:
        ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x7C00;
        ImageMatrix[4][2] = 0x7C00; ImageMatrix[4][3] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 23:
        ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x7C00;
        ImageMatrix[4][1] = 0x7C00; ImageMatrix[4][2] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 24:
        ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x7C00;
        ImageMatrix[4][0] = 0x7C00; ImageMatrix[4][1] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 25:
        ImageMatrix[3][4] = 0x7C00; ImageMatrix[3][5] = 0x0000;
        ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x7C00;
        Pattern_ID_Frame_Time = 2;
    break;

    case 26:
        ImageMatrix[3][3] = 0x7C00; ImageMatrix[3][4] = 0x0000;
        ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x7C00;
        Pattern_ID_Frame_Time = 2;
    break;

    case 27:
        ImageMatrix[3][2] = 0x7C00; ImageMatrix[3][3] = 0x0000;
        ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x7C00;
        Pattern_ID_Frame_Time = 2;
    break;

    case 28:
        ImageMatrix[3][1] = 0x7C00; ImageMatrix[3][2] = 0x0000;
        ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x7C00;
        Pattern_ID_Frame_Time = 2;
    break;

    case 29:
        ImageMatrix[3][0] = 0x7C00; ImageMatrix[3][1] = 0x0000;
        ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x7C00;
        Pattern_ID_Frame_Time = 2;
    break;

    case 30:
        ImageMatrix[2][5] = 0x7C00;
        ImageMatrix[3][0] = 0x0000;
        ImageMatrix[4][5] = 0x0000;
        ImageMatrix[5][0] = 0x7C00;
        Pattern_ID_Frame_Time = 2;
    break;

    case 31:
        ImageMatrix[2][4] = 0x7C00; ImageMatrix[2][5] = 0x0000;
        ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x7C00;
        Pattern_ID_Frame_Time = 2;
    break;

    case 32:
        ImageMatrix[2][3] = 0x7C00; ImageMatrix[2][4] = 0x0000;
        ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x7C00;
        Pattern_ID_Frame_Time = 2;
    break;

    case 33:
        ImageMatrix[2][2] = 0x7E10; ImageMatrix[2][3] = 0x0000;
        ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x7E10;
        Pattern_ID_Frame_Time = 2;
    break;

    case 34:
        ImageMatrix[2][1] = 0x7E10; ImageMatrix[2][2] = 0x0000;
        ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x7E10;
        Pattern_ID_Frame_Time = 2;
    break;

    case 35:
        ImageMatrix[2][0] = 0x7E10; ImageMatrix[2][1] = 0x0000;
        ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x7E10;
        Pattern_ID_Frame_Time = 2;
    break;

    case 36:
        ImageMatrix[1][5] = 0x7E10;
        ImageMatrix[2][0] = 0x0000;
        ImageMatrix[5][5] = 0x0000;
        ImageMatrix[6][0] = 0x7E10;
        Pattern_ID_Frame_Time = 2;
    break;

    case 37:
        ImageMatrix[1][4] = 0x7E10; ImageMatrix[1][5] = 0x0000;
        ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x7E10;
        Pattern_ID_Frame_Time = 2;
    break;

    case 38:
        ImageMatrix[1][3] = 0x7E08; ImageMatrix[1][4] = 0x0000;
        ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x7E08;
        Pattern_ID_Frame_Time = 2;
    break;

    case 39:
        ImageMatrix[1][2] = 0x7E08; ImageMatrix[1][3] = 0x0000;
        ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x7E08;
        Pattern_ID_Frame_Time = 2;
    break;

    case 40:
        ImageMatrix[1][1] = 0x7E08; ImageMatrix[1][2] = 0x0000;
        ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x7E08;
        Pattern_ID_Frame_Time = 2;
    break;

    case 41:
        ImageMatrix[1][0] = 0x7FE0; ImageMatrix[1][1] = 0x0000;
        ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x7FE0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 42:
        ImageMatrix[0][5] = 0x7FE0;
        ImageMatrix[1][0] = 0x0000;
        ImageMatrix[6][5] = 0x0000;
        ImageMatrix[7][0] = 0x7FE0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 43:
        ImageMatrix[0][4] = 0x7FE0; ImageMatrix[0][5] = 0x0000;
        ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x7FE0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 44:
        ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x0000;
        ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x03E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 45:
        ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x0000;
        ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x03E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 46:
        ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x0000;
        ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x03E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 47:
        ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x0000;
        ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x03E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 48:
        Pattern_ID_Frame_Time = 2;
    break;

    case 49:
        Pattern_ID_Frame_Time = 2;
    break;

    default:
        Pattern_ID_Frame_Time = 1;
        Pattern_ID_Frame_Number = 0;
    break;
    }
}

#endif /* FACTORYPATTERNS_H_ */
