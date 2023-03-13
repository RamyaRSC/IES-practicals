#include<reg51.h>
#include<intrins.h>
int wave_value[16]={20,50,90,120,150,190,230,255,230,190,150,120,90,50,20,0};	//initializes an integer array-that represent the amplitude of the sine wave
void main(){
	unsigned char a;
 	P1=0x00; 		//port one value as 0
	while(1){		//Infinite loop
		for(a=0;a<16;a++){
			P1=wave_value[a];
			_nop_();		//used to create a delay between each PWM(pulse width modulation) cycle
			_nop_();
		}
	}
}