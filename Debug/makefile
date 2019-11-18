################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include Drivers/STM32F7xx_HAL_Driver/Src/subdir.mk
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
MX25L51245G_STM32F769I-DISC1.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
MX25L51245G_STM32F769I-DISC1.list \


# All Target
all: MX25L51245G_STM32F769I-DISC1.elf secondary-outputs

# Tool invocations
MX25L51245G_STM32F769I-DISC1.elf: $(OBJS) $(USER_OBJS) C:\STMCubeMx\MX25L51245G_STM32F769I-DISC1\STM32F769NIHX_FLASH.ld
	arm-none-eabi-gcc -o "MX25L51245G_STM32F769I-DISC1.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m7 -T"C:\STMCubeMx\MX25L51245G_STM32F769I-DISC1\STM32F769NIHX_FLASH.ld" --specs=nosys.specs -Wl,-Map="MX25L51245G_STM32F769I-DISC1.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

MX25L51245G_STM32F769I-DISC1.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "MX25L51245G_STM32F769I-DISC1.list"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
