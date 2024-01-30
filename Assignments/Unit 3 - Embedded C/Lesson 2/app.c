#include "UART.h"
unsigned char x[100] = "Learn-in-depth:Abdelrahman";

void main(void)
{
	Uart_sendstr(x);
}