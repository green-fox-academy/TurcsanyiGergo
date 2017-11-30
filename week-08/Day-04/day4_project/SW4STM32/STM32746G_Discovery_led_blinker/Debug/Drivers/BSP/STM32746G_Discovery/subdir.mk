################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/greenfox/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery.c 

OBJS += \
./Drivers/BSP/STM32746G_Discovery/stm32746g_discovery.o 

C_DEPS += \
./Drivers/BSP/STM32746G_Discovery/stm32746g_discovery.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/BSP/STM32746G_Discovery/stm32746g_discovery.o: C:/greenfox/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-sp-d16 -DUSE_HAL_DRIVER -DSTM32F746xx -I"C:/greenfox/TurcsanyiGergo/week-08/Day-03/day3_project/Inc" -I../../../../../../../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../../../../../../../Drivers/STM32F7xx_HAL_Driver/Inc -I../../../../../../../Drivers/BSP/STM32746G-Discovery -I../../../../../../../Drivers/BSP/Components/Common -I../../../../../../../Utilities/Log -I../../../../../../../Utilities/Fonts -I../../../../../../../Utilities/CPU -I../../../../../../../Drivers/CMSIS/Include  -Os -g3 -Wall -fmessage-length=0 -Wno-strict-aliasing -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


