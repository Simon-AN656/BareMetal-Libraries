#ifndef MACROS_H
#define MACROS_H
#include <stdint.h>

/*
0x4001 2000 - 0x4001 23FF GPIO Port G
0x4001 1C00 - 0x4001 1FFF GPIO Port F
0x4001 1800 - 0x4001 1BFF GPIO Port E
0x4001 1400 - 0x4001 17FF GPIO Port D
0x4001 1000 - 0x4001 13FF GPIO Port C
0x4001 0C00 - 0x4001 0FFF GPIO Port B
0x4001 0800 - 0x4001 0BFF GPIO Port A
*/

//Base Address Registers GPIOs
#define GPIOA_BASE 	0x40010800U
#define GPIOB_BASE 	0x40010C00U
#define GPIOC_BASE 	0x40011000U
#define GPIOD_BASE 	0x40011400U
#define GPIOE_BASE 	0x40011800U
#define GPIOF_BASE 	0x40011C00U
#define GPIOG_BASE 	0x40012000U

//Base Address Register RCC
#define RCC_BASE 	0x40021000U

//Base Address Registers TIMx
#define TIM2_BASE 	0x40000000U

//Address Offset
#define RCC_APB2ENR_OFFSET 	0x18U
#define RCC_APB1ENR_OFFSET 	0x1CU
#define RCC_AHBENR_OFFSET	0x14U
#define CRH_OFFSET 			0x04U
#define CRL_OFFSET			0x00U
#define ODR_OFFSET 			0x0CU
#define IDR_OFFSET 			0x08U
#define TIMx_CR1_OFFSET 	0x00U
#define TIMx_PSC_OFFSET 	0x28U
#define TIMx_ARR_OFFSET 	0x2CU
#define TIMx_CCMR1_OFFSET 	0x18U
#define TIMx_CCR1_OFFSET 	0x34U
#define TIMx_CCER_OFFSET	0x20U

//Activation complete register Base + Offset

//RCC
#define RCC_APB2ENR 		(*(volatile uint32_t*)(RCC_BASE + RCC_APB2ENR_OFFSET))
#define RCC_APB1ENR 		(*(volatile uint32_t*)(RCC_BASE + RCC_APB1ENR_OFFSET))
#define RCC_AHBENR 			(*(volatile uint32_t*)(RCC_BASE + RCC_AHBENR_OFFSET))

//GPIOS
#define GPIOx_CRH(GPIOx) 	(*(volatile uint32_t*)(GPIOx + CRH_OFFSET))
#define GPIOx_CRL(GPIOx) 	(*(volatile uint32_t*)(GPIOx + CRL_OFFSET))
#define GPIOx_ODR(GPIOx) 	(*(volatile uint32_t*)(GPIOx + ODR_OFFSET))
#define GPIOx_ODR(GPIOx) 	(*(volatile uint32_t*)(GPIOx + ODR_OFFSET))
#define GPIOx_IDR(GPIOx) 	(*(volatile uint32_t*)(GPIOx + IDR_OFFSET))

//TIMx
#define TIMx_CR1(TIMx) 		(*(volatile uint32_t*)(TIMx + TIMx_CR1_OFFSET))
#define TIMx_PSC(TIMx)  	(*(volatile uint32_t*)(TIMx + TIMx_PSC_OFFSET))
#define TIMx_ARR(TIMx)  	(*(volatile uint32_t*)(TIMx + TIMx_ARR_OFFSET))
#define TIMx_CCMR1(TIMx) 	(*(volatile uint32_t*)(TIMx + TIMx_CCMR1_OFFSET))
#define TIMx_CCR1(TIMx) 	(*(volatile uint32_t*)(TIMx + TIMx_CCR1_OFFSET))
#define TIMx_CCER(TIMx) 	(*(volatile uint32_t*)(TIMx + TIMx_CCER_OFFSET))

#endif
