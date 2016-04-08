/*******************************************************************************
                      Bicycle Helmet Microcontroller Software
               Copyright (c) NixTech, Inc. 2012 All Rights Reserved
                            Rev. A, MSP430F5328
 ******************************************************************************/

#include "HAL.h"

#ifndef PATTERNSGENERATED_A_H_
#define PATTERNSGENERATED_A_H_

extern volatile unsigned int Pattern_ID_Frame_Time;
extern volatile unsigned int Pattern_ID_Frame_Number;
extern volatile unsigned int ImageMatrix [8][8];
extern volatile unsigned char Pattern_ID;
extern volatile unsigned char Active_Pattern_ID;
extern BOOL Event_Change_Flag;
extern void clearImageMemories(void);

void Pattern_4_U_S_A(void);
void Pattern_5_COP(void);
void Pattern_6_BALL_8(void);
void Pattern_7_2_RODS(void);
void Pattern_8_SPIRAL_SWIPE(void);
void Pattern_10_MIDDLE_SWIPE(void);
void Pattern_12_RASTA(void);
void Pattern_13_EXPAND_CONTRACT(void);

// Pattern = U_S_A
void Pattern_4_U_S_A(void)
{
    switch (Pattern_ID_Frame_Number)
    {
    case 1:
        ImageMatrix[0][0] = 0x7C00; ImageMatrix[0][1] = 0x7C00; ImageMatrix[0][2] = 0x7C00; ImageMatrix[0][3] = 0x7C00; ImageMatrix[0][4] = 0x7C00; ImageMatrix[0][5] = 0x7C00;
        ImageMatrix[1][0] = 0x7C00; ImageMatrix[1][1] = 0x7C00; ImageMatrix[1][2] = 0x7C00; ImageMatrix[1][3] = 0x7C00; ImageMatrix[1][4] = 0x7C00; ImageMatrix[1][5] = 0x7C00;
        ImageMatrix[2][0] = 0x7C00; ImageMatrix[2][1] = 0x7C00; ImageMatrix[2][2] = 0x7C00; ImageMatrix[2][3] = 0x7C00; ImageMatrix[2][4] = 0x7C00; ImageMatrix[2][5] = 0x7C00;
        ImageMatrix[3][0] = 0x7C00; ImageMatrix[3][1] = 0x7C00; ImageMatrix[3][2] = 0x7C00; ImageMatrix[3][3] = 0x7C00; ImageMatrix[3][4] = 0x7C00; ImageMatrix[3][5] = 0x7C00;
        ImageMatrix[4][0] = 0x7C00; ImageMatrix[4][1] = 0x7C00; ImageMatrix[4][2] = 0x7C00; ImageMatrix[4][3] = 0x7C00; ImageMatrix[4][4] = 0x7C00; ImageMatrix[4][5] = 0x7C00;
        ImageMatrix[5][0] = 0x7C00; ImageMatrix[5][1] = 0x7C00; ImageMatrix[5][2] = 0x7C00; ImageMatrix[5][3] = 0x7C00; ImageMatrix[5][4] = 0x7C00; ImageMatrix[5][5] = 0x7C00;
        ImageMatrix[6][0] = 0x7C00; ImageMatrix[6][1] = 0x7C00; ImageMatrix[6][2] = 0x7C00; ImageMatrix[6][3] = 0x7C00; ImageMatrix[6][4] = 0x7C00; ImageMatrix[6][5] = 0x7C00;
        ImageMatrix[7][0] = 0x7C00; ImageMatrix[7][1] = 0x7C00; ImageMatrix[7][2] = 0x7C00; ImageMatrix[7][3] = 0x7C00; ImageMatrix[7][4] = 0x7C00; ImageMatrix[7][5] = 0x7C00;
        Pattern_ID_Frame_Time = 6;
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
        Pattern_ID_Frame_Time = 6;
    break;

    case 3:
        ImageMatrix[0][0] = 0x0010; ImageMatrix[0][1] = 0x0010; ImageMatrix[0][2] = 0x0010; ImageMatrix[0][3] = 0x0010; ImageMatrix[0][4] = 0x0010; ImageMatrix[0][5] = 0x0010;
        ImageMatrix[1][0] = 0x0010; ImageMatrix[1][1] = 0x0010; ImageMatrix[1][2] = 0x0010; ImageMatrix[1][3] = 0x0010; ImageMatrix[1][4] = 0x0010; ImageMatrix[1][5] = 0x0010;
        ImageMatrix[2][0] = 0x0010; ImageMatrix[2][1] = 0x0010; ImageMatrix[2][2] = 0x0010; ImageMatrix[2][3] = 0x0010; ImageMatrix[2][4] = 0x0010; ImageMatrix[2][5] = 0x0010;
        ImageMatrix[3][0] = 0x0010; ImageMatrix[3][1] = 0x0010; ImageMatrix[3][2] = 0x0010; ImageMatrix[3][3] = 0x0010; ImageMatrix[3][4] = 0x0010; ImageMatrix[3][5] = 0x0010;
        ImageMatrix[4][0] = 0x0010; ImageMatrix[4][1] = 0x0010; ImageMatrix[4][2] = 0x0010; ImageMatrix[4][3] = 0x0010; ImageMatrix[4][4] = 0x0010; ImageMatrix[4][5] = 0x0010;
        ImageMatrix[5][0] = 0x0010; ImageMatrix[5][1] = 0x0010; ImageMatrix[5][2] = 0x0010; ImageMatrix[5][3] = 0x0010; ImageMatrix[5][4] = 0x0010; ImageMatrix[5][5] = 0x0010;
        ImageMatrix[6][0] = 0x0010; ImageMatrix[6][1] = 0x0010; ImageMatrix[6][2] = 0x0010; ImageMatrix[6][3] = 0x0010; ImageMatrix[6][4] = 0x0010; ImageMatrix[6][5] = 0x0010;
        ImageMatrix[7][0] = 0x0010; ImageMatrix[7][1] = 0x0010; ImageMatrix[7][2] = 0x0010; ImageMatrix[7][3] = 0x0010; ImageMatrix[7][4] = 0x0010; ImageMatrix[7][5] = 0x0010;
        Pattern_ID_Frame_Time = 6;
    break;

    case 4:
        ImageMatrix[2][0] = 0x7FFF; ImageMatrix[2][1] = 0x7FFF; ImageMatrix[2][2] = 0x7FFF; ImageMatrix[2][3] = 0x7FFF; ImageMatrix[2][4] = 0x7FFF; ImageMatrix[2][5] = 0x7FFF;
        ImageMatrix[3][0] = 0x7C00; ImageMatrix[3][1] = 0x7C00; ImageMatrix[3][2] = 0x7C00; ImageMatrix[3][3] = 0x7C00; ImageMatrix[3][4] = 0x7C00; ImageMatrix[3][5] = 0x7C00;
        ImageMatrix[4][0] = 0x7C00; ImageMatrix[4][1] = 0x7C00; ImageMatrix[4][2] = 0x7C00; ImageMatrix[4][3] = 0x7C00; ImageMatrix[4][4] = 0x7C00; ImageMatrix[4][5] = 0x7C00;
        ImageMatrix[5][0] = 0x7FFF; ImageMatrix[5][1] = 0x7FFF; ImageMatrix[5][2] = 0x7FFF; ImageMatrix[5][3] = 0x7FFF; ImageMatrix[5][4] = 0x7FFF; ImageMatrix[5][5] = 0x7FFF;
        ImageMatrix[6][0] = 0x7FFF; ImageMatrix[6][1] = 0x7FFF; ImageMatrix[6][2] = 0x7FFF; ImageMatrix[6][3] = 0x7FFF; ImageMatrix[6][4] = 0x0010; ImageMatrix[6][5] = 0x0010;
        ImageMatrix[7][0] = 0x0010; ImageMatrix[7][1] = 0x0010; ImageMatrix[7][2] = 0x0010; ImageMatrix[7][3] = 0x0010; ImageMatrix[7][4] = 0x0010; ImageMatrix[7][5] = 0x0010;
        Pattern_ID_Frame_Time = 6;
    break;

    case 5:
        ImageMatrix[0][0] = 0x7C00; ImageMatrix[0][1] = 0x7C00; ImageMatrix[0][2] = 0x7C00; ImageMatrix[0][3] = 0x7C00; ImageMatrix[0][4] = 0x7C00; ImageMatrix[0][5] = 0x7C00;
        ImageMatrix[1][0] = 0x7C00; ImageMatrix[1][1] = 0x7C00; ImageMatrix[1][2] = 0x7C00; ImageMatrix[1][3] = 0x7C00; ImageMatrix[1][4] = 0x0010; ImageMatrix[1][5] = 0x0010;
        ImageMatrix[2][0] = 0x0010; ImageMatrix[2][1] = 0x0010; ImageMatrix[2][2] = 0x0010; ImageMatrix[2][3] = 0x0010; ImageMatrix[2][4] = 0x0010; ImageMatrix[2][5] = 0x0010;
        ImageMatrix[3][0] = 0x7FFF; ImageMatrix[3][1] = 0x7FFF; ImageMatrix[3][2] = 0x7FFF; ImageMatrix[3][3] = 0x7FFF; ImageMatrix[3][4] = 0x7FFF; ImageMatrix[3][5] = 0x7FFF;
        ImageMatrix[4][0] = 0x7FFF; ImageMatrix[4][1] = 0x7FFF; ImageMatrix[4][2] = 0x7FFF; ImageMatrix[4][3] = 0x7FFF; ImageMatrix[4][4] = 0x7FFF; ImageMatrix[4][5] = 0x7FFF;
        ImageMatrix[5][0] = 0x0010; ImageMatrix[5][1] = 0x0010; ImageMatrix[5][2] = 0x0010; ImageMatrix[5][3] = 0x0010; ImageMatrix[5][4] = 0x0010; ImageMatrix[5][5] = 0x0010;
        ImageMatrix[6][0] = 0x0010; ImageMatrix[6][1] = 0x0010; ImageMatrix[6][2] = 0x0010; ImageMatrix[6][3] = 0x0010; ImageMatrix[6][4] = 0x7C00; ImageMatrix[6][5] = 0x7C00;
        ImageMatrix[7][0] = 0x7C00; ImageMatrix[7][1] = 0x7C00; ImageMatrix[7][2] = 0x7C00; ImageMatrix[7][3] = 0x7C00; ImageMatrix[7][4] = 0x7C00; ImageMatrix[7][5] = 0x7C00;
        Pattern_ID_Frame_Time = 6;
    break;

    case 6:
        ImageMatrix[0][0] = 0x7FFF; ImageMatrix[0][1] = 0x7FFF; ImageMatrix[0][2] = 0x7FFF; ImageMatrix[0][3] = 0x7FFF; ImageMatrix[0][4] = 0x7FFF; ImageMatrix[0][5] = 0x7FFF;
        ImageMatrix[1][0] = 0x7FFF; ImageMatrix[1][1] = 0x7FFF; ImageMatrix[1][2] = 0x7FFF; ImageMatrix[1][3] = 0x7FFF; ImageMatrix[1][4] = 0x7C00; ImageMatrix[1][5] = 0x7C00;
        ImageMatrix[2][0] = 0x7C00; ImageMatrix[2][1] = 0x7C00; ImageMatrix[2][2] = 0x7C00; ImageMatrix[2][3] = 0x7C00; ImageMatrix[2][4] = 0x7C00; ImageMatrix[2][5] = 0x7C00;
        ImageMatrix[3][0] = 0x0010; ImageMatrix[3][1] = 0x0010; ImageMatrix[3][2] = 0x0010; ImageMatrix[3][3] = 0x0010; ImageMatrix[3][4] = 0x0010; ImageMatrix[3][5] = 0x0010;
        ImageMatrix[4][0] = 0x0010; ImageMatrix[4][1] = 0x0010; ImageMatrix[4][2] = 0x0010; ImageMatrix[4][3] = 0x0010; ImageMatrix[4][4] = 0x0010; ImageMatrix[4][5] = 0x0010;
        ImageMatrix[5][0] = 0x7C00; ImageMatrix[5][1] = 0x7C00; ImageMatrix[5][2] = 0x7C00; ImageMatrix[5][3] = 0x7C00; ImageMatrix[5][4] = 0x7C00; ImageMatrix[5][5] = 0x7C00;
        ImageMatrix[6][0] = 0x7C00; ImageMatrix[6][1] = 0x7C00; ImageMatrix[6][2] = 0x7C00; ImageMatrix[6][3] = 0x7C00; ImageMatrix[6][4] = 0x7FFF; ImageMatrix[6][5] = 0x7FFF;
        ImageMatrix[7][0] = 0x7FFF; ImageMatrix[7][1] = 0x7FFF; ImageMatrix[7][2] = 0x7FFF; ImageMatrix[7][3] = 0x7FFF; ImageMatrix[7][4] = 0x7FFF; ImageMatrix[7][5] = 0x7FFF;
        Pattern_ID_Frame_Time = 6;
    break;

    case 7:
        ImageMatrix[0][0] = 0x0000; ImageMatrix[0][5] = 0x0010;
        ImageMatrix[1][0] = 0x0010; ImageMatrix[1][1] = 0x0010; ImageMatrix[1][2] = 0x0010; ImageMatrix[1][3] = 0x0010; ImageMatrix[1][4] = 0x0010; ImageMatrix[1][5] = 0x7FFF;
        ImageMatrix[2][0] = 0x7FFF; ImageMatrix[2][1] = 0x7FFF; ImageMatrix[2][2] = 0x7FFF; ImageMatrix[2][3] = 0x7FFF; ImageMatrix[2][4] = 0x7FFF; ImageMatrix[2][5] = 0x7FFF;
        ImageMatrix[3][0] = 0x7C00; ImageMatrix[3][1] = 0x7C00; ImageMatrix[3][2] = 0x7C00; ImageMatrix[3][3] = 0x7C00;
        ImageMatrix[4][0] = 0x7FFF; ImageMatrix[4][1] = 0x7FFF; ImageMatrix[4][2] = 0x7FFF; ImageMatrix[4][3] = 0x7FFF; ImageMatrix[4][4] = 0x0010; ImageMatrix[4][5] = 0x0010;
        ImageMatrix[5][0] = 0x0010; ImageMatrix[5][1] = 0x0010; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
        ImageMatrix[6][4] = 0x7C00; ImageMatrix[6][5] = 0x7C00;
        ImageMatrix[7][0] = 0x7C00; ImageMatrix[7][1] = 0x7C00; ImageMatrix[7][2] = 0x7C00; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x7FFF; ImageMatrix[7][5] = 0x7FFF;
        Pattern_ID_Frame_Time = 3;
    break;

    case 8:
        ImageMatrix[0][0] = 0x7FFF; ImageMatrix[0][5] = 0x7FFF;
        ImageMatrix[1][0] = 0x7FFF; ImageMatrix[1][1] = 0x0010; ImageMatrix[1][2] = 0x0010;
        ImageMatrix[2][1] = 0x7FFF; ImageMatrix[2][2] = 0x7FFF; ImageMatrix[2][3] = 0x7FFF; ImageMatrix[2][4] = 0x7FFF;
        ImageMatrix[3][4] = 0x7C00; ImageMatrix[3][5] = 0x7C00;
        ImageMatrix[4][0] = 0x7FFF; ImageMatrix[4][1] = 0x7FFF; ImageMatrix[4][4] = 0x7FFF; ImageMatrix[4][5] = 0x7FFF;
        ImageMatrix[5][0] = 0x0010; ImageMatrix[5][1] = 0x0010;
        ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000;
        ImageMatrix[7][0] = 0x7C00; ImageMatrix[7][1] = 0x7C00; ImageMatrix[7][2] = 0x7C00; ImageMatrix[7][3] = 0x7C00;
        Pattern_ID_Frame_Time = 3;
    break;

    case 9:
        ImageMatrix[0][0] = 0x7C00; ImageMatrix[0][1] = 0x7C00; ImageMatrix[0][2] = 0x7C00; ImageMatrix[0][3] = 0x7C00; ImageMatrix[0][4] = 0x7C00;
        ImageMatrix[1][3] = 0x7FFF; ImageMatrix[1][4] = 0x7FFF; ImageMatrix[1][5] = 0x0010;
        ImageMatrix[2][0] = 0x0010; ImageMatrix[2][5] = 0x0010;
        ImageMatrix[3][0] = 0x7FFF; ImageMatrix[3][1] = 0x7FFF; ImageMatrix[3][2] = 0x7FFF; ImageMatrix[3][3] = 0x7FFF;
        ImageMatrix[4][2] = 0x7C00; ImageMatrix[4][3] = 0x7C00; ImageMatrix[4][4] = 0x7FFF;
        ImageMatrix[5][2] = 0x0014; ImageMatrix[5][3] = 0x0010; ImageMatrix[5][4] = 0x0010; ImageMatrix[5][5] = 0x0010;
        ImageMatrix[6][3] = 0x7FFF; ImageMatrix[6][4] = 0x7FFF; ImageMatrix[6][5] = 0x7FFF;
        ImageMatrix[7][0] = 0x7FFF; ImageMatrix[7][4] = 0x7C00; ImageMatrix[7][5] = 0x7C00;
        Pattern_ID_Frame_Time = 3;
    break;

    case 10:
        ImageMatrix[0][5] = 0x7C00;
        ImageMatrix[1][0] = 0x7C00; ImageMatrix[1][1] = 0x7FFF; ImageMatrix[1][2] = 0x7FFF;
        ImageMatrix[2][1] = 0x0010; ImageMatrix[2][2] = 0x0010; ImageMatrix[2][3] = 0x0010; ImageMatrix[2][4] = 0x0010;
        ImageMatrix[3][4] = 0x7FFF; ImageMatrix[3][5] = 0x7FFF;
        ImageMatrix[4][0] = 0x7FFF; ImageMatrix[4][1] = 0x7C00; ImageMatrix[4][5] = 0x7C00;
        ImageMatrix[5][0] = 0x7FFF; ImageMatrix[5][1] = 0x7FFF; ImageMatrix[5][2] = 0x7FFF;
        ImageMatrix[6][0] = 0x0014; ImageMatrix[6][1] = 0x0014; ImageMatrix[6][2] = 0x0014; ImageMatrix[6][3] = 0x0010;
        ImageMatrix[7][0] = 0x7FFF; ImageMatrix[7][1] = 0x7FFF; ImageMatrix[7][2] = 0x7FFF; ImageMatrix[7][3] = 0x7FFF; ImageMatrix[7][4] = 0x7FFF; ImageMatrix[7][5] = 0x7FFF;
        Pattern_ID_Frame_Time = 3;
    break;

    case 11:
        ImageMatrix[0][0] = 0x7FFF; ImageMatrix[0][1] = 0x7FFF; ImageMatrix[0][2] = 0x7FFF; ImageMatrix[0][3] = 0x7FFF; ImageMatrix[0][4] = 0x7FFF;
        ImageMatrix[1][3] = 0x7C00; ImageMatrix[1][4] = 0x7C00; ImageMatrix[1][5] = 0x7FFF;
        ImageMatrix[2][0] = 0x7FFF; ImageMatrix[2][5] = 0x7FFF;
        ImageMatrix[3][0] = 0x0010; ImageMatrix[3][1] = 0x0010; ImageMatrix[3][2] = 0x0010; ImageMatrix[3][3] = 0x0010;
        ImageMatrix[4][2] = 0x7FFF; ImageMatrix[4][3] = 0x7FFF; ImageMatrix[4][4] = 0x7FFF;
        ImageMatrix[5][3] = 0x7C00; ImageMatrix[5][4] = 0x7C00; ImageMatrix[5][5] = 0x7FFF;
        ImageMatrix[6][0] = 0x7FFF; ImageMatrix[6][1] = 0x7FFF; ImageMatrix[6][4] = 0x0010; ImageMatrix[6][5] = 0x0010;
        ImageMatrix[7][0] = 0x0010; ImageMatrix[7][1] = 0x0010; ImageMatrix[7][2] = 0x0010;
        Pattern_ID_Frame_Time = 3;
    break;

    case 12:
        ImageMatrix[0][0] = 0x0010; ImageMatrix[0][1] = 0x0010; ImageMatrix[0][2] = 0x0010; ImageMatrix[0][5] = 0x7FFF;
        ImageMatrix[1][0] = 0x7FFF; ImageMatrix[1][1] = 0x7FFF; ImageMatrix[1][2] = 0x7FFF; ImageMatrix[1][3] = 0x7FFF; ImageMatrix[1][4] = 0x7FFF; ImageMatrix[1][5] = 0x7C00;
        ImageMatrix[2][0] = 0x7C00; ImageMatrix[2][1] = 0x7C00; ImageMatrix[2][2] = 0x7C00; ImageMatrix[2][3] = 0x7C00; ImageMatrix[2][4] = 0x7FFF; ImageMatrix[2][5] = 0x7FFF;
        ImageMatrix[3][0] = 0x7FFF; ImageMatrix[3][1] = 0x7FFF; ImageMatrix[3][4] = 0x0010; ImageMatrix[3][5] = 0x0010;
        ImageMatrix[4][0] = 0x0010; ImageMatrix[4][1] = 0x0010; ImageMatrix[4][5] = 0x7FFF;
        ImageMatrix[5][0] = 0x7FFF; ImageMatrix[5][1] = 0x7FFF; ImageMatrix[5][2] = 0x7C00; ImageMatrix[5][3] = 0x7C00;
        ImageMatrix[6][2] = 0x7FFF; ImageMatrix[6][3] = 0x7FFF; ImageMatrix[6][4] = 0x7FFF; ImageMatrix[6][5] = 0x7FFF;
        ImageMatrix[7][3] = 0x0010; ImageMatrix[7][4] = 0x0010; ImageMatrix[7][5] = 0x0010;
        Pattern_ID_Frame_Time = 3;
    break;

    case 13:
        ImageMatrix[0][3] = 0x0010; ImageMatrix[0][4] = 0x0010; ImageMatrix[0][5] = 0x0010;
        ImageMatrix[1][0] = 0x7FFF; ImageMatrix[1][1] = 0x7FFF;
        ImageMatrix[2][1] = 0x7C00; ImageMatrix[2][2] = 0x7C00; ImageMatrix[2][3] = 0x7C00; ImageMatrix[2][4] = 0x7C00;
        ImageMatrix[3][2] = 0x7FFF; ImageMatrix[3][3] = 0x7FFF; ImageMatrix[3][4] = 0x7FFF; ImageMatrix[3][5] = 0x7FFF;
        ImageMatrix[4][2] = 0x0010; ImageMatrix[4][3] = 0x0010; ImageMatrix[4][4] = 0x0010; ImageMatrix[4][5] = 0x0010;
        ImageMatrix[5][0] = 0x7FFF; ImageMatrix[5][4] = 0x7FFF; ImageMatrix[5][5] = 0x7FFF;
        ImageMatrix[6][0] = 0x7C00; ImageMatrix[6][1] = 0x7C00;
        ImageMatrix[7][0] = 0x7FFF; ImageMatrix[7][1] = 0x7FFF; ImageMatrix[7][2] = 0x7FFF; ImageMatrix[7][3] = 0x7FFF; ImageMatrix[7][4] = 0x7FFF;
        Pattern_ID_Frame_Time = 3;
    break;

    case 14:
        ImageMatrix[0][0] = 0x7FFF; ImageMatrix[0][1] = 0x7FFF; ImageMatrix[0][2] = 0x7FFF; ImageMatrix[0][3] = 0x7FFF; ImageMatrix[0][4] = 0x7FFF;
        ImageMatrix[1][2] = 0x0010; ImageMatrix[1][3] = 0x0010; ImageMatrix[1][4] = 0x0010; ImageMatrix[1][5] = 0x7FFF;
        ImageMatrix[2][0] = 0x7FFF; ImageMatrix[2][5] = 0x7C00;
        ImageMatrix[3][0] = 0x7C00; ImageMatrix[3][1] = 0x7C00; ImageMatrix[3][2] = 0x7C00;
        ImageMatrix[4][0] = 0x7FFF; ImageMatrix[4][1] = 0x7FFF; ImageMatrix[4][2] = 0x7FFF; ImageMatrix[4][3] = 0x7FFF; ImageMatrix[4][4] = 0x0010;
        ImageMatrix[5][1] = 0x0010; ImageMatrix[5][2] = 0x0010; ImageMatrix[5][3] = 0x7FFF; ImageMatrix[5][4] = 0x7FFF; ImageMatrix[5][5] = 0x7FFF;
        ImageMatrix[6][2] = 0x7FFF; ImageMatrix[6][3] = 0x7C00; ImageMatrix[6][4] = 0x7C00; ImageMatrix[6][5] = 0x7C00;
        ImageMatrix[7][0] = 0x7C00; ImageMatrix[7][5] = 0x7FFF;
        Pattern_ID_Frame_Time = 3;
    break;

    default:
        Pattern_ID_Frame_Time = 1;
        Pattern_ID_Frame_Number = 0;
    break;
    }
}

