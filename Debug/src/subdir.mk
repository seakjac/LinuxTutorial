################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Appl1Task.cpp \
../src/OsTask.cpp \
../src/helloWorld.cpp 

OBJS += \
./src/Appl1Task.o \
./src/OsTask.o \
./src/helloWorld.o 

CPP_DEPS += \
./src/Appl1Task.d \
./src/OsTask.d \
./src/helloWorld.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


