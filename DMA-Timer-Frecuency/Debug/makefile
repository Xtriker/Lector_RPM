################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Drivers/STM32L4xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
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
DMA-Timer-Frecuency.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
DMA-Timer-Frecuency.list \

OBJCOPY_BIN += \
DMA-Timer-Frecuency.bin \


# All Target
all: DMA-Timer-Frecuency.elf secondary-outputs

# Tool invocations
DMA-Timer-Frecuency.elf: $(OBJS) $(USER_OBJS) /home/dario/Documentos/STM32_Workspace/Lector_RPM/DMA-Timer-Frecuency/STM32L412RBTXP_FLASH.ld
	arm-none-eabi-gcc -o "DMA-Timer-Frecuency.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"/home/dario/Documentos/STM32_Workspace/Lector_RPM/DMA-Timer-Frecuency/STM32L412RBTXP_FLASH.ld" --specs=nosys.specs -Wl,-Map="DMA-Timer-Frecuency.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

DMA-Timer-Frecuency.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "DMA-Timer-Frecuency.list"
	@echo 'Finished building: $@'
	@echo ' '

DMA-Timer-Frecuency.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "DMA-Timer-Frecuency.bin"
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
