/* Start by Omakar Chitragar(99007640), Work - Driver, delay
   Allen Thomas Varghese(99007639), Work -  Counter, Encryption  */
#include "MyStm32f407xx.h"

#define BTN_PRESSED  ENABLE
#define encrpt1 20

#define DELAY_COUNT_1MS 		 1250U
#define DELAY_COUNT_1S  		(1000U * DELAY_COUNT_1MS)
#define DELAY_COUNT_500MS  		(500U  * DELAY_COUNT_1MS)
#define DELAY_COUNT_250MS 		(250U  * DELAY_COUNT_1MS)
#define DELAY_COUNT_125MS 		(125U  * DELAY_COUNT_1MS)

int window(void);
int alarm(void);
int battery(void);
int door(void);
void led_on(uint8_t led_no);
void led_off(uint8_t led_no);
void cnt_btb(void);
int counter(void);
int encryp(int d1);

void delay (uint32_t count)
{
	for (uint32_t i=0; i<count; i++);
}

int main(void)
{
	GPIO_Handle_t Gpioled, Gpiobtn;

	Gpioled.pGPIOx = GPIOD;
	Gpioled.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_12;     // Green led
	Gpioled.GPIO_PinConfig.GPIO_PinMode   = GPIO_MODE_OUT;		//
	Gpioled.GPIO_PinConfig.GPIO_PinSpeed  = GPIO_SPEED_FAST;
	Gpioled.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&Gpioled);

	Gpioled.pGPIOx = GPIOD;
	Gpioled.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_13;   // orange led
	Gpioled.GPIO_PinConfig.GPIO_PinMode   = GPIO_MODE_OUT;
	Gpioled.GPIO_PinConfig.GPIO_PinSpeed  = GPIO_SPEED_FAST;
	Gpioled.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&Gpioled);

	Gpioled.pGPIOx = GPIOD;
	Gpioled.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_14;   // red led
	Gpioled.GPIO_PinConfig.GPIO_PinMode   = GPIO_MODE_OUT;
	Gpioled.GPIO_PinConfig.GPIO_PinSpeed  = GPIO_SPEED_FAST;
	Gpioled.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&Gpioled);

	Gpioled.pGPIOx = GPIOD;
	Gpioled.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_15;   // Blue led
	Gpioled.GPIO_PinConfig.GPIO_PinMode   = GPIO_MODE_OUT;
	Gpioled.GPIO_PinConfig.GPIO_PinSpeed  = GPIO_SPEED_FAST;
	Gpioled.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&Gpioled);

	Gpiobtn.pGPIOx = GPIOA;
	Gpiobtn.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_0;   // switch
	Gpiobtn.GPIO_PinConfig.GPIO_PinMode   = GPIO_MODE_IN;
	Gpiobtn.GPIO_PinConfig.GPIO_PinSpeed  = GPIO_SPEED_FAST;
	Gpiobtn.GPIO_PinConfig.GPIO_PinOPType = GPIO_NO_PUPD;
	GPIO_PeriClockControl(GPIOA, ENABLE);
	GPIO_Init(&Gpiobtn);

	while(1)
		{
			int ct;
			ct = counter();
			int x = encryp(ct);
			if(ct == 1 &&  x == 20)
			{
				lock();
				ct = 0;

			}
			else if (ct == 2 &&  x == 20)
			{
				unlock();
				ct =0;
			}
			else if (ct == 3 &&  x == 20)
			{
				alarm();
				ct = 0;

			}
			else if(ct == 4 &&  x == 20)
			{
				light();
				ct = 0;
			}
		   }
}

int window(void)								  //  Window Status function
{
				led_on(GPIO_PIN_NO_12);
				led_on(GPIO_PIN_NO_13);
				led_on(GPIO_PIN_NO_14);
				led_on(GPIO_PIN_NO_15);
				delay(500000);
}

int alarm(void)							   //Alarm Status function
{
				led_off(GPIO_PIN_NO_12);
				led_off(GPIO_PIN_NO_13);
				led_off(GPIO_PIN_NO_14);
				led_off(GPIO_PIN_NO_15);
				delay(500000);
}

int battery(void)									// Battry info fuction
{
	led_on(GPIO_PIN_NO_12);
	delay(500000);
	led_off(GPIO_PIN_NO_12);
	led_on(GPIO_PIN_NO_13);
	delay(500000);
	led_off(GPIO_PIN_NO_13);
	led_on(GPIO_PIN_NO_14);
	delay(500000);
	led_off(GPIO_PIN_NO_14);
	led_on(GPIO_PIN_NO_15);
	delay(500000);
	led_off(GPIO_PIN_NO_15);
}

int dooe(void)									// door status function
{
	led_on(GPIO_PIN_NO_12);
	delay(500000);
	led_off(GPIO_PIN_NO_12);
	led_on(GPIO_PIN_NO_15);
	delay(500000);
	led_off(GPIO_PIN_NO_15);
	led_on(GPIO_PIN_NO_14);
	delay(500000);
	led_off(GPIO_PIN_NO_14);
	led_on(GPIO_PIN_NO_13);
	delay(500000);
	led_off(GPIO_PIN_NO_13);
}

int counter(void)					// Counter function
{
	cnt_btb();
	int c = 0;
	int t = 50000;
	while(t--)
	{
		if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == BTN_PRESSED)
		{
			delay(1000);
			c++;
			if (c > 4)
				c = 0;
		}
	}
	return c;
}

void cnt_btb(void)
{
		uint32_t *pRccAhb1enr = (uint32_t*)0x40023830;
		*pRccAhb1enr |=(1<<0);
		uint32_t *pGpiodModeReg = (uint32_t*)0x4002000C;
		*pRccAhb1enr |=(1<<1);
}

void led_on(uint8_t led_no)				// to turn OFF the led
{
  uint32_t *pGpiodDataReg = (uint32_t*)0x40020C14;
  *pGpiodDataReg |= ( 1 << led_no);
}

void led_off(uint8_t led_no)				// to turn OFF the led
{
	  uint32_t *pGpiodDataReg = (uint32_t*)0x40020C14;
	  *pGpiodDataReg &= ~( 1 << led_no);
}

int encryp(int d1) 					// To encrypt data
{
	if( d1 == encrpt1)
	{
		int dt = 10 + 10;
		return dt;
	}
}




