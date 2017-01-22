################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL := cmd.exe
RM := rm -rf

USER_OBJS :=

LIBS := 
PROJ := 

O_SRCS := 
C_SRCS := 
S_SRCS := 
S_UPPER_SRCS := 
OBJ_SRCS := 
ASM_SRCS := 
PREPROCESSING_SRCS := 
OBJS := 
OBJS_AS_ARGS := 
C_DEPS := 
C_DEPS_AS_ARGS := 
EXECUTABLES := 
OUTPUT_FILE_PATH :=
OUTPUT_FILE_PATH_AS_ARGS :=
AVR_APP_PATH :=$$$AVR_APP_PATH$$$
QUOTE := "
ADDITIONAL_DEPENDENCIES:=
OUTPUT_FILE_DEP:=
LIB_DEP:=
LINKER_SCRIPT_DEP:=

# Every subdirectory with source files must be described here
SUBDIRS :=  \
../lib/ \
../AX-12 \
../src/ \
../src/ASF/ \
../src/ASF/common/ \
../src/ASF/common/boards/ \
../src/ASF/common/boards/user_board/ \
../src/ASF/common/utils/ \
../src/ASF/common/utils/interrupt/ \
../src/ASF/common/utils/make/ \
../src/ASF/mega/ \
../src/ASF/mega/utils/ \
../src/ASF/mega/utils/assembler/ \
../src/ASF/mega/utils/preprocessor/ \
../src/config/


# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS +=  \
../ax_12.c \
../ax_12_utils.c \
../main.c \
../src/ASF/common/boards/user_board/init.c


PREPROCESSING_SRCS += 


ASM_SRCS += 


OBJS +=  \
ax_12.o \
ax_12_utils.o \
main.o \
src/ASF/common/boards/user_board/init.o

OBJS_AS_ARGS +=  \
ax_12.o \
ax_12_utils.o \
main.o \
src/ASF/common/boards/user_board/init.o

C_DEPS +=  \
ax_12.d \
ax_12_utils.d \
main.d \
src/ASF/common/boards/user_board/init.d

C_DEPS_AS_ARGS +=  \
ax_12.d \
ax_12_utils.d \
main.d \
src/ASF/common/boards/user_board/init.d

OUTPUT_FILE_PATH +=HDRServoControll.elf

OUTPUT_FILE_PATH_AS_ARGS +=HDRServoControll.elf

ADDITIONAL_DEPENDENCIES:=

OUTPUT_FILE_DEP:= ./makedep.mk

LIB_DEP+=  \
E:/FER/Projekt/HDRServoControll/HDRServoControll/HDRServoControll/lib/libserial.a \
E:/FER/Projekt/HDRServoControll/HDRServoControll/HDRServoControll/lib/libzigbee.a \
E:/FER/Projekt/HDRServoControll/HDRServoControll/HDRServoControll/lib/libDynamixel.a

LINKER_SCRIPT_DEP+= 


# AVR32/GNU C Compiler









./%.o: .././%.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 4.3.3
	$(QUOTE)E:\WinAVR-20100110\bin\avr-gcc.exe$(QUOTE)  -x c -DNDEBUG -DBOARD=USER_BOARD  -I"E:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.1.130\include" -I"../src/ASF/common/boards/user_board" -I"../src/ASF/common/boards" -I"../src/ASF/mega/utils/preprocessor" -I"../src/ASF/mega/utils" -I"../src/ASF/common/utils" -I"../src" -I"../src/config" -I"../lib" -I"../include"  -O3 -fdata-sections -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -mrelax -Wall  -mmcu=atmega2561  -c -std=gnu99 -fno-strict-aliasing -Wstrict-prototypes -Wmissing-prototypes -Werror-implicit-function-declaration -Wpointer-arith -mrelax -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

src/ASF/common/boards/user_board/%.o: ../src/ASF/common/boards/user_board/%.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 4.3.3
	$(QUOTE)E:\WinAVR-20100110\bin\avr-gcc.exe$(QUOTE)  -x c -DNDEBUG -DBOARD=USER_BOARD  -I"E:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.1.130\include" -I"../src/ASF/common/boards/user_board" -I"../src/ASF/common/boards" -I"../src/ASF/mega/utils/preprocessor" -I"../src/ASF/mega/utils" -I"../src/ASF/common/utils" -I"../src" -I"../src/config" -I"../lib" -I"../include"  -O3 -fdata-sections -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -mrelax -Wall  -mmcu=atmega2561  -c -std=gnu99 -fno-strict-aliasing -Wstrict-prototypes -Wmissing-prototypes -Werror-implicit-function-declaration -Wpointer-arith -mrelax -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	



# AVR32/GNU Preprocessing Assembler



# AVR32/GNU Assembler




ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: $(OUTPUT_FILE_PATH) $(ADDITIONAL_DEPENDENCIES)

$(OUTPUT_FILE_PATH): $(OBJS) $(USER_OBJS) $(OUTPUT_FILE_DEP) $(LIB_DEP) $(LINKER_SCRIPT_DEP)
	@echo Building target: $@
	@echo Invoking: AVR/GNU Linker : 4.3.3
	$(QUOTE)E:\WinAVR-20100110\bin\avr-gcc.exe$(QUOTE) -o$(OUTPUT_FILE_PATH_AS_ARGS) $(OBJS_AS_ARGS) $(USER_OBJS) $(LIBS) -Wl,-Map="HDRServoControll.map" -Wl,--start-group -Wl,-lserial -Wl,-lzigbee -Wl,-lDynamixel  -Wl,--end-group -Wl,-L"E:\FER\Projekt\HDRServoControll\HDRServoControll\HDRServoControll\lib" -Wl,-L"E:\FER\Projekt\CM-510_examples\lib"  -Wl,--gc-sections -mrelax  -mmcu=atmega2561  -Wl,--relax  
	@echo Finished building target: $@
	"E:\WinAVR-20100110\bin\avr-objcopy.exe" -O ihex -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures  "HDRServoControll.elf" "HDRServoControll.hex"
	"E:\WinAVR-20100110\bin\avr-objcopy.exe" -j .eeprom  --set-section-flags=.eeprom=alloc,load --change-section-lma .eeprom=0  --no-change-warnings -O ihex "HDRServoControll.elf" "HDRServoControll.eep" || exit 0
	"E:\WinAVR-20100110\bin\avr-objdump.exe" -h -S "HDRServoControll.elf" > "HDRServoControll.lss"
	"E:\WinAVR-20100110\bin\avr-objcopy.exe" -O srec -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures "HDRServoControll.elf" "HDRServoControll.srec"
	"E:\WinAVR-20100110\bin\avr-size.exe" "HDRServoControll.elf"
	
	





# Other Targets
clean:
	-$(RM) $(OBJS_AS_ARGS) $(EXECUTABLES)  
	-$(RM) $(C_DEPS_AS_ARGS)   
	rm -rf "HDRServoControll.elf" "HDRServoControll.a" "HDRServoControll.hex" "HDRServoControll.lss" "HDRServoControll.eep" "HDRServoControll.map" "HDRServoControll.srec" "HDRServoControll.usersignatures"
	