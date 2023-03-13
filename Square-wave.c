#include<reg51.h>
void delay(long int time);		//declares a delay function
void main() {
	while(1){		//infinite loop
		P1=0x00;
		delay(10000);
		P1=0xFF;
		delay(10000);
	}
}
void delay(long int time){		//nested loop-large number of loop iterations
	long int i,j;
	for(i=0;i<=time;i++)				//performs  empty statement- iterated from o to 10000(as given in the main funtion)
		for(j=0;j<3;j++);					//iterates from 0 to 2
}