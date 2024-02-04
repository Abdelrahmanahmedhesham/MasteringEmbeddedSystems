

#include <stdint.h>
#define SYSCTL_RCGC2_R (*((volatile unsigned long *) 0x400FE108))
#define GPIO_PORTF_DIR_R (*((volatile unsigned long *) 0x40025400))
#define GPIO_PORTF_DEN_R (*((volatile unsigned long *) 0x4002551C))
#define GPIO_PORTF_DATA_R (*((volatile unsigned long *) 0x400253FC))

int main()
{
	volatile unsigned int i;
	SYSCTL_RCGC2_R=0x20;
	for(i=0;i<200;i++);
	GPIO_PORTF_DIR_R |= 1<<3;
	GPIO_PORTF_DEN_R |= 1<<3;
	while(1)
	{
		GPIO_PORTF_DATA_R |= 1<<3;
		for(i=0;i<20000;i++);
		GPIO_PORTF_DATA_R &= ~(1<<3);
		for(i=0;i<20000;i++);
		
	}	
	
	return 0;
}