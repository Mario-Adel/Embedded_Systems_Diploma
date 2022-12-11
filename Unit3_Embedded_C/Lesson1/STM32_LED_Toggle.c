/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Mario_Adel
 * @brief          : Main program body
 ******************************************************************************
 */

//led connected to GPIO port A13
//Base address RCC  0x40021000
//GPIO Port A       0x40010800

typedef volatile unsigned int vuint32_t;
#include <stdint.h>
// REG ADDERSS
#define RCC_BASE 		 0x40021000
#define GPIO_PA_BASE   	 0x40010800
//ref pointers
#define RCC_APB2ENR  *((vuint32_t *)(RCC_BASE 	 + 0x18))
#define GPIOA_CRH     *((vuint32_t *)(GPIO_PA_BASE + 0x04))
#define GPIOA_ODR     *((vuint32_t *)(GPIO_PA_BASE + 0x0c))
//bit fields
#define RCC_IOPAEN (1<<2)
#define GPIOA13   (1UL<<13)

typedef union {

	vuint32_t  all_fields;
	struct {
		vuint32_t  reserved:13;
		vuint32_t  p13:1;
	}Pin;
}ODR_R;

volatile ODR_R* ODR_reg = (volatile ODR_R*)(GPIO_PA_BASE + 0x0c);  //pointer of type ODR_R
int main(void)
{
	RCC_APB2ENR |= RCC_IOPAEN ;   //RCC_IOPAEN = (1<<2)
	GPIOA_CRH    &= 0xFF0FFFFF ;
	GPIOA_CRH 	|= 0x00200000 ;

	while(1)
	{
		ODR_reg->Pin.p13  = 1;
		for(int i=0; i<5000 ; i++); //delay
		ODR_reg->Pin.p13 = 0;
		for(int i=0; i<5000 ; i++); //delay
	}

	return 0;
}
