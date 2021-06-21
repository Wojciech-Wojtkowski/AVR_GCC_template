#include<avr/io.h>
#include<util/delay.h>
#include<avr/interrupt.h>


void init_io(void);
void init_int0(void);

ISR(INT0_vect){

}


int main(void){
	init_io();
	init_int(0);

	while(1){
	_delay_ms(100);
	
	}
}

void init_io(void){
	DDRB |= (1<<PB0);//set out direction
	PORTB |= (1<<PB0);//set "1"
	
	DDRB&=~(1<<PB1);//set in direction
	PORTB|=(1<<PB1);//set pull up
}

void init_int0(void){

	sei();
}
