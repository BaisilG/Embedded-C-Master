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
HelloWord.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
HelloWord.list \

OBJCOPY_BIN += \
HelloWord.bin \


# All Target
all: HelloWord.elf secondary-outputs

# Tool invocations
HelloWord.elf: $(OBJS) $(USER_OBJS) D:\UiPath\Microcontroller\ Embedded\ C\Main\My_Workspace\Target\HelloWord\STM32F407VGTX_FLASH.ld
	arm-none-eabi-gcc -o "HelloWord.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"D:\UiPath\Microcontroller Embedded C\Main\My_Workspace\Target\HelloWord\STM32F407VGTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="HelloWord.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

HelloWord.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "HelloWord.list"
	@echo 'Finished building: $@'
	@echo ' '

HelloWord.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "HelloWord.bin"
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
