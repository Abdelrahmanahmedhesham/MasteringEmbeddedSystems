

MEMORY
{
flash(RX) : ORIGIN = 0x08000000 , LENGTH = 128k
SRAM(RWX) : ORIGIN = 0x20000000 , LENGTH = 20k

}

SECTIONS
{
	.text : {
		*(.vectors*)
		*(.text*)
		*(.rodata)
		_E_TEXT = . ;
	}>flash
	
	.data : {
		_S_DATA = . ;
		*(.data)
		. = ALIGN(4);
		_E_DATA = . ;
	}> SRAM AT> flash
	
	.bss : {
		_S_BSS = . ;
		*(.bss*)
		. = ALIGN(4);
		_E_BSS = . ;
		
		. = . + 0x1000 ;
		SP_start = . ;
		
	}>SRAM
}
