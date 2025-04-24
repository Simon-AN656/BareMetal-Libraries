#include "macros.h"
#include <stdlib.h>
/********************************************************************
 * Registro	Offset	Dirección absoluta	Descripción
 * Base Adreess TIM2 0x40000000
 * CR1	0x00	0x40000000	Control del timer (habilitarlo, etc)
 * CNT	0x24	0x40000024	Contador actual (lectura)
 * PSC	0x28	0x40000028	Prescaler (ajusta velocidad de cuenta)
 * ARR	0x2C	0x4000002C	Valor de recarga (auto-reload)
 * *****************************************************************/



RCC_APB1ENR =| (1U << 0);
