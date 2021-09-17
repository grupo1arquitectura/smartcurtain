
#include "pinout.h"


void main(void) {
    OSCCON=0x72;
    TRISB = 0;
    while(1)
    {
        LED_RE0 = 1;
        LED_RE1 = 0;
        LED_RE2 = 1;
        __delay_ms(1000);
        LED_RE0 = 0;
        LED_RE1 = 1;
        LED_RE2 = 0;    
        return;
    }
   
}
