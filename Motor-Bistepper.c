#include <reg51.h>
//four leds connected to port P1
sbit L1 = P1^0;
sbit L2 = P1^1;
sbit L3 = P1^2;
sbit L4 = P1^3;
void delay(long int time);	//declares delay function
void main(){
	L1 = L2 = L3 = L4 = 0;		//OFF
	while(1){
		L1 = 1;
		L2 = L3 = L4 = 0;
		delay(1000);
		L2 = 1;
		L1 = L3 = L4 = 0;
		delay(1000);
		L3 = 1;
		L1 = L2 = L4 = 0;
		delay(1000);
		L4 = 1;
		L1 = L2 = L3 = 0;
		delay(1000);
		L4 = 1;
		L1 = L2 = L3 = 0;
		delay(1000);
		L3 = 1;
		L1 = L2 = L4 = 0;
		delay(1000);
		L2 = 1;
		L1 = L3 = L4 = 0;
		delay(1000);

		L1 = 1;
		L2 = L3 = L4 = 0;
		delay(1000);
	}
}
void delay(long int time){
	long int i, j;
	for (i = 0; i < time; i++){
		for (j = 0; j <= 2; j++);
	}
}