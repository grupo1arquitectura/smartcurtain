#include "utils.h"
#include "config.h"
#include "pinout.h"
void motorApertura()
{
    INI1_MOTOR = 1;
}

void motorCierre()
{
    INI2_MOTOR = 1;
}

void motorStop()
{
   INI1_MOTOR = 0;
   INI2_MOTOR = 0;;   
}



void motor_ini(){
    PORTA = 0x00;
    TRISA = 0x00;
}