// Pattern = COP
void Pattern_5_COP(void)
{
    switch (Pattern_ID_Frame_Number)
    {
    case 1:
        ImageMatrix[0][0] = 0x7C00; ImageMatrix[0][1] = 0x7C00; ImageMatrix[0][2] = 0x7C00; ImageMatrix[0][3] = 0x7C00; ImageMatrix[0][4] = 0x7C00; ImageMatrix[0][5] = 0x7C00;
        ImageMatrix[1][0] = 0x7C00; ImageMatrix[1][1] = 0x7C00; ImageMatrix[1][2] = 0x7C00; ImageMatrix[1][3] = 0x7C00; ImageMatrix[1][4] = 0x7C00; ImageMatrix[1][5] = 0x7C00;
        ImageMatrix[2][0] = 0x7C00; ImageMatrix[2][1] = 0x7C00; ImageMatrix[2][2] = 0x7C00; ImageMatrix[2][3] = 0x7C00; ImageMatrix[2][4] = 0x7C00; ImageMatrix[2][5] = 0x7C00;
        ImageMatrix[3][0] = 0x7C00; ImageMatrix[3][1] = 0x7C00; ImageMatrix[3][2] = 0x7C00; ImageMatrix[3][3] = 0x7C00; ImageMatrix[3][4] = 0x7C00; ImageMatrix[3][5] = 0x7C00;
        ImageMatrix[4][0] = 0x7C00; ImageMatrix[4][1] = 0x7C00; ImageMatrix[4][2] = 0x7C00; ImageMatrix[4][3] = 0x7C00; ImageMatrix[4][4] = 0x7C00; ImageMatrix[4][5] = 0x7C00;
        ImageMatrix[5][0] = 0x7C00; ImageMatrix[5][1] = 0x7C00; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
        ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
        ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
        Pattern_ID_Frame_Time = 5;
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
        Pattern_ID_Frame_Time = 2;
    break;

    case 3:
        ImageMatrix[0][0] = 0x7C00; ImageMatrix[0][1] = 0x7C00; ImageMatrix[0][2] = 0x7C00; ImageMatrix[0][3] = 0x7C00; ImageMatrix[0][4] = 0x7C00; ImageMatrix[0][5] = 0x7C00;
        ImageMatrix[1][0] = 0x7C00; ImageMatrix[1][1] = 0x7C00; ImageMatrix[1][2] = 0x7C00; ImageMatrix[1][3] = 0x7C00; ImageMatrix[1][4] = 0x7C00; ImageMatrix[1][5] = 0x7C00;
        ImageMatrix[2][0] = 0x7C00; ImageMatrix[2][1] = 0x7C00; ImageMatrix[2][2] = 0x7C00; ImageMatrix[2][3] = 0x7C00; ImageMatrix[2][4] = 0x7C00; ImageMatrix[2][5] = 0x7C00;
        ImageMatrix[3][0] = 0x7C00; ImageMatrix[3][1] = 0x7C00; ImageMatrix[3][2] = 0x7C00; ImageMatrix[3][3] = 0x7C00; ImageMatrix[3][4] = 0x7C00; ImageMatrix[3][5] = 0x7C00;
        ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
        ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
        ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
        ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 4:
        ImageMatrix[0][0] = 0x7FFF; ImageMatrix[0][1] = 0x7FFF; ImageMatrix[0][2] = 0x7FFF; ImageMatrix[0][3] = 0x7FFF; ImageMatrix[0][4] = 0x7FFF; ImageMatrix[0][5] = 0x7FFF;
        ImageMatrix[1][0] = 0x7FFF; ImageMatrix[1][1] = 0x7FFF; ImageMatrix[1][2] = 0x7FFF; ImageMatrix[1][3] = 0x7FFF; ImageMatrix[1][4] = 0x7FFF; ImageMatrix[1][5] = 0x7FFF;
        ImageMatrix[2][0] = 0x7FFF; ImageMatrix[2][1] = 0x7FFF; ImageMatrix[2][2] = 0x7FFF; ImageMatrix[2][3] = 0x7FFF; ImageMatrix[2][4] = 0x7FFF; ImageMatrix[2][5] = 0x7FFF;
        ImageMatrix[3][0] = 0x7FFF; ImageMatrix[3][1] = 0x7FFF; ImageMatrix[3][2] = 0x7FFF; ImageMatrix[3][3] = 0x7FFF; ImageMatrix[3][4] = 0x7FFF; ImageMatrix[3][5] = 0x7FFF;
        ImageMatrix[4][0] = 0x7FFF; ImageMatrix[4][1] = 0x7FFF; ImageMatrix[4][2] = 0x7FFF; ImageMatrix[4][3] = 0x7FFF; ImageMatrix[4][4] = 0x7FFF; ImageMatrix[4][5] = 0x7FFF;
        ImageMatrix[5][0] = 0x7FFF; ImageMatrix[5][1] = 0x7FFF; ImageMatrix[5][2] = 0x7FFF; ImageMatrix[5][3] = 0x7FFF; ImageMatrix[5][4] = 0x7FFF; ImageMatrix[5][5] = 0x7FFF;
        ImageMatrix[6][0] = 0x7FFF; ImageMatrix[6][1] = 0x7FFF; ImageMatrix[6][2] = 0x7FFF; ImageMatrix[6][3] = 0x7FFF; ImageMatrix[6][4] = 0x7FFF; ImageMatrix[6][5] = 0x7FFF;
        ImageMatrix[7][0] = 0x7FFF; ImageMatrix[7][1] = 0x7FFF; ImageMatrix[7][2] = 0x7FFF; ImageMatrix[7][3] = 0x7FFF; ImageMatrix[7][4] = 0x7FFF; ImageMatrix[7][5] = 0x7FFF;
        Pattern_ID_Frame_Time = 2;
    break;

    case 5:
        ImageMatrix[0][0] = 0x7C00; ImageMatrix[0][1] = 0x7C00; ImageMatrix[0][2] = 0x7C00; ImageMatrix[0][3] = 0x7C00; ImageMatrix[0][4] = 0x7C00; ImageMatrix[0][5] = 0x7C00;
        ImageMatrix[1][0] = 0x7C00; ImageMatrix[1][1] = 0x7C00; ImageMatrix[1][2] = 0x7C00; ImageMatrix[1][3] = 0x7C00; ImageMatrix[1][4] = 0x7C00; ImageMatrix[1][5] = 0x7C00;
        ImageMatrix[2][0] = 0x7C00; ImageMatrix[2][1] = 0x7C00; ImageMatrix[2][2] = 0x7C00; ImageMatrix[2][3] = 0x7C00; ImageMatrix[2][4] = 0x7C00; ImageMatrix[2][5] = 0x7C00;
        ImageMatrix[3][0] = 0x7C00; ImageMatrix[3][1] = 0x7C00; ImageMatrix[3][2] = 0x7C00; ImageMatrix[3][3] = 0x7C00; ImageMatrix[3][4] = 0x7C00; ImageMatrix[3][5] = 0x7C00;
        ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
        ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
        ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
        ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 6:
        ImageMatrix[0][0] = 0x0000; ImageMatrix[0][1] = 0x0000; ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
        ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
        ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
        ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
        ImageMatrix[4][0] = 0x001F; ImageMatrix[4][1] = 0x001F; ImageMatrix[4][2] = 0x001F; ImageMatrix[4][3] = 0x001F; ImageMatrix[4][4] = 0x001F; ImageMatrix[4][5] = 0x001F;
        ImageMatrix[5][0] = 0x001F; ImageMatrix[5][1] = 0x001F; ImageMatrix[5][2] = 0x001F; ImageMatrix[5][3] = 0x001F; ImageMatrix[5][4] = 0x001F; ImageMatrix[5][5] = 0x001F;
        ImageMatrix[6][0] = 0x001F; ImageMatrix[6][1] = 0x001F; ImageMatrix[6][2] = 0x001F; ImageMatrix[6][3] = 0x001F; ImageMatrix[6][4] = 0x001F; ImageMatrix[6][5] = 0x001F;
        ImageMatrix[7][0] = 0x001F; ImageMatrix[7][1] = 0x001F; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 7:
        ImageMatrix[0][0] = 0x7FFF; ImageMatrix[0][1] = 0x7FFF; ImageMatrix[0][2] = 0x7FFF; ImageMatrix[0][3] = 0x7FFF; ImageMatrix[0][4] = 0x7FFF; ImageMatrix[0][5] = 0x7FFF;
        ImageMatrix[1][0] = 0x7FFF; ImageMatrix[1][1] = 0x7FFF; ImageMatrix[1][2] = 0x7FFF; ImageMatrix[1][3] = 0x7FFF; ImageMatrix[1][4] = 0x7FFF; ImageMatrix[1][5] = 0x7FFF;
        ImageMatrix[2][0] = 0x7FFF; ImageMatrix[2][1] = 0x7FFF; ImageMatrix[2][2] = 0x7FFF; ImageMatrix[2][3] = 0x7FFF; ImageMatrix[2][4] = 0x7FFF; ImageMatrix[2][5] = 0x7FFF;
        ImageMatrix[3][0] = 0x7FFF; ImageMatrix[3][1] = 0x7FFF; ImageMatrix[3][2] = 0x7FFF; ImageMatrix[3][3] = 0x7FFF; ImageMatrix[3][4] = 0x7FFF; ImageMatrix[3][5] = 0x7FFF;
        ImageMatrix[4][0] = 0x7FFF; ImageMatrix[4][1] = 0x7FFF; ImageMatrix[4][2] = 0x7FFF; ImageMatrix[4][3] = 0x7FFF; ImageMatrix[4][4] = 0x7FFF; ImageMatrix[4][5] = 0x7FFF;
        ImageMatrix[5][0] = 0x7FFF; ImageMatrix[5][1] = 0x7FFF; ImageMatrix[5][2] = 0x7FFF; ImageMatrix[5][3] = 0x7FFF; ImageMatrix[5][4] = 0x7FFF; ImageMatrix[5][5] = 0x7FFF;
        ImageMatrix[6][0] = 0x7FFF; ImageMatrix[6][1] = 0x7FFF; ImageMatrix[6][2] = 0x7FFF; ImageMatrix[6][3] = 0x7FFF; ImageMatrix[6][4] = 0x7FFF; ImageMatrix[6][5] = 0x7FFF;
        ImageMatrix[7][0] = 0x7FFF; ImageMatrix[7][1] = 0x7FFF; ImageMatrix[7][2] = 0x7FFF; ImageMatrix[7][3] = 0x7FFF; ImageMatrix[7][4] = 0x7FFF; ImageMatrix[7][5] = 0x7FFF;
        Pattern_ID_Frame_Time = 2;
    break;

    case 8:
        ImageMatrix[0][0] = 0x0000; ImageMatrix[0][1] = 0x0000; ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
        ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
        ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
        ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
        ImageMatrix[4][0] = 0x001F; ImageMatrix[4][1] = 0x001F; ImageMatrix[4][2] = 0x001F; ImageMatrix[4][3] = 0x001F; ImageMatrix[4][4] = 0x001F; ImageMatrix[4][5] = 0x001F;
        ImageMatrix[5][0] = 0x001F; ImageMatrix[5][1] = 0x001F; ImageMatrix[5][2] = 0x001F; ImageMatrix[5][3] = 0x001F; ImageMatrix[5][4] = 0x001F; ImageMatrix[5][5] = 0x001F;
        ImageMatrix[6][0] = 0x001F; ImageMatrix[6][1] = 0x001F; ImageMatrix[6][2] = 0x001F; ImageMatrix[6][3] = 0x001F; ImageMatrix[6][4] = 0x001F; ImageMatrix[6][5] = 0x001F;
        ImageMatrix[7][0] = 0x001F; ImageMatrix[7][1] = 0x001F; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 9:
        ImageMatrix[0][0] = 0x7FFF; ImageMatrix[0][1] = 0x7FFF; ImageMatrix[0][2] = 0x7FFF; ImageMatrix[0][3] = 0x7FFF; ImageMatrix[0][4] = 0x7FFF; ImageMatrix[0][5] = 0x7FFF;
        ImageMatrix[1][0] = 0x7FFF; ImageMatrix[1][1] = 0x7FFF; ImageMatrix[1][2] = 0x7FFF; ImageMatrix[1][3] = 0x7FFF; ImageMatrix[1][4] = 0x7FFF; ImageMatrix[1][5] = 0x7FFF;
        ImageMatrix[2][0] = 0x7FFF; ImageMatrix[2][1] = 0x7FFF; ImageMatrix[2][2] = 0x7FFF; ImageMatrix[2][3] = 0x7FFF; ImageMatrix[2][4] = 0x7FFF; ImageMatrix[2][5] = 0x7FFF;
        ImageMatrix[3][0] = 0x7FFF; ImageMatrix[3][1] = 0x7FFF; ImageMatrix[3][2] = 0x7FFF; ImageMatrix[3][3] = 0x7FFF; ImageMatrix[3][4] = 0x7FFF; ImageMatrix[3][5] = 0x7FFF;
        ImageMatrix[4][0] = 0x7FFF; ImageMatrix[4][1] = 0x7FFF; ImageMatrix[4][2] = 0x7FFF; ImageMatrix[4][3] = 0x7FFF; ImageMatrix[4][4] = 0x7FFF; ImageMatrix[4][5] = 0x7FFF;
        ImageMatrix[5][0] = 0x7FFF; ImageMatrix[5][1] = 0x7FFF; ImageMatrix[5][2] = 0x7FFF; ImageMatrix[5][3] = 0x7FFF; ImageMatrix[5][4] = 0x7FFF; ImageMatrix[5][5] = 0x7FFF;
        ImageMatrix[6][0] = 0x7FFF; ImageMatrix[6][1] = 0x7FFF; ImageMatrix[6][2] = 0x7FFF; ImageMatrix[6][3] = 0x7FFF; ImageMatrix[6][4] = 0x7FFF; ImageMatrix[6][5] = 0x7FFF;
        ImageMatrix[7][0] = 0x7FFF; ImageMatrix[7][1] = 0x7FFF; ImageMatrix[7][2] = 0x7FFF; ImageMatrix[7][3] = 0x7FFF; ImageMatrix[7][4] = 0x7FFF; ImageMatrix[7][5] = 0x7FFF;
        Pattern_ID_Frame_Time = 2;
    break;

    case 10:
        ImageMatrix[0][0] = 0x0000; ImageMatrix[0][1] = 0x0000; ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
        ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
        ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
        ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
        ImageMatrix[4][0] = 0x001F; ImageMatrix[4][1] = 0x001F; ImageMatrix[4][2] = 0x001F; ImageMatrix[4][3] = 0x001F; ImageMatrix[4][4] = 0x001F; ImageMatrix[4][5] = 0x001F;
        ImageMatrix[5][0] = 0x001F; ImageMatrix[5][1] = 0x001F; ImageMatrix[5][2] = 0x001F; ImageMatrix[5][3] = 0x001F; ImageMatrix[5][4] = 0x001F; ImageMatrix[5][5] = 0x001F;
        ImageMatrix[6][0] = 0x001F; ImageMatrix[6][1] = 0x001F; ImageMatrix[6][2] = 0x001F; ImageMatrix[6][3] = 0x001F; ImageMatrix[6][4] = 0x001F; ImageMatrix[6][5] = 0x001F;
        ImageMatrix[7][0] = 0x001F; ImageMatrix[7][1] = 0x001F; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 11:
        ImageMatrix[0][0] = 0x7FFF; ImageMatrix[0][1] = 0x7FFF; ImageMatrix[0][2] = 0x7FFF; ImageMatrix[0][3] = 0x7FFF; ImageMatrix[0][4] = 0x7FFF; ImageMatrix[0][5] = 0x7FFF;
        ImageMatrix[1][0] = 0x7FFF; ImageMatrix[1][1] = 0x7FFF; ImageMatrix[1][2] = 0x7FFF; ImageMatrix[1][3] = 0x7FFF; ImageMatrix[1][4] = 0x7FFF; ImageMatrix[1][5] = 0x7FFF;
        ImageMatrix[2][0] = 0x7FFF; ImageMatrix[2][1] = 0x7FFF; ImageMatrix[2][2] = 0x7FFF; ImageMatrix[2][3] = 0x7FFF; ImageMatrix[2][4] = 0x7FFF; ImageMatrix[2][5] = 0x7FFF;
        ImageMatrix[3][0] = 0x7FFF; ImageMatrix[3][1] = 0x7FFF; ImageMatrix[3][2] = 0x7FFF; ImageMatrix[3][3] = 0x7FFF; ImageMatrix[3][4] = 0x7FFF; ImageMatrix[3][5] = 0x7FFF;
        ImageMatrix[4][0] = 0x7FFF; ImageMatrix[4][1] = 0x7FFF; ImageMatrix[4][2] = 0x7FFF; ImageMatrix[4][3] = 0x7FFF; ImageMatrix[4][4] = 0x7FFF; ImageMatrix[4][5] = 0x7FFF;
        ImageMatrix[5][0] = 0x7FFF; ImageMatrix[5][1] = 0x7FFF; ImageMatrix[5][2] = 0x7FFF; ImageMatrix[5][3] = 0x7FFF; ImageMatrix[5][4] = 0x7FFF; ImageMatrix[5][5] = 0x7FFF;
        ImageMatrix[6][0] = 0x7FFF; ImageMatrix[6][1] = 0x7FFF; ImageMatrix[6][2] = 0x7FFF; ImageMatrix[6][3] = 0x7FFF; ImageMatrix[6][4] = 0x7FFF; ImageMatrix[6][5] = 0x7FFF;
        ImageMatrix[7][0] = 0x7FFF; ImageMatrix[7][1] = 0x7FFF; ImageMatrix[7][2] = 0x7FFF; ImageMatrix[7][3] = 0x7FFF; ImageMatrix[7][4] = 0x7FFF; ImageMatrix[7][5] = 0x7FFF;
        Pattern_ID_Frame_Time = 2;
    break;

    case 12:
        ImageMatrix[0][0] = 0x7C00; ImageMatrix[0][1] = 0x7C00; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x001F; ImageMatrix[0][5] = 0x001F;
        ImageMatrix[1][0] = 0x7C00; ImageMatrix[1][1] = 0x7C00; ImageMatrix[1][2] = 0x001F; ImageMatrix[1][3] = 0x001F; ImageMatrix[1][4] = 0x001F; ImageMatrix[1][5] = 0x001F;
        ImageMatrix[2][0] = 0x7C00; ImageMatrix[2][1] = 0x7C00; ImageMatrix[2][2] = 0x001F; ImageMatrix[2][3] = 0x001F; ImageMatrix[2][4] = 0x001F; ImageMatrix[2][5] = 0x001F;
        ImageMatrix[3][0] = 0x7C00; ImageMatrix[3][1] = 0x7C00; ImageMatrix[3][2] = 0x001F; ImageMatrix[3][3] = 0x001F; ImageMatrix[3][4] = 0x001F; ImageMatrix[3][5] = 0x001F;
        ImageMatrix[4][0] = 0x7C00; ImageMatrix[4][1] = 0x7C00; ImageMatrix[4][2] = 0x001F; ImageMatrix[4][3] = 0x001F; ImageMatrix[4][4] = 0x001F; ImageMatrix[4][5] = 0x001F;
        ImageMatrix[5][0] = 0x7C00; ImageMatrix[5][1] = 0x7C00; ImageMatrix[5][2] = 0x001F; ImageMatrix[5][3] = 0x001F; ImageMatrix[5][4] = 0x001F; ImageMatrix[5][5] = 0x001F;
        ImageMatrix[6][0] = 0x7C00; ImageMatrix[6][1] = 0x7C00; ImageMatrix[6][2] = 0x001F; ImageMatrix[6][3] = 0x001F; ImageMatrix[6][4] = 0x001F; ImageMatrix[6][5] = 0x001F;
        ImageMatrix[7][0] = 0x7C00; ImageMatrix[7][1] = 0x7C00; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
        Pattern_ID_Frame_Time = 3;
    break;

    case 13:
        ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x7C00; ImageMatrix[0][3] = 0x7C00; ImageMatrix[0][4] = 0x7C00; ImageMatrix[0][5] = 0x7C00;
        ImageMatrix[1][0] = 0x001F; ImageMatrix[1][1] = 0x001F; ImageMatrix[1][2] = 0x7C00; ImageMatrix[1][3] = 0x7C00; ImageMatrix[1][4] = 0x7C00; ImageMatrix[1][5] = 0x7C00;
        ImageMatrix[2][0] = 0x001F; ImageMatrix[2][1] = 0x001F; ImageMatrix[2][2] = 0x7C00; ImageMatrix[2][3] = 0x7C00; ImageMatrix[2][4] = 0x7C00; ImageMatrix[2][5] = 0x7C00;
        ImageMatrix[3][0] = 0x001F; ImageMatrix[3][1] = 0x001F; ImageMatrix[3][2] = 0x7C00; ImageMatrix[3][3] = 0x7C00; ImageMatrix[3][4] = 0x7C00; ImageMatrix[3][5] = 0x7C00;
        ImageMatrix[4][0] = 0x001F; ImageMatrix[4][1] = 0x001F; ImageMatrix[4][2] = 0x7C00; ImageMatrix[4][3] = 0x7C00; ImageMatrix[4][4] = 0x7C00; ImageMatrix[4][5] = 0x7C00;
        ImageMatrix[5][0] = 0x001F; ImageMatrix[5][1] = 0x001F; ImageMatrix[5][2] = 0x7C00; ImageMatrix[5][3] = 0x7C00; ImageMatrix[5][4] = 0x7C00; ImageMatrix[5][5] = 0x7C00;
        ImageMatrix[6][0] = 0x001F; ImageMatrix[6][1] = 0x001F; ImageMatrix[6][2] = 0x7C00; ImageMatrix[6][3] = 0x7C00; ImageMatrix[6][4] = 0x7C00; ImageMatrix[6][5] = 0x7C00;
        ImageMatrix[7][0] = 0x001F; ImageMatrix[7][1] = 0x001F; ImageMatrix[7][2] = 0x7C00; ImageMatrix[7][3] = 0x7C00; ImageMatrix[7][4] = 0x7C00; ImageMatrix[7][5] = 0x7C00;
        Pattern_ID_Frame_Time = 3;
    break;

    case 14:
        ImageMatrix[0][0] = 0x7C00; ImageMatrix[0][1] = 0x7C00; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x001F; ImageMatrix[0][5] = 0x001F;
        ImageMatrix[1][0] = 0x7C00; ImageMatrix[1][1] = 0x7C00; ImageMatrix[1][2] = 0x001F; ImageMatrix[1][3] = 0x001F; ImageMatrix[1][4] = 0x001F; ImageMatrix[1][5] = 0x001F;
        ImageMatrix[2][0] = 0x7C00; ImageMatrix[2][1] = 0x7C00; ImageMatrix[2][2] = 0x001F; ImageMatrix[2][3] = 0x001F; ImageMatrix[2][4] = 0x001F; ImageMatrix[2][5] = 0x001F;
        ImageMatrix[3][0] = 0x7C00; ImageMatrix[3][1] = 0x7C00; ImageMatrix[3][2] = 0x001F; ImageMatrix[3][3] = 0x001F; ImageMatrix[3][4] = 0x001F; ImageMatrix[3][5] = 0x001F;
        ImageMatrix[4][0] = 0x7C00; ImageMatrix[4][1] = 0x7C00; ImageMatrix[4][2] = 0x001F; ImageMatrix[4][3] = 0x001F; ImageMatrix[4][4] = 0x001F; ImageMatrix[4][5] = 0x001F;
        ImageMatrix[5][0] = 0x7C00; ImageMatrix[5][1] = 0x7C00; ImageMatrix[5][2] = 0x001F; ImageMatrix[5][3] = 0x001F; ImageMatrix[5][4] = 0x001F; ImageMatrix[5][5] = 0x001F;
        ImageMatrix[6][0] = 0x7C00; ImageMatrix[6][1] = 0x7C00; ImageMatrix[6][2] = 0x001F; ImageMatrix[6][3] = 0x001F; ImageMatrix[6][4] = 0x001F; ImageMatrix[6][5] = 0x001F;
        ImageMatrix[7][0] = 0x7C00; ImageMatrix[7][1] = 0x7C00; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
        Pattern_ID_Frame_Time = 3;
    break;

    case 15:
        ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x7C00; ImageMatrix[0][3] = 0x7C00; ImageMatrix[0][4] = 0x7C00; ImageMatrix[0][5] = 0x7C00;
        ImageMatrix[1][0] = 0x001F; ImageMatrix[1][1] = 0x001F; ImageMatrix[1][2] = 0x7C00; ImageMatrix[1][3] = 0x7C00; ImageMatrix[1][4] = 0x7C00; ImageMatrix[1][5] = 0x7C00;
        ImageMatrix[2][0] = 0x001F; ImageMatrix[2][1] = 0x001F; ImageMatrix[2][2] = 0x7C00; ImageMatrix[2][3] = 0x7C00; ImageMatrix[2][4] = 0x7C00; ImageMatrix[2][5] = 0x7C00;
        ImageMatrix[3][0] = 0x001F; ImageMatrix[3][1] = 0x001F; ImageMatrix[3][2] = 0x7C00; ImageMatrix[3][3] = 0x7C00; ImageMatrix[3][4] = 0x7C00; ImageMatrix[3][5] = 0x7C00;
        ImageMatrix[4][0] = 0x001F; ImageMatrix[4][1] = 0x001F; ImageMatrix[4][2] = 0x7C00; ImageMatrix[4][3] = 0x7C00; ImageMatrix[4][4] = 0x7C00; ImageMatrix[4][5] = 0x7C00;
        ImageMatrix[5][0] = 0x001F; ImageMatrix[5][1] = 0x001F; ImageMatrix[5][2] = 0x7C00; ImageMatrix[5][3] = 0x7C00; ImageMatrix[5][4] = 0x7C00; ImageMatrix[5][5] = 0x7C00;
        ImageMatrix[6][0] = 0x001F; ImageMatrix[6][1] = 0x001F; ImageMatrix[6][2] = 0x7C00; ImageMatrix[6][3] = 0x7C00; ImageMatrix[6][4] = 0x7C00; ImageMatrix[6][5] = 0x7C00;
        ImageMatrix[7][0] = 0x001F; ImageMatrix[7][1] = 0x001F; ImageMatrix[7][2] = 0x7C00; ImageMatrix[7][3] = 0x7C00; ImageMatrix[7][4] = 0x7C00; ImageMatrix[7][5] = 0x7C00;
        Pattern_ID_Frame_Time = 3;
    break;

    case 16:
        ImageMatrix[0][0] = 0x7C00; ImageMatrix[0][1] = 0x7C00; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x001F; ImageMatrix[0][5] = 0x001F;
        ImageMatrix[1][0] = 0x7C00; ImageMatrix[1][1] = 0x7C00; ImageMatrix[1][2] = 0x001F; ImageMatrix[1][3] = 0x001F; ImageMatrix[1][4] = 0x001F; ImageMatrix[1][5] = 0x001F;
        ImageMatrix[2][0] = 0x7C00; ImageMatrix[2][1] = 0x7C00; ImageMatrix[2][2] = 0x001F; ImageMatrix[2][3] = 0x001F; ImageMatrix[2][4] = 0x001F; ImageMatrix[2][5] = 0x001F;
        ImageMatrix[3][0] = 0x7C00; ImageMatrix[3][1] = 0x7C00; ImageMatrix[3][2] = 0x001F; ImageMatrix[3][3] = 0x001F; ImageMatrix[3][4] = 0x001F; ImageMatrix[3][5] = 0x001F;
        ImageMatrix[4][0] = 0x7C00; ImageMatrix[4][1] = 0x7C00; ImageMatrix[4][2] = 0x001F; ImageMatrix[4][3] = 0x001F; ImageMatrix[4][4] = 0x001F; ImageMatrix[4][5] = 0x001F;
        ImageMatrix[5][0] = 0x7C00; ImageMatrix[5][1] = 0x7C00; ImageMatrix[5][2] = 0x001F; ImageMatrix[5][3] = 0x001F; ImageMatrix[5][4] = 0x001F; ImageMatrix[5][5] = 0x001F;
        ImageMatrix[6][0] = 0x7C00; ImageMatrix[6][1] = 0x7C00; ImageMatrix[6][2] = 0x001F; ImageMatrix[6][3] = 0x001F; ImageMatrix[6][4] = 0x001F; ImageMatrix[6][5] = 0x001F;
        ImageMatrix[7][0] = 0x7C00; ImageMatrix[7][1] = 0x7C00; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
        Pattern_ID_Frame_Time = 3;
    break;

    case 17:
        ImageMatrix[0][0] = 0x7FFF; ImageMatrix[0][1] = 0x7FFF; ImageMatrix[0][2] = 0x7FFF; ImageMatrix[0][3] = 0x7FFF; ImageMatrix[0][4] = 0x7FFF; ImageMatrix[0][5] = 0x7FFF;
        ImageMatrix[1][0] = 0x7FFF; ImageMatrix[1][1] = 0x7FFF; ImageMatrix[1][2] = 0x7FFF; ImageMatrix[1][3] = 0x7FFF; ImageMatrix[1][4] = 0x7FFF; ImageMatrix[1][5] = 0x7FFF;
        ImageMatrix[2][0] = 0x7FFF; ImageMatrix[2][1] = 0x7FFF; ImageMatrix[2][2] = 0x7FFF; ImageMatrix[2][3] = 0x7FFF; ImageMatrix[2][4] = 0x7FFF; ImageMatrix[2][5] = 0x7FFF;
        ImageMatrix[3][0] = 0x7FFF; ImageMatrix[3][1] = 0x7FFF; ImageMatrix[3][2] = 0x7FFF; ImageMatrix[3][3] = 0x7FFF; ImageMatrix[3][4] = 0x7FFF; ImageMatrix[3][5] = 0x7FFF;
        ImageMatrix[4][0] = 0x7FFF; ImageMatrix[4][1] = 0x7FFF; ImageMatrix[4][2] = 0x7FFF; ImageMatrix[4][3] = 0x7FFF; ImageMatrix[4][4] = 0x7FFF; ImageMatrix[4][5] = 0x7FFF;
        ImageMatrix[5][0] = 0x7FFF; ImageMatrix[5][1] = 0x7FFF; ImageMatrix[5][2] = 0x7FFF; ImageMatrix[5][3] = 0x7FFF; ImageMatrix[5][4] = 0x7FFF; ImageMatrix[5][5] = 0x7FFF;
        ImageMatrix[6][0] = 0x7FFF; ImageMatrix[6][1] = 0x7FFF; ImageMatrix[6][2] = 0x7FFF; ImageMatrix[6][3] = 0x7FFF; ImageMatrix[6][4] = 0x7FFF; ImageMatrix[6][5] = 0x7FFF;
        ImageMatrix[7][0] = 0x7FFF; ImageMatrix[7][1] = 0x7FFF; ImageMatrix[7][2] = 0x7FFF; ImageMatrix[7][3] = 0x7FFF; ImageMatrix[7][4] = 0x7FFF; ImageMatrix[7][5] = 0x7FFF;
        Pattern_ID_Frame_Time = 10;
    break;

    case 18:
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

    case 19:
        ImageMatrix[0][0] = 0x7FFF; ImageMatrix[0][1] = 0x7FFF; ImageMatrix[0][2] = 0x7FFF; ImageMatrix[0][3] = 0x7FFF; ImageMatrix[0][4] = 0x7FFF; ImageMatrix[0][5] = 0x7FFF;
        ImageMatrix[1][0] = 0x7FFF; ImageMatrix[1][1] = 0x7FFF; ImageMatrix[1][2] = 0x7FFF; ImageMatrix[1][3] = 0x7FFF; ImageMatrix[1][4] = 0x7FFF; ImageMatrix[1][5] = 0x7FFF;
        ImageMatrix[2][0] = 0x7FFF; ImageMatrix[2][1] = 0x7FFF; ImageMatrix[2][2] = 0x7FFF; ImageMatrix[2][3] = 0x7FFF; ImageMatrix[2][4] = 0x7FFF; ImageMatrix[2][5] = 0x7FFF;
        ImageMatrix[3][0] = 0x7FFF; ImageMatrix[3][1] = 0x7FFF; ImageMatrix[3][2] = 0x7FFF; ImageMatrix[3][3] = 0x7FFF; ImageMatrix[3][4] = 0x7FFF; ImageMatrix[3][5] = 0x7FFF;
        ImageMatrix[4][0] = 0x7FFF; ImageMatrix[4][1] = 0x7FFF; ImageMatrix[4][2] = 0x7FFF; ImageMatrix[4][3] = 0x7FFF; ImageMatrix[4][4] = 0x7FFF; ImageMatrix[4][5] = 0x7FFF;
        ImageMatrix[5][0] = 0x7FFF; ImageMatrix[5][1] = 0x7FFF; ImageMatrix[5][2] = 0x7FFF; ImageMatrix[5][3] = 0x7FFF; ImageMatrix[5][4] = 0x7FFF; ImageMatrix[5][5] = 0x7FFF;
        ImageMatrix[6][0] = 0x7FFF; ImageMatrix[6][1] = 0x7FFF; ImageMatrix[6][2] = 0x7FFF; ImageMatrix[6][3] = 0x7FFF; ImageMatrix[6][4] = 0x7FFF; ImageMatrix[6][5] = 0x7FFF;
        ImageMatrix[7][0] = 0x7FFF; ImageMatrix[7][1] = 0x7FFF; ImageMatrix[7][2] = 0x7FFF; ImageMatrix[7][3] = 0x7FFF; ImageMatrix[7][4] = 0x7FFF; ImageMatrix[7][5] = 0x7FFF;
        Pattern_ID_Frame_Time = 10;
    break;

    case 20:
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

    case 21:
        ImageMatrix[0][0] = 0x7FFF; ImageMatrix[0][1] = 0x7FFF; ImageMatrix[0][2] = 0x7FFF; ImageMatrix[0][3] = 0x7FFF; ImageMatrix[0][4] = 0x7FFF; ImageMatrix[0][5] = 0x7FFF;
        ImageMatrix[1][0] = 0x7FFF; ImageMatrix[1][1] = 0x7FFF; ImageMatrix[1][2] = 0x7FFF; ImageMatrix[1][3] = 0x7FFF; ImageMatrix[1][4] = 0x7FFF; ImageMatrix[1][5] = 0x7FFF;
        ImageMatrix[2][0] = 0x7FFF; ImageMatrix[2][1] = 0x7FFF; ImageMatrix[2][2] = 0x7FFF; ImageMatrix[2][3] = 0x7FFF; ImageMatrix[2][4] = 0x7FFF; ImageMatrix[2][5] = 0x7FFF;
        ImageMatrix[3][0] = 0x7FFF; ImageMatrix[3][1] = 0x7FFF; ImageMatrix[3][2] = 0x7FFF; ImageMatrix[3][3] = 0x7FFF; ImageMatrix[3][4] = 0x7FFF; ImageMatrix[3][5] = 0x7FFF;
        ImageMatrix[4][0] = 0x7FFF; ImageMatrix[4][1] = 0x7FFF; ImageMatrix[4][2] = 0x7FFF; ImageMatrix[4][3] = 0x7FFF; ImageMatrix[4][4] = 0x7FFF; ImageMatrix[4][5] = 0x7FFF;
        ImageMatrix[5][0] = 0x7FFF; ImageMatrix[5][1] = 0x7FFF; ImageMatrix[5][2] = 0x7FFF; ImageMatrix[5][3] = 0x7FFF; ImageMatrix[5][4] = 0x7FFF; ImageMatrix[5][5] = 0x7FFF;
        ImageMatrix[6][0] = 0x7FFF; ImageMatrix[6][1] = 0x7FFF; ImageMatrix[6][2] = 0x7FFF; ImageMatrix[6][3] = 0x7FFF; ImageMatrix[6][4] = 0x7FFF; ImageMatrix[6][5] = 0x7FFF;
        ImageMatrix[7][0] = 0x7FFF; ImageMatrix[7][1] = 0x7FFF; ImageMatrix[7][2] = 0x7FFF; ImageMatrix[7][3] = 0x7FFF; ImageMatrix[7][4] = 0x7FFF; ImageMatrix[7][5] = 0x7FFF;
        Pattern_ID_Frame_Time = 2;
    break;

    case 22:
        ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x001F; ImageMatrix[0][5] = 0x001F;
        ImageMatrix[3][0] = 0x7C00; ImageMatrix[3][1] = 0x7C00; ImageMatrix[3][2] = 0x7C00; ImageMatrix[3][3] = 0x7C00; ImageMatrix[3][4] = 0x7C00; ImageMatrix[3][5] = 0x7C00;
        ImageMatrix[4][0] = 0x001F; ImageMatrix[4][1] = 0x001F; ImageMatrix[4][2] = 0x001F; ImageMatrix[4][3] = 0x001F; ImageMatrix[4][4] = 0x001F; ImageMatrix[4][5] = 0x001F;
        ImageMatrix[5][0] = 0x001F; ImageMatrix[5][1] = 0x001F; ImageMatrix[5][2] = 0x001F; ImageMatrix[5][3] = 0x001F; ImageMatrix[5][4] = 0x001F; ImageMatrix[5][5] = 0x001F;
        ImageMatrix[6][0] = 0x7FFF; ImageMatrix[6][1] = 0x7FFF; ImageMatrix[6][2] = 0x7FFF; ImageMatrix[6][3] = 0x7FFF; ImageMatrix[6][4] = 0x7FFF; ImageMatrix[6][5] = 0x7FFF;
        ImageMatrix[7][0] = 0x7FFF; ImageMatrix[7][1] = 0x7FFF; ImageMatrix[7][2] = 0x7C00; ImageMatrix[7][3] = 0x7C00;
        Pattern_ID_Frame_Time = 3;
    break;

    case 23:
        ImageMatrix[0][0] = 0x7C00; ImageMatrix[0][1] = 0x7C00; ImageMatrix[0][2] = 0x7C00; ImageMatrix[0][3] = 0x7C00; ImageMatrix[0][4] = 0x7C00; ImageMatrix[0][5] = 0x7C00;
        ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
        ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x001F; ImageMatrix[2][3] = 0x001F; ImageMatrix[2][4] = 0x001F; ImageMatrix[2][5] = 0x001F;
        ImageMatrix[3][0] = 0x001F; ImageMatrix[3][1] = 0x001F; ImageMatrix[3][2] = 0x001F; ImageMatrix[3][3] = 0x001F; ImageMatrix[3][4] = 0x001F; ImageMatrix[3][5] = 0x001F;
        ImageMatrix[4][0] = 0x7C00; ImageMatrix[4][1] = 0x7C00; ImageMatrix[4][2] = 0x7C00; ImageMatrix[4][3] = 0x7C00; ImageMatrix[4][4] = 0x7C00; ImageMatrix[4][5] = 0x7C00;
        ImageMatrix[5][0] = 0x7C00; ImageMatrix[5][1] = 0x7C00; ImageMatrix[5][2] = 0x7C00; ImageMatrix[5][3] = 0x7C00; ImageMatrix[5][4] = 0x7C00; ImageMatrix[5][5] = 0x7C00;
        ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
        ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
        Pattern_ID_Frame_Time = 3;
    break;

    case 24:
        ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x001F; ImageMatrix[0][5] = 0x001F;
        ImageMatrix[1][0] = 0x7FFF; ImageMatrix[1][1] = 0x7FFF; ImageMatrix[1][2] = 0x7FFF; ImageMatrix[1][3] = 0x7FFF; ImageMatrix[1][4] = 0x7FFF; ImageMatrix[1][5] = 0x7FFF;
        ImageMatrix[2][0] = 0x7FFF; ImageMatrix[2][1] = 0x7FFF; ImageMatrix[2][2] = 0x7C00; ImageMatrix[2][3] = 0x7C00; ImageMatrix[2][4] = 0x7C00; ImageMatrix[2][5] = 0x7C00;
        ImageMatrix[3][0] = 0x7C00; ImageMatrix[3][1] = 0x7C00; ImageMatrix[3][2] = 0x7C00; ImageMatrix[3][3] = 0x7C00; ImageMatrix[3][4] = 0x7C00; ImageMatrix[3][5] = 0x7C00;
        ImageMatrix[4][0] = 0x001F; ImageMatrix[4][1] = 0x001F; ImageMatrix[4][2] = 0x001F; ImageMatrix[4][3] = 0x001F; ImageMatrix[4][4] = 0x001F; ImageMatrix[4][5] = 0x001F;
        ImageMatrix[5][0] = 0x001F; ImageMatrix[5][1] = 0x001F; ImageMatrix[5][2] = 0x001F; ImageMatrix[5][3] = 0x001F; ImageMatrix[5][4] = 0x001F; ImageMatrix[5][5] = 0x001F;
        ImageMatrix[6][0] = 0x7FFF; ImageMatrix[6][1] = 0x7FFF; ImageMatrix[6][2] = 0x7FFF; ImageMatrix[6][3] = 0x7FFF; ImageMatrix[6][4] = 0x7FFF; ImageMatrix[6][5] = 0x7FFF;
        ImageMatrix[7][0] = 0x7FFF; ImageMatrix[7][1] = 0x7FFF; ImageMatrix[7][2] = 0x7C00; ImageMatrix[7][3] = 0x7C00; ImageMatrix[7][4] = 0x7C00; ImageMatrix[7][5] = 0x7C00;
        Pattern_ID_Frame_Time = 3;
    break;

    case 25:
        ImageMatrix[0][0] = 0x0000; ImageMatrix[0][1] = 0x0000; ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
        ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
        ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
        ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
        ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
        ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
        ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
        ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
        Pattern_ID_Frame_Time = 10;
    break;

    case 26:
        ImageMatrix[0][0] = 0x7FFF; ImageMatrix[0][1] = 0x7FFF; ImageMatrix[0][2] = 0x7FFF; ImageMatrix[0][3] = 0x7FFF; ImageMatrix[0][4] = 0x7FFF; ImageMatrix[0][5] = 0x7FFF;
        ImageMatrix[1][0] = 0x7FFF; ImageMatrix[1][1] = 0x7FFF; ImageMatrix[1][2] = 0x7FFF; ImageMatrix[1][3] = 0x7FFF; ImageMatrix[1][4] = 0x7FFF; ImageMatrix[1][5] = 0x7FFF;
        ImageMatrix[2][0] = 0x7FFF; ImageMatrix[2][1] = 0x7FFF; ImageMatrix[2][2] = 0x7FFF; ImageMatrix[2][3] = 0x7FFF; ImageMatrix[2][4] = 0x7FFF; ImageMatrix[2][5] = 0x7FFF;
        ImageMatrix[3][0] = 0x7FFF; ImageMatrix[3][1] = 0x7FFF; ImageMatrix[3][2] = 0x7FFF; ImageMatrix[3][3] = 0x7FFF; ImageMatrix[3][4] = 0x7FFF; ImageMatrix[3][5] = 0x7FFF;
        ImageMatrix[4][0] = 0x7FFF; ImageMatrix[4][1] = 0x7FFF; ImageMatrix[4][2] = 0x7FFF; ImageMatrix[4][3] = 0x7FFF; ImageMatrix[4][4] = 0x7FFF; ImageMatrix[4][5] = 0x7FFF;
        ImageMatrix[5][0] = 0x7FFF; ImageMatrix[5][1] = 0x7FFF; ImageMatrix[5][2] = 0x7FFF; ImageMatrix[5][3] = 0x7FFF; ImageMatrix[5][4] = 0x7FFF; ImageMatrix[5][5] = 0x7FFF;
        ImageMatrix[6][0] = 0x7FFF; ImageMatrix[6][1] = 0x7FFF; ImageMatrix[6][2] = 0x7FFF; ImageMatrix[6][3] = 0x7FFF; ImageMatrix[6][4] = 0x7FFF; ImageMatrix[6][5] = 0x7FFF;
        ImageMatrix[7][0] = 0x7FFF; ImageMatrix[7][1] = 0x7FFF; ImageMatrix[7][2] = 0x7FFF; ImageMatrix[7][3] = 0x7FFF; ImageMatrix[7][4] = 0x7FFF; ImageMatrix[7][5] = 0x7FFF;
        Pattern_ID_Frame_Time = 2;
    break;

    case 27:
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

    case 28:
        ImageMatrix[0][0] = 0x7FFF; ImageMatrix[0][1] = 0x7FFF; ImageMatrix[0][2] = 0x7FFF; ImageMatrix[0][3] = 0x7FFF; ImageMatrix[0][4] = 0x7FFF; ImageMatrix[0][5] = 0x7FFF;
        ImageMatrix[1][0] = 0x7FFF; ImageMatrix[1][1] = 0x7FFF; ImageMatrix[1][2] = 0x7FFF; ImageMatrix[1][3] = 0x7FFF; ImageMatrix[1][4] = 0x7FFF; ImageMatrix[1][5] = 0x7FFF;
        ImageMatrix[2][0] = 0x7FFF; ImageMatrix[2][1] = 0x7FFF; ImageMatrix[2][2] = 0x7FFF; ImageMatrix[2][3] = 0x7FFF; ImageMatrix[2][4] = 0x7FFF; ImageMatrix[2][5] = 0x7FFF;
        ImageMatrix[3][0] = 0x7FFF; ImageMatrix[3][1] = 0x7FFF; ImageMatrix[3][2] = 0x7FFF; ImageMatrix[3][3] = 0x7FFF; ImageMatrix[3][4] = 0x7FFF; ImageMatrix[3][5] = 0x7FFF;
        ImageMatrix[4][0] = 0x7FFF; ImageMatrix[4][1] = 0x7FFF; ImageMatrix[4][2] = 0x7FFF; ImageMatrix[4][3] = 0x7FFF; ImageMatrix[4][4] = 0x7FFF; ImageMatrix[4][5] = 0x7FFF;
        ImageMatrix[5][0] = 0x7FFF; ImageMatrix[5][1] = 0x7FFF; ImageMatrix[5][2] = 0x7FFF; ImageMatrix[5][3] = 0x7FFF; ImageMatrix[5][4] = 0x7FFF; ImageMatrix[5][5] = 0x7FFF;
        ImageMatrix[6][0] = 0x7FFF; ImageMatrix[6][1] = 0x7FFF; ImageMatrix[6][2] = 0x7FFF; ImageMatrix[6][3] = 0x7FFF; ImageMatrix[6][4] = 0x7FFF; ImageMatrix[6][5] = 0x7FFF;
        ImageMatrix[7][0] = 0x7FFF; ImageMatrix[7][1] = 0x7FFF; ImageMatrix[7][2] = 0x7FFF; ImageMatrix[7][3] = 0x7FFF; ImageMatrix[7][4] = 0x7FFF; ImageMatrix[7][5] = 0x7FFF;
        Pattern_ID_Frame_Time = 10;
    break;

    case 29:
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

    case 30:
        ImageMatrix[0][0] = 0x7FFF; ImageMatrix[0][1] = 0x7FFF; ImageMatrix[0][2] = 0x7FFF; ImageMatrix[0][3] = 0x7FFF; ImageMatrix[0][4] = 0x7FFF; ImageMatrix[0][5] = 0x7FFF;
        ImageMatrix[1][0] = 0x7FFF; ImageMatrix[1][1] = 0x7FFF; ImageMatrix[1][2] = 0x7FFF; ImageMatrix[1][3] = 0x7FFF; ImageMatrix[1][4] = 0x7FFF; ImageMatrix[1][5] = 0x7FFF;
        ImageMatrix[2][0] = 0x7FFF; ImageMatrix[2][1] = 0x7FFF; ImageMatrix[2][2] = 0x7FFF; ImageMatrix[2][3] = 0x7FFF; ImageMatrix[2][4] = 0x7FFF; ImageMatrix[2][5] = 0x7FFF;
        ImageMatrix[3][0] = 0x7FFF; ImageMatrix[3][1] = 0x7FFF; ImageMatrix[3][2] = 0x7FFF; ImageMatrix[3][3] = 0x7FFF; ImageMatrix[3][4] = 0x7FFF; ImageMatrix[3][5] = 0x7FFF;
        ImageMatrix[4][0] = 0x7FFF; ImageMatrix[4][1] = 0x7FFF; ImageMatrix[4][2] = 0x7FFF; ImageMatrix[4][3] = 0x7FFF; ImageMatrix[4][4] = 0x7FFF; ImageMatrix[4][5] = 0x7FFF;
        ImageMatrix[5][0] = 0x7FFF; ImageMatrix[5][1] = 0x7FFF; ImageMatrix[5][2] = 0x7FFF; ImageMatrix[5][3] = 0x7FFF; ImageMatrix[5][4] = 0x7FFF; ImageMatrix[5][5] = 0x7FFF;
        ImageMatrix[6][0] = 0x7FFF; ImageMatrix[6][1] = 0x7FFF; ImageMatrix[6][2] = 0x7FFF; ImageMatrix[6][3] = 0x7FFF; ImageMatrix[6][4] = 0x7FFF; ImageMatrix[6][5] = 0x7FFF;
        ImageMatrix[7][0] = 0x7FFF; ImageMatrix[7][1] = 0x7FFF; ImageMatrix[7][2] = 0x7FFF; ImageMatrix[7][3] = 0x7FFF; ImageMatrix[7][4] = 0x7FFF; ImageMatrix[7][5] = 0x7FFF;
        Pattern_ID_Frame_Time = 2;
    break;

    case 31:
        ImageMatrix[0][0] = 0x0000; ImageMatrix[0][1] = 0x0000; ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
        ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
        ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
        ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
        ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
        ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
        ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
        ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
        Pattern_ID_Frame_Time = 10;
    break;

    case 32:
        ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x001F; ImageMatrix[0][5] = 0x001F;
        ImageMatrix[1][0] = 0x001F; ImageMatrix[1][1] = 0x001F; ImageMatrix[1][2] = 0x001F; ImageMatrix[1][3] = 0x001F; ImageMatrix[1][4] = 0x001F; ImageMatrix[1][5] = 0x001F;
        ImageMatrix[2][0] = 0x001F; ImageMatrix[2][1] = 0x001F; ImageMatrix[2][2] = 0x7C00; ImageMatrix[2][3] = 0x7C00; ImageMatrix[2][4] = 0x7C00; ImageMatrix[2][5] = 0x7C00;
        ImageMatrix[3][0] = 0x7C00; ImageMatrix[3][1] = 0x7C00; ImageMatrix[3][2] = 0x7C00; ImageMatrix[3][3] = 0x7C00; ImageMatrix[3][4] = 0x7C00; ImageMatrix[3][5] = 0x7C00;
        ImageMatrix[4][0] = 0x7C00; ImageMatrix[4][1] = 0x7C00; ImageMatrix[4][2] = 0x7C00; ImageMatrix[4][3] = 0x7C00; ImageMatrix[4][4] = 0x7C00; ImageMatrix[4][5] = 0x7C00;
        ImageMatrix[5][0] = 0x7C00; ImageMatrix[5][1] = 0x7C00; ImageMatrix[5][2] = 0x7C00; ImageMatrix[5][3] = 0x7C00; ImageMatrix[5][4] = 0x7C00; ImageMatrix[5][5] = 0x7C00;
        ImageMatrix[6][0] = 0x001F; ImageMatrix[6][1] = 0x001F; ImageMatrix[6][2] = 0x001F; ImageMatrix[6][3] = 0x001F; ImageMatrix[6][4] = 0x001F; ImageMatrix[6][5] = 0x001F;
        ImageMatrix[7][0] = 0x001F; ImageMatrix[7][1] = 0x001F; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
        Pattern_ID_Frame_Time = 3;
    break;

    case 33:
        ImageMatrix[0][0] = 0x7FFF; ImageMatrix[0][1] = 0x7FFF; ImageMatrix[0][2] = 0x7FFF; ImageMatrix[0][3] = 0x7FFF; ImageMatrix[0][4] = 0x7FFF; ImageMatrix[0][5] = 0x7FFF;
        ImageMatrix[1][0] = 0x7FFF; ImageMatrix[1][1] = 0x7FFF; ImageMatrix[1][2] = 0x7FFF; ImageMatrix[1][3] = 0x7FFF; ImageMatrix[1][4] = 0x7FFF; ImageMatrix[1][5] = 0x7FFF;
        ImageMatrix[2][0] = 0x7FFF; ImageMatrix[2][1] = 0x7FFF; ImageMatrix[2][2] = 0x7FFF; ImageMatrix[2][3] = 0x7FFF; ImageMatrix[2][4] = 0x7FFF; ImageMatrix[2][5] = 0x7FFF;
        ImageMatrix[3][0] = 0x7FFF; ImageMatrix[3][1] = 0x7FFF; ImageMatrix[3][2] = 0x7FFF; ImageMatrix[3][3] = 0x7FFF; ImageMatrix[3][4] = 0x7FFF; ImageMatrix[3][5] = 0x7FFF;
        ImageMatrix[4][0] = 0x7FFF; ImageMatrix[4][1] = 0x7FFF; ImageMatrix[4][2] = 0x7FFF; ImageMatrix[4][3] = 0x7FFF; ImageMatrix[4][4] = 0x7FFF; ImageMatrix[4][5] = 0x7FFF;
        ImageMatrix[5][0] = 0x7FFF; ImageMatrix[5][1] = 0x7FFF; ImageMatrix[5][2] = 0x7FFF; ImageMatrix[5][3] = 0x7FFF; ImageMatrix[5][4] = 0x7FFF; ImageMatrix[5][5] = 0x7FFF;
        ImageMatrix[6][0] = 0x7FFF; ImageMatrix[6][1] = 0x7FFF; ImageMatrix[6][2] = 0x7FFF; ImageMatrix[6][3] = 0x7FFF; ImageMatrix[6][4] = 0x7FFF; ImageMatrix[6][5] = 0x7FFF;
        ImageMatrix[7][0] = 0x7FFF; ImageMatrix[7][1] = 0x7FFF; ImageMatrix[7][2] = 0x7FFF; ImageMatrix[7][3] = 0x7FFF; ImageMatrix[7][4] = 0x7FFF; ImageMatrix[7][5] = 0x7FFF;
        Pattern_ID_Frame_Time = 2;
    break;

    case 34:
        ImageMatrix[0][0] = 0x001F; ImageMatrix[0][1] = 0x001F; ImageMatrix[0][2] = 0x001F; ImageMatrix[0][3] = 0x001F; ImageMatrix[0][4] = 0x001F; ImageMatrix[0][5] = 0x001F;
        ImageMatrix[1][0] = 0x001F; ImageMatrix[1][1] = 0x001F; ImageMatrix[1][2] = 0x001F; ImageMatrix[1][3] = 0x001F; ImageMatrix[1][4] = 0x001F; ImageMatrix[1][5] = 0x001F;
        ImageMatrix[2][0] = 0x001F; ImageMatrix[2][1] = 0x001F; ImageMatrix[2][2] = 0x7C00; ImageMatrix[2][3] = 0x7C00; ImageMatrix[2][4] = 0x7C00; ImageMatrix[2][5] = 0x7C00;
        ImageMatrix[3][0] = 0x7C00; ImageMatrix[3][1] = 0x7C00; ImageMatrix[3][2] = 0x7C00; ImageMatrix[3][3] = 0x7C00; ImageMatrix[3][4] = 0x7C00; ImageMatrix[3][5] = 0x7C00;
        ImageMatrix[4][0] = 0x7C00; ImageMatrix[4][1] = 0x7C00; ImageMatrix[4][2] = 0x7C00; ImageMatrix[4][3] = 0x7C00; ImageMatrix[4][4] = 0x7C00; ImageMatrix[4][5] = 0x7C00;
        ImageMatrix[5][0] = 0x7C00; ImageMatrix[5][1] = 0x7C00; ImageMatrix[5][2] = 0x7C00; ImageMatrix[5][3] = 0x7C00; ImageMatrix[5][4] = 0x7C00; ImageMatrix[5][5] = 0x7C00;
        ImageMatrix[6][0] = 0x001F; ImageMatrix[6][1] = 0x001F; ImageMatrix[6][2] = 0x001F; ImageMatrix[6][3] = 0x001F; ImageMatrix[6][4] = 0x001F; ImageMatrix[6][5] = 0x001F;
        ImageMatrix[7][0] = 0x001F; ImageMatrix[7][1] = 0x001F; ImageMatrix[7][2] = 0x001F; ImageMatrix[7][3] = 0x001F; ImageMatrix[7][4] = 0x001F; ImageMatrix[7][5] = 0x001F;
        Pattern_ID_Frame_Time = 3;
    break;

    case 35:
        ImageMatrix[0][0] = 0x7FFF; ImageMatrix[0][1] = 0x7FFF; ImageMatrix[0][2] = 0x7FFF; ImageMatrix[0][3] = 0x7FFF; ImageMatrix[0][4] = 0x7FFF; ImageMatrix[0][5] = 0x7FFF;
        ImageMatrix[1][0] = 0x7FFF; ImageMatrix[1][1] = 0x7FFF; ImageMatrix[1][2] = 0x7FFF; ImageMatrix[1][3] = 0x7FFF; ImageMatrix[1][4] = 0x7FFF; ImageMatrix[1][5] = 0x7FFF;
        ImageMatrix[2][0] = 0x7FFF; ImageMatrix[2][1] = 0x7FFF; ImageMatrix[2][2] = 0x7FFF; ImageMatrix[2][3] = 0x7FFF; ImageMatrix[2][4] = 0x7FFF; ImageMatrix[2][5] = 0x7FFF;
        ImageMatrix[3][0] = 0x7FFF; ImageMatrix[3][1] = 0x7FFF; ImageMatrix[3][2] = 0x7FFF; ImageMatrix[3][3] = 0x7FFF; ImageMatrix[3][4] = 0x7FFF; ImageMatrix[3][5] = 0x7FFF;
        ImageMatrix[4][0] = 0x7FFF; ImageMatrix[4][1] = 0x7FFF; ImageMatrix[4][2] = 0x7FFF; ImageMatrix[4][3] = 0x7FFF; ImageMatrix[4][4] = 0x7FFF; ImageMatrix[4][5] = 0x7FFF;
        ImageMatrix[5][0] = 0x7FFF; ImageMatrix[5][1] = 0x7FFF; ImageMatrix[5][2] = 0x7FFF; ImageMatrix[5][3] = 0x7FFF; ImageMatrix[5][4] = 0x7FFF; ImageMatrix[5][5] = 0x7FFF;
        ImageMatrix[6][0] = 0x7FFF; ImageMatrix[6][1] = 0x7FFF; ImageMatrix[6][2] = 0x7FFF; ImageMatrix[6][3] = 0x7FFF; ImageMatrix[6][4] = 0x7FFF; ImageMatrix[6][5] = 0x7FFF;
        ImageMatrix[7][0] = 0x7FFF; ImageMatrix[7][1] = 0x7FFF; ImageMatrix[7][2] = 0x7FFF; ImageMatrix[7][3] = 0x7FFF; ImageMatrix[7][4] = 0x7FFF; ImageMatrix[7][5] = 0x7FFF;
        Pattern_ID_Frame_Time = 2;
    break;

    case 36:
        ImageMatrix[0][0] = 0x7C00; ImageMatrix[0][1] = 0x7C00; ImageMatrix[0][2] = 0x7C00; ImageMatrix[0][3] = 0x7C00; ImageMatrix[0][4] = 0x7C00; ImageMatrix[0][5] = 0x7C00;
        ImageMatrix[1][0] = 0x7C00; ImageMatrix[1][1] = 0x7C00; ImageMatrix[1][2] = 0x7C00; ImageMatrix[1][3] = 0x7C00; ImageMatrix[1][4] = 0x7C00; ImageMatrix[1][5] = 0x7C00;
        ImageMatrix[2][0] = 0x7C00; ImageMatrix[2][1] = 0x7C00; ImageMatrix[2][2] = 0x001F; ImageMatrix[2][3] = 0x001F; ImageMatrix[2][4] = 0x001F; ImageMatrix[2][5] = 0x001F;
        ImageMatrix[3][0] = 0x001F; ImageMatrix[3][1] = 0x001F; ImageMatrix[3][2] = 0x001F; ImageMatrix[3][3] = 0x001F; ImageMatrix[3][4] = 0x001F; ImageMatrix[3][5] = 0x001F;
        ImageMatrix[4][0] = 0x001F; ImageMatrix[4][1] = 0x001F; ImageMatrix[4][2] = 0x001F; ImageMatrix[4][3] = 0x001F; ImageMatrix[4][4] = 0x001F; ImageMatrix[4][5] = 0x001F;
        ImageMatrix[5][0] = 0x001F; ImageMatrix[5][1] = 0x001F; ImageMatrix[5][2] = 0x001F; ImageMatrix[5][3] = 0x001F; ImageMatrix[5][4] = 0x001F; ImageMatrix[5][5] = 0x001F;
        ImageMatrix[6][0] = 0x7C00; ImageMatrix[6][1] = 0x7C00; ImageMatrix[6][2] = 0x7C00; ImageMatrix[6][3] = 0x7C00; ImageMatrix[6][4] = 0x7C00; ImageMatrix[6][5] = 0x7C00;
        ImageMatrix[7][0] = 0x7C00; ImageMatrix[7][1] = 0x7C00; ImageMatrix[7][2] = 0x7C00; ImageMatrix[7][3] = 0x7C00; ImageMatrix[7][4] = 0x7C00; ImageMatrix[7][5] = 0x7C00;
        Pattern_ID_Frame_Time = 3;
    break;

    case 37:
        ImageMatrix[0][0] = 0x7FFF; ImageMatrix[0][1] = 0x7FFF; ImageMatrix[0][2] = 0x7FFF; ImageMatrix[0][3] = 0x7FFF; ImageMatrix[0][4] = 0x7FFF; ImageMatrix[0][5] = 0x7FFF;
        ImageMatrix[1][0] = 0x7FFF; ImageMatrix[1][1] = 0x7FFF; ImageMatrix[1][2] = 0x7FFF; ImageMatrix[1][3] = 0x7FFF; ImageMatrix[1][4] = 0x7FFF; ImageMatrix[1][5] = 0x7FFF;
        ImageMatrix[2][0] = 0x7FFF; ImageMatrix[2][1] = 0x7FFF; ImageMatrix[2][2] = 0x7FFF; ImageMatrix[2][3] = 0x7FFF; ImageMatrix[2][4] = 0x7FFF; ImageMatrix[2][5] = 0x7FFF;
        ImageMatrix[3][0] = 0x7FFF; ImageMatrix[3][1] = 0x7FFF; ImageMatrix[3][2] = 0x7FFF; ImageMatrix[3][3] = 0x7FFF; ImageMatrix[3][4] = 0x7FFF; ImageMatrix[3][5] = 0x7FFF;
        ImageMatrix[4][0] = 0x7FFF; ImageMatrix[4][1] = 0x7FFF; ImageMatrix[4][2] = 0x7FFF; ImageMatrix[4][3] = 0x7FFF; ImageMatrix[4][4] = 0x7FFF; ImageMatrix[4][5] = 0x7FFF;
        ImageMatrix[5][0] = 0x7FFF; ImageMatrix[5][1] = 0x7FFF; ImageMatrix[5][2] = 0x7FFF; ImageMatrix[5][3] = 0x7FFF; ImageMatrix[5][4] = 0x7FFF; ImageMatrix[5][5] = 0x7FFF;
        ImageMatrix[6][0] = 0x7FFF; ImageMatrix[6][1] = 0x7FFF; ImageMatrix[6][2] = 0x7FFF; ImageMatrix[6][3] = 0x7FFF; ImageMatrix[6][4] = 0x7FFF; ImageMatrix[6][5] = 0x7FFF;
        ImageMatrix[7][0] = 0x7FFF; ImageMatrix[7][1] = 0x7FFF; ImageMatrix[7][2] = 0x7FFF; ImageMatrix[7][3] = 0x7FFF; ImageMatrix[7][4] = 0x7FFF; ImageMatrix[7][5] = 0x7FFF;
        Pattern_ID_Frame_Time = 2;
    break;

    case 38:
        ImageMatrix[0][0] = 0x7C00; ImageMatrix[0][1] = 0x7C00; ImageMatrix[0][2] = 0x7C00; ImageMatrix[0][3] = 0x7C00; ImageMatrix[0][4] = 0x7C00; ImageMatrix[0][5] = 0x7C00;
        ImageMatrix[1][0] = 0x7C00; ImageMatrix[1][1] = 0x7C00; ImageMatrix[1][2] = 0x7C00; ImageMatrix[1][3] = 0x7C00; ImageMatrix[1][4] = 0x7C00; ImageMatrix[1][5] = 0x7C00;
        ImageMatrix[2][0] = 0x7C00; ImageMatrix[2][1] = 0x7C00; ImageMatrix[2][2] = 0x001F; ImageMatrix[2][3] = 0x001F; ImageMatrix[2][4] = 0x001F; ImageMatrix[2][5] = 0x001F;
        ImageMatrix[3][0] = 0x001F; ImageMatrix[3][1] = 0x001F; ImageMatrix[3][2] = 0x001F; ImageMatrix[3][3] = 0x001F; ImageMatrix[3][4] = 0x001F; ImageMatrix[3][5] = 0x001F;
        ImageMatrix[4][0] = 0x001F; ImageMatrix[4][1] = 0x001F; ImageMatrix[4][2] = 0x001F; ImageMatrix[4][3] = 0x001F; ImageMatrix[4][4] = 0x001F; ImageMatrix[4][5] = 0x001F;
        ImageMatrix[5][0] = 0x001F; ImageMatrix[5][1] = 0x001F; ImageMatrix[5][2] = 0x001F; ImageMatrix[5][3] = 0x001F; ImageMatrix[5][4] = 0x001F; ImageMatrix[5][5] = 0x001F;
        ImageMatrix[6][0] = 0x7C00; ImageMatrix[6][1] = 0x7C00; ImageMatrix[6][2] = 0x7C00; ImageMatrix[6][3] = 0x7C00; ImageMatrix[6][4] = 0x7C00; ImageMatrix[6][5] = 0x7C00;
        ImageMatrix[7][0] = 0x7C00; ImageMatrix[7][1] = 0x7C00; ImageMatrix[7][2] = 0x7C00; ImageMatrix[7][3] = 0x7C00; ImageMatrix[7][4] = 0x7C00; ImageMatrix[7][5] = 0x7C00;
        Pattern_ID_Frame_Time = 3;
    break;

    case 39:
        ImageMatrix[0][0] = 0x7FFF; ImageMatrix[0][1] = 0x7FFF; ImageMatrix[0][2] = 0x7FFF; ImageMatrix[0][3] = 0x7FFF; ImageMatrix[0][4] = 0x7FFF; ImageMatrix[0][5] = 0x7FFF;
        ImageMatrix[1][0] = 0x7FFF; ImageMatrix[1][1] = 0x7FFF; ImageMatrix[1][2] = 0x7FFF; ImageMatrix[1][3] = 0x7FFF; ImageMatrix[1][4] = 0x7FFF; ImageMatrix[1][5] = 0x7FFF;
        ImageMatrix[2][0] = 0x7FFF; ImageMatrix[2][1] = 0x7FFF; ImageMatrix[2][2] = 0x7FFF; ImageMatrix[2][3] = 0x7FFF; ImageMatrix[2][4] = 0x7FFF; ImageMatrix[2][5] = 0x7FFF;
        ImageMatrix[3][0] = 0x7FFF; ImageMatrix[3][1] = 0x7FFF; ImageMatrix[3][2] = 0x7FFF; ImageMatrix[3][3] = 0x7FFF; ImageMatrix[3][4] = 0x7FFF; ImageMatrix[3][5] = 0x7FFF;
        ImageMatrix[4][0] = 0x7FFF; ImageMatrix[4][1] = 0x7FFF; ImageMatrix[4][2] = 0x7FFF; ImageMatrix[4][3] = 0x7FFF; ImageMatrix[4][4] = 0x7FFF; ImageMatrix[4][5] = 0x7FFF;
        ImageMatrix[5][0] = 0x7FFF; ImageMatrix[5][1] = 0x7FFF; ImageMatrix[5][2] = 0x7FFF; ImageMatrix[5][3] = 0x7FFF; ImageMatrix[5][4] = 0x7FFF; ImageMatrix[5][5] = 0x7FFF;
        ImageMatrix[6][0] = 0x7FFF; ImageMatrix[6][1] = 0x7FFF; ImageMatrix[6][2] = 0x7FFF; ImageMatrix[6][3] = 0x7FFF; ImageMatrix[6][4] = 0x7FFF; ImageMatrix[6][5] = 0x7FFF;
        ImageMatrix[7][0] = 0x7FFF; ImageMatrix[7][1] = 0x7FFF; ImageMatrix[7][2] = 0x7FFF; ImageMatrix[7][3] = 0x7FFF; ImageMatrix[7][4] = 0x7FFF; ImageMatrix[7][5] = 0x7FFF;
        Pattern_ID_Frame_Time = 2;
    break;

    case 40:
        ImageMatrix[0][0] = 0x0000; ImageMatrix[0][1] = 0x0000; ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
        ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
        ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
        ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
        ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
        ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
        ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
        ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
        Pattern_ID_Frame_Time = 10;
    break;

    case 41:
        ImageMatrix[0][0] = 0x7FFF; ImageMatrix[0][1] = 0x7FFF; ImageMatrix[0][2] = 0x7FFF; ImageMatrix[0][3] = 0x7FFF; ImageMatrix[0][4] = 0x7FFF; ImageMatrix[0][5] = 0x7FFF;
        ImageMatrix[1][0] = 0x7FFF; ImageMatrix[1][1] = 0x7FFF; ImageMatrix[1][2] = 0x7FFF; ImageMatrix[1][3] = 0x7FFF; ImageMatrix[1][4] = 0x7FFF; ImageMatrix[1][5] = 0x7FFF;
        ImageMatrix[2][0] = 0x7FFF; ImageMatrix[2][1] = 0x7FFF; ImageMatrix[2][2] = 0x7FFF; ImageMatrix[2][3] = 0x7FFF; ImageMatrix[2][4] = 0x7FFF; ImageMatrix[2][5] = 0x7FFF;
        ImageMatrix[3][0] = 0x7FFF; ImageMatrix[3][1] = 0x7FFF; ImageMatrix[3][2] = 0x7FFF; ImageMatrix[3][3] = 0x7FFF; ImageMatrix[3][4] = 0x7FFF; ImageMatrix[3][5] = 0x7FFF;
        ImageMatrix[4][0] = 0x7FFF; ImageMatrix[4][1] = 0x7FFF; ImageMatrix[4][2] = 0x7FFF; ImageMatrix[4][3] = 0x7FFF; ImageMatrix[4][4] = 0x7FFF; ImageMatrix[4][5] = 0x7FFF;
        ImageMatrix[5][0] = 0x7FFF; ImageMatrix[5][1] = 0x7FFF; ImageMatrix[5][2] = 0x7FFF; ImageMatrix[5][3] = 0x7FFF; ImageMatrix[5][4] = 0x7FFF; ImageMatrix[5][5] = 0x7FFF;
        ImageMatrix[6][0] = 0x7FFF; ImageMatrix[6][1] = 0x7FFF; ImageMatrix[6][2] = 0x7FFF; ImageMatrix[6][3] = 0x7FFF; ImageMatrix[6][4] = 0x7FFF; ImageMatrix[6][5] = 0x7FFF;
        ImageMatrix[7][0] = 0x7FFF; ImageMatrix[7][1] = 0x7FFF; ImageMatrix[7][2] = 0x7FFF; ImageMatrix[7][3] = 0x7FFF; ImageMatrix[7][4] = 0x7FFF; ImageMatrix[7][5] = 0x7FFF;
        Pattern_ID_Frame_Time = 2;
    break;

    case 42:
        ImageMatrix[0][0] = 0x0000; ImageMatrix[0][1] = 0x0000; ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
        ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
        ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
        ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
        ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
        ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
        ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
        ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
        Pattern_ID_Frame_Time = 10;
    break;

    case 43:
        ImageMatrix[0][0] = 0x7FFF; ImageMatrix[0][1] = 0x7FFF; ImageMatrix[0][2] = 0x7FFF; ImageMatrix[0][3] = 0x7FFF; ImageMatrix[0][4] = 0x7FFF; ImageMatrix[0][5] = 0x7FFF;
        ImageMatrix[1][0] = 0x7FFF; ImageMatrix[1][1] = 0x7FFF; ImageMatrix[1][2] = 0x7FFF; ImageMatrix[1][3] = 0x7FFF; ImageMatrix[1][4] = 0x7FFF; ImageMatrix[1][5] = 0x7FFF;
        ImageMatrix[2][0] = 0x7FFF; ImageMatrix[2][1] = 0x7FFF; ImageMatrix[2][2] = 0x7FFF; ImageMatrix[2][3] = 0x7FFF; ImageMatrix[2][4] = 0x7FFF; ImageMatrix[2][5] = 0x7FFF;
        ImageMatrix[3][0] = 0x7FFF; ImageMatrix[3][1] = 0x7FFF; ImageMatrix[3][2] = 0x7FFF; ImageMatrix[3][3] = 0x7FFF; ImageMatrix[3][4] = 0x7FFF; ImageMatrix[3][5] = 0x7FFF;
        ImageMatrix[4][0] = 0x7FFF; ImageMatrix[4][1] = 0x7FFF; ImageMatrix[4][2] = 0x7FFF; ImageMatrix[4][3] = 0x7FFF; ImageMatrix[4][4] = 0x7FFF; ImageMatrix[4][5] = 0x7FFF;
        ImageMatrix[5][0] = 0x7FFF; ImageMatrix[5][1] = 0x7FFF; ImageMatrix[5][2] = 0x7FFF; ImageMatrix[5][3] = 0x7FFF; ImageMatrix[5][4] = 0x7FFF; ImageMatrix[5][5] = 0x7FFF;
        ImageMatrix[6][0] = 0x7FFF; ImageMatrix[6][1] = 0x7FFF; ImageMatrix[6][2] = 0x7FFF; ImageMatrix[6][3] = 0x7FFF; ImageMatrix[6][4] = 0x7FFF; ImageMatrix[6][5] = 0x7FFF;
        ImageMatrix[7][0] = 0x7FFF; ImageMatrix[7][1] = 0x7FFF; ImageMatrix[7][2] = 0x7FFF; ImageMatrix[7][3] = 0x7FFF; ImageMatrix[7][4] = 0x7FFF; ImageMatrix[7][5] = 0x7FFF;
        Pattern_ID_Frame_Time = 2;
    break;

    case 44:
        ImageMatrix[0][0] = 0x0000; ImageMatrix[0][1] = 0x0000; ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
        ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
        ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
        ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
        ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
        ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
        ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
        ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
        Pattern_ID_Frame_Time = 10;
    break;

    default:
        Pattern_ID_Frame_Time = 1;
        Pattern_ID_Frame_Number = 0;
    break;
    }
}

