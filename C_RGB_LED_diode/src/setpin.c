/*
 * setpin.c
 *
 * Created: 4.1.2023. 22:00:50
 *  Author: Aleksandar Bogdanovic
 */ 

#include <avr/io.h>

void setPin(char port,int pin,int state){  //port=A,B,C,D. pin 0-7. state 0 or 1.
	switch(port){
		case 'B':
		if(state==1)
		DDRB |= (1<<pin);
		else
		DDRB &=	~(1<<pin);
		break;
		case 'C':
		if(state==1)
		DDRC |= (1<<pin);
		else
		DDRC &=	~(1<<pin);
		break;
		case 'D':
		if(state==1)
		DDRD |= (1<<pin);
		else
		DDRD &=	~(1<<pin);
		break;
		default:
		DDRB=0xFF;
		PORTB=0xFF;
	}
}