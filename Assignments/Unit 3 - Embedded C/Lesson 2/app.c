#include "UART.h"
unsigned char x[100] = "Learn-in-depth:Abdelrahman";
unsigned char const x2[100] = "rodata section";


void main(void)
{
	Uart_sendstr(x);
}