// Pattern = BALL_8
void Pattern_6_BALL_8(void)
{
    switch (Pattern_ID_Frame_Number)
    {
    case 1:
        ImageMatrix[0][0] = 0x43E0; ImageMatrix[0][1] = 0x43E0; ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
        ImageMatrix[1][0] = 0x43E0; ImageMatrix[1][1] = 0x43E0; ImageMatrix[1][2] = 0x43E0; ImageMatrix[1][3] = 0x43E0; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
        ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x43E0; ImageMatrix[2][3] = 0x43E0; ImageMatrix[2][4] = 0x43E0; ImageMatrix[2][5] = 0x43E0;
        ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x43E0; ImageMatrix[3][5] = 0x43E0;
        ImageMatrix[4][0] = 0x43E0; ImageMatrix[4][1] = 0x43E0; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
        ImageMatrix[5][0] = 0x43E0; ImageMatrix[5][1] = 0x43E0; ImageMatrix[5][2] = 0x43E0; ImageMatrix[5][3] = 0x43E0; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
        ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x43E0; ImageMatrix[6][3] = 0x43E0; ImageMatrix[6][4] = 0x43E0; ImageMatrix[6][5] = 0x43E0;
        ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x43E0; ImageMatrix[7][5] = 0x43E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 2:
        ImageMatrix[0][2] = 0x43E0; ImageMatrix[0][3] = 0x43E0;
        ImageMatrix[1][0] = 0x43E0; ImageMatrix[1][1] = 0x43E0; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
        ImageMatrix[2][2] = 0x43E0; ImageMatrix[2][3] = 0x43E0;
        ImageMatrix[3][0] = 0x43E0; ImageMatrix[3][1] = 0x43E0; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
        ImageMatrix[4][2] = 0x43E0; ImageMatrix[4][3] = 0x43E0;
        ImageMatrix[5][0] = 0x43E0; ImageMatrix[5][1] = 0x43E0; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
        ImageMatrix[6][2] = 0x43E0; ImageMatrix[6][3] = 0x43E0;
        ImageMatrix[7][0] = 0x43E0; ImageMatrix[7][1] = 0x43E0; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 3:
        ImageMatrix[0][0] = 0x0000; ImageMatrix[0][1] = 0x0000; ImageMatrix[0][4] = 0x43E0; ImageMatrix[0][5] = 0x43E0;
        ImageMatrix[1][2] = 0x43E0; ImageMatrix[1][3] = 0x43E0;
        ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][4] = 0x43E0; ImageMatrix[2][5] = 0x43E0;
        ImageMatrix[3][2] = 0x43E0; ImageMatrix[3][3] = 0x43E0;
        ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][4] = 0x43E0; ImageMatrix[4][5] = 0x43E0;
        ImageMatrix[5][2] = 0x43E0; ImageMatrix[5][3] = 0x43E0;
        ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][4] = 0x43E0; ImageMatrix[6][5] = 0x43E0;
        ImageMatrix[7][2] = 0x43E0; ImageMatrix[7][3] = 0x43E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 4:
        ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000;
        ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][4] = 0x43E0; ImageMatrix[1][5] = 0x43E0;
        ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000;
        ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][4] = 0x43E0; ImageMatrix[3][5] = 0x43E0;
        ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000;
        ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][4] = 0x43E0; ImageMatrix[5][5] = 0x43E0;
        ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000;
        ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][4] = 0x43E0; ImageMatrix[7][5] = 0x43E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 5:
        ImageMatrix[0][0] = 0x0218; ImageMatrix[0][1] = 0x0218; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
        ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000;
        ImageMatrix[2][0] = 0x0218; ImageMatrix[2][1] = 0x0218; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
        ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000;
        ImageMatrix[4][0] = 0x0218; ImageMatrix[4][1] = 0x0218; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
        ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000;
        ImageMatrix[6][0] = 0x0218; ImageMatrix[6][1] = 0x0218; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
        ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 6:
        ImageMatrix[0][2] = 0x0218; ImageMatrix[0][3] = 0x0218;
        ImageMatrix[1][0] = 0x0218; ImageMatrix[1][1] = 0x0218; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
        ImageMatrix[2][2] = 0x0218; ImageMatrix[2][3] = 0x0218;
        ImageMatrix[3][0] = 0x0218; ImageMatrix[3][1] = 0x0218; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
        ImageMatrix[4][2] = 0x0218; ImageMatrix[4][3] = 0x0218;
        ImageMatrix[5][0] = 0x0218; ImageMatrix[5][1] = 0x0218; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
        ImageMatrix[6][2] = 0x0218; ImageMatrix[6][3] = 0x0218;
        ImageMatrix[7][0] = 0x0218; ImageMatrix[7][1] = 0x0218; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 7:
        ImageMatrix[0][0] = 0x0000; ImageMatrix[0][1] = 0x0000; ImageMatrix[0][4] = 0x0218; ImageMatrix[0][5] = 0x0218;
        ImageMatrix[1][2] = 0x0218; ImageMatrix[1][3] = 0x0218;
        ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][4] = 0x0218; ImageMatrix[2][5] = 0x0218;
        ImageMatrix[3][2] = 0x0218; ImageMatrix[3][3] = 0x0218;
        ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][4] = 0x0218; ImageMatrix[4][5] = 0x0218;
        ImageMatrix[5][2] = 0x0218; ImageMatrix[5][3] = 0x0218;
        ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][4] = 0x0218; ImageMatrix[6][5] = 0x0218;
        ImageMatrix[7][2] = 0x0218; ImageMatrix[7][3] = 0x0218;
        Pattern_ID_Frame_Time = 2;
    break;

    case 8:
        ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000;
        ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][4] = 0x0218; ImageMatrix[1][5] = 0x0218;
        ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000;
        ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][4] = 0x0218; ImageMatrix[3][5] = 0x0218;
        ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000;
        ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][4] = 0x0218; ImageMatrix[5][5] = 0x0218;
        ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000;
        ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][4] = 0x0218; ImageMatrix[7][5] = 0x0218;
        Pattern_ID_Frame_Time = 2;
    break;

    case 9:
        ImageMatrix[0][0] = 0x7C10; ImageMatrix[0][1] = 0x7C10; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
        ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000;
        ImageMatrix[2][0] = 0x7C10; ImageMatrix[2][1] = 0x7C10; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
        ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000;
        ImageMatrix[4][0] = 0x7C10; ImageMatrix[4][1] = 0x7C10; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
        ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000;
        ImageMatrix[6][0] = 0x7C10; ImageMatrix[6][1] = 0x7C10; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
        ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 10:
        ImageMatrix[0][2] = 0x7C10; ImageMatrix[0][3] = 0x7C10;
        ImageMatrix[1][0] = 0x7C10; ImageMatrix[1][1] = 0x7C10; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
        ImageMatrix[2][2] = 0x7C10; ImageMatrix[2][3] = 0x7C10;
        ImageMatrix[3][0] = 0x7C10; ImageMatrix[3][1] = 0x7C10; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
        ImageMatrix[4][2] = 0x7C10; ImageMatrix[4][3] = 0x7C10;
        ImageMatrix[5][0] = 0x7C10; ImageMatrix[5][1] = 0x7C10; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
        ImageMatrix[6][2] = 0x7C10; ImageMatrix[6][3] = 0x7C10;
        ImageMatrix[7][0] = 0x7C10; ImageMatrix[7][1] = 0x7C10; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 11:
        ImageMatrix[0][0] = 0x0000; ImageMatrix[0][1] = 0x0000; ImageMatrix[0][4] = 0x7C10; ImageMatrix[0][5] = 0x7C10;
        ImageMatrix[1][2] = 0x7C10; ImageMatrix[1][3] = 0x7C10;
        ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][4] = 0x7C10; ImageMatrix[2][5] = 0x7C10;
        ImageMatrix[3][2] = 0x7C10; ImageMatrix[3][3] = 0x7C10;
        ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][4] = 0x7C10; ImageMatrix[4][5] = 0x7C10;
        ImageMatrix[5][2] = 0x7C10; ImageMatrix[5][3] = 0x7C10;
        ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][4] = 0x7C10; ImageMatrix[6][5] = 0x7C10;
        ImageMatrix[7][2] = 0x7C10; ImageMatrix[7][3] = 0x7C10;
        Pattern_ID_Frame_Time = 2;
    break;

    case 12:
        ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000;
        ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][4] = 0x7C10; ImageMatrix[1][5] = 0x7C10;
        ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000;
        ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][4] = 0x7C10; ImageMatrix[3][5] = 0x7C10;
        ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000;
        ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][4] = 0x7C10; ImageMatrix[5][5] = 0x7C10;
        ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000;
        ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][4] = 0x7C10; ImageMatrix[7][5] = 0x7C10;
        Pattern_ID_Frame_Time = 2;
    break;

    case 13:
        ImageMatrix[0][0] = 0x7C10; ImageMatrix[0][1] = 0x7C10; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
        ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000;
        ImageMatrix[2][0] = 0x7C10; ImageMatrix[2][1] = 0x7C10; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
        ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000;
        ImageMatrix[4][0] = 0x7C10; ImageMatrix[4][1] = 0x7C10; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
        ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000;
        ImageMatrix[6][0] = 0x7C10; ImageMatrix[6][1] = 0x7C10; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
        ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 14:
        ImageMatrix[0][1] = 0x0000; ImageMatrix[0][4] = 0x03FF; ImageMatrix[0][5] = 0x03FF;
        ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000;
        ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][4] = 0x03FF; ImageMatrix[2][5] = 0x03FF;
        ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000;
        ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x7C10; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
        ImageMatrix[5][1] = 0x7C10; ImageMatrix[5][2] = 0x03FF; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
        ImageMatrix[6][2] = 0x03FF; ImageMatrix[6][3] = 0x03FF;
        ImageMatrix[7][0] = 0x7C10; ImageMatrix[7][1] = 0x7C10; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 15:
        ImageMatrix[0][0] = 0x0000; ImageMatrix[0][2] = 0x03FF; ImageMatrix[0][3] = 0x03FF;
        ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][4] = 0x03FF; ImageMatrix[1][5] = 0x03FF;
        ImageMatrix[2][2] = 0x03FF; ImageMatrix[2][3] = 0x03FF;
        ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][4] = 0x03FF; ImageMatrix[3][5] = 0x03FF;
        ImageMatrix[4][2] = 0x03FF; ImageMatrix[4][3] = 0x03FF;
        ImageMatrix[5][0] = 0x0000; ImageMatrix[5][3] = 0x03FF;
        ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][4] = 0x03FF; ImageMatrix[6][5] = 0x03FF;
        ImageMatrix[7][2] = 0x03FF; ImageMatrix[7][3] = 0x03FF;
        Pattern_ID_Frame_Time = 2;
    break;

    case 16:
        ImageMatrix[0][0] = 0x03FF; ImageMatrix[0][1] = 0x03FF; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
        ImageMatrix[1][2] = 0x03FF; ImageMatrix[1][3] = 0x03FF;
        ImageMatrix[2][0] = 0x03FF; ImageMatrix[2][1] = 0x03FF; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
        ImageMatrix[3][2] = 0x03FF; ImageMatrix[3][3] = 0x03FF;
        ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][4] = 0x03FF; ImageMatrix[4][5] = 0x03FF;
        ImageMatrix[5][4] = 0x03FF; ImageMatrix[5][5] = 0x03FF;
        ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000;
        ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][4] = 0x03FF; ImageMatrix[7][5] = 0x03FF;
        Pattern_ID_Frame_Time = 2;
    break;

    case 17:
        ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000;
        ImageMatrix[1][0] = 0x03FF; ImageMatrix[1][1] = 0x03FF; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
        ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000;
        ImageMatrix[3][0] = 0x03FF; ImageMatrix[3][1] = 0x03FF; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
        ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000;
        ImageMatrix[5][0] = 0x03FF; ImageMatrix[5][1] = 0x03FF; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000;
        ImageMatrix[6][0] = 0x03FF; ImageMatrix[6][1] = 0x03FF; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
        ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 18:
        ImageMatrix[0][1] = 0x0000; ImageMatrix[0][4] = 0x03FF; ImageMatrix[0][5] = 0x03FF;
        ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000;
        ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][4] = 0x03FF; ImageMatrix[2][5] = 0x03FF;
        ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000;
        ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x03FF; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
        ImageMatrix[5][1] = 0x03FF; ImageMatrix[5][2] = 0x03FF; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
        ImageMatrix[6][2] = 0x03FF; ImageMatrix[6][3] = 0x03FF;
        ImageMatrix[7][0] = 0x03FF; ImageMatrix[7][1] = 0x03FF; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 19:
        ImageMatrix[0][0] = 0x0000; ImageMatrix[0][2] = 0x03FF; ImageMatrix[0][3] = 0x03FF;
        ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][4] = 0x03FF; ImageMatrix[1][5] = 0x03FF;
        ImageMatrix[2][2] = 0x03FF; ImageMatrix[2][3] = 0x03FF;
        ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][4] = 0x03FF; ImageMatrix[3][5] = 0x03FF;
        ImageMatrix[4][2] = 0x03FF; ImageMatrix[4][3] = 0x03FF;
        ImageMatrix[5][0] = 0x0000; ImageMatrix[5][3] = 0x03FF;
        ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][4] = 0x03FF; ImageMatrix[6][5] = 0x03FF;
        ImageMatrix[7][2] = 0x03FF; ImageMatrix[7][3] = 0x03FF;
        Pattern_ID_Frame_Time = 2;
    break;

    case 20:
        ImageMatrix[0][0] = 0x03FF; ImageMatrix[0][1] = 0x03FF; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
        ImageMatrix[1][2] = 0x03FF; ImageMatrix[1][3] = 0x03FF;
        ImageMatrix[2][0] = 0x03FF; ImageMatrix[2][1] = 0x03FF; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
        ImageMatrix[3][2] = 0x03FF; ImageMatrix[3][3] = 0x03FF;
        ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][4] = 0x03FF; ImageMatrix[4][5] = 0x03FF;
        ImageMatrix[5][4] = 0x03FF; ImageMatrix[5][5] = 0x03FF;
        ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000;
        ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][4] = 0x03FF; ImageMatrix[7][5] = 0x03FF;
        Pattern_ID_Frame_Time = 2;
    break;

    case 21:
        ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000;
        ImageMatrix[1][0] = 0x03FF; ImageMatrix[1][1] = 0x03FF; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
        ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000;
        ImageMatrix[3][0] = 0x03FF; ImageMatrix[3][1] = 0x03FF; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
        ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000;
        ImageMatrix[5][0] = 0x03FF; ImageMatrix[5][1] = 0x03FF; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000;
        ImageMatrix[6][0] = 0x03FF; ImageMatrix[6][1] = 0x03FF; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
        ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 22:
        ImageMatrix[0][1] = 0x0000; ImageMatrix[0][4] = 0x7C00; ImageMatrix[0][5] = 0x7C00;
        ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000;
        ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][4] = 0x7C00; ImageMatrix[2][5] = 0x7C00;
        ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000;
        ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x7C00; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
        ImageMatrix[5][1] = 0x03FF; ImageMatrix[5][2] = 0x7C00; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
        ImageMatrix[6][2] = 0x7C00; ImageMatrix[6][3] = 0x7C00;
        ImageMatrix[7][0] = 0x03FF; ImageMatrix[7][1] = 0x03FF; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 23:
        ImageMatrix[0][0] = 0x0000; ImageMatrix[0][2] = 0x7C00; ImageMatrix[0][3] = 0x7C00;
        ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][4] = 0x7C00; ImageMatrix[1][5] = 0x7C00;
        ImageMatrix[2][2] = 0x7C00; ImageMatrix[2][3] = 0x7C00;
        ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x7C00; ImageMatrix[3][4] = 0x7C00; ImageMatrix[3][5] = 0x0000;
        ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x7C00; ImageMatrix[4][5] = 0x7C00;
        ImageMatrix[5][0] = 0x0000; ImageMatrix[5][3] = 0x7C00; ImageMatrix[5][4] = 0x7C00;
        ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x7C00; ImageMatrix[6][4] = 0x7C00; ImageMatrix[6][5] = 0x7C00;
        ImageMatrix[7][2] = 0x7C00; ImageMatrix[7][3] = 0x7C00;
        Pattern_ID_Frame_Time = 2;
    break;

    case 24:
        ImageMatrix[0][0] = 0x7C00; ImageMatrix[0][1] = 0x7C00; ImageMatrix[0][2] = 0x43E0; ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
        ImageMatrix[1][2] = 0x43E0; ImageMatrix[1][3] = 0x43E0; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
        ImageMatrix[2][0] = 0x7C00; ImageMatrix[2][1] = 0x7C00; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
        ImageMatrix[3][0] = 0x7C00; ImageMatrix[3][1] = 0x43E0; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
        ImageMatrix[4][0] = 0x43E0; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000;
        ImageMatrix[5][1] = 0x43E0; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][5] = 0x43E0;
        ImageMatrix[6][0] = 0x43E0; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x43E0; ImageMatrix[6][4] = 0x43E0; ImageMatrix[6][5] = 0x43E0;
        ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x43E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 25:
        ImageMatrix[0][0] = 0x43E0; ImageMatrix[0][1] = 0x43E0; ImageMatrix[0][2] = 0x0000;
        ImageMatrix[1][0] = 0x7C00; ImageMatrix[1][1] = 0x7C00; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
        ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000;
        ImageMatrix[3][0] = 0x7C00; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][3] = 0x0000;
        ImageMatrix[4][1] = 0x43E0;
        ImageMatrix[5][0] = 0x7C00; ImageMatrix[5][3] = 0x0000;
        ImageMatrix[6][2] = 0x0000;
        ImageMatrix[7][0] = 0x43E0; ImageMatrix[7][3] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 26:
        ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000;
        ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x43E0;
        ImageMatrix[3][5] = 0x0000;
        ImageMatrix[4][0] = 0x43E0;
        ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000;
        ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 27:
        ImageMatrix[0][0] = 0x0000; ImageMatrix[0][1] = 0x0000; ImageMatrix[0][4] = 0x43E0; ImageMatrix[0][5] = 0x43E0;
        ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000;
        ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][4] = 0x43E0; ImageMatrix[2][5] = 0x43E0;
        ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][5] = 0x43E0;
        ImageMatrix[4][0] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x43E0;
        ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000;
        ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][5] = 0x43E0;
        ImageMatrix[7][0] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 28:
        ImageMatrix[0][2] = 0x43E0; ImageMatrix[0][3] = 0x43E0;
        ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][4] = 0x43E0; ImageMatrix[1][5] = 0x43E0;
        ImageMatrix[2][2] = 0x43E0; ImageMatrix[2][3] = 0x43E0; ImageMatrix[2][5] = 0x0000;
        ImageMatrix[3][0] = 0x0000; ImageMatrix[3][3] = 0x43E0; ImageMatrix[3][4] = 0x43E0;
        ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x43E0;
        ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][5] = 0x43E0;
        ImageMatrix[6][0] = 0x0000; ImageMatrix[6][3] = 0x43E0; ImageMatrix[6][4] = 0x43E0;
        ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][4] = 0x43E0; ImageMatrix[7][5] = 0x43E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 29:
        ImageMatrix[0][0] = 0x43E0; ImageMatrix[0][1] = 0x43E0; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
        ImageMatrix[1][2] = 0x43E0; ImageMatrix[1][3] = 0x43E0;
        ImageMatrix[2][0] = 0x43E0; ImageMatrix[2][1] = 0x43E0; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000;
        ImageMatrix[3][1] = 0x43E0; ImageMatrix[3][2] = 0x43E0;
        ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x43E0; ImageMatrix[4][4] = 0x43E0; ImageMatrix[4][5] = 0x0000;
        ImageMatrix[5][3] = 0x43E0; ImageMatrix[5][4] = 0x0000;
        ImageMatrix[6][1] = 0x43E0; ImageMatrix[6][2] = 0x43E0; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
        ImageMatrix[7][2] = 0x43E0; ImageMatrix[7][3] = 0x43E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 30:
        ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000;
        ImageMatrix[1][0] = 0x43E0; ImageMatrix[1][1] = 0x43E0; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x43E0;
        ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][5] = 0x0000;
        ImageMatrix[3][0] = 0x43E0; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
        ImageMatrix[4][2] = 0x43E0; ImageMatrix[4][3] = 0x0000;
        ImageMatrix[5][1] = 0x43E0; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][5] = 0x0000;
        ImageMatrix[6][0] = 0x43E0; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000;
        ImageMatrix[7][0] = 0x43E0; ImageMatrix[7][1] = 0x43E0; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 31:
        ImageMatrix[0][0] = 0x0000; ImageMatrix[0][1] = 0x0000; ImageMatrix[0][4] = 0x4100; ImageMatrix[0][5] = 0x4100;
        ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x4100; ImageMatrix[1][5] = 0x43E0;
        ImageMatrix[2][0] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x4100;
        ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000;
        ImageMatrix[4][0] = 0x43E0; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][5] = 0x4100;
        ImageMatrix[5][0] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x4100;
        ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][4] = 0x4100; ImageMatrix[6][5] = 0x4100;
        ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    default:
        Pattern_ID_Frame_Time = 1;
        Pattern_ID_Frame_Number = 0;
    break;
    }
}

