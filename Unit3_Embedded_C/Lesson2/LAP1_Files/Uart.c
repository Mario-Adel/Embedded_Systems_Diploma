#include "Uart.h"

//UART Registers

#define UART0DR_BASE 0x101f1000
#define UART0DR *((vuint_32* const)((vuint_32*)UART0DR_BASE))

//UART Function

void UART_Send_String (uint_8* P_tx_string)
{
	while(*P_tx_string != '\0')
	{
	UART0DR = (uint_32)(*P_tx_string);
	P_tx_string++;
	}
}