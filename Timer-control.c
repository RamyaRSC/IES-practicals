#include <reg51.h>
void delay_timer();
void main(){
	while(1){			//infinite loop
		P1 = 0xFF;  //on
		delay_timer();
		P1 = 0x00;  //off
		delay_timer();
	}
}
void delay_timer() {
	TMOD = 0x01; //timer 0 mode 1-16-bit timer mode with auto-reload
	// timer is set to reload after a certain amount of time, determined by TH0 and TL0 registers
	TL0 = 0xFC; //Timer 0 - Low Byte
	TH0 = 0x65; //Timer 0 - High Byte
	TR0 = 1; 		//Timer 0 Run Control
	while(TF0 == 0);
	TR0 = 0;		//Timer 0 Run Control
	TF0 = 0;		//Timer 0 Overflow Flag
}