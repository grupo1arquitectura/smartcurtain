# 1 "utils.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 288 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "D:/X64/Mplab/packs/Microchip/PIC18Fxxxx_DFP/1.2.26/xc8\\pic\\include\\language_support.h" 1 3
# 2 "<built-in>" 2
# 1 "utils.c" 2
# 1 "./utils.h" 1
# 20 "./utils.h"
    void MSdelay(unsigned int);
# 1 "utils.c" 2

void MSdelay(unsigned int prmTiempo)
{
    unsigned int varContador1,varContador2;
    for(varContador1=0;varContador1<prmTiempo;varContador1++)
         for(varContador2=0;varContador2<165;varContador2++);
}
