#include "mbed.h"

DigitalOut redLED(LED01);
DigitalOut greenLED(LED02);

int main(){
    while(1){
        redLED = 1;
        greenLED = 0;
        wait(0.2);
        redLED =0;
        greenLED = 1;
        WAIT(0.2);
    }
}