// Pattern = 2_RODS
void Pattern_7_2_RODS(void)
{
    switch (Pattern_ID_Frame_Number)
    {
    case 1:
        ImageMatrix[0][0] = 0x0200; ImageMatrix[0][1] = 0x0200; ImageMatrix[0][2] = 0x0200; ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000; ImageMatrix[0][6] = 0x0000; ImageMatrix[0][7] = 0x0000;
        ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000; ImageMatrix[1][6] = 0x0000; ImageMatrix[1][7] = 0x0000;
        ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000; ImageMatrix[2][6] = 0x0000; ImageMatrix[2][7] = 0x0000;
        ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000; ImageMatrix[3][6] = 0x0200; ImageMatrix[3][7] = 0x0200;
        ImageMatrix[4][0] = 0x0200; ImageMatrix[4][1] = 0x0200; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000; ImageMatrix[4][6] = 0x0000; ImageMatrix[4][7] = 0x0000;
        ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000; ImageMatrix[5][6] = 0x0000; ImageMatrix[5][7] = 0x0000;
        ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000; ImageMatrix[6][6] = 0x0000; ImageMatrix[6][7] = 0x0000;
        ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0200; ImageMatrix[7][6] = 0x0200; ImageMatrix[7][7] = 0x0200;
        Pattern_ID_Frame_Time = 2;
    break;

    case 2:
        ImageMatrix[0][0] = 0x0000; ImageMatrix[0][1] = 0x0000; ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0200; ImageMatrix[0][4] = 0x0200; ImageMatrix[0][5] = 0x0200;
        ImageMatrix[3][4] = 0x0200; ImageMatrix[3][5] = 0x0200; ImageMatrix[3][7] = 0x0000;
        ImageMatrix[4][0] = 0x0000; ImageMatrix[4][2] = 0x0200; ImageMatrix[4][3] = 0x0200;
        ImageMatrix[7][2] = 0x0200; ImageMatrix[7][3] = 0x0200; ImageMatrix[7][4] = 0x0200; ImageMatrix[7][5] = 0x0000; ImageMatrix[7][6] = 0x0000; ImageMatrix[7][7] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 3:
        ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][6] = 0x0200; ImageMatrix[0][7] = 0x0200;
        ImageMatrix[1][0] = 0x0200;
        ImageMatrix[3][2] = 0x0200; ImageMatrix[3][3] = 0x0200; ImageMatrix[3][5] = 0x0000; ImageMatrix[3][6] = 0x0000;
        ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][4] = 0x0200; ImageMatrix[4][5] = 0x0200;
        ImageMatrix[6][7] = 0x0200;
        ImageMatrix[7][0] = 0x0200; ImageMatrix[7][1] = 0x0200; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 4:
        ImageMatrix[0][5] = 0x0000; ImageMatrix[0][6] = 0x0000; ImageMatrix[0][7] = 0x0000;
        ImageMatrix[1][1] = 0x0200; ImageMatrix[1][2] = 0x0200; ImageMatrix[1][3] = 0x0200;
        ImageMatrix[3][0] = 0x0200; ImageMatrix[3][1] = 0x0200; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000;
        ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][6] = 0x0200; ImageMatrix[4][7] = 0x0200;
        ImageMatrix[6][4] = 0x0200; ImageMatrix[6][5] = 0x0200; ImageMatrix[6][6] = 0x0200;
        ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 5:
        ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][4] = 0x0200; ImageMatrix[1][5] = 0x0200;
        ImageMatrix[2][5] = 0x0200; ImageMatrix[2][6] = 0x0200; ImageMatrix[2][7] = 0x0200;
        ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000;
        ImageMatrix[4][5] = 0x0000; ImageMatrix[4][6] = 0x0000;
        ImageMatrix[5][0] = 0x0200; ImageMatrix[5][1] = 0x0200; ImageMatrix[5][2] = 0x0200;
        ImageMatrix[6][2] = 0x0200; ImageMatrix[6][3] = 0x0200; ImageMatrix[6][5] = 0x0000; ImageMatrix[6][6] = 0x0000; ImageMatrix[6][7] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 6:
        ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][6] = 0x0200; ImageMatrix[1][7] = 0x0200;
        ImageMatrix[2][3] = 0x0200; ImageMatrix[2][4] = 0x0200; ImageMatrix[2][6] = 0x0000; ImageMatrix[2][7] = 0x0000;
        ImageMatrix[3][0] = 0x0000;
        ImageMatrix[4][7] = 0x0000;
        ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][3] = 0x0200; ImageMatrix[5][4] = 0x0200;
        ImageMatrix[6][0] = 0x0200; ImageMatrix[6][1] = 0x0200; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 7:
        ImageMatrix[1][5] = 0x0000; ImageMatrix[1][6] = 0x0000;
        ImageMatrix[2][0] = 0x0200; ImageMatrix[2][1] = 0x0200; ImageMatrix[2][2] = 0x0200; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
        ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][5] = 0x0200; ImageMatrix[5][6] = 0x0200; ImageMatrix[5][7] = 0x0200;
        ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 8:
        ImageMatrix[0][0] = 0x7FE0; ImageMatrix[0][1] = 0x7FE0; ImageMatrix[0][2] = 0x7FE0;
        ImageMatrix[1][7] = 0x0000;
        ImageMatrix[2][0] = 0x0000; ImageMatrix[2][3] = 0x0000;
        ImageMatrix[3][6] = 0x7FE0; ImageMatrix[3][7] = 0x7FE0;
        ImageMatrix[4][0] = 0x7FE0; ImageMatrix[4][1] = 0x7FE0;
        ImageMatrix[5][4] = 0x0000; ImageMatrix[5][7] = 0x0000;
        ImageMatrix[6][0] = 0x0000;
        ImageMatrix[7][5] = 0x7FE0; ImageMatrix[7][6] = 0x7FE0; ImageMatrix[7][7] = 0x7FE0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 9:
        ImageMatrix[0][0] = 0x0000; ImageMatrix[0][1] = 0x0000; ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x7FE0; ImageMatrix[0][4] = 0x7FE0; ImageMatrix[0][5] = 0x7FE0;
        ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000;
        ImageMatrix[3][4] = 0x7FE0; ImageMatrix[3][5] = 0x7FE0; ImageMatrix[3][7] = 0x0000;
        ImageMatrix[4][0] = 0x0000; ImageMatrix[4][2] = 0x7FE0; ImageMatrix[4][3] = 0x7FE0;
        ImageMatrix[5][5] = 0x0000; ImageMatrix[5][6] = 0x0000;
        ImageMatrix[7][2] = 0x7FE0; ImageMatrix[7][3] = 0x7FE0; ImageMatrix[7][4] = 0x7FE0; ImageMatrix[7][5] = 0x0000; ImageMatrix[7][6] = 0x0000; ImageMatrix[7][7] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 10:
        ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][6] = 0x7FE0; ImageMatrix[0][7] = 0x7FE0;
        ImageMatrix[1][0] = 0x7FE0;
        ImageMatrix[3][2] = 0x7FE0; ImageMatrix[3][3] = 0x7FE0; ImageMatrix[3][5] = 0x0000; ImageMatrix[3][6] = 0x0000;
        ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][4] = 0x7FE0; ImageMatrix[4][5] = 0x7FE0;
        ImageMatrix[6][7] = 0x7FE0;
        ImageMatrix[7][0] = 0x7FE0; ImageMatrix[7][1] = 0x7FE0; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 11:
        ImageMatrix[0][5] = 0x0000; ImageMatrix[0][6] = 0x0000; ImageMatrix[0][7] = 0x0000;
        ImageMatrix[1][1] = 0x7FE0; ImageMatrix[1][2] = 0x7FE0; ImageMatrix[1][3] = 0x7FE0;
        ImageMatrix[3][0] = 0x7FE0; ImageMatrix[3][1] = 0x7FE0; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000;
        ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][6] = 0x7FE0; ImageMatrix[4][7] = 0x7FE0;
        ImageMatrix[6][4] = 0x7FE0; ImageMatrix[6][5] = 0x7FE0; ImageMatrix[6][6] = 0x7FE0;
        ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 12:
        ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][4] = 0x7FE0; ImageMatrix[1][5] = 0x7FE0;
        ImageMatrix[2][5] = 0x7FE0; ImageMatrix[2][6] = 0x7FE0; ImageMatrix[2][7] = 0x7FE0;
        ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000;
        ImageMatrix[4][5] = 0x0000; ImageMatrix[4][6] = 0x0000;
        ImageMatrix[5][0] = 0x7FE0; ImageMatrix[5][1] = 0x7FE0; ImageMatrix[5][2] = 0x7FE0;
        ImageMatrix[6][2] = 0x7FE0; ImageMatrix[6][3] = 0x7FE0; ImageMatrix[6][5] = 0x0000; ImageMatrix[6][6] = 0x0000; ImageMatrix[6][7] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 13:
        ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][6] = 0x7FE0; ImageMatrix[1][7] = 0x7FE0;
        ImageMatrix[2][3] = 0x7FE0; ImageMatrix[2][4] = 0x7FE0; ImageMatrix[2][6] = 0x0000; ImageMatrix[2][7] = 0x0000;
        ImageMatrix[3][0] = 0x0000;
        ImageMatrix[4][7] = 0x0000;
        ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][3] = 0x7FE0; ImageMatrix[5][4] = 0x7FE0;
        ImageMatrix[6][0] = 0x7FE0; ImageMatrix[6][1] = 0x7FE0; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 14:
        ImageMatrix[1][5] = 0x0000; ImageMatrix[1][6] = 0x0000;
        ImageMatrix[2][0] = 0x7FE0; ImageMatrix[2][1] = 0x7FE0; ImageMatrix[2][2] = 0x7FE0; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
        ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][5] = 0x7FE0; ImageMatrix[5][6] = 0x7FE0; ImageMatrix[5][7] = 0x7FE0;
        ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 15:
        ImageMatrix[0][0] = 0x7C10; ImageMatrix[0][1] = 0x7C10; ImageMatrix[0][2] = 0x7C10;
        ImageMatrix[1][7] = 0x0000;
        ImageMatrix[2][0] = 0x0000; ImageMatrix[2][3] = 0x0000;
        ImageMatrix[3][6] = 0x7C10; ImageMatrix[3][7] = 0x7C10;
        ImageMatrix[4][0] = 0x7C10; ImageMatrix[4][1] = 0x7C10;
        ImageMatrix[5][4] = 0x0000; ImageMatrix[5][7] = 0x0000;
        ImageMatrix[6][0] = 0x0000;
        ImageMatrix[7][5] = 0x7C10; ImageMatrix[7][6] = 0x7C10; ImageMatrix[7][7] = 0x7C10;
        Pattern_ID_Frame_Time = 2;
    break;

    case 16:
        ImageMatrix[0][0] = 0x0000; ImageMatrix[0][1] = 0x0000; ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x7C10; ImageMatrix[0][4] = 0x7C10; ImageMatrix[0][5] = 0x7C10;
        ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000;
        ImageMatrix[3][4] = 0x7C10; ImageMatrix[3][5] = 0x7C10; ImageMatrix[3][6] = 0x0000; ImageMatrix[3][7] = 0x0000;
        ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x7C10; ImageMatrix[4][3] = 0x7C10;
        ImageMatrix[5][5] = 0x0000; ImageMatrix[5][6] = 0x0000;
        ImageMatrix[7][2] = 0x7C10; ImageMatrix[7][3] = 0x7C10; ImageMatrix[7][4] = 0x7C10; ImageMatrix[7][5] = 0x0000; ImageMatrix[7][6] = 0x0000; ImageMatrix[7][7] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 17:
        ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][6] = 0x7C10; ImageMatrix[0][7] = 0x7C10;
        ImageMatrix[1][0] = 0x7C10;
        ImageMatrix[3][2] = 0x7C10; ImageMatrix[3][3] = 0x7C10; ImageMatrix[3][5] = 0x0000;
        ImageMatrix[4][2] = 0x0000; ImageMatrix[4][4] = 0x7C10; ImageMatrix[4][5] = 0x7C10;
        ImageMatrix[6][7] = 0x7C10;
        ImageMatrix[7][0] = 0x7C10; ImageMatrix[7][1] = 0x7C10; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 18:
        ImageMatrix[0][5] = 0x0000; ImageMatrix[0][6] = 0x0000; ImageMatrix[0][7] = 0x0000;
        ImageMatrix[1][1] = 0x7C10; ImageMatrix[1][2] = 0x7C10; ImageMatrix[1][3] = 0x7C10;
        ImageMatrix[3][0] = 0x7C10; ImageMatrix[3][1] = 0x7C10; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000;
        ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][6] = 0x7C10; ImageMatrix[4][7] = 0x7C10;
        ImageMatrix[6][4] = 0x7C10; ImageMatrix[6][5] = 0x7C10; ImageMatrix[6][6] = 0x7C10;
        ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 19:
        ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][4] = 0x7C10; ImageMatrix[1][5] = 0x7C10;
        ImageMatrix[2][5] = 0x7C10; ImageMatrix[2][6] = 0x7C10; ImageMatrix[2][7] = 0x7C10;
        ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000;
        ImageMatrix[4][5] = 0x0000; ImageMatrix[4][6] = 0x0000;
        ImageMatrix[5][0] = 0x7C10; ImageMatrix[5][1] = 0x7C10; ImageMatrix[5][2] = 0x7C10;
        ImageMatrix[6][2] = 0x7C10; ImageMatrix[6][3] = 0x7C10; ImageMatrix[6][5] = 0x0000; ImageMatrix[6][6] = 0x0000; ImageMatrix[6][7] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 20:
        ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][6] = 0x7C10; ImageMatrix[1][7] = 0x7C10;
        ImageMatrix[2][3] = 0x7C10; ImageMatrix[2][4] = 0x7C10; ImageMatrix[2][6] = 0x0000; ImageMatrix[2][7] = 0x0000;
        ImageMatrix[3][0] = 0x0000;
        ImageMatrix[4][7] = 0x0000;
        ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][3] = 0x7C10; ImageMatrix[5][4] = 0x7C10;
        ImageMatrix[6][0] = 0x7C10; ImageMatrix[6][1] = 0x7C10; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 21:
        ImageMatrix[1][5] = 0x0000; ImageMatrix[1][6] = 0x0000;
        ImageMatrix[2][0] = 0x7C10; ImageMatrix[2][1] = 0x7C10; ImageMatrix[2][2] = 0x7C10; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
        ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][5] = 0x7C10; ImageMatrix[5][6] = 0x7C10; ImageMatrix[5][7] = 0x7C10;
        ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 22:
        ImageMatrix[0][0] = 0x03FF; ImageMatrix[0][1] = 0x03FF; ImageMatrix[0][2] = 0x03FF;
        ImageMatrix[1][7] = 0x0000;
        ImageMatrix[2][0] = 0x0000; ImageMatrix[2][3] = 0x0000;
        ImageMatrix[3][6] = 0x03FF; ImageMatrix[3][7] = 0x03FF;
        ImageMatrix[4][0] = 0x03FF; ImageMatrix[4][1] = 0x03FF;
        ImageMatrix[5][4] = 0x0000; ImageMatrix[5][7] = 0x0000;
        ImageMatrix[6][0] = 0x0000;
        ImageMatrix[7][5] = 0x03FF; ImageMatrix[7][6] = 0x03FF; ImageMatrix[7][7] = 0x03FF;
        Pattern_ID_Frame_Time = 2;
    break;

    case 23:
        ImageMatrix[0][0] = 0x0000; ImageMatrix[0][1] = 0x0000; ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x03FF; ImageMatrix[0][4] = 0x03FF; ImageMatrix[0][5] = 0x03FF;
        ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000;
        ImageMatrix[3][4] = 0x03FF; ImageMatrix[3][5] = 0x03FF; ImageMatrix[3][6] = 0x0000; ImageMatrix[3][7] = 0x0000;
        ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x03FF; ImageMatrix[4][3] = 0x03FF;
        ImageMatrix[5][5] = 0x0000; ImageMatrix[5][6] = 0x0000;
        ImageMatrix[7][2] = 0x03FF; ImageMatrix[7][3] = 0x03FF; ImageMatrix[7][4] = 0x03FF; ImageMatrix[7][5] = 0x0000; ImageMatrix[7][6] = 0x0000; ImageMatrix[7][7] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 24:
        ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][6] = 0x03FF; ImageMatrix[0][7] = 0x03FF;
        ImageMatrix[1][0] = 0x03FF;
        ImageMatrix[3][2] = 0x03FF; ImageMatrix[3][3] = 0x03FF; ImageMatrix[3][5] = 0x0000;
        ImageMatrix[4][2] = 0x0000; ImageMatrix[4][4] = 0x03FF; ImageMatrix[4][5] = 0x03FF;
        ImageMatrix[6][7] = 0x03FF;
        ImageMatrix[7][0] = 0x03FF; ImageMatrix[7][1] = 0x03FF; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 25:
        ImageMatrix[0][5] = 0x0000; ImageMatrix[0][6] = 0x0000; ImageMatrix[0][7] = 0x0000;
        ImageMatrix[1][1] = 0x03FF; ImageMatrix[1][2] = 0x03FF; ImageMatrix[1][3] = 0x03FF;
        ImageMatrix[3][0] = 0x03FF; ImageMatrix[3][1] = 0x03FF; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000;
        ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][6] = 0x03FF; ImageMatrix[4][7] = 0x03FF;
        ImageMatrix[6][4] = 0x03FF; ImageMatrix[6][5] = 0x03FF; ImageMatrix[6][6] = 0x03FF;
        ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 26:
        ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][4] = 0x03FF; ImageMatrix[1][5] = 0x03FF;
        ImageMatrix[2][5] = 0x03FF; ImageMatrix[2][6] = 0x03FF; ImageMatrix[2][7] = 0x03FF;
        ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000;
        ImageMatrix[4][5] = 0x0000; ImageMatrix[4][6] = 0x0000;
        ImageMatrix[5][0] = 0x03FF; ImageMatrix[5][1] = 0x03FF; ImageMatrix[5][2] = 0x03FF;
        ImageMatrix[6][2] = 0x03FF; ImageMatrix[6][3] = 0x03FF; ImageMatrix[6][5] = 0x0000; ImageMatrix[6][6] = 0x0000; ImageMatrix[6][7] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 27:
        ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][6] = 0x03FF; ImageMatrix[1][7] = 0x03FF;
        ImageMatrix[2][3] = 0x03FF; ImageMatrix[2][4] = 0x03FF; ImageMatrix[2][6] = 0x0000; ImageMatrix[2][7] = 0x0000;
        ImageMatrix[3][0] = 0x0000;
        ImageMatrix[4][7] = 0x0000;
        ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][3] = 0x03FF; ImageMatrix[5][4] = 0x03FF;
        ImageMatrix[6][0] = 0x03FF; ImageMatrix[6][1] = 0x03FF; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 28:
        ImageMatrix[1][5] = 0x0000; ImageMatrix[1][6] = 0x0000;
        ImageMatrix[2][0] = 0x03FF; ImageMatrix[2][1] = 0x03FF; ImageMatrix[2][2] = 0x03FF; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
        ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][5] = 0x03FF; ImageMatrix[5][6] = 0x03FF; ImageMatrix[5][7] = 0x03FF;
        ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 29:
        ImageMatrix[0][0] = 0x7E00; ImageMatrix[0][1] = 0x7E00; ImageMatrix[0][2] = 0x7E00;
        ImageMatrix[1][7] = 0x0000;
        ImageMatrix[2][0] = 0x0000; ImageMatrix[2][3] = 0x0000;
        ImageMatrix[3][6] = 0x7E00; ImageMatrix[3][7] = 0x7E00;
        ImageMatrix[4][0] = 0x7E00; ImageMatrix[4][1] = 0x7E00;
        ImageMatrix[5][4] = 0x0000; ImageMatrix[5][7] = 0x0000;
        ImageMatrix[6][0] = 0x0000;
        ImageMatrix[7][5] = 0x7E00; ImageMatrix[7][6] = 0x7E00; ImageMatrix[7][7] = 0x7E00;
        Pattern_ID_Frame_Time = 2;
    break;

    case 30:
        ImageMatrix[0][0] = 0x0000; ImageMatrix[0][1] = 0x0000; ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x7E00; ImageMatrix[0][4] = 0x7E00; ImageMatrix[0][5] = 0x7E00;
        ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000;
        ImageMatrix[3][4] = 0x7E00; ImageMatrix[3][5] = 0x7E00; ImageMatrix[3][6] = 0x0000; ImageMatrix[3][7] = 0x0000;
        ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x7E00; ImageMatrix[4][3] = 0x7E00;
        ImageMatrix[5][5] = 0x0000; ImageMatrix[5][6] = 0x0000;
        ImageMatrix[7][2] = 0x7E00; ImageMatrix[7][3] = 0x7E00; ImageMatrix[7][4] = 0x7E00; ImageMatrix[7][5] = 0x0000; ImageMatrix[7][6] = 0x0000; ImageMatrix[7][7] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 31:
        ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][6] = 0x7E00; ImageMatrix[0][7] = 0x7E00;
        ImageMatrix[1][0] = 0x7E00;
        ImageMatrix[3][2] = 0x7E00; ImageMatrix[3][3] = 0x7E00; ImageMatrix[3][5] = 0x0000;
        ImageMatrix[4][2] = 0x0000; ImageMatrix[4][4] = 0x7E00; ImageMatrix[4][5] = 0x7E00;
        ImageMatrix[6][7] = 0x7E00;
        ImageMatrix[7][0] = 0x7E00; ImageMatrix[7][1] = 0x7E00; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 32:
        ImageMatrix[0][5] = 0x0000; ImageMatrix[0][6] = 0x0000; ImageMatrix[0][7] = 0x0000;
        ImageMatrix[1][1] = 0x7E00; ImageMatrix[1][2] = 0x7E00; ImageMatrix[1][3] = 0x7E00;
        ImageMatrix[3][0] = 0x7E00; ImageMatrix[3][1] = 0x7E00; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000;
        ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][6] = 0x7E00; ImageMatrix[4][7] = 0x7E00;
        ImageMatrix[6][4] = 0x7E00; ImageMatrix[6][5] = 0x7E00; ImageMatrix[6][6] = 0x7E00;
        ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 33:
        ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][4] = 0x7E00; ImageMatrix[1][5] = 0x7E00;
        ImageMatrix[2][5] = 0x7E00; ImageMatrix[2][6] = 0x7E00; ImageMatrix[2][7] = 0x7E00;
        ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000;
        ImageMatrix[4][5] = 0x0000; ImageMatrix[4][6] = 0x0000;
        ImageMatrix[5][0] = 0x7E00; ImageMatrix[5][1] = 0x7E00; ImageMatrix[5][2] = 0x7E00;
        ImageMatrix[6][2] = 0x7E00; ImageMatrix[6][3] = 0x7E00; ImageMatrix[6][5] = 0x0000; ImageMatrix[6][6] = 0x0000; ImageMatrix[6][7] = 0x0000;
        ImageMatrix[7][0] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 34:
        ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][6] = 0x7E00; ImageMatrix[1][7] = 0x7E00;
        ImageMatrix[2][3] = 0x7E00; ImageMatrix[2][4] = 0x7E00; ImageMatrix[2][6] = 0x0000; ImageMatrix[2][7] = 0x0000;
        ImageMatrix[3][0] = 0x0000;
        ImageMatrix[4][7] = 0x0000;
        ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][3] = 0x7E00; ImageMatrix[5][4] = 0x7E00;
        ImageMatrix[6][0] = 0x7E00; ImageMatrix[6][1] = 0x7E00; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 35:
        ImageMatrix[1][5] = 0x0000; ImageMatrix[1][6] = 0x0000;
        ImageMatrix[2][0] = 0x7E00; ImageMatrix[2][1] = 0x7E00; ImageMatrix[2][2] = 0x7E00; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
        ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][5] = 0x7E00; ImageMatrix[5][6] = 0x7E00; ImageMatrix[5][7] = 0x7E00;
        ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 36:
        ImageMatrix[0][0] = 0x7C00; ImageMatrix[0][1] = 0x7C00; ImageMatrix[0][2] = 0x7C00;
        ImageMatrix[1][7] = 0x0000;
        ImageMatrix[2][0] = 0x0000; ImageMatrix[2][3] = 0x0000;
        ImageMatrix[3][6] = 0x7C00; ImageMatrix[3][7] = 0x7C00;
        ImageMatrix[4][0] = 0x7C00; ImageMatrix[4][1] = 0x7C00;
        ImageMatrix[5][4] = 0x0000; ImageMatrix[5][7] = 0x0000;
        ImageMatrix[6][0] = 0x0000;
        ImageMatrix[7][5] = 0x7C00; ImageMatrix[7][6] = 0x7C00; ImageMatrix[7][7] = 0x7C00;
        Pattern_ID_Frame_Time = 2;
    break;

    case 37:
        ImageMatrix[0][0] = 0x0000; ImageMatrix[0][1] = 0x0000; ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x7C00; ImageMatrix[0][4] = 0x7C00; ImageMatrix[0][5] = 0x7C00;
        ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000;
        ImageMatrix[3][4] = 0x7C00; ImageMatrix[3][5] = 0x7C00; ImageMatrix[3][6] = 0x0000; ImageMatrix[3][7] = 0x0000;
        ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x7C00; ImageMatrix[4][3] = 0x7C00;
        ImageMatrix[5][5] = 0x0000; ImageMatrix[5][6] = 0x0000;
        ImageMatrix[7][2] = 0x7C00; ImageMatrix[7][3] = 0x7C00; ImageMatrix[7][4] = 0x7C00; ImageMatrix[7][5] = 0x0000; ImageMatrix[7][6] = 0x0000; ImageMatrix[7][7] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 38:
        ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][6] = 0x7C00; ImageMatrix[0][7] = 0x7C00;
        ImageMatrix[1][0] = 0x7C00;
        ImageMatrix[3][2] = 0x7C00; ImageMatrix[3][3] = 0x7C00; ImageMatrix[3][5] = 0x0000;
        ImageMatrix[4][2] = 0x0000; ImageMatrix[4][4] = 0x7C00; ImageMatrix[4][5] = 0x7C00;
        ImageMatrix[6][7] = 0x7C00;
        ImageMatrix[7][0] = 0x7C00; ImageMatrix[7][1] = 0x7C00; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 39:
        ImageMatrix[0][5] = 0x0000; ImageMatrix[0][6] = 0x0000; ImageMatrix[0][7] = 0x0000;
        ImageMatrix[1][1] = 0x7C00; ImageMatrix[1][2] = 0x7C00; ImageMatrix[1][3] = 0x7C00;
        ImageMatrix[3][0] = 0x7C00; ImageMatrix[3][1] = 0x7C00; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000;
        ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][6] = 0x7C00; ImageMatrix[4][7] = 0x7C00;
        ImageMatrix[6][4] = 0x7C00; ImageMatrix[6][5] = 0x7C00; ImageMatrix[6][6] = 0x7C00;
        ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 40:
        Pattern_ID_Frame_Time = 2;
    break;

    case 41:
        ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][4] = 0x7C00; ImageMatrix[1][5] = 0x7C00;
        ImageMatrix[2][5] = 0x7C00; ImageMatrix[2][6] = 0x7C00; ImageMatrix[2][7] = 0x7C00;
        ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000;
        ImageMatrix[4][5] = 0x0000; ImageMatrix[4][6] = 0x0000;
        ImageMatrix[5][0] = 0x7C00; ImageMatrix[5][1] = 0x7C00; ImageMatrix[5][2] = 0x7C00;
        ImageMatrix[6][2] = 0x7C00; ImageMatrix[6][3] = 0x7C00; ImageMatrix[6][5] = 0x0000; ImageMatrix[6][6] = 0x0000; ImageMatrix[6][7] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 42:
        ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][6] = 0x7C00; ImageMatrix[1][7] = 0x7C00;
        ImageMatrix[2][3] = 0x7C00; ImageMatrix[2][4] = 0x7C00; ImageMatrix[2][6] = 0x0000; ImageMatrix[2][7] = 0x0000;
        ImageMatrix[3][0] = 0x0000;
        ImageMatrix[4][7] = 0x0000;
        ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][3] = 0x7C00; ImageMatrix[5][4] = 0x7C00;
        ImageMatrix[6][0] = 0x7C00; ImageMatrix[6][1] = 0x7C00; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 43:
        ImageMatrix[1][5] = 0x0000; ImageMatrix[1][6] = 0x0000;
        ImageMatrix[2][0] = 0x7C00; ImageMatrix[2][1] = 0x7C00; ImageMatrix[2][2] = 0x7C00; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
        ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][5] = 0x7C00; ImageMatrix[5][6] = 0x7C00; ImageMatrix[5][7] = 0x7C00;
        ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 44:
        ImageMatrix[1][7] = 0x0000;
        ImageMatrix[2][0] = 0x0000;
        ImageMatrix[5][7] = 0x0000;
        ImageMatrix[6][0] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 45:
        ImageMatrix[1][6] = 0x4010; ImageMatrix[1][7] = 0x4010;
        ImageMatrix[2][0] = 0x4010; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x4010; ImageMatrix[2][4] = 0x4010; ImageMatrix[2][5] = 0x4010;
        ImageMatrix[5][2] = 0x4010; ImageMatrix[5][3] = 0x4010; ImageMatrix[5][4] = 0x4010; ImageMatrix[5][5] = 0x0000; ImageMatrix[5][6] = 0x0000; ImageMatrix[5][7] = 0x4010;
        ImageMatrix[6][0] = 0x4010; ImageMatrix[6][1] = 0x4010;
        Pattern_ID_Frame_Time = 2;
    break;

    case 46:
        ImageMatrix[1][4] = 0x4010; ImageMatrix[1][5] = 0x4010; ImageMatrix[1][7] = 0x0000;
        ImageMatrix[2][0] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][6] = 0x4010; ImageMatrix[2][7] = 0x4010;
        ImageMatrix[5][0] = 0x4010; ImageMatrix[5][1] = 0x4010; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][7] = 0x0000;
        ImageMatrix[6][0] = 0x0000; ImageMatrix[6][2] = 0x4010; ImageMatrix[6][3] = 0x4010;
        Pattern_ID_Frame_Time = 2;
    break;

    case 47:
        ImageMatrix[1][1] = 0x4010; ImageMatrix[1][2] = 0x4010; ImageMatrix[1][3] = 0x4010; ImageMatrix[1][5] = 0x0000; ImageMatrix[1][6] = 0x0000;
        ImageMatrix[2][5] = 0x0000; ImageMatrix[2][6] = 0x0000;
        ImageMatrix[3][0] = 0x4010; ImageMatrix[3][1] = 0x4010;
        ImageMatrix[4][6] = 0x4010; ImageMatrix[4][7] = 0x4010;
        ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000;
        ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][4] = 0x4010; ImageMatrix[6][5] = 0x4010; ImageMatrix[6][6] = 0x4010;
        Pattern_ID_Frame_Time = 2;
    break;

    case 48:
        ImageMatrix[0][6] = 0x4010; ImageMatrix[0][7] = 0x4010;
        ImageMatrix[1][0] = 0x4010; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000;
        ImageMatrix[2][7] = 0x0000;
        ImageMatrix[3][0] = 0x0000; ImageMatrix[3][2] = 0x4010; ImageMatrix[3][3] = 0x4010;
        ImageMatrix[4][4] = 0x4010; ImageMatrix[4][5] = 0x4010; ImageMatrix[4][7] = 0x0000;
        ImageMatrix[5][0] = 0x0000;
        ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000; ImageMatrix[6][7] = 0x4010;
        ImageMatrix[7][0] = 0x4010; ImageMatrix[7][1] = 0x4010;
        Pattern_ID_Frame_Time = 2;
    break;

    case 49:
        ImageMatrix[0][3] = 0x4010; ImageMatrix[0][4] = 0x4010; ImageMatrix[0][5] = 0x4010; ImageMatrix[0][7] = 0x0000;
        ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000;
        ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x4010; ImageMatrix[3][5] = 0x4010; ImageMatrix[3][6] = 0x4010;
        ImageMatrix[4][1] = 0x4010; ImageMatrix[4][2] = 0x4010; ImageMatrix[4][3] = 0x4010; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000; ImageMatrix[4][6] = 0x0000;
        ImageMatrix[6][6] = 0x0000; ImageMatrix[6][7] = 0x0000;
        ImageMatrix[7][0] = 0x0000; ImageMatrix[7][2] = 0x4010; ImageMatrix[7][3] = 0x4010; ImageMatrix[7][4] = 0x4010;
        Pattern_ID_Frame_Time = 2;
    break;

    case 50:
        ImageMatrix[0][0] = 0x4010; ImageMatrix[0][1] = 0x4010; ImageMatrix[0][2] = 0x4010; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000; ImageMatrix[0][6] = 0x0000;
        ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000; ImageMatrix[3][7] = 0x4010;
        ImageMatrix[4][0] = 0x4010; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000;
        ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][5] = 0x4010; ImageMatrix[7][6] = 0x4010; ImageMatrix[7][7] = 0x4010;
        Pattern_ID_Frame_Time = 2;
    break;

    case 51:
        ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000;
        ImageMatrix[2][1] = 0x43E0; ImageMatrix[2][2] = 0x43E0; ImageMatrix[2][3] = 0x43E0;
        ImageMatrix[3][6] = 0x0000;
        ImageMatrix[4][1] = 0x0000;
        ImageMatrix[5][4] = 0x43E0; ImageMatrix[5][5] = 0x43E0; ImageMatrix[5][6] = 0x43E0;
        ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 52:
        ImageMatrix[0][0] = 0x0000; ImageMatrix[0][1] = 0x0000;
        ImageMatrix[1][6] = 0x43E0; ImageMatrix[1][7] = 0x43E0;
        ImageMatrix[2][0] = 0x43E0; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][4] = 0x43E0; ImageMatrix[2][5] = 0x43E0;
        ImageMatrix[3][7] = 0x0000;
        ImageMatrix[4][0] = 0x0000;
        ImageMatrix[5][2] = 0x43E0; ImageMatrix[5][3] = 0x43E0; ImageMatrix[5][5] = 0x0000; ImageMatrix[5][6] = 0x0000; ImageMatrix[5][7] = 0x43E0;
        ImageMatrix[6][0] = 0x43E0; ImageMatrix[6][1] = 0x43E0;
        ImageMatrix[7][6] = 0x0000; ImageMatrix[7][7] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 53:
        ImageMatrix[1][4] = 0x43E0; ImageMatrix[1][5] = 0x43E0; ImageMatrix[1][7] = 0x0000;
        ImageMatrix[2][0] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][6] = 0x43E0; ImageMatrix[2][7] = 0x43E0;
        ImageMatrix[5][0] = 0x43E0; ImageMatrix[5][1] = 0x43E0; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][7] = 0x0000;
        ImageMatrix[6][0] = 0x0000; ImageMatrix[6][2] = 0x43E0; ImageMatrix[6][3] = 0x43E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 54:
        ImageMatrix[1][1] = 0x43E0; ImageMatrix[1][2] = 0x43E0; ImageMatrix[1][3] = 0x43E0; ImageMatrix[1][5] = 0x0000; ImageMatrix[1][6] = 0x0000;
        ImageMatrix[2][5] = 0x0000; ImageMatrix[2][6] = 0x0000;
        ImageMatrix[3][0] = 0x43E0; ImageMatrix[3][1] = 0x43E0;
        ImageMatrix[4][6] = 0x43E0; ImageMatrix[4][7] = 0x43E0;
        ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000;
        ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][4] = 0x43E0; ImageMatrix[6][5] = 0x43E0; ImageMatrix[6][6] = 0x43E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 55:
        ImageMatrix[0][6] = 0x43E0; ImageMatrix[0][7] = 0x43E0;
        ImageMatrix[1][0] = 0x43E0; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000;
        ImageMatrix[2][7] = 0x0000;
        ImageMatrix[3][0] = 0x0000; ImageMatrix[3][2] = 0x43E0; ImageMatrix[3][3] = 0x43E0;
        ImageMatrix[4][4] = 0x43E0; ImageMatrix[4][5] = 0x43E0; ImageMatrix[4][7] = 0x0000;
        ImageMatrix[5][0] = 0x0000;
        ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000; ImageMatrix[6][7] = 0x43E0;
        ImageMatrix[7][0] = 0x43E0; ImageMatrix[7][1] = 0x43E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 56:
        ImageMatrix[0][3] = 0x43E0; ImageMatrix[0][4] = 0x43E0; ImageMatrix[0][5] = 0x43E0; ImageMatrix[0][7] = 0x0000;
        ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000;
        ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x43E0; ImageMatrix[3][5] = 0x43E0; ImageMatrix[3][6] = 0x43E0;
        ImageMatrix[4][1] = 0x43E0; ImageMatrix[4][2] = 0x43E0; ImageMatrix[4][3] = 0x43E0; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000; ImageMatrix[4][6] = 0x0000;
        ImageMatrix[6][6] = 0x0000; ImageMatrix[6][7] = 0x0000;
        ImageMatrix[7][0] = 0x0000; ImageMatrix[7][2] = 0x43E0; ImageMatrix[7][3] = 0x43E0; ImageMatrix[7][4] = 0x43E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 57:
        ImageMatrix[0][0] = 0x43E0; ImageMatrix[0][1] = 0x43E0; ImageMatrix[0][2] = 0x43E0; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000; ImageMatrix[0][6] = 0x0000;
        ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000; ImageMatrix[3][7] = 0x43E0;
        ImageMatrix[4][0] = 0x43E0; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000;
        ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][5] = 0x43E0; ImageMatrix[7][6] = 0x43E0; ImageMatrix[7][7] = 0x43E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 58:
        ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000;
        ImageMatrix[2][1] = 0x4000; ImageMatrix[2][2] = 0x4000; ImageMatrix[2][3] = 0x4000;
        ImageMatrix[3][6] = 0x0000;
        ImageMatrix[4][1] = 0x0000;
        ImageMatrix[5][4] = 0x4000; ImageMatrix[5][5] = 0x4000; ImageMatrix[5][6] = 0x4000;
        ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 59:
        ImageMatrix[0][0] = 0x0000; ImageMatrix[0][1] = 0x0000;
        ImageMatrix[1][6] = 0x4000; ImageMatrix[1][7] = 0x4000;
        ImageMatrix[2][0] = 0x4000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][4] = 0x4000; ImageMatrix[2][5] = 0x4000;
        ImageMatrix[3][7] = 0x0000;
        ImageMatrix[4][0] = 0x0000;
        ImageMatrix[5][2] = 0x4000; ImageMatrix[5][3] = 0x4000; ImageMatrix[5][5] = 0x0000; ImageMatrix[5][6] = 0x0000; ImageMatrix[5][7] = 0x4000;
        ImageMatrix[6][0] = 0x4000; ImageMatrix[6][1] = 0x4000;
        ImageMatrix[7][6] = 0x0000; ImageMatrix[7][7] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 60:
        ImageMatrix[1][4] = 0x4000; ImageMatrix[1][5] = 0x4000; ImageMatrix[1][7] = 0x0000;
        ImageMatrix[2][0] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][6] = 0x4000; ImageMatrix[2][7] = 0x4000;
        ImageMatrix[5][0] = 0x4000; ImageMatrix[5][1] = 0x4000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][7] = 0x0000;
        ImageMatrix[6][0] = 0x0000; ImageMatrix[6][2] = 0x4000; ImageMatrix[6][3] = 0x4000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 61:
        ImageMatrix[1][1] = 0x4000; ImageMatrix[1][2] = 0x4000; ImageMatrix[1][3] = 0x4000; ImageMatrix[1][5] = 0x0000; ImageMatrix[1][6] = 0x0000;
        ImageMatrix[2][5] = 0x0000; ImageMatrix[2][6] = 0x0000;
        ImageMatrix[3][0] = 0x4000; ImageMatrix[3][1] = 0x4000;
        ImageMatrix[4][6] = 0x4000; ImageMatrix[4][7] = 0x4000;
        ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000;
        ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][4] = 0x4000; ImageMatrix[6][5] = 0x4000; ImageMatrix[6][6] = 0x4000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 62:
        ImageMatrix[0][6] = 0x4000; ImageMatrix[0][7] = 0x4000;
        ImageMatrix[1][0] = 0x4000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000;
        ImageMatrix[2][7] = 0x0000;
        ImageMatrix[3][0] = 0x0000; ImageMatrix[3][2] = 0x4000; ImageMatrix[3][3] = 0x4000;
        ImageMatrix[4][4] = 0x4000; ImageMatrix[4][5] = 0x4000; ImageMatrix[4][7] = 0x0000;
        ImageMatrix[5][0] = 0x0000;
        ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000; ImageMatrix[6][7] = 0x4000;
        ImageMatrix[7][0] = 0x4000; ImageMatrix[7][1] = 0x4000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 63:
        ImageMatrix[0][3] = 0x4000; ImageMatrix[0][4] = 0x4000; ImageMatrix[0][5] = 0x4000; ImageMatrix[0][7] = 0x0000;
        ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000;
        ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x4000; ImageMatrix[3][5] = 0x4000; ImageMatrix[3][6] = 0x4000;
        ImageMatrix[4][1] = 0x4000; ImageMatrix[4][2] = 0x4000; ImageMatrix[4][3] = 0x4000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000; ImageMatrix[4][6] = 0x0000;
        ImageMatrix[6][6] = 0x0000; ImageMatrix[6][7] = 0x0000;
        ImageMatrix[7][0] = 0x0000; ImageMatrix[7][2] = 0x4000; ImageMatrix[7][3] = 0x4000; ImageMatrix[7][4] = 0x4000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 64:
        ImageMatrix[0][0] = 0x4000; ImageMatrix[0][1] = 0x4000; ImageMatrix[0][2] = 0x4000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000; ImageMatrix[0][6] = 0x0000;
        ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000; ImageMatrix[3][7] = 0x4000;
        ImageMatrix[4][0] = 0x4000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000;
        ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][5] = 0x4000; ImageMatrix[7][6] = 0x4000; ImageMatrix[7][7] = 0x4000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 65:
        ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000;
        ImageMatrix[3][6] = 0x0000;
        ImageMatrix[4][1] = 0x0000;
        ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 66:
        ImageMatrix[2][1] = 0x0008; ImageMatrix[2][2] = 0x0008; ImageMatrix[2][3] = 0x0008;
        ImageMatrix[5][4] = 0x0008; ImageMatrix[5][5] = 0x0008; ImageMatrix[5][6] = 0x0008;
        Pattern_ID_Frame_Time = 2;
    break;

    case 67:
        ImageMatrix[0][0] = 0x0000; ImageMatrix[0][1] = 0x0000;
        ImageMatrix[1][6] = 0x0008; ImageMatrix[1][7] = 0x0008;
        ImageMatrix[2][0] = 0x0008; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][4] = 0x0008; ImageMatrix[2][5] = 0x0008;
        ImageMatrix[3][7] = 0x0000;
        ImageMatrix[4][0] = 0x0000;
        ImageMatrix[5][2] = 0x0008; ImageMatrix[5][3] = 0x0008; ImageMatrix[5][5] = 0x0000; ImageMatrix[5][6] = 0x0000; ImageMatrix[5][7] = 0x0008;
        ImageMatrix[6][0] = 0x0008; ImageMatrix[6][1] = 0x0008;
        ImageMatrix[7][6] = 0x0000; ImageMatrix[7][7] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 68:
        ImageMatrix[1][4] = 0x0008; ImageMatrix[1][5] = 0x0008; ImageMatrix[1][7] = 0x0000;
        ImageMatrix[2][0] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][6] = 0x0008; ImageMatrix[2][7] = 0x0008;
        ImageMatrix[5][0] = 0x0008; ImageMatrix[5][1] = 0x0008; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][7] = 0x0000;
        ImageMatrix[6][0] = 0x0000; ImageMatrix[6][2] = 0x0008; ImageMatrix[6][3] = 0x0008;
        Pattern_ID_Frame_Time = 2;
    break;

    case 69:
        ImageMatrix[1][1] = 0x0008; ImageMatrix[1][2] = 0x0008; ImageMatrix[1][3] = 0x0008; ImageMatrix[1][5] = 0x0000; ImageMatrix[1][6] = 0x0000;
        ImageMatrix[2][5] = 0x0000; ImageMatrix[2][6] = 0x0000;
        ImageMatrix[3][0] = 0x0008; ImageMatrix[3][1] = 0x0008;
        ImageMatrix[4][6] = 0x0008; ImageMatrix[4][7] = 0x0008;
        ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000;
        ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][4] = 0x0008; ImageMatrix[6][5] = 0x0008; ImageMatrix[6][6] = 0x0008;
        Pattern_ID_Frame_Time = 2;
    break;

    case 70:
        ImageMatrix[0][6] = 0x0008; ImageMatrix[0][7] = 0x0008;
        ImageMatrix[1][0] = 0x0008; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000;
        ImageMatrix[2][7] = 0x0000;
        ImageMatrix[3][0] = 0x0000; ImageMatrix[3][2] = 0x0008; ImageMatrix[3][3] = 0x0008;
        ImageMatrix[4][4] = 0x0008; ImageMatrix[4][5] = 0x0008; ImageMatrix[4][7] = 0x0000;
        ImageMatrix[5][0] = 0x0000;
        ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000; ImageMatrix[6][7] = 0x0008;
        ImageMatrix[7][0] = 0x0008; ImageMatrix[7][1] = 0x0008;
        Pattern_ID_Frame_Time = 2;
    break;

    case 71:
        ImageMatrix[0][0] = 0x0008; ImageMatrix[0][1] = 0x0008; ImageMatrix[0][2] = 0x0008; ImageMatrix[0][3] = 0x0008; ImageMatrix[0][6] = 0x0000; ImageMatrix[0][7] = 0x0000;
        ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000;
        ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][6] = 0x0008; ImageMatrix[3][7] = 0x0008;
        ImageMatrix[4][0] = 0x0008; ImageMatrix[4][1] = 0x0008; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000; ImageMatrix[4][6] = 0x0000;
        ImageMatrix[6][6] = 0x0000; ImageMatrix[6][7] = 0x0000;
        ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][4] = 0x0008; ImageMatrix[7][5] = 0x0008; ImageMatrix[7][6] = 0x0008; ImageMatrix[7][7] = 0x0008;
        Pattern_ID_Frame_Time = 2;
    break;

    case 72:
        ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000;
        ImageMatrix[2][1] = 0x7FE0; ImageMatrix[2][2] = 0x7FE0; ImageMatrix[2][3] = 0x7FE0;
        ImageMatrix[3][6] = 0x0000;
        ImageMatrix[4][1] = 0x0000;
        ImageMatrix[5][4] = 0x7FE0; ImageMatrix[5][5] = 0x7FE0; ImageMatrix[5][6] = 0x7FE0;
        ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 73:
        ImageMatrix[0][0] = 0x0000; ImageMatrix[0][1] = 0x0000;
        ImageMatrix[1][6] = 0x7FE0; ImageMatrix[1][7] = 0x7FE0;
        ImageMatrix[2][0] = 0x7FE0; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][4] = 0x7FE0; ImageMatrix[2][5] = 0x7FE0;
        ImageMatrix[3][7] = 0x0000;
        ImageMatrix[4][0] = 0x0000;
        ImageMatrix[5][2] = 0x7FE0; ImageMatrix[5][3] = 0x7FE0; ImageMatrix[5][5] = 0x0000; ImageMatrix[5][6] = 0x0000; ImageMatrix[5][7] = 0x7FE0;
        ImageMatrix[6][0] = 0x7FE0; ImageMatrix[6][1] = 0x7FE0;
        ImageMatrix[7][6] = 0x0000; ImageMatrix[7][7] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 74:
        ImageMatrix[1][4] = 0x7FE0; ImageMatrix[1][5] = 0x7FE0; ImageMatrix[1][7] = 0x0000;
        ImageMatrix[2][0] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][6] = 0x7FE0; ImageMatrix[2][7] = 0x7FE0;
        ImageMatrix[5][0] = 0x7FE0; ImageMatrix[5][1] = 0x7FE0; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][7] = 0x0000;
        ImageMatrix[6][0] = 0x0000; ImageMatrix[6][2] = 0x7FE0; ImageMatrix[6][3] = 0x7FE0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 75:
        ImageMatrix[1][1] = 0x7FE0; ImageMatrix[1][2] = 0x7FE0; ImageMatrix[1][3] = 0x7FE0; ImageMatrix[1][5] = 0x0000; ImageMatrix[1][6] = 0x0000;
        ImageMatrix[2][5] = 0x0000; ImageMatrix[2][6] = 0x0000;
        ImageMatrix[3][0] = 0x7FE0; ImageMatrix[3][1] = 0x7FE0;
        ImageMatrix[4][6] = 0x7FE0; ImageMatrix[4][7] = 0x7FE0;
        ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000;
        ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][4] = 0x7FE0; ImageMatrix[6][5] = 0x7FE0; ImageMatrix[6][6] = 0x7FE0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 76:
        Pattern_ID_Frame_Time = 2;
    break;

    case 77:
        ImageMatrix[0][6] = 0x7FE0; ImageMatrix[0][7] = 0x7FE0;
        ImageMatrix[1][0] = 0x7FE0; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000;
        ImageMatrix[2][7] = 0x0000;
        ImageMatrix[3][0] = 0x0000; ImageMatrix[3][2] = 0x7FE0; ImageMatrix[3][3] = 0x7FE0;
        ImageMatrix[4][4] = 0x7FE0; ImageMatrix[4][5] = 0x7FE0; ImageMatrix[4][7] = 0x0000;
        ImageMatrix[5][0] = 0x0000;
        ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000; ImageMatrix[6][7] = 0x7FE0;
        ImageMatrix[7][0] = 0x7FE0; ImageMatrix[7][1] = 0x7FE0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 78:
        ImageMatrix[0][3] = 0x7FE0; ImageMatrix[0][4] = 0x7FE0; ImageMatrix[0][5] = 0x7FE0; ImageMatrix[0][7] = 0x0000;
        ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000;
        ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x7FE0; ImageMatrix[3][5] = 0x7FE0; ImageMatrix[3][6] = 0x7FE0;
        ImageMatrix[4][1] = 0x7FE0; ImageMatrix[4][2] = 0x7FE0; ImageMatrix[4][3] = 0x7FE0; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000; ImageMatrix[4][6] = 0x0000;
        ImageMatrix[6][6] = 0x0000; ImageMatrix[6][7] = 0x0000;
        ImageMatrix[7][0] = 0x0000; ImageMatrix[7][2] = 0x7FE0; ImageMatrix[7][3] = 0x7FE0; ImageMatrix[7][4] = 0x7FE0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 79:
        ImageMatrix[0][0] = 0x7FE0; ImageMatrix[0][1] = 0x7FE0; ImageMatrix[0][2] = 0x7FE0; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000; ImageMatrix[0][6] = 0x0000;
        ImageMatrix[3][4] = 0x0000; ImageMatrix[3][7] = 0x7FE0;
        ImageMatrix[4][0] = 0x7FE0; ImageMatrix[4][3] = 0x0000;
        ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][5] = 0x7FE0; ImageMatrix[7][6] = 0x7FE0; ImageMatrix[7][7] = 0x7FE0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 80:
        ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000;
        ImageMatrix[2][1] = 0x4100; ImageMatrix[2][2] = 0x4100; ImageMatrix[2][3] = 0x4100;
        ImageMatrix[3][5] = 0x0000; ImageMatrix[3][6] = 0x0000;
        ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000;
        ImageMatrix[5][4] = 0x4100; ImageMatrix[5][5] = 0x4100; ImageMatrix[5][6] = 0x4100;
        ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 81:
        ImageMatrix[0][0] = 0x0000; ImageMatrix[0][1] = 0x0000;
        ImageMatrix[1][6] = 0x4100; ImageMatrix[1][7] = 0x4100;
        ImageMatrix[2][0] = 0x4100; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][4] = 0x4100; ImageMatrix[2][5] = 0x4100;
        ImageMatrix[3][7] = 0x0000;
        ImageMatrix[4][0] = 0x0000;
        ImageMatrix[5][2] = 0x4100; ImageMatrix[5][3] = 0x4100; ImageMatrix[5][5] = 0x0000; ImageMatrix[5][6] = 0x0000; ImageMatrix[5][7] = 0x4100;
        ImageMatrix[6][0] = 0x4100; ImageMatrix[6][1] = 0x4100;
        ImageMatrix[7][6] = 0x0000; ImageMatrix[7][7] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 82:
        ImageMatrix[1][4] = 0x4100; ImageMatrix[1][5] = 0x4100; ImageMatrix[1][7] = 0x0000;
        ImageMatrix[2][0] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][6] = 0x4100; ImageMatrix[2][7] = 0x4100;
        ImageMatrix[5][0] = 0x4100; ImageMatrix[5][1] = 0x4100; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][7] = 0x0000;
        ImageMatrix[6][0] = 0x0000; ImageMatrix[6][2] = 0x4100; ImageMatrix[6][3] = 0x4100;
        Pattern_ID_Frame_Time = 2;
    break;

    case 83:
        ImageMatrix[1][1] = 0x4100; ImageMatrix[1][2] = 0x4100; ImageMatrix[1][3] = 0x4100; ImageMatrix[1][5] = 0x0000; ImageMatrix[1][6] = 0x0000;
        ImageMatrix[2][5] = 0x0000; ImageMatrix[2][6] = 0x0000;
        ImageMatrix[3][0] = 0x4100; ImageMatrix[3][1] = 0x4100;
        ImageMatrix[4][6] = 0x4100; ImageMatrix[4][7] = 0x4100;
        ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000;
        ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][4] = 0x4100; ImageMatrix[6][5] = 0x4100; ImageMatrix[6][6] = 0x4100;
        Pattern_ID_Frame_Time = 2;
    break;

    case 84:
        ImageMatrix[0][6] = 0x4100; ImageMatrix[0][7] = 0x4100;
        ImageMatrix[1][0] = 0x4100; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000;
        ImageMatrix[2][7] = 0x0000;
        ImageMatrix[3][0] = 0x0000; ImageMatrix[3][2] = 0x4100; ImageMatrix[3][3] = 0x4100;
        ImageMatrix[4][4] = 0x4100; ImageMatrix[4][5] = 0x4100; ImageMatrix[4][7] = 0x0000;
        ImageMatrix[5][0] = 0x0000;
        ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000; ImageMatrix[6][7] = 0x4100;
        ImageMatrix[7][0] = 0x4100; ImageMatrix[7][1] = 0x4100;
        Pattern_ID_Frame_Time = 2;
    break;

    case 85:
        ImageMatrix[0][3] = 0x4100; ImageMatrix[0][4] = 0x4100; ImageMatrix[0][5] = 0x4100; ImageMatrix[0][7] = 0x0000;
        ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000;
        ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][4] = 0x4100; ImageMatrix[3][5] = 0x4100;
        ImageMatrix[4][2] = 0x4100; ImageMatrix[4][3] = 0x4100; ImageMatrix[4][5] = 0x0000; ImageMatrix[4][6] = 0x0000;
        ImageMatrix[6][6] = 0x0000; ImageMatrix[6][7] = 0x0000;
        ImageMatrix[7][0] = 0x0000; ImageMatrix[7][2] = 0x4100; ImageMatrix[7][3] = 0x4100; ImageMatrix[7][4] = 0x4100;
        Pattern_ID_Frame_Time = 2;
    break;

    case 86:
        ImageMatrix[0][1] = 0x4100; ImageMatrix[0][2] = 0x4100; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000; ImageMatrix[0][6] = 0x0000;
        ImageMatrix[3][3] = 0x0000; ImageMatrix[3][6] = 0x4100;
        ImageMatrix[4][1] = 0x4100; ImageMatrix[4][4] = 0x0000;
        ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][5] = 0x4100; ImageMatrix[7][6] = 0x4100;
        Pattern_ID_Frame_Time = 2;
    break;

    case 87:
        ImageMatrix[0][0] = 0x4100; ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000;
        ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000; ImageMatrix[3][7] = 0x4100;
        ImageMatrix[4][0] = 0x4100; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000;
        ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000; ImageMatrix[7][7] = 0x4100;
        Pattern_ID_Frame_Time = 2;
    break;

    case 88:
        ImageMatrix[0][1] = 0x0000;
        ImageMatrix[3][6] = 0x0000;
        ImageMatrix[4][1] = 0x0000;
        ImageMatrix[7][6] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    default:
        Pattern_ID_Frame_Time = 1;
        Pattern_ID_Frame_Number = 0;
    break;
    }
}

