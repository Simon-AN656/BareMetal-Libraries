#include "gpio.h"
#include "macros.h"

void set_gpio_input (volatile int pin, char gpio_base){


	int calcClean = (pin - 8) * 4;
	int positionPin = 4 *(pin - 8) + 3;


	//Se habilita reloj para GPIOB
	RCC_APB2ENR |= (1U << 3);


}
