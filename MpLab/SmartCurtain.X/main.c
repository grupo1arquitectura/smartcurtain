#include "pinout.h"
#include "config.h"
#include "utils.h"

void main(void) {
    OSCCON=00;
    TRISB = 1;
    
    TRISE = 1;
    LED_RE1 = 1;
    LED_RE2 = 1;
    MSdelay(1000);
    LED_RE0 = 0;
    LED_RE1 = 0;
    LED_RE2 = 0;    
    return;
  
   
}
