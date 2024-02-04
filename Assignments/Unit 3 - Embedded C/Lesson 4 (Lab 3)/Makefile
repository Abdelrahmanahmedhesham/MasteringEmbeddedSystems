CC=arm-none-eabi-
FLAGS=-mcpu=cortex-m4 -gdwarf-2 -g
INCS=-I .
LIBS=
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
AS=$(wildcard *.s)
ASOBJ=$(AS:.s=.o)
project name=learn_in_depth_cortex_m4



all: $(project name).bin
	@echo "=======Build is Done========"

%.o: %.c
	$(CC)gcc.exe -c $(FLAGS) $(INCS) $< -o $@
	
$(project name).elf: $(ASOBJ) $(OBJ)
	$(CC)ld.exe -T linker_script.ld -Map=Map_file.map $(LIBS) $(ASOBJ) $(OBJ) -o $@
	
$(project name).bin: $(project name).elf
	$(CC)objcopy.exe -O binary $< $@
	cp $(project name).elf $(project name).axf
	
clean_all:
	rm -rf *.elf *.bin *.o

clean:
	rm -rf *.elf *.bin