/*!
\file   clsDespertador.c
\date   2021-10-6
\author Oscar Hoyos  <osfehoyos@unicauca.edu.co>
\brief  Cortina inteligente con funcion de despertador

\par Copyright
Information contained herein is proprietary to and constitutes valuable
confidential trade secrets of unicauca, and
is subject to restrictions on use and disclosure.

\par
Copyright (c) unicauca 2021. All rights reserved.

\par
The copyright notices above do not evidence any actual or
intended publication of this material.
******************************************************************************
*/
#include "config.h"
#include "utils.h"
#include "alarmas.h"
unsigned char varAux;
int varAbierta = 0;
void menu()
{
     ledencendido();
     LCD_Init();        
     motor_ini();
    do{
                  /* initialize LCD16x2 in 4-bit mode */
    LCD_String_xy(0,0,"Bienvenido     ");
    __delay_ms(200);
    LCD_String_xy(0,0,"Selecione opcion: ");
    __delay_ms(200);
     LCD_String_xy(0,0,"1.Despertador    ");
    __delay_ms(200);
     LCD_String_xy(0,0,"2.Apertura       ");
    __delay_ms(200);
     LCD_String_xy(0,0,"3.Despertador    ");
    __delay_ms(200);
    
    varAux = Keypad_Key_Press();
    varAux = '2';
     if(varAux=='1')
     {
         LCD_Clear();  
                 LCD_String_xy(0,0,"Despertador    ");
                 __delay_ms(200);
            despertador();
     }
     if(varAux=='2')
     {
         if(varAbierta == 1){
             LCD_String_xy(0,0,"Cortina abierta ");
         }
         else
         {
            while(varAbierta == 0)
            {
                   LCD_String_xy(0,0,"Apertura        ");
                   __delay_ms(200);
                   motorApertura();
                   __delay_ms(400);
                   motorStop();
                   LCD_String_xy(0,0,"Abierta          ");
                   varAbierta = 1;
            }
         }
     
     }
     
     if(varAux=='3')
     {
         if(varAbierta == 1){
               while(varAbierta == 1)
            {
                   LCD_String_xy(0,0,"Apertura        ");
                   __delay_ms(200);
                   motorCierre();
                   __delay_ms(400);
                   motorStop();
                   LCD_String_xy(0,0,"Abierta          ");
                   varAbierta = 0;
            }
         }
         else
         {
          LCD_String_xy(0,0,"Cortina cerrada ");
         }
     
     }

    }while(1);
}


              
                 
 

  

    


    