// Pattern = SPIRAL_SWIPE
void Pattern_8_SPIRAL_SWIPE(void)
{
    switch (Pattern_ID_Frame_Number)
    {
    case 1:
        ImageMatrix[0][0] = 0x0000; ImageMatrix[0][1] = 0x0000; ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
        ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
        ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x7C00; ImageMatrix[2][2] = 0x7C00; ImageMatrix[2][3] = 0x7FFF; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
        ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
        ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
        ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
        ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
        ImageMatrix[7][0] = 0x7C00; ImageMatrix[7][1] = 0x7C00; ImageMatrix[7][2] = 0x7FFF; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 2:
        ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
        ImageMatrix[3][0] = 0x0000;
        ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 3:
        ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000;
        ImageMatrix[7][5] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 4:
        ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
        ImageMatrix[4][0] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 5:
        ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 6:
        ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
        ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 7:
        ImageMatrix[0][0] = 0x7C00; ImageMatrix[0][1] = 0x7C00; ImageMatrix[0][2] = 0x7C00; ImageMatrix[0][3] = 0x7C00; ImageMatrix[0][4] = 0x7FFF;
        ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x7C00; ImageMatrix[5][3] = 0x7C00; ImageMatrix[5][4] = 0x7C00; ImageMatrix[5][5] = 0x7C00;
        Pattern_ID_Frame_Time = 2;
    break;

    case 8:
        ImageMatrix[0][4] = 0x7C00; ImageMatrix[0][5] = 0x7C00;
        ImageMatrix[1][0] = 0x7C00; ImageMatrix[1][1] = 0x7FFF; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000;
        ImageMatrix[5][5] = 0x7C00;
        ImageMatrix[6][0] = 0x7C00; ImageMatrix[6][1] = 0x7C00; ImageMatrix[6][2] = 0x7C00; ImageMatrix[6][3] = 0x7C00;
        Pattern_ID_Frame_Time = 2;
    break;

    case 9:
        ImageMatrix[1][3] = 0x7C00; ImageMatrix[1][4] = 0x7C00; ImageMatrix[1][5] = 0x7C00;
        ImageMatrix[2][0] = 0x7C00;
        ImageMatrix[6][3] = 0x7C00; ImageMatrix[6][4] = 0x7C00; ImageMatrix[6][5] = 0x7C00;
        Pattern_ID_Frame_Time = 2;
    break;

    case 10:
        ImageMatrix[2][1] = 0x7C00; ImageMatrix[2][2] = 0x7C00; ImageMatrix[2][3] = 0x7C00;
        ImageMatrix[7][0] = 0x7C00; ImageMatrix[7][1] = 0x7C00; ImageMatrix[7][2] = 0x7C00;
        Pattern_ID_Frame_Time = 2;
    break;

    case 11:
        ImageMatrix[2][3] = 0x7C00; ImageMatrix[2][4] = 0x7C00; ImageMatrix[2][5] = 0x7C00;
        ImageMatrix[3][0] = 0x7C00;
        ImageMatrix[7][2] = 0x7C00; ImageMatrix[7][3] = 0x7C00; ImageMatrix[7][4] = 0x7C00; ImageMatrix[7][5] = 0x7C00;
        Pattern_ID_Frame_Time = 2;
    break;

    case 12:
        ImageMatrix[3][0] = 0x7C00; ImageMatrix[3][1] = 0x7C00; ImageMatrix[3][2] = 0x7C00; ImageMatrix[3][3] = 0x7C00;
        ImageMatrix[7][5] = 0x7C00;
        Pattern_ID_Frame_Time = 2;
    break;

    case 13:
        ImageMatrix[3][3] = 0x7C00; ImageMatrix[3][4] = 0x7C00; ImageMatrix[3][5] = 0x7C00;
        ImageMatrix[4][0] = 0x7C00;
        Pattern_ID_Frame_Time = 2;
    break;

    case 14:
        ImageMatrix[4][0] = 0x7C00; ImageMatrix[4][1] = 0x7C00; ImageMatrix[4][2] = 0x7C00; ImageMatrix[4][3] = 0x7C00; ImageMatrix[4][4] = 0x7C00;
        Pattern_ID_Frame_Time = 2;
    break;

    case 15:
        ImageMatrix[4][4] = 0x7C00; ImageMatrix[4][5] = 0x7C00;
        ImageMatrix[5][0] = 0x7C00; ImageMatrix[5][1] = 0x7C00;
        Pattern_ID_Frame_Time = 2;
    break;

    case 16:
        ImageMatrix[0][0] = 0x401F; ImageMatrix[0][1] = 0x401F; ImageMatrix[0][2] = 0x401F; ImageMatrix[0][3] = 0x401F; ImageMatrix[0][4] = 0x0010;
        ImageMatrix[5][1] = 0x7C00; ImageMatrix[5][2] = 0x401F; ImageMatrix[5][3] = 0x401F; ImageMatrix[5][4] = 0x401F; ImageMatrix[5][5] = 0x401F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 17:
        ImageMatrix[0][4] = 0x401F; ImageMatrix[0][5] = 0x401F;
        ImageMatrix[1][0] = 0x401F; ImageMatrix[1][1] = 0x0010; ImageMatrix[1][2] = 0x7C00; ImageMatrix[1][3] = 0x7C00;
        ImageMatrix[5][5] = 0x401F;
        ImageMatrix[6][0] = 0x401F; ImageMatrix[6][1] = 0x401F; ImageMatrix[6][2] = 0x401F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 18:
        ImageMatrix[1][3] = 0x401F; ImageMatrix[1][4] = 0x0010; ImageMatrix[1][5] = 0x401F;
        ImageMatrix[2][0] = 0x401F;
        ImageMatrix[6][2] = 0x401F; ImageMatrix[6][3] = 0x401F; ImageMatrix[6][4] = 0x401F; ImageMatrix[6][5] = 0x401F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 19:
        ImageMatrix[2][0] = 0x401F; ImageMatrix[2][1] = 0x401F; ImageMatrix[2][2] = 0x401F; ImageMatrix[2][3] = 0x401F;
        ImageMatrix[6][5] = 0x401F;
        ImageMatrix[7][0] = 0x401F; ImageMatrix[7][1] = 0x401F; ImageMatrix[7][2] = 0x401F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 20:
        ImageMatrix[2][1] = 0x0010; ImageMatrix[2][2] = 0x7C1F; ImageMatrix[2][3] = 0x401F; ImageMatrix[2][4] = 0x401F; ImageMatrix[2][5] = 0x401F;
        ImageMatrix[3][0] = 0x401F;
        ImageMatrix[7][0] = 0x401F; ImageMatrix[7][1] = 0x401F; ImageMatrix[7][2] = 0x401F; ImageMatrix[7][3] = 0x401F; ImageMatrix[7][4] = 0x401F; ImageMatrix[7][5] = 0x401F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 21:
        ImageMatrix[3][0] = 0x401F; ImageMatrix[3][1] = 0x401F; ImageMatrix[3][2] = 0x401F; ImageMatrix[3][3] = 0x401F;
        ImageMatrix[7][5] = 0x401F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 22:
        ImageMatrix[3][3] = 0x401F; ImageMatrix[3][4] = 0x401F; ImageMatrix[3][5] = 0x401F;
        ImageMatrix[4][0] = 0x401F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 23:
        ImageMatrix[4][0] = 0x401F; ImageMatrix[4][1] = 0x401F; ImageMatrix[4][2] = 0x401F; ImageMatrix[4][3] = 0x401F; ImageMatrix[4][4] = 0x401F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 24:
        ImageMatrix[4][4] = 0x401F; ImageMatrix[4][5] = 0x401F;
        ImageMatrix[5][0] = 0x401F; ImageMatrix[5][1] = 0x401F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 25:
        ImageMatrix[0][0] = 0x0010; ImageMatrix[0][1] = 0x0010; ImageMatrix[0][2] = 0x0010; ImageMatrix[0][3] = 0x0010; ImageMatrix[0][4] = 0x7C1F;
        ImageMatrix[5][1] = 0x401F; ImageMatrix[5][2] = 0x0010; ImageMatrix[5][3] = 0x0010; ImageMatrix[5][4] = 0x0010; ImageMatrix[5][5] = 0x0010;
        Pattern_ID_Frame_Time = 2;
    break;

    case 26:
        ImageMatrix[0][4] = 0x0010; ImageMatrix[0][5] = 0x0010;
        ImageMatrix[1][0] = 0x0010; ImageMatrix[1][1] = 0x7C1F; ImageMatrix[1][2] = 0x401F; ImageMatrix[1][3] = 0x401F;
        ImageMatrix[5][5] = 0x0010;
        ImageMatrix[6][0] = 0x0010; ImageMatrix[6][1] = 0x0010; ImageMatrix[6][2] = 0x0010;
        Pattern_ID_Frame_Time = 2;
    break;

    case 27:
        ImageMatrix[1][3] = 0x0010; ImageMatrix[1][4] = 0x7C1F; ImageMatrix[1][5] = 0x0010;
        ImageMatrix[2][0] = 0x0010;
        ImageMatrix[6][2] = 0x0010; ImageMatrix[6][3] = 0x0010; ImageMatrix[6][4] = 0x0010; ImageMatrix[6][5] = 0x0010;
        Pattern_ID_Frame_Time = 2;
    break;

    case 28:
        ImageMatrix[2][0] = 0x0010; ImageMatrix[2][1] = 0x0010; ImageMatrix[2][2] = 0x0010; ImageMatrix[2][3] = 0x0010;
        ImageMatrix[6][5] = 0x0010;
        ImageMatrix[7][0] = 0x0010; ImageMatrix[7][1] = 0x0010; ImageMatrix[7][2] = 0x0010;
        Pattern_ID_Frame_Time = 2;
    break;

    case 29:
        ImageMatrix[2][3] = 0x0010; ImageMatrix[2][4] = 0x0010; ImageMatrix[2][5] = 0x0010;
        ImageMatrix[3][0] = 0x0010;
        ImageMatrix[7][2] = 0x0010; ImageMatrix[7][3] = 0x0010; ImageMatrix[7][4] = 0x0010; ImageMatrix[7][5] = 0x0010;
        Pattern_ID_Frame_Time = 2;
    break;

    case 30:
        ImageMatrix[3][0] = 0x0010; ImageMatrix[3][1] = 0x0010; ImageMatrix[3][2] = 0x0010; ImageMatrix[3][3] = 0x0010;
        ImageMatrix[7][5] = 0x0010;
        Pattern_ID_Frame_Time = 2;
    break;

    case 31:
        ImageMatrix[3][3] = 0x0010; ImageMatrix[3][4] = 0x0010; ImageMatrix[3][5] = 0x0010;
        ImageMatrix[4][0] = 0x0010;
        Pattern_ID_Frame_Time = 2;
    break;

    case 32:
        ImageMatrix[4][0] = 0x0010; ImageMatrix[4][1] = 0x0010; ImageMatrix[4][2] = 0x0010; ImageMatrix[4][3] = 0x0010; ImageMatrix[4][4] = 0x0010;
        Pattern_ID_Frame_Time = 2;
    break;

    case 33:
        ImageMatrix[4][4] = 0x0010; ImageMatrix[4][5] = 0x0010;
        ImageMatrix[5][0] = 0x0010; ImageMatrix[5][1] = 0x0010;
        Pattern_ID_Frame_Time = 2;
    break;

    case 34:
        ImageMatrix[0][0] = 0x7C1F; ImageMatrix[0][1] = 0x7C1F; ImageMatrix[0][2] = 0x7C1F; ImageMatrix[0][3] = 0x7C1F; ImageMatrix[0][4] = 0x03E0;
        ImageMatrix[5][1] = 0x0010; ImageMatrix[5][2] = 0x7C1F; ImageMatrix[5][3] = 0x7C1F; ImageMatrix[5][4] = 0x7C1F; ImageMatrix[5][5] = 0x7C1F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 35:
        ImageMatrix[0][4] = 0x7C1F; ImageMatrix[0][5] = 0x7C1F;
        ImageMatrix[1][0] = 0x7C1F; ImageMatrix[1][1] = 0x03E0; ImageMatrix[1][2] = 0x0010; ImageMatrix[1][3] = 0x0010;
        ImageMatrix[5][5] = 0x7C1F;
        ImageMatrix[6][0] = 0x7C1F; ImageMatrix[6][1] = 0x7C1F; ImageMatrix[6][2] = 0x7C1F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 36:
        ImageMatrix[1][3] = 0x7C1F; ImageMatrix[1][4] = 0x03E0; ImageMatrix[1][5] = 0x7C1F;
        ImageMatrix[2][0] = 0x7C1F;
        ImageMatrix[6][2] = 0x7C1F; ImageMatrix[6][3] = 0x7C1F; ImageMatrix[6][4] = 0x7C1F; ImageMatrix[6][5] = 0x7C1F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 37:
        ImageMatrix[2][0] = 0x7C1F; ImageMatrix[2][1] = 0x7C1F; ImageMatrix[2][2] = 0x7C1F; ImageMatrix[2][3] = 0x7C1F;
        ImageMatrix[6][5] = 0x7C1F;
        ImageMatrix[7][0] = 0x7C1F; ImageMatrix[7][1] = 0x7C1F; ImageMatrix[7][2] = 0x7C1F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 38:
        ImageMatrix[2][3] = 0x7C1F; ImageMatrix[2][4] = 0x7C1F; ImageMatrix[2][5] = 0x7C1F;
        ImageMatrix[3][0] = 0x7C1F;
        ImageMatrix[7][2] = 0x7C1F; ImageMatrix[7][3] = 0x7C1F; ImageMatrix[7][4] = 0x7C1F; ImageMatrix[7][5] = 0x7C1F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 39:
        ImageMatrix[3][0] = 0x7C1F; ImageMatrix[3][1] = 0x7C1F; ImageMatrix[3][2] = 0x7C1F; ImageMatrix[3][3] = 0x7C1F;
        ImageMatrix[7][5] = 0x7C1F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 40:
        ImageMatrix[3][3] = 0x7C1F; ImageMatrix[3][4] = 0x7C1F; ImageMatrix[3][5] = 0x7C1F;
        ImageMatrix[4][0] = 0x7C1F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 41:
        ImageMatrix[4][0] = 0x7C1F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 42:
        ImageMatrix[4][1] = 0x7C1F; ImageMatrix[4][2] = 0x7C1F; ImageMatrix[4][3] = 0x7C1F; ImageMatrix[4][4] = 0x7C1F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 43:
        ImageMatrix[4][4] = 0x7C1F; ImageMatrix[4][5] = 0x7C1F;
        ImageMatrix[5][0] = 0x7C1F; ImageMatrix[5][1] = 0x7C1F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 44:
        ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x7E00;
        ImageMatrix[5][1] = 0x7C1F; ImageMatrix[5][2] = 0x03E0; ImageMatrix[5][3] = 0x03E0; ImageMatrix[5][4] = 0x03E0; ImageMatrix[5][5] = 0x03E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 45:
        ImageMatrix[0][4] = 0x03E0; ImageMatrix[0][5] = 0x03E0;
        ImageMatrix[1][0] = 0x03E0; ImageMatrix[1][1] = 0x7E00; ImageMatrix[1][2] = 0x7C1F; ImageMatrix[1][3] = 0x7C1F;
        ImageMatrix[5][5] = 0x03E0;
        ImageMatrix[6][0] = 0x03E0; ImageMatrix[6][1] = 0x03E0; ImageMatrix[6][2] = 0x03E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 46:
        ImageMatrix[1][3] = 0x03E0; ImageMatrix[1][4] = 0x7E00; ImageMatrix[1][5] = 0x03E0;
        ImageMatrix[2][0] = 0x03E0;
        ImageMatrix[6][2] = 0x03E0; ImageMatrix[6][3] = 0x03E0; ImageMatrix[6][4] = 0x03E0; ImageMatrix[6][5] = 0x03E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 47:
        ImageMatrix[2][0] = 0x03E0; ImageMatrix[2][1] = 0x03E0; ImageMatrix[2][2] = 0x03E0; ImageMatrix[2][3] = 0x03E0;
        ImageMatrix[6][5] = 0x03E0;
        ImageMatrix[7][0] = 0x03E0; ImageMatrix[7][1] = 0x03E0; ImageMatrix[7][2] = 0x03E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 48:
        ImageMatrix[2][3] = 0x03E0; ImageMatrix[2][4] = 0x03E0; ImageMatrix[2][5] = 0x03E0;
        ImageMatrix[3][0] = 0x03E0;
        ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 49:
        ImageMatrix[3][0] = 0x03E0; ImageMatrix[3][1] = 0x03E0; ImageMatrix[3][2] = 0x03E0; ImageMatrix[3][3] = 0x03E0;
        ImageMatrix[7][5] = 0x03E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 50:
        ImageMatrix[3][3] = 0x03E0; ImageMatrix[3][4] = 0x03E0; ImageMatrix[3][5] = 0x03E0;
        ImageMatrix[4][0] = 0x03E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 51:
        ImageMatrix[4][0] = 0x03E0; ImageMatrix[4][1] = 0x03E0; ImageMatrix[4][2] = 0x03E0; ImageMatrix[4][3] = 0x03E0; ImageMatrix[4][4] = 0x03E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 52:
        ImageMatrix[4][4] = 0x03E0; ImageMatrix[4][5] = 0x03E0;
        ImageMatrix[5][0] = 0x03E0; ImageMatrix[5][1] = 0x03E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 53:
        ImageMatrix[0][0] = 0x7E00; ImageMatrix[0][1] = 0x7E00; ImageMatrix[0][2] = 0x7E00; ImageMatrix[0][3] = 0x7E00; ImageMatrix[0][4] = 0x001F;
        ImageMatrix[5][1] = 0x03E0; ImageMatrix[5][2] = 0x7E00; ImageMatrix[5][3] = 0x7E00; ImageMatrix[5][4] = 0x7E00; ImageMatrix[5][5] = 0x7E00;
        Pattern_ID_Frame_Time = 2;
    break;

    case 54:
        ImageMatrix[0][4] = 0x7E00; ImageMatrix[0][5] = 0x7E00;
        ImageMatrix[1][0] = 0x7E00; ImageMatrix[1][1] = 0x001F; ImageMatrix[1][2] = 0x03E0; ImageMatrix[1][3] = 0x03E0;
        ImageMatrix[5][5] = 0x7E00;
        ImageMatrix[6][0] = 0x7E00; ImageMatrix[6][1] = 0x7E00; ImageMatrix[6][2] = 0x7E00;
        Pattern_ID_Frame_Time = 2;
    break;

    case 55:
        ImageMatrix[1][3] = 0x7E00; ImageMatrix[1][4] = 0x001F; ImageMatrix[1][5] = 0x7E00;
        ImageMatrix[2][0] = 0x7E00;
        ImageMatrix[6][2] = 0x7E00; ImageMatrix[6][3] = 0x7E00; ImageMatrix[6][4] = 0x7E00; ImageMatrix[6][5] = 0x7E00;
        Pattern_ID_Frame_Time = 2;
    break;

    case 56:
        ImageMatrix[2][0] = 0x7E00;
        ImageMatrix[3][1] = 0x7E00; ImageMatrix[3][2] = 0x7E00; ImageMatrix[3][3] = 0x7E00;
        ImageMatrix[6][5] = 0x7E00;
        Pattern_ID_Frame_Time = 2;
    break;

    case 57:
        ImageMatrix[2][4] = 0x03FF; ImageMatrix[2][5] = 0x03FF;
        ImageMatrix[3][0] = 0x7E00; ImageMatrix[3][1] = 0x7E00;
        ImageMatrix[7][3] = 0x7E00; ImageMatrix[7][4] = 0x7E00; ImageMatrix[7][5] = 0x7E00;
        Pattern_ID_Frame_Time = 2;
    break;

    case 58:
        ImageMatrix[2][1] = 0x03FF; ImageMatrix[2][2] = 0x03FF; ImageMatrix[2][3] = 0x03FF; ImageMatrix[2][4] = 0x03FF;
        ImageMatrix[7][0] = 0x7E00; ImageMatrix[7][1] = 0x7E00; ImageMatrix[7][2] = 0x7E00; ImageMatrix[7][3] = 0x7E00;
        Pattern_ID_Frame_Time = 2;
    break;

    case 59:
        ImageMatrix[1][3] = 0x03FF; ImageMatrix[1][4] = 0x03FF; ImageMatrix[1][5] = 0x03FF;
        ImageMatrix[2][0] = 0x03FF; ImageMatrix[2][1] = 0x03FF;
        ImageMatrix[6][3] = 0x7E00; ImageMatrix[6][4] = 0x7E00; ImageMatrix[6][5] = 0x7E00;
        ImageMatrix[7][0] = 0x7E00;
        Pattern_ID_Frame_Time = 2;
    break;

    case 60:
        ImageMatrix[0][4] = 0x7FE0; ImageMatrix[0][5] = 0x03FF;
        ImageMatrix[1][0] = 0x03FF; ImageMatrix[1][1] = 0x03FF; ImageMatrix[1][2] = 0x03FF; ImageMatrix[1][3] = 0x03FF;
        ImageMatrix[5][5] = 0x03FF;
        ImageMatrix[6][0] = 0x03FF; ImageMatrix[6][1] = 0x03FF; ImageMatrix[6][2] = 0x03FF; ImageMatrix[6][3] = 0x7E00;
        Pattern_ID_Frame_Time = 2;
    break;

    case 61:
        ImageMatrix[0][0] = 0x7FE0; ImageMatrix[0][1] = 0x03FF; ImageMatrix[0][2] = 0x03FF; ImageMatrix[0][3] = 0x03FF; ImageMatrix[0][4] = 0x03FF;
        ImageMatrix[5][2] = 0x03FF; ImageMatrix[5][3] = 0x03FF; ImageMatrix[5][4] = 0x03FF; ImageMatrix[5][5] = 0x03FF;
        Pattern_ID_Frame_Time = 2;
    break;

    case 62:
        ImageMatrix[0][0] = 0x03FF;
        ImageMatrix[4][4] = 0x03FF; ImageMatrix[4][5] = 0x03FF;
        ImageMatrix[5][0] = 0x03FF; ImageMatrix[5][1] = 0x03FF; ImageMatrix[5][2] = 0x03FF;
        Pattern_ID_Frame_Time = 2;
    break;

    case 63:
        ImageMatrix[4][1] = 0x03FF; ImageMatrix[4][2] = 0x03FF; ImageMatrix[4][3] = 0x03FF; ImageMatrix[4][4] = 0x03FF;
        Pattern_ID_Frame_Time = 2;
    break;

    case 64:
        ImageMatrix[3][4] = 0x03FF; ImageMatrix[3][5] = 0x03FF;
        ImageMatrix[4][0] = 0x03FF; ImageMatrix[4][1] = 0x03FF;
        Pattern_ID_Frame_Time = 2;
    break;

    case 65:
        ImageMatrix[3][0] = 0x03FF; ImageMatrix[3][1] = 0x03FF; ImageMatrix[3][2] = 0x03FF; ImageMatrix[3][3] = 0x03FF; ImageMatrix[3][4] = 0x03FF;
        ImageMatrix[7][5] = 0x03FF;
        Pattern_ID_Frame_Time = 2;
    break;

    case 66:
        ImageMatrix[2][3] = 0x7FE0; ImageMatrix[2][4] = 0x7FE0; ImageMatrix[2][5] = 0x7FE0;
        ImageMatrix[3][0] = 0x03FF;
        ImageMatrix[7][2] = 0x03FF; ImageMatrix[7][3] = 0x03FF; ImageMatrix[7][4] = 0x03FF; ImageMatrix[7][5] = 0x03FF;
        Pattern_ID_Frame_Time = 2;
    break;

    case 67:
        ImageMatrix[1][3] = 0x7FE0; ImageMatrix[1][4] = 0x7FE0; ImageMatrix[1][5] = 0x7FE0;
        ImageMatrix[2][0] = 0x7FE0; ImageMatrix[2][1] = 0x7FE0; ImageMatrix[2][2] = 0x7FE0; ImageMatrix[2][3] = 0x7FE0;
        ImageMatrix[6][3] = 0x03FF; ImageMatrix[6][4] = 0x03FF; ImageMatrix[6][5] = 0x03FF;
        ImageMatrix[7][0] = 0x03FF; ImageMatrix[7][1] = 0x03FF; ImageMatrix[7][2] = 0x03FF;
        Pattern_ID_Frame_Time = 2;
    break;

    case 68:
        ImageMatrix[0][4] = 0x2008; ImageMatrix[0][5] = 0x7FE0;
        ImageMatrix[1][0] = 0x7FE0; ImageMatrix[1][1] = 0x7FE0; ImageMatrix[1][2] = 0x7FE0; ImageMatrix[1][3] = 0x7FE0;
        ImageMatrix[5][5] = 0x7FE0;
        ImageMatrix[6][0] = 0x7FE0; ImageMatrix[6][1] = 0x7FE0; ImageMatrix[6][2] = 0x7FE0; ImageMatrix[6][3] = 0x03FF;
        Pattern_ID_Frame_Time = 2;
    break;

    case 69:
        ImageMatrix[0][0] = 0x2008; ImageMatrix[0][1] = 0x7FE0; ImageMatrix[0][2] = 0x7FE0; ImageMatrix[0][3] = 0x7FE0; ImageMatrix[0][4] = 0x7FE0;
        ImageMatrix[5][2] = 0x7FE0; ImageMatrix[5][3] = 0x7FE0; ImageMatrix[5][4] = 0x7FE0; ImageMatrix[5][5] = 0x7FE0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 70:
        ImageMatrix[0][0] = 0x7FE0;
        ImageMatrix[4][4] = 0x7FE0; ImageMatrix[4][5] = 0x7FE0;
        ImageMatrix[5][0] = 0x7FE0; ImageMatrix[5][1] = 0x7FE0; ImageMatrix[5][2] = 0x7FE0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 71:
        ImageMatrix[4][1] = 0x7FE0; ImageMatrix[4][2] = 0x7FE0; ImageMatrix[4][3] = 0x7FE0; ImageMatrix[4][4] = 0x7FE0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 72:
        ImageMatrix[3][4] = 0x7FE0; ImageMatrix[3][5] = 0x7FE0;
        ImageMatrix[4][0] = 0x7FE0; ImageMatrix[4][1] = 0x7FE0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 73:
        ImageMatrix[3][1] = 0x7FE0; ImageMatrix[3][2] = 0x7FE0; ImageMatrix[3][3] = 0x7FE0; ImageMatrix[3][4] = 0x7FE0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 74:
        ImageMatrix[2][4] = 0x2008; ImageMatrix[2][5] = 0x2008;
        ImageMatrix[3][0] = 0x7FE0; ImageMatrix[3][1] = 0x7FE0;
        ImageMatrix[7][3] = 0x7FE0; ImageMatrix[7][4] = 0x7FE0; ImageMatrix[7][5] = 0x7FE0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 75:
        ImageMatrix[2][1] = 0x2008; ImageMatrix[2][2] = 0x2008; ImageMatrix[2][3] = 0x2008; ImageMatrix[2][4] = 0x2008;
        ImageMatrix[7][0] = 0x7FE0; ImageMatrix[7][1] = 0x7FE0; ImageMatrix[7][2] = 0x7FE0; ImageMatrix[7][3] = 0x7FE0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 76:
        ImageMatrix[1][3] = 0x2008; ImageMatrix[1][4] = 0x2008; ImageMatrix[1][5] = 0x2008;
        ImageMatrix[2][0] = 0x2008; ImageMatrix[2][1] = 0x2008;
        ImageMatrix[6][3] = 0x7FE0; ImageMatrix[6][4] = 0x7FE0; ImageMatrix[6][5] = 0x7FE0;
        ImageMatrix[7][0] = 0x7FE0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 77:
        ImageMatrix[0][5] = 0x03F0;
        ImageMatrix[1][0] = 0x2008; ImageMatrix[1][1] = 0x2008; ImageMatrix[1][2] = 0x2008; ImageMatrix[1][3] = 0x2008;
        ImageMatrix[6][0] = 0x2008; ImageMatrix[6][1] = 0x2008; ImageMatrix[6][2] = 0x2008; ImageMatrix[6][3] = 0x7FE0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 78:
        ImageMatrix[0][0] = 0x03F0; ImageMatrix[0][1] = 0x2008; ImageMatrix[0][2] = 0x2008; ImageMatrix[0][3] = 0x2008; ImageMatrix[0][4] = 0x2008; ImageMatrix[0][5] = 0x2008;
        ImageMatrix[5][2] = 0x2008; ImageMatrix[5][3] = 0x2008; ImageMatrix[5][4] = 0x2008; ImageMatrix[5][5] = 0x2008;
        ImageMatrix[6][0] = 0x2008;
        Pattern_ID_Frame_Time = 2;
    break;

    case 79:
        ImageMatrix[0][0] = 0x2008;
        ImageMatrix[4][4] = 0x2008; ImageMatrix[4][5] = 0x2008;
        ImageMatrix[5][0] = 0x2008; ImageMatrix[5][1] = 0x2008; ImageMatrix[5][2] = 0x2008;
        Pattern_ID_Frame_Time = 2;
    break;

    case 80:
        ImageMatrix[4][1] = 0x2008; ImageMatrix[4][2] = 0x2008; ImageMatrix[4][3] = 0x2008; ImageMatrix[4][4] = 0x2008;
        Pattern_ID_Frame_Time = 2;
    break;

    case 81:
        ImageMatrix[3][4] = 0x2008; ImageMatrix[3][5] = 0x2008;
        ImageMatrix[4][0] = 0x2008; ImageMatrix[4][1] = 0x2008;
        Pattern_ID_Frame_Time = 2;
    break;

    case 82:
        ImageMatrix[3][1] = 0x2008; ImageMatrix[3][2] = 0x2008; ImageMatrix[3][3] = 0x2008; ImageMatrix[3][4] = 0x2008;
        Pattern_ID_Frame_Time = 2;
    break;

    case 83:
        ImageMatrix[2][4] = 0x03F0; ImageMatrix[2][5] = 0x03F0;
        ImageMatrix[3][0] = 0x2008; ImageMatrix[3][1] = 0x2008;
        ImageMatrix[7][3] = 0x2008; ImageMatrix[7][4] = 0x2008; ImageMatrix[7][5] = 0x2008;
        Pattern_ID_Frame_Time = 2;
    break;

    case 84:
        ImageMatrix[2][1] = 0x03F0; ImageMatrix[2][2] = 0x03F0; ImageMatrix[2][3] = 0x03F0; ImageMatrix[2][4] = 0x03F0;
        ImageMatrix[7][0] = 0x2008; ImageMatrix[7][1] = 0x2008; ImageMatrix[7][2] = 0x2008; ImageMatrix[7][3] = 0x2008;
        Pattern_ID_Frame_Time = 2;
    break;

    case 85:
        ImageMatrix[1][3] = 0x03F0; ImageMatrix[1][4] = 0x03F0; ImageMatrix[1][5] = 0x03F0;
        ImageMatrix[2][0] = 0x03F0; ImageMatrix[2][1] = 0x03F0;
        ImageMatrix[6][3] = 0x2008; ImageMatrix[6][4] = 0x2008; ImageMatrix[6][5] = 0x2008;
        ImageMatrix[7][0] = 0x2008;
        Pattern_ID_Frame_Time = 2;
    break;

    case 86:
        ImageMatrix[0][5] = 0x7FFF;
        ImageMatrix[1][0] = 0x03F0; ImageMatrix[1][1] = 0x03F0; ImageMatrix[1][2] = 0x03F0; ImageMatrix[1][3] = 0x03F0;
        ImageMatrix[6][0] = 0x03F0; ImageMatrix[6][1] = 0x03F0; ImageMatrix[6][2] = 0x03F0; ImageMatrix[6][3] = 0x2008;
        Pattern_ID_Frame_Time = 2;
    break;

    case 87:
        ImageMatrix[0][0] = 0x7FFF; ImageMatrix[0][1] = 0x03F0; ImageMatrix[0][2] = 0x03F0; ImageMatrix[0][3] = 0x03F0; ImageMatrix[0][4] = 0x03F0; ImageMatrix[0][5] = 0x03F0;
        ImageMatrix[5][2] = 0x03F0; ImageMatrix[5][3] = 0x03F0; ImageMatrix[5][4] = 0x03F0; ImageMatrix[5][5] = 0x03F0;
        ImageMatrix[6][0] = 0x03F0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 88:
        ImageMatrix[0][0] = 0x03F0;
        ImageMatrix[4][4] = 0x03F0; ImageMatrix[4][5] = 0x03F0;
        ImageMatrix[5][0] = 0x03F0; ImageMatrix[5][1] = 0x03F0; ImageMatrix[5][2] = 0x03F0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 89:
        ImageMatrix[4][1] = 0x03F0; ImageMatrix[4][2] = 0x03F0; ImageMatrix[4][3] = 0x03F0; ImageMatrix[4][4] = 0x03F0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 90:
        ImageMatrix[3][4] = 0x03F0; ImageMatrix[3][5] = 0x03F0;
        ImageMatrix[4][0] = 0x03F0; ImageMatrix[4][1] = 0x03F0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 91:
        ImageMatrix[3][1] = 0x03F0; ImageMatrix[3][2] = 0x03F0; ImageMatrix[3][3] = 0x03F0; ImageMatrix[3][4] = 0x03F0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 92:
        ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
        ImageMatrix[3][0] = 0x03F0;
        ImageMatrix[7][3] = 0x03F0; ImageMatrix[7][4] = 0x03F0; ImageMatrix[7][5] = 0x03F0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 93:
        ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000;
        ImageMatrix[7][0] = 0x03F0; ImageMatrix[7][1] = 0x03F0; ImageMatrix[7][2] = 0x03F0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 94:
        ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
        ImageMatrix[2][0] = 0x0000;
        ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x03F0; ImageMatrix[6][4] = 0x03F0; ImageMatrix[6][5] = 0x03F0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 95:
        ImageMatrix[0][5] = 0x0000;
        ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000;
        ImageMatrix[5][5] = 0x0000;
        ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 96:
        ImageMatrix[0][0] = 0x0000; ImageMatrix[0][1] = 0x0000; ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000;
        ImageMatrix[5][2] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 97:
        ImageMatrix[4][5] = 0x0000;
        ImageMatrix[5][0] = 0x0000; ImageMatrix[5][1] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 98:
        ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
        ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    default:
        Pattern_ID_Frame_Time = 1;
        Pattern_ID_Frame_Number = 0;
    break;
    }
}


