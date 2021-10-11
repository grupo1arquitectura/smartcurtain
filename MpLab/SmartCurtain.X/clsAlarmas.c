#include "alarmas.h"
#include "pinout.h"
void ledencendido()
{
    LED_RE0 = 1;
}

void ledestado(unsigned int prmEstado)
{
    if(prmEstado == 1)
    {
        while(1)
        {
           LED_RE1 = 1;
           __delay_ms(500);
           LED_RE1= 0;  
        }
       
    }else LED_RE1= 0;   
}

void lederror(unsigned int prmEstado)
{
    if(prmEstado == 1)
    {
        LED_RE2 = 1 ;
    }
    else LED_RE2=0;
    
}

void ledActivador(unsigned int prmEstado)
{
     if(prmEstado == 1)
    {
        while(1)
        {
           LED_RE1 = 1;
           __delay_ms(1);
           LED_RE1= 0;  
        }
       
    }else LED_RE1 =0;
}