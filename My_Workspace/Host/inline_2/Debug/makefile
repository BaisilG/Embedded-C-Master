################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
inline_2.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
inline_2.list \

OBJCOPY_BIN += \
inline_2.bin \


# All Target
all: inline_2.elf secondary-outputs

# Tool invocations
inline_2.elf: $(OBJS) $(USER_OBJS) D:\UiPath\Microcontroller\ Embedded\ C\Main\My_Workspace\Host\inline_2\STM32F051R8TX_FLASH.ld
	arm-none-eabi-gcc -o "inline_2.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m0 -T"D:\UiPath\Microcontroller Embedded C\Main\My_Workspace\Host\inline_2\STM32F051R8TX_FLASH.ld" --specs=nosys.specs -Wl,-Map="inline_2.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

inline_2.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "inline_2.list"
	@echo 'Finished building: $@'
	@echo ' '

inline_2.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "inline_2.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
