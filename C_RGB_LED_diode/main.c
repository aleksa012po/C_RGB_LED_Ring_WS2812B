/*
 * C_RGB_LED_diode.c
 *
 * Created: 4.1.2023. 21:59:36
 * Author : Aleksandar Bogdanovic
 */ 

#include <avr/io.h>
#include <util/delay.h>
#include <stdlib.h>
#include "setpin.h"
#include "digitalwrite.h"
#include "pwm.h"
#define F_CPU 16000000UL
#define RAND_MAX 1023


int main(void)
{
	while(1)
	{
		int x=rand();
		int y=rand();
		int z=rand();
		pwm(0,x);
		_delay_ms(1000);
		pwm(1,y);
		_delay_ms(1000);
		pwm(2,z);
		_delay_ms(1000);
	}
	return 0;
}
