#include <stdint.h>


extern int main(void);

static unsigned long Stack_top[256];

void Rest_Handler(void);

void Default_handler()
{
	Rest_Handler();
}

void NMI_Handler(void) __attribute__ ((weak,alias ("Default_handler")));;
void Hard_fault_Handler(void) __attribute__ ((weak,alias ("Default_handler")));;	
void MM_fault_Handler(void) __attribute__ ((weak,alias ("Default_handler")));;	
void Bus_Fault_Handler(void) __attribute__ ((weak,alias ("Default_handler")));;	
void Usage_Fault_Handler(void) __attribute__ ((weak,alias ("Default_handler")));;

void (* const p_f_vectors[])() __attribute__((section(".vectors"))) = {
(void (*)()) ((unsigned long)Stack_top + sizeof(Stack_top)),
&Rest_Handler,
&NMI_Handler,
&Hard_fault_Handler,
&MM_fault_Handler,
&Bus_Fault_Handler,
&Usage_Fault_Handler
	};
	
extern uint32_t _S_DATA ;
extern uint32_t _E_DATA ;
extern uint32_t _S_BSS ;
extern uint32_t _E_BSS ;
extern uint32_t _E_TEXT ;
	
void Rest_Handler(void)
{
	int i;
	uint32_t DATA_size = (unsigned char*)&_E_DATA - (unsigned char*)&_S_DATA ;
	unsigned char* source = (unsigned char*)&_E_TEXT;
	unsigned char* destination = (unsigned char*)&_S_DATA;
	for(i=0;i<DATA_size;i++)
	{
		*((unsigned char*)destination++)=*((unsigned char*)source++);
	}
	
	uint32_t BSS_size = (unsigned char*)&_E_BSS - (unsigned char*)&_S_BSS ;
	destination=(unsigned char*)&_S_BSS;
	for(i=0;i<BSS_size;i++)
	{
		*((unsigned char*)destination++)=(unsigned char)0;
	}

	
	main();
}