#ifndef UART_H
#define UART_H

typedef volatile unsigned int vuint_32;
typedef unsigned char  		  uint_8;
typedef unsigned int          uint_32;

void UART_Send_String (uint_8* P_tx_string);

#endif