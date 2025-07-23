#ifndef CONSTANTS_H
#define CONSTANTS_H
void constants(void);
/*
LCD pins            GPIO pins
Vss-------------------GND
Vdd-------------------+5V
Vo--------------------GND
RS--------------------17
RW--------------------GND
E---------------------18
D4--------------------16
D5--------------------22
D6--------------------4
D7--------------------21




*/
/*define which ESP32 pins will interface with 1602 LCD*/
#define D7 21 
#define D6 4
#define D5 22
#define D4 16
#define RS 17
#define E 18

enum{LO,HI};


#endif