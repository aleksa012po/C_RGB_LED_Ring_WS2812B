/*
 * digitalwrite.c
 *
 * Created: 4.1.2023. 22:02:10
 *  Author: Aleksandar Bogdanovic
 */ 

#include <avr/io.h>

void digitalWrite(char port,int pin,int state){  //port=A,B,C,D. pin 0-7. state 0 or 1.
	switch(port){
		case 'B':
		if(state)
		PORTB |= (1<<pin);
		else
		PORTB &= ~(1<<pin);
		break;
		case 'C':
		if(state)
		PORTC |= (1<<pin);
		else
		PORTC &= ~(1<<pin);
		break;
		case 'D':
		if(state)
		PORTD |= (1<<pin);
		else
		PORTD &= ~(1<<pin);
		break;
		default:
		DDRB=0xFF;
		PORTB=0xFF;
	}
}