// Traffic Signal
#include <reg51.h>
sbit e_go = P1^0;
sbit e_slow = P1^1;
sbit e_stop = P1^2;
sbit n_go = P1^3;
sbit n_slow = P1^4;
sbit n_stop = P1^5;
sbit w_go = P1^6;
sbit w_slow = P1^7;
sbit w_stop = P3^0;
sbit s_go = P3^1;
sbit s_slow = P3^2;
sbit s_stop = P3^3;
void ewgo();				//turns on green light for East-West & red for North-South
void ewlisten();		//turns on yellow light for East-West & yellow light for North-South
void nsgo();				//turns on green light for North-South & red light for East-West
void nslisten();		//turns on yellow light for North-South & yellow light for East-West
void delay(long int time);
void main(){
	P1 = 0x00;
	P3 = 0x00;
	while(1){
		ewgo();	
		delay(10000);
		ewlisten();
		delay(10000);
		nsgo();
		delay(10000);
		nslisten();
		delay(10000);
	}
}
void ewgo(){
	e_go = 1;
	e_stop = 0;
	e_slow = 0;
	w_go = 1;
	w_stop = 0;
	w_slow = 0;
	n_go = 0;
	n_stop = 1;
	n_slow = 0;
	s_go = 0;
	s_stop = 1;
	s_slow = 0;
}
void ewlisten(){
	e_go = 0;
	e_stop = 0;
	e_slow = 1;
	w_go = 0;
	w_stop = 0;
	w_slow = 1;
	n_go = 0;
	n_stop = 1;
	n_slow = 0;
	s_go = 0;
	s_stop = 1;
	s_slow = 0;
}
void nsgo(){
	e_go = 0;
	e_stop = 1;
	e_slow = 0;
	w_go = 0;
	w_stop = 1;
	w_slow = 0;
	n_go = 1;
	n_stop = 0;
	n_slow = 0;
	s_go = 1;
	s_stop = 0;
	s_slow = 0;
}
void nslisten(){
	e_go = 0;
	e_stop = 1;
	e_slow = 0;
	w_go = 0;
	w_stop = 1;
	w_slow = 0;
	n_go = 0;
	n_stop = 0;
	n_slow = 1;
	s_go = 0;
	s_stop = 0;
	s_slow = 1;
}
void delay(long int time){
	long int i, j;
	for (i = 0; i <= time; i++){
		for (j = 0; j <= 2; j++);
	}
}