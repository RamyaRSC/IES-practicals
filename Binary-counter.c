#include<reg51.h>
void delay(int time);		//declared delay function
void main(){
	P1 = 00000000;
	while(1){				//infinite loop
		P1++;
		delay(100);
	}
}

void delay(int time){					//nested loop
	int i, j;
	for(i = 0; i <= time; i++){ //iterates from 0 to 100
		for(j = 0; j <= 23; j++){	//iterates from 0 to 23(24 time for each milisecond)
		}
	}
		
}
