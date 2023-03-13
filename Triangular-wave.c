#include<reg51.h>
void main() {
	P1=0x00;		//ets the value of port P1 to 0x00
	while(1){		//infinite loop 
		do{							//increments the value of port P1 by 0x05 until it reaches 0xFF
			P1+=0x05;
		}
		while(P1<0xFF);
		do{							//decrements the value of port P1 by 0x05 until it reaches 0x00
			P1-=0x05;
		}
		while(P1>0x00);
	}
}