// Pattern = MIDDLE_SWIPE
void Pattern_10_MIDDLE_SWIPE(void)
{
    switch (Pattern_ID_Frame_Number)
    {
    case 1:
        ImageMatrix[0][0] = 0x03FF; ImageMatrix[0][1] = 0x03FF; ImageMatrix[0][2] = 0x03FF; ImageMatrix[0][3] = 0x03FF; ImageMatrix[0][4] = 0x03FF; ImageMatrix[0][5] = 0x03FF;
        ImageMatrix[1][0] = 0x03FF; ImageMatrix[1][1] = 0x03FF; ImageMatrix[1][2] = 0x03FF; ImageMatrix[1][3] = 0x03FF; ImageMatrix[1][4] = 0x03FF; ImageMatrix[1][5] = 0x03FF;
        ImageMatrix[2][0] = 0x03FF; ImageMatrix[2][1] = 0x03FF; ImageMatrix[2][2] = 0x03FF; ImageMatrix[2][3] = 0x03FF; ImageMatrix[2][4] = 0x03FF; ImageMatrix[2][5] = 0x03FF;
        ImageMatrix[3][0] = 0x03FF; ImageMatrix[3][1] = 0x03FF; ImageMatrix[3][2] = 0x03FF; ImageMatrix[3][3] = 0x03FF; ImageMatrix[3][4] = 0x03FF; ImageMatrix[3][5] = 0x03FF;
        ImageMatrix[4][0] = 0x03FF; ImageMatrix[4][1] = 0x03FF; ImageMatrix[4][2] = 0x03FF; ImageMatrix[4][3] = 0x03FF; ImageMatrix[4][4] = 0x03FF; ImageMatrix[4][5] = 0x03FF;
        ImageMatrix[5][0] = 0x03FF; ImageMatrix[5][1] = 0x03FF; ImageMatrix[5][2] = 0x03FF; ImageMatrix[5][3] = 0x03FF; ImageMatrix[5][4] = 0x03FF; ImageMatrix[5][5] = 0x03FF;
        ImageMatrix[6][0] = 0x03FF; ImageMatrix[6][1] = 0x03FF; ImageMatrix[6][2] = 0x03FF; ImageMatrix[6][3] = 0x03FF; ImageMatrix[6][4] = 0x03FF; ImageMatrix[6][5] = 0x03FF;
        ImageMatrix[7][0] = 0x03FF; ImageMatrix[7][1] = 0x03FF; ImageMatrix[7][2] = 0x03FF; ImageMatrix[7][3] = 0x03FF; ImageMatrix[7][4] = 0x03FF; ImageMatrix[7][5] = 0x03FF;
        Pattern_ID_Frame_Time = 2;
    break;

    case 2:
        ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0;
        ImageMatrix[5][0] = 0x03FF; ImageMatrix[5][1] = 0x03FF; ImageMatrix[5][2] = 0x03FF; ImageMatrix[5][3] = 0x03FF;
        Pattern_ID_Frame_Time = 2;
    break;

    case 3:
        ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x03E0;
        ImageMatrix[4][4] = 0x03FF; ImageMatrix[4][5] = 0x03FF;
        ImageMatrix[5][4] = 0x03FF; ImageMatrix[5][5] = 0x03FF;
        Pattern_ID_Frame_Time = 2;
    break;

    case 4:
        ImageMatrix[0][5] = 0x03E0;
        ImageMatrix[1][0] = 0x03FF; ImageMatrix[1][1] = 0x03FF;
        ImageMatrix[4][2] = 0x03E0; ImageMatrix[4][3] = 0x03E0;
        ImageMatrix[6][0] = 0x03FF; ImageMatrix[6][1] = 0x03FF;
        Pattern_ID_Frame_Time = 2;
    break;

    case 5:
        ImageMatrix[1][2] = 0x03E0; ImageMatrix[1][3] = 0x03FF; ImageMatrix[1][4] = 0x03FF;
        ImageMatrix[4][0] = 0x03E0; ImageMatrix[4][1] = 0x03E0;
        ImageMatrix[6][2] = 0x03FF; ImageMatrix[6][3] = 0x03FF;
        Pattern_ID_Frame_Time = 2;
    break;

    case 6:
        ImageMatrix[1][5] = 0x03FF;
        ImageMatrix[2][0] = 0x03FF;
        ImageMatrix[3][4] = 0x03E0; ImageMatrix[3][5] = 0x03E0;
        ImageMatrix[6][4] = 0x03E0; ImageMatrix[6][5] = 0x03E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 7:
        ImageMatrix[2][1] = 0x03FF; ImageMatrix[2][2] = 0x03FF;
        ImageMatrix[3][2] = 0x03E0; ImageMatrix[3][3] = 0x03E0;
        ImageMatrix[7][0] = 0x03E0; ImageMatrix[7][1] = 0x03E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 8:
        ImageMatrix[2][3] = 0x03E0; ImageMatrix[2][4] = 0x03E0;
        ImageMatrix[3][0] = 0x03E0; ImageMatrix[3][1] = 0x03E0;
        ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 9:
        ImageMatrix[0][0] = 0x7C1F; ImageMatrix[0][1] = 0x7C1F;
        ImageMatrix[5][1] = 0x03E0; ImageMatrix[5][2] = 0x03E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 10:
        ImageMatrix[0][0] = 0x7C10; ImageMatrix[0][1] = 0x7C10; ImageMatrix[0][2] = 0x7C10; ImageMatrix[0][3] = 0x7C10; ImageMatrix[0][4] = 0x7C10;
        ImageMatrix[4][5] = 0x03E0;
        ImageMatrix[5][0] = 0x03E0; ImageMatrix[5][1] = 0x03E0; ImageMatrix[5][2] = 0x03E0; ImageMatrix[5][3] = 0x03E0; ImageMatrix[5][4] = 0x03E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 11:
        ImageMatrix[0][5] = 0x7C10;
        ImageMatrix[1][0] = 0x03E0; ImageMatrix[1][1] = 0x03E0;
        ImageMatrix[4][3] = 0x7C10; ImageMatrix[4][4] = 0x7C10;
        ImageMatrix[5][5] = 0x03E0;
        ImageMatrix[6][0] = 0x03E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 12:
        ImageMatrix[1][2] = 0x7C10; ImageMatrix[1][3] = 0x03E0; ImageMatrix[1][4] = 0x03E0;
        ImageMatrix[4][1] = 0x7C10; ImageMatrix[4][2] = 0x7C10;
        ImageMatrix[6][1] = 0x03E0; ImageMatrix[6][2] = 0x03E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 13:
        ImageMatrix[1][5] = 0x03E0;
        ImageMatrix[2][0] = 0x03E0;
        ImageMatrix[3][4] = 0x7C10; ImageMatrix[3][5] = 0x7C10;
        ImageMatrix[4][0] = 0x7C10;
        ImageMatrix[6][3] = 0x7C10; ImageMatrix[6][4] = 0x7C10; ImageMatrix[6][5] = 0x7C10;
        Pattern_ID_Frame_Time = 2;
    break;

    case 14:
        ImageMatrix[2][1] = 0x03FF; ImageMatrix[2][2] = 0x03E0; ImageMatrix[2][3] = 0x7C10;
        ImageMatrix[3][1] = 0x7C10; ImageMatrix[3][2] = 0x7C10; ImageMatrix[3][3] = 0x7C10;
        ImageMatrix[7][0] = 0x7C10; ImageMatrix[7][1] = 0x7C10; ImageMatrix[7][2] = 0x7C10;
        Pattern_ID_Frame_Time = 2;
    break;

    case 15:
        ImageMatrix[0][0] = 0x0010; ImageMatrix[0][1] = 0x0010;
        ImageMatrix[5][1] = 0x7C10; ImageMatrix[5][2] = 0x7C10;
        Pattern_ID_Frame_Time = 2;
    break;

    case 16:
        ImageMatrix[0][2] = 0x0010; ImageMatrix[0][3] = 0x0010; ImageMatrix[0][4] = 0x0010;
        ImageMatrix[4][5] = 0x7C10;
        ImageMatrix[5][0] = 0x7C10; ImageMatrix[5][3] = 0x7C10; ImageMatrix[5][4] = 0x7C10;
        Pattern_ID_Frame_Time = 2;
    break;

    case 17:
        ImageMatrix[0][5] = 0x0010;
        ImageMatrix[1][0] = 0x7C10; ImageMatrix[1][1] = 0x7C10;
        ImageMatrix[4][3] = 0x0010; ImageMatrix[4][4] = 0x0010;
        ImageMatrix[5][5] = 0x03E0;
        ImageMatrix[6][0] = 0x7C10;
        Pattern_ID_Frame_Time = 2;
    break;

    case 18:
        ImageMatrix[1][2] = 0x0010; ImageMatrix[1][3] = 0x7C10; ImageMatrix[1][4] = 0x7C10;
        ImageMatrix[4][1] = 0x0010; ImageMatrix[4][2] = 0x0010;
        ImageMatrix[6][1] = 0x7C10; ImageMatrix[6][2] = 0x7C10;
        Pattern_ID_Frame_Time = 2;
    break;

    case 19:
        ImageMatrix[1][5] = 0x7C10;
        ImageMatrix[2][0] = 0x03E0;
        ImageMatrix[3][4] = 0x0010; ImageMatrix[3][5] = 0x0010;
        ImageMatrix[4][0] = 0x0010;
        ImageMatrix[6][3] = 0x0010; ImageMatrix[6][4] = 0x0010; ImageMatrix[6][5] = 0x0010;
        Pattern_ID_Frame_Time = 2;
    break;

    case 20:
        ImageMatrix[2][1] = 0x03FF; ImageMatrix[2][2] = 0x03E0;
        ImageMatrix[3][2] = 0x0010; ImageMatrix[3][3] = 0x0010;
        ImageMatrix[7][0] = 0x0010; ImageMatrix[7][1] = 0x0010;
        Pattern_ID_Frame_Time = 2;
    break;

    case 21:
        ImageMatrix[0][0] = 0x7FE0; ImageMatrix[0][1] = 0x7FE0;
        ImageMatrix[5][1] = 0x0010; ImageMatrix[5][2] = 0x0010;
        Pattern_ID_Frame_Time = 2;
    break;

    case 22:
        ImageMatrix[0][2] = 0x7FE0; ImageMatrix[0][3] = 0x7FE0; ImageMatrix[0][4] = 0x7FE0;
        ImageMatrix[4][5] = 0x0010;
        ImageMatrix[5][0] = 0x0010; ImageMatrix[5][3] = 0x0010; ImageMatrix[5][4] = 0x7C10;
        Pattern_ID_Frame_Time = 2;
    break;

    case 23:
        ImageMatrix[0][5] = 0x7FE0;
        ImageMatrix[1][0] = 0x0010; ImageMatrix[1][1] = 0x0010;
        ImageMatrix[4][3] = 0x7FE0; ImageMatrix[4][4] = 0x7FE0;
        ImageMatrix[5][5] = 0x03E0;
        ImageMatrix[6][0] = 0x7C10;
        Pattern_ID_Frame_Time = 2;
    break;

    case 24:
        ImageMatrix[1][2] = 0x7FE0; ImageMatrix[1][3] = 0x0010; ImageMatrix[1][4] = 0x0010;
        ImageMatrix[4][1] = 0x7FE0; ImageMatrix[4][2] = 0x7FE0;
        ImageMatrix[6][1] = 0x0010; ImageMatrix[6][2] = 0x0010;
        Pattern_ID_Frame_Time = 2;
    break;

    case 25:
        ImageMatrix[1][5] = 0x0010;
        ImageMatrix[2][0] = 0x03E0;
        ImageMatrix[3][4] = 0x7FE0; ImageMatrix[3][5] = 0x7FE0;
        ImageMatrix[4][0] = 0x7FE0;
        ImageMatrix[6][3] = 0x7FE0; ImageMatrix[6][4] = 0x7FE0; ImageMatrix[6][5] = 0x7FE0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 26:
        ImageMatrix[2][1] = 0x03FF;
        ImageMatrix[3][3] = 0x7FE0;
        ImageMatrix[7][0] = 0x7FE0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 27:
        ImageMatrix[0][0] = 0x2008; ImageMatrix[0][1] = 0x2008;
        ImageMatrix[5][1] = 0x7FE0; ImageMatrix[5][2] = 0x7FE0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 28:
        ImageMatrix[0][2] = 0x2008; ImageMatrix[0][3] = 0x2008; ImageMatrix[0][4] = 0x2008;
        ImageMatrix[4][5] = 0x7FE0;
        ImageMatrix[5][0] = 0x7FE0; ImageMatrix[5][3] = 0x0010; ImageMatrix[5][4] = 0x7C10;
        Pattern_ID_Frame_Time = 2;
    break;

    case 29:
        Pattern_ID_Frame_Time = 2;
    break;

    case 30:
        ImageMatrix[0][5] = 0x2008;
        ImageMatrix[1][0] = 0x7FE0; ImageMatrix[1][1] = 0x7FE0;
        ImageMatrix[4][3] = 0x2008; ImageMatrix[4][4] = 0x2008;
        ImageMatrix[5][5] = 0x03E0;
        ImageMatrix[6][0] = 0x7C10;
        Pattern_ID_Frame_Time = 2;
    break;

    case 31:
        ImageMatrix[1][2] = 0x2008; ImageMatrix[1][3] = 0x7FE0; ImageMatrix[1][4] = 0x7FE0;
        ImageMatrix[4][1] = 0x2008; ImageMatrix[4][2] = 0x2008;
        ImageMatrix[6][1] = 0x0010; ImageMatrix[6][2] = 0x7FE0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 32:
        ImageMatrix[1][5] = 0x7FE0;
        ImageMatrix[2][0] = 0x03E0;
        ImageMatrix[3][4] = 0x2008; ImageMatrix[3][5] = 0x2008;
        ImageMatrix[4][0] = 0x2008;
        ImageMatrix[6][3] = 0x2008; ImageMatrix[6][4] = 0x2008; ImageMatrix[6][5] = 0x2008;
        Pattern_ID_Frame_Time = 2;
    break;

    case 33:
        ImageMatrix[0][0] = 0x4100; ImageMatrix[0][1] = 0x4100;
        ImageMatrix[5][1] = 0x2008; ImageMatrix[5][2] = 0x7FE0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 34:
        ImageMatrix[0][2] = 0x4100; ImageMatrix[0][3] = 0x4100; ImageMatrix[0][4] = 0x4100;
        ImageMatrix[4][5] = 0x2008;
        ImageMatrix[5][0] = 0x2008; ImageMatrix[5][3] = 0x0010; ImageMatrix[5][4] = 0x7C10;
        Pattern_ID_Frame_Time = 2;
    break;

    case 35:
        ImageMatrix[0][5] = 0x4100;
        ImageMatrix[1][0] = 0x2008; ImageMatrix[1][1] = 0x2008;
        ImageMatrix[4][3] = 0x4100; ImageMatrix[4][4] = 0x4100;
        ImageMatrix[5][5] = 0x03E0;
        ImageMatrix[6][0] = 0x7C10;
        Pattern_ID_Frame_Time = 2;
    break;

    case 36:
        ImageMatrix[1][2] = 0x2008; ImageMatrix[1][3] = 0x2008;
        ImageMatrix[4][1] = 0x4100; ImageMatrix[4][2] = 0x4100;
        ImageMatrix[6][1] = 0x0010; ImageMatrix[6][2] = 0x7FE0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 37:
        ImageMatrix[1][4] = 0x2008; ImageMatrix[1][5] = 0x7FE0;
        ImageMatrix[3][5] = 0x4100;
        ImageMatrix[4][0] = 0x4100;
        ImageMatrix[6][3] = 0x2008; ImageMatrix[6][4] = 0x4100;
        Pattern_ID_Frame_Time = 2;
    break;

    case 38:
        ImageMatrix[0][0] = 0x7C00; ImageMatrix[0][1] = 0x7C00;
        ImageMatrix[5][1] = 0x2008; ImageMatrix[5][2] = 0x7FE0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 39:
        ImageMatrix[0][2] = 0x7C00; ImageMatrix[0][3] = 0x7C00; ImageMatrix[0][4] = 0x7C00;
        ImageMatrix[4][5] = 0x4100;
        ImageMatrix[5][0] = 0x4100; ImageMatrix[5][3] = 0x0010; ImageMatrix[5][4] = 0x7C10;
        Pattern_ID_Frame_Time = 2;
    break;

    case 40:
        ImageMatrix[0][5] = 0x7C00;
        ImageMatrix[1][0] = 0x4100; ImageMatrix[1][1] = 0x4100;
        ImageMatrix[4][3] = 0x7C00; ImageMatrix[4][4] = 0x7C00;
        ImageMatrix[5][5] = 0x03E0;
        ImageMatrix[6][0] = 0x7C10;
        Pattern_ID_Frame_Time = 2;
    break;

    case 41:
        ImageMatrix[1][2] = 0x4100; ImageMatrix[1][3] = 0x4100;
        ImageMatrix[4][1] = 0x7C00; ImageMatrix[4][2] = 0x7C00;
        ImageMatrix[6][1] = 0x0010; ImageMatrix[6][2] = 0x7FE0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 42:
        ImageMatrix[0][0] = 0x43E0; ImageMatrix[0][1] = 0x43E0;
        ImageMatrix[1][4] = 0x2008;
        ImageMatrix[4][0] = 0x43E0;
        ImageMatrix[5][1] = 0x2008; ImageMatrix[5][2] = 0x7FE0;
        ImageMatrix[6][3] = 0x2008;
        Pattern_ID_Frame_Time = 2;
    break;

    case 43:
        ImageMatrix[0][2] = 0x43E0; ImageMatrix[0][3] = 0x43E0; ImageMatrix[0][4] = 0x43E0;
        ImageMatrix[4][5] = 0x7C00;
        ImageMatrix[5][0] = 0x4100; ImageMatrix[5][3] = 0x0010; ImageMatrix[5][4] = 0x7C10;
        Pattern_ID_Frame_Time = 2;
    break;

    case 44:
        ImageMatrix[0][5] = 0x43E0;
        ImageMatrix[1][0] = 0x7C00; ImageMatrix[1][1] = 0x7C00;
        ImageMatrix[4][3] = 0x43E0; ImageMatrix[4][4] = 0x43E0;
        ImageMatrix[5][5] = 0x03E0;
        ImageMatrix[6][0] = 0x7C10;
        Pattern_ID_Frame_Time = 2;
    break;

    case 45:
        ImageMatrix[1][2] = 0x7C00; ImageMatrix[1][3] = 0x4100;
        ImageMatrix[4][1] = 0x43E0; ImageMatrix[4][2] = 0x43E0;
        ImageMatrix[6][1] = 0x0010; ImageMatrix[6][2] = 0x7FE0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 46:
        ImageMatrix[0][0] = 0x03FF; ImageMatrix[0][1] = 0x03FF;
        ImageMatrix[5][1] = 0x2008; ImageMatrix[5][2] = 0x7FE0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 47:
        ImageMatrix[0][2] = 0x03FF; ImageMatrix[0][3] = 0x03FF; ImageMatrix[0][4] = 0x03FF;
        ImageMatrix[4][5] = 0x43E0;
        ImageMatrix[5][0] = 0x4100; ImageMatrix[5][3] = 0x0010; ImageMatrix[5][4] = 0x7C10;
        Pattern_ID_Frame_Time = 2;
    break;

    case 48:
        ImageMatrix[0][5] = 0x03FF;
        ImageMatrix[1][0] = 0x43E0;
        ImageMatrix[4][3] = 0x03FF; ImageMatrix[4][4] = 0x03FF;
        ImageMatrix[5][5] = 0x03E0;
        ImageMatrix[6][0] = 0x7C10;
        Pattern_ID_Frame_Time = 2;
    break;

    case 49:
        ImageMatrix[0][0] = 0x7E1F; ImageMatrix[0][1] = 0x7E1F;
        ImageMatrix[1][1] = 0x43E0; ImageMatrix[1][2] = 0x7C00;
        ImageMatrix[4][2] = 0x03FF;
        ImageMatrix[5][1] = 0x2008; ImageMatrix[5][2] = 0x7FE0;
        ImageMatrix[6][1] = 0x0010;
        Pattern_ID_Frame_Time = 2;
    break;

    case 50:
        ImageMatrix[0][2] = 0x7E1F; ImageMatrix[0][3] = 0x7E1F; ImageMatrix[0][4] = 0x7E1F;
        ImageMatrix[4][5] = 0x03FF;
        ImageMatrix[5][0] = 0x4100; ImageMatrix[5][3] = 0x0010; ImageMatrix[5][4] = 0x7C10;
        Pattern_ID_Frame_Time = 2;
    break;

    case 51:
        ImageMatrix[0][5] = 0x7E1F;
        ImageMatrix[1][0] = 0x03FF;
        ImageMatrix[4][4] = 0x03FF;
        ImageMatrix[5][5] = 0x03E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 52:
        ImageMatrix[1][1] = 0x43E0;
        ImageMatrix[4][3] = 0x7E1F;
        ImageMatrix[6][0] = 0x7C10;
        Pattern_ID_Frame_Time = 2;
    break;

    case 53:
        ImageMatrix[0][0] = 0x7FF0; ImageMatrix[0][1] = 0x7FF0;
        ImageMatrix[5][1] = 0x2008; ImageMatrix[5][2] = 0x7FE0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 54:
        ImageMatrix[0][2] = 0x7FF0; ImageMatrix[0][3] = 0x7FF0; ImageMatrix[0][4] = 0x7FF0;
        ImageMatrix[5][0] = 0x4100; ImageMatrix[5][3] = 0x0010;
        Pattern_ID_Frame_Time = 2;
    break;

    case 55:
        ImageMatrix[0][5] = 0x7FF0;
        ImageMatrix[1][0] = 0x7FFF; ImageMatrix[1][1] = 0x43E0; ImageMatrix[1][2] = 0x7C00;
        ImageMatrix[4][2] = 0x7FF0; ImageMatrix[4][3] = 0x7FF0; ImageMatrix[4][4] = 0x7FFF; ImageMatrix[4][5] = 0x7FFF;
        ImageMatrix[5][4] = 0x7C10; ImageMatrix[5][5] = 0x03E0;
        ImageMatrix[6][0] = 0x7C10; ImageMatrix[6][1] = 0x0010;
        Pattern_ID_Frame_Time = 2;
    break;

    case 56:
        ImageMatrix[1][1] = 0x7FFF; ImageMatrix[1][2] = 0x7FFF; ImageMatrix[1][3] = 0x4100; ImageMatrix[1][4] = 0x2008;
        ImageMatrix[4][0] = 0x7FF0; ImageMatrix[4][1] = 0x7FF0; ImageMatrix[4][2] = 0x7FF0; ImageMatrix[4][3] = 0x7FF0;
        ImageMatrix[6][0] = 0x7C10; ImageMatrix[6][1] = 0x0010; ImageMatrix[6][2] = 0x7FE0; ImageMatrix[6][3] = 0x2008;
        Pattern_ID_Frame_Time = 2;
    break;

    case 57:
        ImageMatrix[1][3] = 0x7FFF; ImageMatrix[1][4] = 0x7FFF; ImageMatrix[1][5] = 0x7FE0;
        ImageMatrix[2][0] = 0x03E0;
        ImageMatrix[3][4] = 0x7FF0; ImageMatrix[3][5] = 0x7FF0;
        ImageMatrix[4][0] = 0x7FF0; ImageMatrix[4][1] = 0x7FF0;
        ImageMatrix[6][2] = 0x7FE0; ImageMatrix[6][3] = 0x7FFF; ImageMatrix[6][4] = 0x7FFF; ImageMatrix[6][5] = 0x7C00;
        Pattern_ID_Frame_Time = 2;
    break;

    case 58:
        ImageMatrix[1][5] = 0x7FFF;
        ImageMatrix[2][0] = 0x03E0; ImageMatrix[2][1] = 0x03FF; ImageMatrix[2][2] = 0x03E0;
        ImageMatrix[3][2] = 0x03FF; ImageMatrix[3][3] = 0x7E1F; ImageMatrix[3][4] = 0x7FF0; ImageMatrix[3][5] = 0x7FF0;
        ImageMatrix[6][4] = 0x4100; ImageMatrix[6][5] = 0x7C00;
        ImageMatrix[7][0] = 0x7E1F; ImageMatrix[7][1] = 0x7FF0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 59:
        ImageMatrix[2][1] = 0x03FF; ImageMatrix[2][2] = 0x7FFF; ImageMatrix[2][3] = 0x7FFF; ImageMatrix[2][4] = 0x0010;
        ImageMatrix[3][0] = 0x7C00; ImageMatrix[3][1] = 0x43E0; ImageMatrix[3][2] = 0x03FF; ImageMatrix[3][3] = 0x7E1F;
        ImageMatrix[7][0] = 0x7E1F; ImageMatrix[7][1] = 0x7FF0; ImageMatrix[7][2] = 0x7FF0; ImageMatrix[7][3] = 0x7FF0; ImageMatrix[7][5] = 0x7FF0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 60:
        ImageMatrix[2][3] = 0x7C10; ImageMatrix[2][4] = 0x0010; ImageMatrix[2][5] = 0x7FE0;
        ImageMatrix[3][0] = 0x7C00; ImageMatrix[3][1] = 0x43E0;
        ImageMatrix[7][2] = 0x7FF0; ImageMatrix[7][3] = 0x7FF0; ImageMatrix[7][4] = 0x7FF0; ImageMatrix[7][5] = 0x7FF0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 61:
        ImageMatrix[0][0] = 0x7FFF;
        ImageMatrix[2][3] = 0x7FFF; ImageMatrix[2][4] = 0x0010; ImageMatrix[2][5] = 0x7FE0;
        ImageMatrix[3][0] = 0x7C00; ImageMatrix[3][1] = 0x43E0;
        ImageMatrix[7][2] = 0x7FF0; ImageMatrix[7][3] = 0x7FF0; ImageMatrix[7][4] = 0x7FF0; ImageMatrix[7][5] = 0x7FF0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 62:
        ImageMatrix[2][1] = 0x03FF; ImageMatrix[2][2] = 0x03E0; ImageMatrix[2][3] = 0x7C10; ImageMatrix[2][4] = 0x7FFF;
        ImageMatrix[3][0] = 0x7C00; ImageMatrix[3][1] = 0x43E0; ImageMatrix[3][2] = 0x03FF; ImageMatrix[3][3] = 0x7E1F;
        ImageMatrix[7][0] = 0x7E1F; ImageMatrix[7][1] = 0x7FF0; ImageMatrix[7][2] = 0x7FF0; ImageMatrix[7][3] = 0x7FF0; ImageMatrix[7][5] = 0x7FF0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 63:
        ImageMatrix[0][0] = 0x7FF0;
        ImageMatrix[1][3] = 0x4100; ImageMatrix[1][4] = 0x2008;
        ImageMatrix[2][1] = 0x03FF; ImageMatrix[2][2] = 0x03E0;
        ImageMatrix[3][2] = 0x03FF; ImageMatrix[3][3] = 0x7E1F;
        ImageMatrix[4][0] = 0x7FF0; ImageMatrix[4][1] = 0x7FF0;
        ImageMatrix[6][2] = 0x7FE0; ImageMatrix[6][3] = 0x2008;
        ImageMatrix[7][0] = 0x7E1F; ImageMatrix[7][1] = 0x7FF0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 64:
        ImageMatrix[1][1] = 0x43E0; ImageMatrix[1][2] = 0x7C00; ImageMatrix[1][3] = 0x4100; ImageMatrix[1][4] = 0x2008;
        ImageMatrix[4][0] = 0x7FF0; ImageMatrix[4][1] = 0x7FF0; ImageMatrix[4][2] = 0x7FF0; ImageMatrix[4][3] = 0x7FF0;
        ImageMatrix[6][0] = 0x7C10; ImageMatrix[6][1] = 0x0010; ImageMatrix[6][2] = 0x7FE0; ImageMatrix[6][3] = 0x2008;
        Pattern_ID_Frame_Time = 2;
    break;

    case 65:
        ImageMatrix[1][2] = 0x7C00;
        ImageMatrix[4][2] = 0x7FF0;
        ImageMatrix[6][1] = 0x0010;
        Pattern_ID_Frame_Time = 2;
    break;

    case 66:
        ImageMatrix[0][5] = 0x7E10;
        ImageMatrix[1][0] = 0x03FF;
        ImageMatrix[4][4] = 0x7E10;
        ImageMatrix[5][5] = 0x03E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 67:
        ImageMatrix[0][3] = 0x7E10; ImageMatrix[0][4] = 0x7E10;
        ImageMatrix[4][5] = 0x03FF;
        ImageMatrix[5][4] = 0x7C10;
        Pattern_ID_Frame_Time = 2;
    break;

    case 68:
        ImageMatrix[0][1] = 0x7E10; ImageMatrix[0][2] = 0x7E10;
        ImageMatrix[5][0] = 0x4100; ImageMatrix[5][3] = 0x0010;
        Pattern_ID_Frame_Time = 2;
    break;

    case 69:
        ImageMatrix[0][0] = 0x7E10;
        ImageMatrix[5][1] = 0x2008; ImageMatrix[5][2] = 0x7FE0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 70:
        ImageMatrix[1][0] = 0x03FF; ImageMatrix[1][1] = 0x43E0;
        ImageMatrix[4][3] = 0x7E10;
        ImageMatrix[6][0] = 0x7C10;
        Pattern_ID_Frame_Time = 2;
    break;

    case 71:
        ImageMatrix[0][4] = 0x03FF; ImageMatrix[0][5] = 0x03FF;
        ImageMatrix[4][4] = 0x03FF; ImageMatrix[4][5] = 0x03FF;
        ImageMatrix[5][4] = 0x7C10; ImageMatrix[5][5] = 0x03E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 72:
        ImageMatrix[0][2] = 0x03FF; ImageMatrix[0][3] = 0x03FF;
        ImageMatrix[5][0] = 0x4100; ImageMatrix[5][3] = 0x0010;
        Pattern_ID_Frame_Time = 2;
    break;

    case 73:
        ImageMatrix[0][0] = 0x03FF; ImageMatrix[0][1] = 0x03FF;
        ImageMatrix[5][1] = 0x2008; ImageMatrix[5][2] = 0x7FE0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 74:
        ImageMatrix[1][1] = 0x43E0; ImageMatrix[1][2] = 0x7C00;
        ImageMatrix[4][2] = 0x03FF; ImageMatrix[4][3] = 0x03FF;
        ImageMatrix[6][0] = 0x7C10; ImageMatrix[6][1] = 0x0010;
        Pattern_ID_Frame_Time = 2;
    break;

    case 75:
        ImageMatrix[0][5] = 0x43E0;
        ImageMatrix[1][0] = 0x43E0;
        ImageMatrix[4][4] = 0x43E0; ImageMatrix[4][5] = 0x43E0;
        ImageMatrix[5][4] = 0x7C10; ImageMatrix[5][5] = 0x03E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 76:
        ImageMatrix[0][2] = 0x43E0; ImageMatrix[0][3] = 0x43E0; ImageMatrix[0][4] = 0x43E0;
        ImageMatrix[5][0] = 0x4100; ImageMatrix[5][3] = 0x0010;
        Pattern_ID_Frame_Time = 2;
    break;

    case 77:
        ImageMatrix[0][0] = 0x43E0; ImageMatrix[0][1] = 0x43E0;
        ImageMatrix[5][1] = 0x2008; ImageMatrix[5][2] = 0x7FE0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 78:
        ImageMatrix[1][1] = 0x7C00; ImageMatrix[1][2] = 0x7C00; ImageMatrix[1][3] = 0x4100;
        ImageMatrix[4][1] = 0x43E0; ImageMatrix[4][2] = 0x43E0; ImageMatrix[4][3] = 0x43E0;
        ImageMatrix[6][0] = 0x7C10; ImageMatrix[6][1] = 0x0010; ImageMatrix[6][2] = 0x7FE0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 79:
        ImageMatrix[0][4] = 0x7C00; ImageMatrix[0][5] = 0x7C00;
        ImageMatrix[1][0] = 0x7C00;
        ImageMatrix[4][4] = 0x7C00; ImageMatrix[4][5] = 0x7C00;
        ImageMatrix[5][4] = 0x7C10; ImageMatrix[5][5] = 0x03E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 80:
        ImageMatrix[0][2] = 0x7C00; ImageMatrix[0][3] = 0x7C00;
        ImageMatrix[5][0] = 0x4100; ImageMatrix[5][3] = 0x0010;
        Pattern_ID_Frame_Time = 2;
    break;

    case 81:
        ImageMatrix[0][0] = 0x7C00; ImageMatrix[0][1] = 0x7C00;
        ImageMatrix[5][1] = 0x2008; ImageMatrix[5][2] = 0x7FE0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 82:
        ImageMatrix[1][3] = 0x4100; ImageMatrix[1][4] = 0x2008;
        ImageMatrix[4][0] = 0x7C00; ImageMatrix[4][1] = 0x7C00;
        ImageMatrix[6][2] = 0x7FE0; ImageMatrix[6][3] = 0x2008;
        Pattern_ID_Frame_Time = 2;
    break;

    case 83:
        ImageMatrix[1][0] = 0x4100; ImageMatrix[1][1] = 0x4100; ImageMatrix[1][2] = 0x4100;
        ImageMatrix[4][2] = 0x7C00; ImageMatrix[4][3] = 0x7C00;
        ImageMatrix[6][0] = 0x7C10; ImageMatrix[6][1] = 0x0010;
        Pattern_ID_Frame_Time = 2;
    break;

    case 84:
        ImageMatrix[0][3] = 0x4100; ImageMatrix[0][4] = 0x4100; ImageMatrix[0][5] = 0x4100;
        ImageMatrix[4][4] = 0x4100; ImageMatrix[4][5] = 0x4100;
        ImageMatrix[5][4] = 0x7C10; ImageMatrix[5][5] = 0x03E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 85:
        ImageMatrix[0][1] = 0x4100; ImageMatrix[0][2] = 0x4100;
        ImageMatrix[5][0] = 0x4100; ImageMatrix[5][3] = 0x0010;
        Pattern_ID_Frame_Time = 2;
    break;

    case 86:
        ImageMatrix[0][0] = 0x4100;
        ImageMatrix[5][1] = 0x2008; ImageMatrix[5][2] = 0x7FE0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 87:
        ImageMatrix[1][3] = 0x2008; ImageMatrix[1][4] = 0x2008; ImageMatrix[1][5] = 0x7FE0;
        ImageMatrix[3][5] = 0x4100;
        ImageMatrix[4][0] = 0x4100;
        ImageMatrix[6][3] = 0x2008; ImageMatrix[6][4] = 0x2008;
        Pattern_ID_Frame_Time = 2;
    break;

    case 88:
        ImageMatrix[1][0] = 0x2008; ImageMatrix[1][1] = 0x2008; ImageMatrix[1][2] = 0x2008;
        ImageMatrix[4][1] = 0x4100; ImageMatrix[4][2] = 0x4100;
        ImageMatrix[6][1] = 0x0010; ImageMatrix[6][2] = 0x7FE0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 89:
        ImageMatrix[0][3] = 0x2008; ImageMatrix[0][4] = 0x2008; ImageMatrix[0][5] = 0x2008;
        ImageMatrix[4][3] = 0x2008; ImageMatrix[4][4] = 0x2008;
        ImageMatrix[5][5] = 0x03E0;
        ImageMatrix[6][0] = 0x7C10;
        Pattern_ID_Frame_Time = 2;
    break;

    case 90:
        ImageMatrix[0][1] = 0x2008; ImageMatrix[0][2] = 0x2008;
        ImageMatrix[4][5] = 0x2008;
        ImageMatrix[5][0] = 0x2008; ImageMatrix[5][3] = 0x0010; ImageMatrix[5][4] = 0x7C10;
        Pattern_ID_Frame_Time = 2;
    break;

    case 91:
        ImageMatrix[0][0] = 0x2008;
        ImageMatrix[5][1] = 0x2008; ImageMatrix[5][2] = 0x7FE0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 92:
        ImageMatrix[1][4] = 0x7FE0; ImageMatrix[1][5] = 0x7FE0;
        ImageMatrix[2][0] = 0x03E0;
        ImageMatrix[3][4] = 0x2008; ImageMatrix[3][5] = 0x2008;
        ImageMatrix[4][0] = 0x2008;
        ImageMatrix[6][3] = 0x7FE0; ImageMatrix[6][4] = 0x7FE0; ImageMatrix[6][5] = 0x7FE0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 93:
        ImageMatrix[1][1] = 0x7FE0; ImageMatrix[1][2] = 0x7FE0; ImageMatrix[1][3] = 0x7FE0;
        ImageMatrix[4][1] = 0x2008; ImageMatrix[4][2] = 0x2008;
        ImageMatrix[6][1] = 0x0010; ImageMatrix[6][2] = 0x7FE0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 94:
        ImageMatrix[0][4] = 0x7FE0; ImageMatrix[0][5] = 0x7FE0;
        ImageMatrix[1][0] = 0x7FE0;
        ImageMatrix[4][3] = 0x7FE0; ImageMatrix[4][4] = 0x7FE0;
        ImageMatrix[5][5] = 0x03E0;
        ImageMatrix[6][0] = 0x7C10;
        Pattern_ID_Frame_Time = 2;
    break;

    case 95:
        ImageMatrix[0][2] = 0x7FE0; ImageMatrix[0][3] = 0x7FE0;
        ImageMatrix[4][5] = 0x7FE0;
        ImageMatrix[5][0] = 0x7FE0; ImageMatrix[5][3] = 0x0010; ImageMatrix[5][4] = 0x7C10;
        Pattern_ID_Frame_Time = 2;
    break;

    case 96:
        ImageMatrix[0][0] = 0x7FE0; ImageMatrix[0][1] = 0x7FE0;
        ImageMatrix[5][1] = 0x7FE0; ImageMatrix[5][2] = 0x7FE0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 97:
        Pattern_ID_Frame_Time = 2;
    break;

    case 98:
        ImageMatrix[2][0] = 0x03E0; ImageMatrix[2][1] = 0x03FF;
        ImageMatrix[3][3] = 0x7FE0; ImageMatrix[3][4] = 0x7FE0;
        ImageMatrix[6][5] = 0x7FE0;
        ImageMatrix[7][0] = 0x7FE0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 99:
        ImageMatrix[1][3] = 0x0010; ImageMatrix[1][4] = 0x0010; ImageMatrix[1][5] = 0x0010;
        ImageMatrix[3][5] = 0x7FE0;
        ImageMatrix[4][0] = 0x7FE0; ImageMatrix[4][1] = 0x7FE0;
        ImageMatrix[6][2] = 0x0010; ImageMatrix[6][3] = 0x0010; ImageMatrix[6][4] = 0x0010;
        Pattern_ID_Frame_Time = 2;
    break;

    case 100:
        ImageMatrix[1][0] = 0x0010; ImageMatrix[1][1] = 0x0010; ImageMatrix[1][2] = 0x0010;
        ImageMatrix[4][2] = 0x7FE0; ImageMatrix[4][3] = 0x7FE0;
        ImageMatrix[6][0] = 0x7C10; ImageMatrix[6][1] = 0x0010;
        Pattern_ID_Frame_Time = 2;
    break;

    case 101:
        ImageMatrix[0][4] = 0x0010; ImageMatrix[0][5] = 0x0010;
        ImageMatrix[4][4] = 0x0010; ImageMatrix[4][5] = 0x0010;
        ImageMatrix[5][4] = 0x7C10; ImageMatrix[5][5] = 0x03E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 102:
        ImageMatrix[0][2] = 0x0010; ImageMatrix[0][3] = 0x0010;
        ImageMatrix[5][0] = 0x0010; ImageMatrix[5][3] = 0x0010;
        Pattern_ID_Frame_Time = 2;
    break;

    case 103:
        ImageMatrix[0][0] = 0x0010; ImageMatrix[0][1] = 0x0010;
        ImageMatrix[5][1] = 0x0010; ImageMatrix[5][2] = 0x0010;
        Pattern_ID_Frame_Time = 2;
    break;

    case 104:
        ImageMatrix[2][1] = 0x03FF; ImageMatrix[2][2] = 0x03E0;
        ImageMatrix[3][2] = 0x0010; ImageMatrix[3][3] = 0x0010;
        ImageMatrix[7][0] = 0x0010; ImageMatrix[7][1] = 0x0010;
        Pattern_ID_Frame_Time = 2;
    break;

    case 105:
        ImageMatrix[1][5] = 0x7C10;
        ImageMatrix[2][0] = 0x03E0;
        ImageMatrix[3][4] = 0x0010; ImageMatrix[3][5] = 0x0010;
        ImageMatrix[6][4] = 0x7C10; ImageMatrix[6][5] = 0x0010;
        Pattern_ID_Frame_Time = 2;
    break;

    case 106:
        ImageMatrix[1][3] = 0x7C10; ImageMatrix[1][4] = 0x7C10;
        ImageMatrix[4][0] = 0x0010; ImageMatrix[4][1] = 0x0010;
        ImageMatrix[6][2] = 0x7C10; ImageMatrix[6][3] = 0x7C10;
        Pattern_ID_Frame_Time = 2;
    break;

    case 107:
        ImageMatrix[1][0] = 0x7C10; ImageMatrix[1][1] = 0x7C10; ImageMatrix[1][2] = 0x7C10;
        ImageMatrix[4][2] = 0x0010; ImageMatrix[4][3] = 0x0010;
        ImageMatrix[6][0] = 0x7C10; ImageMatrix[6][1] = 0x7C10;
        Pattern_ID_Frame_Time = 2;
    break;

    case 108:
        ImageMatrix[0][4] = 0x7C10; ImageMatrix[0][5] = 0x7C10;
        ImageMatrix[4][4] = 0x7C10; ImageMatrix[4][5] = 0x7C10;
        ImageMatrix[5][4] = 0x7C10; ImageMatrix[5][5] = 0x03E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 109:
        ImageMatrix[0][2] = 0x7C10; ImageMatrix[0][3] = 0x7C10;
        ImageMatrix[5][0] = 0x7C10; ImageMatrix[5][3] = 0x7C10;
        Pattern_ID_Frame_Time = 2;
    break;

    case 110:
        ImageMatrix[0][0] = 0x7C10; ImageMatrix[0][1] = 0x7C10;
        ImageMatrix[5][1] = 0x7C10; ImageMatrix[5][2] = 0x7C10;
        Pattern_ID_Frame_Time = 2;
    break;

    case 111:
        ImageMatrix[2][2] = 0x03E0; ImageMatrix[2][3] = 0x03E0;
        ImageMatrix[3][1] = 0x7C10; ImageMatrix[3][2] = 0x7C10;
        ImageMatrix[7][1] = 0x7C10; ImageMatrix[7][2] = 0x7C10;
        Pattern_ID_Frame_Time = 2;
    break;

    case 112:
        ImageMatrix[1][5] = 0x03E0;
        ImageMatrix[2][0] = 0x03E0; ImageMatrix[2][1] = 0x03FF;
        ImageMatrix[3][3] = 0x7C10; ImageMatrix[3][4] = 0x7C10; ImageMatrix[3][5] = 0x7C10;
        ImageMatrix[6][4] = 0x03E0; ImageMatrix[6][5] = 0x7C10;
        ImageMatrix[7][0] = 0x7C10;
        Pattern_ID_Frame_Time = 2;
    break;

    case 113:
        ImageMatrix[1][2] = 0x03E0; ImageMatrix[1][3] = 0x03E0; ImageMatrix[1][4] = 0x03E0;
        ImageMatrix[4][0] = 0x7C10; ImageMatrix[4][1] = 0x7C10; ImageMatrix[4][2] = 0x7C10;
        ImageMatrix[6][1] = 0x03E0; ImageMatrix[6][2] = 0x03E0; ImageMatrix[6][3] = 0x03E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 114:
        ImageMatrix[0][5] = 0x03E0;
        ImageMatrix[1][0] = 0x03E0; ImageMatrix[1][1] = 0x03E0;
        ImageMatrix[4][3] = 0x7C10; ImageMatrix[4][4] = 0x03E0;
        ImageMatrix[6][0] = 0x03E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 115:
        ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0; ImageMatrix[0][4] = 0x03E0;
        ImageMatrix[4][5] = 0x03E0;
        ImageMatrix[5][4] = 0x03E0; ImageMatrix[5][5] = 0x03E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 116:
        ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0;
        ImageMatrix[5][0] = 0x03E0; ImageMatrix[5][1] = 0x03E0; ImageMatrix[5][2] = 0x03E0; ImageMatrix[5][3] = 0x03E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 117:
        ImageMatrix[2][3] = 0x03FF; ImageMatrix[2][4] = 0x03E0;
        ImageMatrix[3][0] = 0x03E0; ImageMatrix[3][1] = 0x03E0;
        ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 118:
        ImageMatrix[2][1] = 0x03FF; ImageMatrix[2][2] = 0x03FF;
        ImageMatrix[3][2] = 0x03E0; ImageMatrix[3][3] = 0x03E0;
        ImageMatrix[7][0] = 0x03E0; ImageMatrix[7][1] = 0x03E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 119:
        ImageMatrix[1][4] = 0x03FF; ImageMatrix[1][5] = 0x03FF;
        ImageMatrix[2][0] = 0x03FF;
        ImageMatrix[3][4] = 0x03E0; ImageMatrix[3][5] = 0x03E0;
        ImageMatrix[4][0] = 0x03E0;
        ImageMatrix[6][3] = 0x03FF; ImageMatrix[6][4] = 0x03FF; ImageMatrix[6][5] = 0x03FF;
        Pattern_ID_Frame_Time = 2;
    break;

    case 120:
        ImageMatrix[1][1] = 0x03FF; ImageMatrix[1][2] = 0x03FF; ImageMatrix[1][3] = 0x03FF;
        ImageMatrix[4][1] = 0x03E0; ImageMatrix[4][2] = 0x03E0;
        ImageMatrix[6][1] = 0x03FF; ImageMatrix[6][2] = 0x03FF;
        Pattern_ID_Frame_Time = 2;
    break;

    case 121:
        ImageMatrix[0][4] = 0x03FF; ImageMatrix[0][5] = 0x03FF;
        ImageMatrix[1][0] = 0x03FF;
        ImageMatrix[4][3] = 0x03FF; ImageMatrix[4][4] = 0x03FF;
        ImageMatrix[5][5] = 0x03FF;
        ImageMatrix[6][0] = 0x03FF;
        Pattern_ID_Frame_Time = 2;
    break;

    case 122:
        ImageMatrix[0][2] = 0x03FF; ImageMatrix[0][3] = 0x03FF;
        ImageMatrix[4][5] = 0x03FF;
        ImageMatrix[5][0] = 0x03FF; ImageMatrix[5][3] = 0x03FF; ImageMatrix[5][4] = 0x03FF;
        Pattern_ID_Frame_Time = 2;
    break;

    case 123:
        ImageMatrix[0][0] = 0x03FF; ImageMatrix[0][1] = 0x03FF;
        ImageMatrix[5][1] = 0x03FF; ImageMatrix[5][2] = 0x03FF;
        Pattern_ID_Frame_Time = 3;
    break;

    default:
        Pattern_ID_Frame_Time = 1;
        Pattern_ID_Frame_Number = 0;
    break;
    }
}

