#include "Uart.h"

uint_8 string_buffer[100] = "Learn_in_depth : Mario_Adel ";

void main (void)
{
	UART_Send_String (string_buffer);
}