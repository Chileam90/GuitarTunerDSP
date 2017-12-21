#define		RTC1		1
#define		RTC_SET		1
#define		AD			1
#define		DA			1
#define		BUZZER		1
#define		LEDS		1
#define 	SPI			1
#define 	UART		1
#define		PWM			1
#define		LCD			1
#define		DELAY		1
#define		KEYS_INT	1
#define		TRUE		1
#define		FALSE		1

#include "stm32f4xx.h"
#include "stm32f4xx_conf.h"
#include "stm32f4xx_gpio.h"
#include "stm32f4xx_rcc.h"
#include "stm32f4xx_syscfg.h"
#include "misc.h"
#include <stdio.h>
#include <stdarg.h>


#if AD
#define	TIMER 1
#include "stm32f4xx_adc.h"
#include "adc.h"
#endif

#if UART
#include "stm32f4xx_usart.h"
#include "uart.h"
#endif

#if LEDS
#include "leds.h"
#endif

#if LCD
#include "lcd.h"
#endif

#if TIMER
#include "stm32f4xx_tim.h"
#endif

#if DELAY
#include "delay.h"
#endif

#define		LED1		GPIOD, GPIO_Pin_12
#define		LED2		GPIOD, GPIO_Pin_13
#define		LED3		GPIOD, GPIO_Pin_14
#define		LED4		GPIOD, GPIO_Pin_15

#define		TOGGLE		2
#define		ON			1
#define 	OFF			0




