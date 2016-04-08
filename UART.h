/*******************************************************************************
                      Bicycle Helmet Microcontroller Software
               Copyright (c) NixTech, Inc. 2012 All Rights Reserved
                            Rev. A, MSP430F5328
 ******************************************************************************/
#ifndef UART_H_
#define UART_H_

void initUART(void);
void tx_byte(char txByte);
char rx_byte = 0x00;

void initUART(void)
{
    //Set up UCA0TXD and UCA0RXD
    P3SEL |= BIT3 + BIT4;                     //P3.3,4 = USCI_A0 UCA0TXD/UCA0RXD
    UCA0CTL1 |= UCSWRST;                      //Reset state machine
    UCA0CTL1 |= UCSSEL__SMCLK;                 //SMCLK
    UCA0BR0 = 217;                            //25 MHz 115200, 25000000/115200=floor(217.04)
    UCA0BR1 = 0;                              //25 MHz 115200
                                              //Error is <0.25% for a ratio of 217:1
    UCA0MCTL |= UCBRS_0 + UCBRF_0;            //Modulation UCBRSx=0, UCBRFx=0
    UCA0CTL1 &= ~UCSWRST;                     //Initialize USCI state machine
    UCA0IE |= UCRXIE;                         //Enable USCI_A0 RX interrupt
}

void tx_byte(char txByte)
{
    while (!(UCA0IFG&UCTXIFG));
    UCA0TXBUF = txByte;
    __delay_cycles(10);
}


#pragma vector=USCI_A0_VECTOR
__interrupt void USCI_A0_ISR(void)
{
  switch(__even_in_range(UCA0IV,4))
  {
  case 0:break;                             // Vector 0 - no interrupt
  case 2:                                   // Vector 2 - RXIFG
      //Handle RX'd char
      rx_byte = UCA0RXBUF;
    break;
  case 4:break;                             // Vector 4 - TXIFG
  default: break;
  }
}


#endif /* UART_H_ */
