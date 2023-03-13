#include <reg51.h>
//declaring array- values of segments that need to lit up for each number from 0 to 9
unsigned char hex_value[10] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07,0x7F, 0x6F}; 
void delay(long int time);
void main(){
    P2 = 0x00;
    P3 = 0x00;
    while (1){
        unsigned char a, b;
        for (a = 0; a < 10; a++){		//nested loops
            P2 = hex_value[a];
            for (b = 0; b < 10; b++) {
                P3 = hex_value[b];
                delay(1000);				//1000 miliseconds(1 second)
            }
        }
    }
}
void delay(long int time){
    long int i, j;
    for (i = 0; i < time; i++){
        for (j = 0; j <= 2; j++);		
    }
}