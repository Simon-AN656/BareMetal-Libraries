#include "Inc/gpio.h"
#include "Inc/Macros.h"

void set_gpio_input (volatile int pin, char gpio_base){


	int calcClean = (pin - 8) * 4;
	int positionPin = 4 *(pin - 8) + 3;


	//Se habilita reloj para GPIOB
	RCC_APB2ENR |= (1U << 3);
	//Limpieza de bits MODE y CNF del PB10
	GPIOx_CRH(GPIO+gpio_base+_BASE) &= ~(0xFU << calcClean);
	GPIOx_CRH(GPIO+gpio_base+_BASE) |= (1U << positionPin);
	// Pone en 0 el PB10
	GPIOx_ODR(GPIO+gpio_base+_BASE) &= ~(1U << 10);

}
