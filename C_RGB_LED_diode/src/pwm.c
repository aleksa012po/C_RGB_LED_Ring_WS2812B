/*
 * pwm.c
 *
 * Created: 4.1.2023. 22:03:12
 *  Author: Aleksandar Bogdanovic
 */ 

#include <avr/io.h>

void pwm(int pin,int num){
	TCCR0B |= (1<<CS00)|(1<<CS01);//prescalar /64
	TCCR2B |= (1<<CS20)|(1<<CS21);//prescalar /64
	switch(pin){
		case 0:
		TCCR0A |= (1<<WGM01)|(1<<WGM00)|(1<<COM0A1);//fast pwm, non inverted
		setPin('D',6,1);
		OCR0A=num;
		break;
		case 1:
		TCCR0A |= (1<<WGM01)|(1<<WGM00)|(1<<COM0B1);//fast pwm, non inverted
		setPin('D',5,1);
		OCR0B=num;
		break;
		case 2:
		TCCR2A |= (1<<WGM21)|(1<<WGM20)|(1<<COM2A1);//fast pwm, non inverted
		setPin('B',3,1);
		OCR2A=num;
		break;
		case 3:
		TCCR2A |= (1<<WGM21)|(1<<WGM20)|(1<<COM2B1);//fast pwm, non inverted
		setPin('B',3,1);
		OCR2B=num;
		break;
	}
}
