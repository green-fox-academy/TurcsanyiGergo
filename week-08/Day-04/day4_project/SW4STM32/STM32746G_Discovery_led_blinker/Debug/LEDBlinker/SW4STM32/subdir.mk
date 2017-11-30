################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
C:/greenfox/TurcsanyiGergo/week-08/Day-03/day3_project/SW4STM32/startup_stm32f746xx.s 

OBJS += \
./LEDBlinker/SW4STM32/startup_stm32f746xx.o 


# Each subdirectory must supply rules for building sources it contributes
LEDBlinker/SW4STM32/startup_stm32f746xx.o: C:/greenfox/TurcsanyiGergo/week-08/Day-03/day3_project/SW4STM32/startup_stm32f746xx.s
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Assembler'
	@echo $(PWD)
	arm-none-eabi-as -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-sp-d16 -g -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


