################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Drivers/STM32F1xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include Aplicaciones/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
Control_PID_STM32F103.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
Control_PID_STM32F103.list \

OBJCOPY_BIN += \
Control_PID_STM32F103.bin \


# All Target
all: Control_PID_STM32F103.elf secondary-outputs

# Tool invocations
Control_PID_STM32F103.elf: $(OBJS) $(USER_OBJS) /Users/dario/Documents/STM32_Workspace/Lector_RPM/Control_PID_STM32F103/STM32F103C8TX_FLASH.ld
	arm-none-eabi-gcc -o "Control_PID_STM32F103.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m3 -T"/Users/dario/Documents/STM32_Workspace/Lector_RPM/Control_PID_STM32F103/STM32F103C8TX_FLASH.ld" --specs=nosys.specs -Wl,-Map="Control_PID_STM32F103.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

Control_PID_STM32F103.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "Control_PID_STM32F103.list"
	@echo 'Finished building: $@'
	@echo ' '

Control_PID_STM32F103.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "Control_PID_STM32F103.bin"
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
