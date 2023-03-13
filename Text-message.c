#include<reg51.h>
//UART(Universal Asynchronous Receiver Transmitter)
void send_char(char x);
void main(){
	TMOD=0X20; //timer 1 in mode 2, 8-bit auto-reload mode
	TH1=0XFD; //Baudrate=9600, it is the rate at which information is transferred in a communication channel
	SCON=0X50;		//enables the UART in Mode 1
	TR1=1; 				//start timer 1
	send_char('W');
	send_char('E');
	send_char('L');
	send_char('C');
	send_char('O');
	send_char('M');
	send_char('E');
}
void send_char(char x){
		SBUF=x;
		while(TI==0);
		TI=0;
}