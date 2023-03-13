#include <reg51.h> 	// Include header file for 8051 microcontroller
void delay(void); 	// Declare function to create a time delay
sbit LED = P2 ^ 0; 	// Define LED pin as bit 0 of port P2
void main(void) {
    P1 = 0x60; 		// Initialize port P1 to 0110 0000 in binary (0x60 in hexadecimal)
    LED = 0; 		// Turn off LED
    while (1) { 		// Infinite loop
        if (P1 > 0x50) { 	// If P1 is greater than 0x50 (80 in decimal)
            LED = 1; 		// Turn on LED
            delay(); 		// Wait for a short period of time
        } else {
            LED = 0; 		// Turn off LED
        }
    }
}

void delay(void) {
    unsigned int i;
    for (i = 0; i <= 600; i++); // Loop 600 times to create a time delay
} 