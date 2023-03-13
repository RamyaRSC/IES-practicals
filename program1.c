#include<reg51.h>
unsigned char a;
void main() {
	while(1){		//infinite loop
		for(a=0;a<=255;a++){
			P1=0x00; //OFF
			P1=0xFF; //ON
		}
	}
}