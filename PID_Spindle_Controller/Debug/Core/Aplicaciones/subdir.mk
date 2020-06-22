################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Aplicaciones/app_Debounce.c \
../Core/Aplicaciones/app_Despliegue.c \
../Core/Aplicaciones/app_Frecuencia.c 

OBJS += \
./Core/Aplicaciones/app_Debounce.o \
./Core/Aplicaciones/app_Despliegue.o \
./Core/Aplicaciones/app_Frecuencia.o 

C_DEPS += \
./Core/Aplicaciones/app_Debounce.d \
./Core/Aplicaciones/app_Despliegue.d \
./Core/Aplicaciones/app_Frecuencia.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Aplicaciones/app_Debounce.o: ../Core/Aplicaciones/app_Debounce.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F103x6 -DDEBUG -c -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Aplicaciones/app_Debounce.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Core/Aplicaciones/app_Despliegue.o: ../Core/Aplicaciones/app_Despliegue.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F103x6 -DDEBUG -c -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Aplicaciones/app_Despliegue.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Core/Aplicaciones/app_Frecuencia.o: ../Core/Aplicaciones/app_Frecuencia.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F103x6 -DDEBUG -c -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Aplicaciones/app_Frecuencia.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