// Pattern = RASTA
void Pattern_12_RASTA(void)
{
    switch (Pattern_ID_Frame_Number)
    {
    case 1:
        ImageMatrix[0][0] = 0x0100; ImageMatrix[0][1] = 0x0100; ImageMatrix[0][2] = 0x0100; ImageMatrix[0][3] = 0x0100; ImageMatrix[0][4] = 0x0100; ImageMatrix[0][5] = 0x0100;
        ImageMatrix[1][0] = 0x0100; ImageMatrix[1][1] = 0x0100; ImageMatrix[1][2] = 0x0100; ImageMatrix[1][3] = 0x0100; ImageMatrix[1][4] = 0x0100; ImageMatrix[1][5] = 0x0100;
        ImageMatrix[2][0] = 0x0100; ImageMatrix[2][1] = 0x7FE0; ImageMatrix[2][2] = 0x7FE0; ImageMatrix[2][3] = 0x7FE0; ImageMatrix[2][4] = 0x7FE0; ImageMatrix[2][5] = 0x7FE0;
        ImageMatrix[3][0] = 0x7FE0; ImageMatrix[3][1] = 0x7FE0; ImageMatrix[3][2] = 0x7FE0; ImageMatrix[3][3] = 0x7FE0; ImageMatrix[3][4] = 0x7C00; ImageMatrix[3][5] = 0x7C00;
        ImageMatrix[4][0] = 0x7C00; ImageMatrix[4][1] = 0x7C00; ImageMatrix[4][2] = 0x7C00; ImageMatrix[4][3] = 0x7C00; ImageMatrix[4][4] = 0x7C00; ImageMatrix[4][5] = 0x7C00;
        ImageMatrix[5][0] = 0x7C00; ImageMatrix[5][1] = 0x7C00; ImageMatrix[5][2] = 0x0100; ImageMatrix[5][3] = 0x0100; ImageMatrix[5][4] = 0x0100; ImageMatrix[5][5] = 0x0100;
        ImageMatrix[6][0] = 0x0100; ImageMatrix[6][1] = 0x0100; ImageMatrix[6][2] = 0x0100; ImageMatrix[6][3] = 0x0100; ImageMatrix[6][4] = 0x0100; ImageMatrix[6][5] = 0x0100;
        ImageMatrix[7][0] = 0x7FE0; ImageMatrix[7][1] = 0x7FE0; ImageMatrix[7][2] = 0x7FE0; ImageMatrix[7][3] = 0x7FE0; ImageMatrix[7][4] = 0x7FE0; ImageMatrix[7][5] = 0x7FE0;
        Pattern_ID_Frame_Time = 8;
    break;

    case 2:
        ImageMatrix[0][0] = 0x7C00; ImageMatrix[0][1] = 0x7C00; ImageMatrix[0][2] = 0x7C00; ImageMatrix[0][3] = 0x7C00; ImageMatrix[0][4] = 0x7C00; ImageMatrix[0][5] = 0x7C00;
        ImageMatrix[1][0] = 0x7C00; ImageMatrix[1][1] = 0x7C00; ImageMatrix[1][2] = 0x7C00; ImageMatrix[1][3] = 0x7C00; ImageMatrix[1][4] = 0x7C00; ImageMatrix[1][5] = 0x0100;
        ImageMatrix[2][0] = 0x0100; ImageMatrix[2][1] = 0x0100; ImageMatrix[2][2] = 0x0100; ImageMatrix[2][3] = 0x0100; ImageMatrix[2][4] = 0x0100; ImageMatrix[2][5] = 0x0100;
        ImageMatrix[3][0] = 0x7FE0; ImageMatrix[3][1] = 0x7FE0; ImageMatrix[3][2] = 0x7FE0; ImageMatrix[3][3] = 0x7FE0; ImageMatrix[3][4] = 0x7FE0; ImageMatrix[3][5] = 0x7FE0;
        ImageMatrix[4][0] = 0x7C00; ImageMatrix[4][1] = 0x7C00; ImageMatrix[4][2] = 0x7C00; ImageMatrix[4][3] = 0x7C00; ImageMatrix[4][4] = 0x7C00; ImageMatrix[4][5] = 0x7C00;
        ImageMatrix[5][0] = 0x7C00; ImageMatrix[5][1] = 0x7C00; ImageMatrix[5][2] = 0x0100; ImageMatrix[5][3] = 0x0100; ImageMatrix[5][4] = 0x0100; ImageMatrix[5][5] = 0x0100;
        ImageMatrix[6][0] = 0x0100; ImageMatrix[6][1] = 0x0100; ImageMatrix[6][2] = 0x0100; ImageMatrix[6][3] = 0x7FE0; ImageMatrix[6][4] = 0x7FE0; ImageMatrix[6][5] = 0x7FE0;
        ImageMatrix[7][0] = 0x7FE0; ImageMatrix[7][1] = 0x7FE0; ImageMatrix[7][2] = 0x7FE0; ImageMatrix[7][3] = 0x7FE0; ImageMatrix[7][4] = 0x7FE0; ImageMatrix[7][5] = 0x7FE0;
        Pattern_ID_Frame_Time = 8;
    break;

    case 3:
        ImageMatrix[0][0] = 0x7FE0; ImageMatrix[0][1] = 0x7FE0; ImageMatrix[0][2] = 0x7FE0; ImageMatrix[0][3] = 0x7FE0; ImageMatrix[0][4] = 0x7FE0; ImageMatrix[0][5] = 0x7FE0;
        ImageMatrix[1][0] = 0x7FE0; ImageMatrix[1][1] = 0x7FE0; ImageMatrix[1][2] = 0x7FE0; ImageMatrix[1][3] = 0x7FE0; ImageMatrix[1][4] = 0x7FE0; ImageMatrix[1][5] = 0x7C00;
        ImageMatrix[2][0] = 0x7C00; ImageMatrix[2][1] = 0x7C00; ImageMatrix[2][2] = 0x7C00; ImageMatrix[2][3] = 0x7C00; ImageMatrix[2][4] = 0x7C00; ImageMatrix[2][5] = 0x7C00;
        ImageMatrix[3][0] = 0x0100; ImageMatrix[3][1] = 0x0100; ImageMatrix[3][2] = 0x0100; ImageMatrix[3][3] = 0x0100; ImageMatrix[3][4] = 0x0100; ImageMatrix[3][5] = 0x0100;
        ImageMatrix[4][0] = 0x7FE0; ImageMatrix[4][1] = 0x7FE0; ImageMatrix[4][2] = 0x7FE0; ImageMatrix[4][3] = 0x7FE0; ImageMatrix[4][4] = 0x7FE0; ImageMatrix[4][5] = 0x7FE0;
        ImageMatrix[5][0] = 0x7FE0; ImageMatrix[5][1] = 0x7FE0; ImageMatrix[5][2] = 0x7C00; ImageMatrix[5][3] = 0x7C00; ImageMatrix[5][4] = 0x7C00; ImageMatrix[5][5] = 0x7C00;
        ImageMatrix[6][0] = 0x7C00; ImageMatrix[6][1] = 0x7C00; ImageMatrix[6][2] = 0x7C00; ImageMatrix[6][3] = 0x0100; ImageMatrix[6][4] = 0x0100; ImageMatrix[6][5] = 0x0100;
        ImageMatrix[7][0] = 0x0100; ImageMatrix[7][1] = 0x0100; ImageMatrix[7][2] = 0x0100; ImageMatrix[7][3] = 0x0100; ImageMatrix[7][4] = 0x0100; ImageMatrix[7][5] = 0x0100;
        Pattern_ID_Frame_Time = 8;
    break;

    case 4:
        ImageMatrix[0][0] = 0x0100; ImageMatrix[0][1] = 0x0100; ImageMatrix[0][2] = 0x0100;
        ImageMatrix[5][2] = 0x7C00; ImageMatrix[5][3] = 0x7C00; ImageMatrix[5][4] = 0x7C00;
        Pattern_ID_Frame_Time = 4;
    break;

    case 5:
        ImageMatrix[0][3] = 0x0100; ImageMatrix[0][4] = 0x0100; ImageMatrix[0][5] = 0x0100;
        ImageMatrix[5][5] = 0x7C00;
        ImageMatrix[6][0] = 0x7C00; ImageMatrix[6][1] = 0x7C00;
        Pattern_ID_Frame_Time = 4;
    break;

    case 6:
        ImageMatrix[1][0] = 0x0100; ImageMatrix[1][1] = 0x7FE0; ImageMatrix[1][2] = 0x7FE0;
        ImageMatrix[6][2] = 0x7C00; ImageMatrix[6][3] = 0x0100;
        Pattern_ID_Frame_Time = 4;
    break;

    case 7:
        ImageMatrix[1][3] = 0x0100; ImageMatrix[1][4] = 0x0100; ImageMatrix[1][5] = 0x7C00;
        ImageMatrix[2][0] = 0x7C00;
        ImageMatrix[6][4] = 0x0100; ImageMatrix[6][5] = 0x0100;
        Pattern_ID_Frame_Time = 4;
    break;

    case 8:
        ImageMatrix[2][1] = 0x7C00; ImageMatrix[2][2] = 0x7C00; ImageMatrix[2][3] = 0x7C00;
        ImageMatrix[7][0] = 0x0100; ImageMatrix[7][1] = 0x0100; ImageMatrix[7][2] = 0x0100;
        Pattern_ID_Frame_Time = 4;
    break;

    case 9:
        ImageMatrix[2][4] = 0x7C00; ImageMatrix[2][5] = 0x7C00;
        ImageMatrix[3][0] = 0x0100;
        ImageMatrix[7][3] = 0x0100; ImageMatrix[7][4] = 0x0100; ImageMatrix[7][5] = 0x0100;
        Pattern_ID_Frame_Time = 4;
    break;

    case 10:
        ImageMatrix[3][1] = 0x0100; ImageMatrix[3][2] = 0x0100; ImageMatrix[3][3] = 0x0100;
        Pattern_ID_Frame_Time = 4;
    break;

    case 11:
        ImageMatrix[3][4] = 0x0100; ImageMatrix[3][5] = 0x0100;
        ImageMatrix[4][0] = 0x0100;
        Pattern_ID_Frame_Time = 4;
    break;

    case 12:
        ImageMatrix[4][1] = 0x0100; ImageMatrix[4][2] = 0x0100;
        Pattern_ID_Frame_Time = 4;
    break;

    case 13:
        ImageMatrix[4][3] = 0x0100; ImageMatrix[4][4] = 0x0100; ImageMatrix[4][5] = 0x0100;
        Pattern_ID_Frame_Time = 4;
    break;

    case 14:
        ImageMatrix[5][0] = 0x0100; ImageMatrix[5][1] = 0x0100;
        Pattern_ID_Frame_Time = 4;
    break;

    case 15:
        ImageMatrix[0][0] = 0x7C00; ImageMatrix[0][1] = 0x7C00; ImageMatrix[0][2] = 0x7C00; ImageMatrix[0][3] = 0x7C00;
        ImageMatrix[5][2] = 0x0100; ImageMatrix[5][3] = 0x0100; ImageMatrix[5][4] = 0x0100;
        Pattern_ID_Frame_Time = 4;
    break;

    case 16:
        ImageMatrix[0][4] = 0x7C00; ImageMatrix[0][5] = 0x7C00;
        ImageMatrix[1][0] = 0x0100; ImageMatrix[1][1] = 0x0100;
        ImageMatrix[5][5] = 0x0100;
        ImageMatrix[6][0] = 0x0100;
        Pattern_ID_Frame_Time = 4;
    break;

    case 17:
        ImageMatrix[1][2] = 0x7C00; ImageMatrix[1][3] = 0x0100; ImageMatrix[1][4] = 0x0100;
        ImageMatrix[6][1] = 0x0100; ImageMatrix[6][2] = 0x0100; ImageMatrix[6][3] = 0x7C00;
        Pattern_ID_Frame_Time = 4;
    break;

    case 18:
        ImageMatrix[1][5] = 0x0100;
        ImageMatrix[2][0] = 0x0100;
        ImageMatrix[6][4] = 0x7C00; ImageMatrix[6][5] = 0x7C00;
        Pattern_ID_Frame_Time = 4;
    break;

    case 19:
        ImageMatrix[2][1] = 0x0100; ImageMatrix[2][2] = 0x0100; ImageMatrix[2][3] = 0x0100;
        ImageMatrix[7][0] = 0x7C00; ImageMatrix[7][1] = 0x7C00; ImageMatrix[7][2] = 0x7C00;
        Pattern_ID_Frame_Time = 4;
    break;

    case 20:
        ImageMatrix[2][4] = 0x0100; ImageMatrix[2][5] = 0x0100;
        ImageMatrix[3][0] = 0x7C00;
        ImageMatrix[7][3] = 0x7C00; ImageMatrix[7][4] = 0x7C00; ImageMatrix[7][5] = 0x7C00;
        Pattern_ID_Frame_Time = 4;
    break;

    case 21:
        ImageMatrix[3][1] = 0x7C00; ImageMatrix[3][2] = 0x7C00; ImageMatrix[3][3] = 0x7C00;
        Pattern_ID_Frame_Time = 4;
    break;

    case 22:
        ImageMatrix[3][4] = 0x7C00; ImageMatrix[3][5] = 0x7C00;
        ImageMatrix[4][0] = 0x7C00;
        Pattern_ID_Frame_Time = 4;
    break;

    case 23:
        ImageMatrix[4][1] = 0x7C00; ImageMatrix[4][2] = 0x7C00; ImageMatrix[4][3] = 0x7C00;
        Pattern_ID_Frame_Time = 4;
    break;

    case 24:
        ImageMatrix[4][4] = 0x7C00; ImageMatrix[4][5] = 0x7C00;
        Pattern_ID_Frame_Time = 4;
    break;

    case 25:
        ImageMatrix[5][0] = 0x7C00; ImageMatrix[5][1] = 0x7C00;
        Pattern_ID_Frame_Time = 4;
    break;

    case 26:
        ImageMatrix[0][0] = 0x7FE0; ImageMatrix[0][1] = 0x7FE0; ImageMatrix[0][2] = 0x7FE0; ImageMatrix[0][3] = 0x7FE0;
        ImageMatrix[5][2] = 0x7C00; ImageMatrix[5][3] = 0x7C00; ImageMatrix[5][4] = 0x7C00;
        Pattern_ID_Frame_Time = 4;
    break;

    case 27:
        ImageMatrix[0][4] = 0x7FE0; ImageMatrix[0][5] = 0x7FE0;
        ImageMatrix[1][0] = 0x7C00; ImageMatrix[1][1] = 0x7C00;
        ImageMatrix[5][5] = 0x7C00;
        ImageMatrix[6][0] = 0x7C00; ImageMatrix[6][1] = 0x7C00;
        Pattern_ID_Frame_Time = 4;
    break;

    case 28:
        ImageMatrix[1][2] = 0x7FE0; ImageMatrix[1][3] = 0x7C00; ImageMatrix[1][4] = 0x7C00;
        ImageMatrix[6][2] = 0x7C00; ImageMatrix[6][3] = 0x7FE0;
        Pattern_ID_Frame_Time = 4;
    break;

    case 29:
        ImageMatrix[1][5] = 0x7C00;
        ImageMatrix[2][0] = 0x7C00;
        ImageMatrix[6][4] = 0x7FE0; ImageMatrix[6][5] = 0x7FE0;
        Pattern_ID_Frame_Time = 4;
    break;

    case 30:
        ImageMatrix[2][1] = 0x7C00; ImageMatrix[2][2] = 0x7C00; ImageMatrix[2][3] = 0x7C00;
        ImageMatrix[7][0] = 0x7FE0; ImageMatrix[7][1] = 0x7FE0; ImageMatrix[7][2] = 0x7FE0;
        Pattern_ID_Frame_Time = 4;
    break;

    case 31:
        ImageMatrix[2][4] = 0x7C00; ImageMatrix[2][5] = 0x7C00;
        ImageMatrix[3][0] = 0x7FE0;
        ImageMatrix[7][3] = 0x7FE0; ImageMatrix[7][4] = 0x7FE0; ImageMatrix[7][5] = 0x7FE0;
        Pattern_ID_Frame_Time = 4;
    break;

    case 32:
        ImageMatrix[3][1] = 0x7FE0; ImageMatrix[3][2] = 0x7FE0; ImageMatrix[3][3] = 0x7FE0;
        Pattern_ID_Frame_Time = 4;
    break;

    case 33:
        Pattern_ID_Frame_Time = 4;
    break;

    case 34:
        ImageMatrix[0][0] = 0x7C00; ImageMatrix[0][1] = 0x7C00;
        ImageMatrix[5][0] = 0x7FE0; ImageMatrix[5][1] = 0x7FE0; ImageMatrix[5][2] = 0x7FE0; ImageMatrix[5][3] = 0x7FE0;
        Pattern_ID_Frame_Time = 4;
    break;

    case 35:
        ImageMatrix[0][0] = 0x7FE0; ImageMatrix[0][1] = 0x7FE0; ImageMatrix[0][2] = 0x7C00; ImageMatrix[0][3] = 0x7C00; ImageMatrix[0][4] = 0x7C00;
        ImageMatrix[4][4] = 0x7FE0; ImageMatrix[4][5] = 0x7FE0;
        ImageMatrix[5][0] = 0x7FE0; ImageMatrix[5][1] = 0x7FE0; ImageMatrix[5][2] = 0x7FE0; ImageMatrix[5][3] = 0x7FE0; ImageMatrix[5][4] = 0x7FE0; ImageMatrix[5][5] = 0x7FE0;
        Pattern_ID_Frame_Time = 4;
    break;

    case 36:
        ImageMatrix[0][2] = 0x7FE0; ImageMatrix[0][3] = 0x7FE0; ImageMatrix[0][4] = 0x7FE0; ImageMatrix[0][5] = 0x7C00;
        ImageMatrix[1][0] = 0x7FE0; ImageMatrix[1][1] = 0x7FE0;
        ImageMatrix[4][2] = 0x7FE0; ImageMatrix[4][3] = 0x7FE0; ImageMatrix[4][4] = 0x0100; ImageMatrix[4][5] = 0x0100;
        ImageMatrix[5][4] = 0x7FE0; ImageMatrix[5][5] = 0x7FE0;
        ImageMatrix[6][0] = 0x7FE0; ImageMatrix[6][1] = 0x7FE0;
        Pattern_ID_Frame_Time = 4;
    break;

    case 37:
        ImageMatrix[0][5] = 0x7FE0;
        ImageMatrix[1][0] = 0x7C00; ImageMatrix[1][1] = 0x7C00; ImageMatrix[1][2] = 0x7C00; ImageMatrix[1][3] = 0x7FE0; ImageMatrix[1][4] = 0x7FE0;
        ImageMatrix[4][0] = 0x7FE0; ImageMatrix[4][1] = 0x7FE0; ImageMatrix[4][3] = 0x7FE0;
        ImageMatrix[6][0] = 0x7FE0; ImageMatrix[6][1] = 0x7FE0; ImageMatrix[6][2] = 0x7FE0; ImageMatrix[6][3] = 0x7FE0;
        Pattern_ID_Frame_Time = 4;
    break;

    case 38:
        ImageMatrix[1][5] = 0x7FE0;
        ImageMatrix[2][0] = 0x7FE0;
        ImageMatrix[3][4] = 0x7FE0; ImageMatrix[3][5] = 0x7FE0;
        ImageMatrix[6][4] = 0x0100; ImageMatrix[6][5] = 0x0100;
        Pattern_ID_Frame_Time = 4;
    break;

    case 39:
        ImageMatrix[2][1] = 0x7FE0; ImageMatrix[2][2] = 0x7FE0;
        ImageMatrix[3][2] = 0x7C00; ImageMatrix[3][3] = 0x7FE0;
        ImageMatrix[7][0] = 0x7FE0; ImageMatrix[7][1] = 0x7FE0;
        Pattern_ID_Frame_Time = 4;
    break;

    case 40:
        ImageMatrix[2][3] = 0x7C00; ImageMatrix[2][4] = 0x7C00;
        ImageMatrix[3][0] = 0x7C00; ImageMatrix[3][1] = 0x7C00;
        ImageMatrix[7][2] = 0x7FE0; ImageMatrix[7][3] = 0x7FE0; ImageMatrix[7][5] = 0x7FE0;
        Pattern_ID_Frame_Time = 4;
    break;

    case 41:
        ImageMatrix[2][5] = 0x7C00;
        ImageMatrix[7][4] = 0x7FE0;
        Pattern_ID_Frame_Time = 30;
    break;

    default:
        Pattern_ID_Frame_Time = 1;
        Pattern_ID_Frame_Number = 0;
    break;
    }
}

