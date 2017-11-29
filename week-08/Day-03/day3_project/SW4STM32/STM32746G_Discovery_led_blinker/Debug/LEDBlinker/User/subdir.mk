################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/greenfox/TurcsanyiGergo/week-08/Day-03/day3_project/Src/stm32f7xx_hal_msp.c \
C:/greenfox/TurcsanyiGergo/week-08/Day-03/day3_project/Src/stm32f7xx_it.c 

CPP_SRCS += \
C:/greenfox/TurcsanyiGergo/week-08/Day-03/day3_project/Src/main.cpp 

OBJS += \
./LEDBlinker/User/main.o \
./LEDBlinker/User/stm32f7xx_hal_msp.o \
./LEDBlinker/User/stm32f7xx_it.o 

C_DEPS += \
./LEDBlinker/User/stm32f7xx_hal_msp.d \
./LEDBlinker/User/stm32f7xx_it.d 

CPP_DEPS += \
./LEDBlinker/User/main.d 


# Each subdirectory must supply rules for building sources it contributes
LEDBlinker/User/main.o: C:/greenfox/TurcsanyiGergo/week-08/Day-03/day3_project/Src/main.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: MCU G++ Compiler'
	@echo $(PWD)
	arm-none-eabi-g++ -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-sp-d16 -DUSE_HAL_DRIVER -DSTM32F746xx -I"C:/greenfox/TurcsanyiGergo/week-08/Day-03/day3_project/Inc" -I../../../../../../../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../../../../../../../Drivers/STM32F7xx_HAL_Driver/Inc -I../../../../../../../Drivers/BSP/STM32746G-Discovery -I../../../../../../../Drivers/BSP/Components/Common -I../../../../../../../Utilities/Log -I../../../../../../../Utilities/Fonts -I../../../../../../../Utilities/CPU -I../../../../../../../Drivers/CMSIS/Include  -O0 -g3 -Wall -fmessage-length=0 -ffunction-sections -c -fno-exceptions -fno-rtti -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

LEDBlinker/User/stm32f7xx_hal_msp.o: C:/greenfox/TurcsanyiGergo/week-08/Day-03/day3_project/Src/stm32f7xx_hal_msp.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-sp-d16 -DUSE_HAL_DRIVER -DSTM32F746xx -I"C:/greenfox/TurcsanyiGergo/week-08/Day-03/day3_project/Inc" -I../../../../../../../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../../../../../../../Drivers/STM32F7xx_HAL_Driver/Inc -I../../../../../../../Drivers/BSP/STM32746G-Discovery -I../../../../../../../Drivers/BSP/Components/Common -I../../../../../../../Utilities/Log -I../../../../../../../Utilities/Fonts -I../../../../../../../Utilities/CPU -I../../../../../../../Drivers/CMSIS/Include  -Os -g3 -Wall -fmessage-length=0 -Wno-strict-aliasing -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

LEDBlinker/User/stm32f7xx_it.o: C:/greenfox/TurcsanyiGergo/week-08/Day-03/day3_project/Src/stm32f7xx_it.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-sp-d16 -DUSE_HAL_DRIVER -DSTM32F746xx -I"C:/greenfox/TurcsanyiGergo/week-08/Day-03/day3_project/Inc" -I../../../../../../../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../../../../../../../Drivers/STM32F7xx_HAL_Driver/Inc -I../../../../../../../Drivers/BSP/STM32746G-Discovery -I../../../../../../../Drivers/BSP/Components/Common -I../../../../../../../Utilities/Log -I../../../../../../../Utilities/Fonts -I../../../../../../../Utilities/CPU -I../../../../../../../Drivers/CMSIS/Include  -Os -g3 -Wall -fmessage-length=0 -Wno-strict-aliasing -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


