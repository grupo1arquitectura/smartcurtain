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
#include "utils.h"
#include "alarmas.h"

int varHoras=0;
int varMinutos=0;
int varFecha=0;
int varTemp1=0,varTemp2;
//===============================
int varHorasD=0;
int varMinutosD=0;
int varFechaD=0;
//===============================
char varOpcion ='1';
void recuperarHorarioTeclado();
void recuperarHoraBluetooth()
{
    varOpcion =0;
    ledActivador(1);
    LCD_String_xy(0,0,"Bluetooth ON   ");
    
    varHorasD=USART_ReceiveChar();
    varMinutosD=USART_ReceiveChar();
    varFechaD=USART_ReceiveChar();
    if(varHorasD!=0&&varMinutosD!=0&&varFechaD!=0)
    {
        varHoraAlarma = varHorasD;
        varMinutosAlarma = varMinutosD;
        varFecha = varFechaD;
        ledActivador(0);
         LCD_String_xy(0,0,"Despertador       ");
         __delay_ms(100);
         LCD_String_xy(0,0,"Configurado      ");
         __delay_ms(100);
    }
    else
    {
        ledActivador(0);
        lederror(1);
         LCD_String_xy(0,0,"Error...  ");
         __delay_ms(50);
         LCD_String_xy(0,0,"No se   ");
         __delay_ms(50);
         LCD_String_xy(0,0,"recibieron   ");
         __delay_ms(50);
         LCD_String_xy(0,0,"los datos   ");
         __delay_ms(50);
         LCD_String_xy(0,0,"Usar teclado?  ");
         
         LCD_String_xy(0,0,"1. Si          ");
         LCD_String_xy(0,0,"2. No          ");
         if(varOpcion==1)
         {
             recuperarHorarioTeclado();
         } 
    }
    
}

void recuperarHorarioTeclado()
{
    
     if(varHorasD!=0&&varMinutosD!=0&&varFechaD!=0)
    {
        varHoraAlarma = varHorasD;
        varMinutosAlarma = varMinutosD;
        varFecha = varFechaD;
        ledActivador(0);
         LCD_String_xy(0,0,"Despertador       ");
         __delay_ms(100);
         LCD_String_xy(0,0,"Configurado      ");
         __delay_ms(100);
    }
    else
    {
         LCD_String_xy(0,0,"Error al cargar ");
    }
    
}

void sistemaAlarma()
{
    if(varHoras==varHoraAlarma && varMinutos == varMinutosAlarma)
    {
        motorApertura();
    }
}


void despertador()
{
    varHoras=RTC_get(3);
    varMinutos=RTC_get(2);
    LCD_String_xy(0,0,"1. Bluetooth    ");
    __delay_ms(200);
    LCD_String_xy(0,0,"2. Teclado      ");
    __delay_ms(200);
    
    if(varOpcion =='1')
    {
       recuperarHoraBluetooth();
    }
    if(varOpcion =='2')
    {
       recuperarHorarioTeclado();
    }
    
}