// Pattern = EXPAND_CONTRACT
void Pattern_13_EXPAND_CONTRACT(void)
{
    switch (Pattern_ID_Frame_Number)
    {
    case 1:
        ImageMatrix[0][0] = 0x03E0; ImageMatrix[0][1] = 0x03E0; ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
        ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
        ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000; ImageMatrix[2][5] = 0x0000;
        ImageMatrix[3][0] = 0x0000; ImageMatrix[3][1] = 0x0000; ImageMatrix[3][2] = 0x0000; ImageMatrix[3][3] = 0x0000; ImageMatrix[3][4] = 0x0000; ImageMatrix[3][5] = 0x0000;
        ImageMatrix[4][0] = 0x0000; ImageMatrix[4][1] = 0x0000; ImageMatrix[4][2] = 0x0000; ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
        ImageMatrix[5][0] = 0x03E0; ImageMatrix[5][1] = 0x03E0; ImageMatrix[5][2] = 0x03E0; ImageMatrix[5][3] = 0x03E0; ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
        ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
        ImageMatrix[7][0] = 0x0000; ImageMatrix[7][1] = 0x0000; ImageMatrix[7][2] = 0x0000; ImageMatrix[7][3] = 0x0000; ImageMatrix[7][4] = 0x0000; ImageMatrix[7][5] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 2:
        ImageMatrix[0][2] = 0x03E0; ImageMatrix[0][3] = 0x03E0;
        ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
        ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 3:
        ImageMatrix[0][4] = 0x03E0; ImageMatrix[0][5] = 0x03E0;
        ImageMatrix[4][2] = 0x03E0; ImageMatrix[4][3] = 0x03E0;
        ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 4:
        ImageMatrix[1][0] = 0x03E0; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000;
        ImageMatrix[4][0] = 0x03E0; ImageMatrix[4][1] = 0x03E0;
        ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 5:
        ImageMatrix[1][3] = 0x03E0; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
        ImageMatrix[3][4] = 0x03E0; ImageMatrix[3][5] = 0x03E0;
        ImageMatrix[6][4] = 0x03E0; ImageMatrix[6][5] = 0x03E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 6:
        ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000;
        ImageMatrix[3][2] = 0x03E0; ImageMatrix[3][3] = 0x03E0;
        ImageMatrix[7][0] = 0x03E0; ImageMatrix[7][1] = 0x03E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 7:
        ImageMatrix[2][3] = 0x03E0; ImageMatrix[2][4] = 0x03E0;
        ImageMatrix[3][1] = 0x03E0;
        ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 8:
        ImageMatrix[2][5] = 0x03E0;
        ImageMatrix[3][0] = 0x03E0;
        ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 9:
        ImageMatrix[2][5] = 0x03E0;
        ImageMatrix[3][0] = 0x03E0;
        ImageMatrix[7][3] = 0x03E0; ImageMatrix[7][4] = 0x03E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 10:
        ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x03E0;
        ImageMatrix[3][1] = 0x03E0;
        ImageMatrix[7][2] = 0x03E0; ImageMatrix[7][5] = 0x03E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 11:
        ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000;
        ImageMatrix[3][2] = 0x03E0; ImageMatrix[3][3] = 0x03E0;
        ImageMatrix[7][0] = 0x03E0; ImageMatrix[7][1] = 0x03E0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 12:
        ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
        ImageMatrix[3][4] = 0x03E0; ImageMatrix[3][5] = 0x03E0;
        ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 13:
        ImageMatrix[0][5] = 0x0000;
        ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000;
        ImageMatrix[4][0] = 0x03E0; ImageMatrix[4][1] = 0x03E0; ImageMatrix[4][2] = 0x03E0;
        ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 14:
        ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000;
        ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x03E0;
        ImageMatrix[5][5] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 15:
        ImageMatrix[0][1] = 0x0000; ImageMatrix[0][2] = 0x0000;
        ImageMatrix[4][5] = 0x0000;
        ImageMatrix[5][0] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000;
        ImageMatrix[6][0] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 16:
        ImageMatrix[0][0] = 0x4100;
        ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 17:
        ImageMatrix[0][1] = 0x4100; ImageMatrix[0][2] = 0x4100; ImageMatrix[0][3] = 0x4100;
        ImageMatrix[4][5] = 0x0000;
        ImageMatrix[5][0] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 18:
        ImageMatrix[0][4] = 0x4100; ImageMatrix[0][5] = 0x4100;
        ImageMatrix[1][0] = 0x0000;
        ImageMatrix[4][3] = 0x4100; ImageMatrix[4][4] = 0x4100;
        ImageMatrix[5][5] = 0x0000;
        ImageMatrix[6][0] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 19:
        ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000;
        ImageMatrix[4][0] = 0x4100; ImageMatrix[4][1] = 0x4100; ImageMatrix[4][2] = 0x4100;
        ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 20:
        ImageMatrix[1][3] = 0x4100; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
        ImageMatrix[3][4] = 0x4100; ImageMatrix[3][5] = 0x4100;
        ImageMatrix[6][4] = 0x4100; ImageMatrix[6][5] = 0x4100;
        Pattern_ID_Frame_Time = 2;
    break;

    case 21:
        ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000;
        ImageMatrix[3][3] = 0x4100;
        ImageMatrix[7][0] = 0x4100;
        Pattern_ID_Frame_Time = 2;
    break;

    case 22:
        ImageMatrix[2][3] = 0x4100; ImageMatrix[2][4] = 0x4100;
        ImageMatrix[3][1] = 0x4100; ImageMatrix[3][2] = 0x4100;
        ImageMatrix[7][1] = 0x4100; ImageMatrix[7][2] = 0x4100; ImageMatrix[7][5] = 0x4100;
        Pattern_ID_Frame_Time = 2;
    break;

    case 23:
        ImageMatrix[2][5] = 0x4100;
        ImageMatrix[3][0] = 0x4100;
        ImageMatrix[7][3] = 0x4100; ImageMatrix[7][4] = 0x4100;
        Pattern_ID_Frame_Time = 2;
    break;

    case 24:
        ImageMatrix[2][5] = 0x4100;
        ImageMatrix[3][0] = 0x4100;
        ImageMatrix[7][3] = 0x4100; ImageMatrix[7][4] = 0x4100;
        Pattern_ID_Frame_Time = 2;
    break;

    case 25:
        ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000;
        ImageMatrix[3][1] = 0x4100; ImageMatrix[3][2] = 0x4100;
        ImageMatrix[7][1] = 0x4100; ImageMatrix[7][2] = 0x4100; ImageMatrix[7][5] = 0x4100;
        Pattern_ID_Frame_Time = 2;
    break;

    case 26:
        ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000;
        ImageMatrix[3][3] = 0x4100;
        ImageMatrix[7][0] = 0x4100;
        Pattern_ID_Frame_Time = 2;
    break;

    case 27:
        ImageMatrix[1][5] = 0x0000;
        ImageMatrix[2][0] = 0x0000;
        ImageMatrix[3][4] = 0x4100; ImageMatrix[3][5] = 0x4100;
        ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x4100;
        Pattern_ID_Frame_Time = 2;
    break;

    case 28:
        ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000;
        ImageMatrix[4][0] = 0x4100; ImageMatrix[4][1] = 0x4100;
        ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 29:
        ImageMatrix[0][5] = 0x0000;
        ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000;
        ImageMatrix[4][2] = 0x4100; ImageMatrix[4][3] = 0x4100;
        ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 30:
        ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000;
        ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
        ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 31:
        ImageMatrix[0][1] = 0x0000;
        ImageMatrix[5][0] = 0x0000; ImageMatrix[5][3] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 32:
        ImageMatrix[0][0] = 0x7C10;
        ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 33:
        ImageMatrix[0][1] = 0x7C10; ImageMatrix[0][2] = 0x7C10;
        ImageMatrix[5][0] = 0x0000; ImageMatrix[5][3] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 34:
        ImageMatrix[0][3] = 0x7C10; ImageMatrix[0][4] = 0x7C10;
        ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
        ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 35:
        ImageMatrix[0][5] = 0x7C10;
        ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000;
        ImageMatrix[4][2] = 0x7C10; ImageMatrix[4][3] = 0x7C10;
        ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 36:
        ImageMatrix[1][2] = 0x0000;
        ImageMatrix[4][0] = 0x7C10; ImageMatrix[4][1] = 0x7C10;
        ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 37:
        ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000;
        ImageMatrix[3][4] = 0x7C10; ImageMatrix[3][5] = 0x7C10;
        ImageMatrix[6][4] = 0x0000; ImageMatrix[6][5] = 0x7C10;
        Pattern_ID_Frame_Time = 2;
    break;

    case 38:
        ImageMatrix[1][5] = 0x7C10;
        ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000;
        ImageMatrix[3][2] = 0x7C10; ImageMatrix[3][3] = 0x7C10;
        ImageMatrix[7][0] = 0x7C10; ImageMatrix[7][1] = 0x7C10;
        Pattern_ID_Frame_Time = 2;
    break;

    case 39:
        ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x7C10; ImageMatrix[2][4] = 0x7C10;
        ImageMatrix[3][1] = 0x7C10;
        ImageMatrix[7][2] = 0x7C10; ImageMatrix[7][5] = 0x7C10;
        Pattern_ID_Frame_Time = 2;
    break;

    case 40:
        ImageMatrix[2][5] = 0x7C10;
        ImageMatrix[3][0] = 0x7C10;
        ImageMatrix[7][3] = 0x7C10; ImageMatrix[7][4] = 0x7C10;
        Pattern_ID_Frame_Time = 2;
    break;

    case 41:
        ImageMatrix[2][5] = 0x7C10;
        ImageMatrix[3][0] = 0x7C10;
        ImageMatrix[7][3] = 0x7C10; ImageMatrix[7][4] = 0x7C10;
        Pattern_ID_Frame_Time = 2;
    break;

    case 42:
        ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000;
        ImageMatrix[3][1] = 0x7C10; ImageMatrix[3][2] = 0x7C10;
        ImageMatrix[7][1] = 0x7C10; ImageMatrix[7][2] = 0x7C10; ImageMatrix[7][5] = 0x7C10;
        Pattern_ID_Frame_Time = 2;
    break;

    case 43:
        ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000;
        ImageMatrix[3][3] = 0x7C10; ImageMatrix[3][4] = 0x7C10;
        ImageMatrix[6][5] = 0x7C10;
        ImageMatrix[7][0] = 0x7C10;
        Pattern_ID_Frame_Time = 2;
    break;

    case 44:
        ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
        ImageMatrix[2][0] = 0x0000;
        ImageMatrix[3][5] = 0x7C10;
        ImageMatrix[4][0] = 0x7C10;
        ImageMatrix[6][4] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 45:
        ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000;
        ImageMatrix[4][1] = 0x7C10; ImageMatrix[4][2] = 0x7C10;
        ImageMatrix[6][2] = 0x0000; ImageMatrix[6][3] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 46:
        ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
        ImageMatrix[1][0] = 0x0000;
        ImageMatrix[4][3] = 0x7C10;
        ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 47:
        ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000;
        ImageMatrix[4][4] = 0x0000; ImageMatrix[4][5] = 0x0000;
        ImageMatrix[5][4] = 0x0000; ImageMatrix[5][5] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 48:
        ImageMatrix[0][1] = 0x0000;
        ImageMatrix[5][0] = 0x0000; ImageMatrix[5][3] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 49:
        ImageMatrix[0][0] = 0x401F;
        ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 50:
        ImageMatrix[0][1] = 0x401F; ImageMatrix[0][2] = 0x401F;
        ImageMatrix[4][5] = 0x0000;
        ImageMatrix[5][0] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 51:
        ImageMatrix[0][3] = 0x401F; ImageMatrix[0][4] = 0x401F; ImageMatrix[0][5] = 0x401F;
        ImageMatrix[4][3] = 0x401F; ImageMatrix[4][4] = 0x401F;
        ImageMatrix[5][5] = 0x0000;
        ImageMatrix[6][0] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 52:
        ImageMatrix[1][0] = 0x401F; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000;
        ImageMatrix[4][1] = 0x401F; ImageMatrix[4][2] = 0x401F;
        ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 53:
        ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000;
        ImageMatrix[3][5] = 0x401F;
        ImageMatrix[4][0] = 0x401F;
        ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x401F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 54:
        ImageMatrix[1][5] = 0x401F;
        ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000;
        ImageMatrix[3][3] = 0x401F; ImageMatrix[3][4] = 0x401F;
        ImageMatrix[6][5] = 0x401F;
        ImageMatrix[7][0] = 0x401F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 55:
        ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x0000;
        ImageMatrix[3][2] = 0x401F;
        ImageMatrix[7][1] = 0x401F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 56:
        ImageMatrix[2][4] = 0x401F;
        ImageMatrix[3][1] = 0x401F;
        ImageMatrix[7][2] = 0x401F; ImageMatrix[7][5] = 0x401F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 57:
        ImageMatrix[2][5] = 0x401F;
        ImageMatrix[3][0] = 0x401F;
        ImageMatrix[7][3] = 0x401F; ImageMatrix[7][4] = 0x401F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 58:
        ImageMatrix[2][5] = 0x401F;
        ImageMatrix[3][0] = 0x401F;
        ImageMatrix[7][3] = 0x401F; ImageMatrix[7][4] = 0x401F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 59:
        ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000;
        ImageMatrix[3][1] = 0x401F; ImageMatrix[3][2] = 0x401F;
        ImageMatrix[7][1] = 0x401F; ImageMatrix[7][2] = 0x401F; ImageMatrix[7][5] = 0x401F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 60:
        ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000;
        ImageMatrix[3][3] = 0x401F; ImageMatrix[3][4] = 0x401F;
        ImageMatrix[6][5] = 0x401F;
        ImageMatrix[7][0] = 0x401F;
        Pattern_ID_Frame_Time = 2;
    break;

    case 61:
        ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
        ImageMatrix[3][5] = 0x401F;
        ImageMatrix[4][0] = 0x401F;
        ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 62:
        ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000; ImageMatrix[1][3] = 0x0000;
        ImageMatrix[4][1] = 0x401F; ImageMatrix[4][2] = 0x401F;
        ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 63:
        ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
        ImageMatrix[1][0] = 0x0000;
        ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000;
        ImageMatrix[5][5] = 0x0000;
        ImageMatrix[6][0] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 64:
        ImageMatrix[0][2] = 0x0000; ImageMatrix[0][3] = 0x0000;
        ImageMatrix[4][5] = 0x0000;
        ImageMatrix[5][4] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 65:
        ImageMatrix[0][1] = 0x0000;
        ImageMatrix[5][0] = 0x0000; ImageMatrix[5][3] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 66:
        ImageMatrix[0][0] = 0x7C00;
        ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 67:
        ImageMatrix[0][1] = 0x7C00; ImageMatrix[0][2] = 0x7C00;
        ImageMatrix[4][5] = 0x0000;
        ImageMatrix[5][0] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 68:
        ImageMatrix[0][3] = 0x7C00; ImageMatrix[0][4] = 0x7C00; ImageMatrix[0][5] = 0x7C00;
        ImageMatrix[4][3] = 0x7C00; ImageMatrix[4][4] = 0x0000;
        ImageMatrix[5][5] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 69:
        ImageMatrix[1][0] = 0x7C00; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000;
        ImageMatrix[4][1] = 0x7C00; ImageMatrix[4][2] = 0x7C00;
        ImageMatrix[6][0] = 0x0000; ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 70:
        ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000;
        ImageMatrix[3][5] = 0x7C00;
        ImageMatrix[4][0] = 0x7C00;
        ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 71:
        ImageMatrix[1][5] = 0x7C00;
        ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000;
        ImageMatrix[3][3] = 0x7C00; ImageMatrix[3][4] = 0x7C00;
        ImageMatrix[6][5] = 0x7C00;
        ImageMatrix[7][0] = 0x7C00;
        Pattern_ID_Frame_Time = 2;
    break;

    case 72:
        ImageMatrix[2][2] = 0x0000; ImageMatrix[2][3] = 0x7C00; ImageMatrix[2][4] = 0x7C00;
        ImageMatrix[3][1] = 0x7C00; ImageMatrix[3][2] = 0x7C00;
        ImageMatrix[7][1] = 0x7C00; ImageMatrix[7][2] = 0x7C00; ImageMatrix[7][5] = 0x7C00;
        Pattern_ID_Frame_Time = 2;
    break;

    case 73:
        ImageMatrix[2][5] = 0x7C00;
        ImageMatrix[3][0] = 0x7C00;
        ImageMatrix[7][3] = 0x7C00; ImageMatrix[7][4] = 0x7C00;
        Pattern_ID_Frame_Time = 2;
    break;

    case 74:
        ImageMatrix[2][5] = 0x7C00;
        ImageMatrix[3][0] = 0x7C00;
        ImageMatrix[7][3] = 0x7C00; ImageMatrix[7][4] = 0x7C00;
        Pattern_ID_Frame_Time = 2;
    break;

    case 75:
        ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000;
        ImageMatrix[3][1] = 0x7C00; ImageMatrix[3][2] = 0x7C00;
        ImageMatrix[7][1] = 0x7C00; ImageMatrix[7][2] = 0x7C00; ImageMatrix[7][5] = 0x7C00;
        Pattern_ID_Frame_Time = 2;
    break;

    case 76:
        ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000;
        ImageMatrix[3][3] = 0x7C00; ImageMatrix[3][4] = 0x7C00;
        ImageMatrix[6][5] = 0x7C00;
        ImageMatrix[7][0] = 0x7C00;
        Pattern_ID_Frame_Time = 2;
    break;

    case 77:
        ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
        ImageMatrix[3][5] = 0x7C00;
        ImageMatrix[4][0] = 0x7C00;
        ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 78:
        ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000;
        ImageMatrix[4][1] = 0x7C00; ImageMatrix[4][2] = 0x7C00;
        ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 79:
        ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
        ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000;
        ImageMatrix[5][5] = 0x0000;
        ImageMatrix[6][0] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 80:
        ImageMatrix[0][1] = 0x0000; ImageMatrix[0][2] = 0x0000;
        ImageMatrix[4][5] = 0x0000;
        ImageMatrix[5][0] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 81:
        ImageMatrix[0][0] = 0x2008;
        ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 82:
        ImageMatrix[0][1] = 0x2008; ImageMatrix[0][2] = 0x2008;
        ImageMatrix[4][5] = 0x0000;
        ImageMatrix[5][0] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 83:
        ImageMatrix[0][3] = 0x2008; ImageMatrix[0][4] = 0x2008; ImageMatrix[0][5] = 0x2008;
        ImageMatrix[4][3] = 0x2008; ImageMatrix[4][4] = 0x2008;
        ImageMatrix[5][5] = 0x0000;
        ImageMatrix[6][0] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 84:
        ImageMatrix[1][0] = 0x2008; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000;
        ImageMatrix[4][1] = 0x2008; ImageMatrix[4][2] = 0x2008;
        ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 85:
        ImageMatrix[1][3] = 0x2008; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
        ImageMatrix[3][4] = 0x2008; ImageMatrix[3][5] = 0x2008;
        ImageMatrix[4][0] = 0x2008;
        ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x2008; ImageMatrix[6][5] = 0x2008;
        Pattern_ID_Frame_Time = 2;
    break;

    case 86:
        ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000;
        ImageMatrix[3][2] = 0x2008; ImageMatrix[3][3] = 0x2008;
        ImageMatrix[7][0] = 0x2008; ImageMatrix[7][1] = 0x2008;
        Pattern_ID_Frame_Time = 2;
    break;

    case 87:
        ImageMatrix[2][3] = 0x2008; ImageMatrix[2][4] = 0x2008;
        ImageMatrix[3][1] = 0x2008;
        ImageMatrix[7][2] = 0x2008; ImageMatrix[7][5] = 0x2008;
        Pattern_ID_Frame_Time = 2;
    break;

    case 88:
        ImageMatrix[2][5] = 0x2008;
        ImageMatrix[3][0] = 0x2008;
        ImageMatrix[7][3] = 0x2008; ImageMatrix[7][4] = 0x2008;
        Pattern_ID_Frame_Time = 2;
    break;

    case 89:
        ImageMatrix[2][5] = 0x2008;
        ImageMatrix[3][0] = 0x2008;
        ImageMatrix[7][3] = 0x2008; ImageMatrix[7][4] = 0x2008;
        Pattern_ID_Frame_Time = 2;
    break;

    case 90:
        ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000;
        ImageMatrix[3][1] = 0x2008; ImageMatrix[3][2] = 0x2008;
        ImageMatrix[7][1] = 0x2008; ImageMatrix[7][2] = 0x2008; ImageMatrix[7][5] = 0x2008;
        Pattern_ID_Frame_Time = 2;
    break;

    case 91:
        ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000;
        ImageMatrix[3][3] = 0x2008; ImageMatrix[3][4] = 0x2008;
        ImageMatrix[6][5] = 0x2008;
        ImageMatrix[7][0] = 0x2008;
        Pattern_ID_Frame_Time = 2;
    break;

    case 92:
        ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
        ImageMatrix[3][5] = 0x2008;
        ImageMatrix[4][0] = 0x2008;
        ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 93:
        ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000;
        ImageMatrix[4][1] = 0x2008; ImageMatrix[4][2] = 0x2008;
        ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 94:
        ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
        ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000;
        ImageMatrix[5][5] = 0x0000;
        ImageMatrix[6][0] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 95:
        ImageMatrix[0][1] = 0x0000; ImageMatrix[0][2] = 0x0000;
        ImageMatrix[4][5] = 0x0000;
        ImageMatrix[5][0] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 96:
        Pattern_ID_Frame_Time = 2;
    break;

    case 97:
        ImageMatrix[0][0] = 0x7FE0;
        ImageMatrix[5][1] = 0x0000; ImageMatrix[5][2] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 98:
        ImageMatrix[0][1] = 0x7FE0; ImageMatrix[0][2] = 0x7FE0;
        ImageMatrix[4][5] = 0x0000;
        ImageMatrix[5][0] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 99:
        ImageMatrix[0][3] = 0x7FE0; ImageMatrix[0][4] = 0x7FE0; ImageMatrix[0][5] = 0x7FE0;
        ImageMatrix[4][3] = 0x7FE0; ImageMatrix[4][4] = 0x7FE0;
        ImageMatrix[5][5] = 0x0000;
        ImageMatrix[6][0] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 100:
        ImageMatrix[1][0] = 0x7FE0; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000;
        ImageMatrix[4][1] = 0x7FE0; ImageMatrix[4][2] = 0x7FE0;
        ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 101:
        ImageMatrix[1][3] = 0x7FE0; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
        ImageMatrix[3][5] = 0x7FE0;
        ImageMatrix[4][0] = 0x7FE0;
        ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x7FE0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 102:
        ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000;
        ImageMatrix[3][3] = 0x7FE0; ImageMatrix[3][4] = 0x7FE0;
        ImageMatrix[6][5] = 0x7FE0;
        ImageMatrix[7][0] = 0x7FE0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 103:
        ImageMatrix[2][3] = 0x7FE0; ImageMatrix[2][4] = 0x7FE0;
        ImageMatrix[3][1] = 0x7FE0; ImageMatrix[3][2] = 0x7FE0;
        ImageMatrix[7][1] = 0x7FE0; ImageMatrix[7][2] = 0x7FE0; ImageMatrix[7][5] = 0x7FE0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 104:
        ImageMatrix[2][5] = 0x7FE0;
        ImageMatrix[3][0] = 0x7FE0;
        ImageMatrix[7][3] = 0x7FE0; ImageMatrix[7][4] = 0x7FE0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 105:
        ImageMatrix[2][5] = 0x7FE0;
        ImageMatrix[3][0] = 0x7FE0;
        ImageMatrix[7][3] = 0x7FE0; ImageMatrix[7][4] = 0x7FE0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 106:
        ImageMatrix[2][3] = 0x0000; ImageMatrix[2][4] = 0x0000;
        ImageMatrix[3][1] = 0x7FE0; ImageMatrix[3][2] = 0x7FE0;
        ImageMatrix[7][1] = 0x7FE0; ImageMatrix[7][2] = 0x7FE0; ImageMatrix[7][5] = 0x7FE0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 107:
        ImageMatrix[2][0] = 0x0000; ImageMatrix[2][1] = 0x0000; ImageMatrix[2][2] = 0x0000;
        ImageMatrix[3][3] = 0x7FE0; ImageMatrix[3][4] = 0x7FE0;
        ImageMatrix[6][5] = 0x7FE0;
        ImageMatrix[7][0] = 0x7FE0;
        Pattern_ID_Frame_Time = 2;
    break;

    case 108:
        ImageMatrix[1][3] = 0x0000; ImageMatrix[1][4] = 0x0000; ImageMatrix[1][5] = 0x0000;
        ImageMatrix[3][5] = 0x7FE0;
        ImageMatrix[4][0] = 0x7FE0;
        ImageMatrix[6][3] = 0x0000; ImageMatrix[6][4] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 109:
        ImageMatrix[1][0] = 0x0000; ImageMatrix[1][1] = 0x0000; ImageMatrix[1][2] = 0x0000;
        ImageMatrix[4][1] = 0x7FE0; ImageMatrix[4][2] = 0x7FE0;
        ImageMatrix[6][1] = 0x0000; ImageMatrix[6][2] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 110:
        ImageMatrix[0][3] = 0x0000; ImageMatrix[0][4] = 0x0000; ImageMatrix[0][5] = 0x0000;
        ImageMatrix[4][3] = 0x0000; ImageMatrix[4][4] = 0x0000;
        ImageMatrix[5][5] = 0x0000;
        ImageMatrix[6][0] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    case 111:
        ImageMatrix[0][2] = 0x0000;
        ImageMatrix[4][5] = 0x0000;
        ImageMatrix[5][0] = 0x0000; ImageMatrix[5][3] = 0x0000; ImageMatrix[5][4] = 0x0000;
        Pattern_ID_Frame_Time = 2;
    break;

    default:
        Pattern_ID_Frame_Time = 1;
        Pattern_ID_Frame_Number = 0;
    break;
    }
}

#endif
