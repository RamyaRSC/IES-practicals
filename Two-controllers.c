#include< reg51.h>
unsigned char a;
void delay(long int time);		//declare delay function
void main(){
	P1 = 0x00;

	while(1){		//infinite loop
		for(a = 0; a < 256; a++){		//iterated from 0 to 255
			P1++;
			delay(10000);
		}
	}
}
void delay(long int time){
	long int i, j;
	for(i = 0; i <= time; i++)
	for(j = 0; j <= 2; j++);
}