/* 
 * File:   lcd.h
 * Author: Oscar Hoyos
 *
 * Created on 1 de octubre de 2021, 01:11 PM
 */

#ifndef LCD_H
#define	LCD_H

#ifdef	__cplusplus
extern "C" {
#endif
#include <xc.h>
#include <PIC18F4550.h>
#include "config.h"

#define RS LATB2
#define EN LATB3
#define ldata LATB
#define LCD_Port TRISB
#define CMD_CLEAR_LCD 0x01
    
    void LCD_Init();
    void LCD_Command(unsigned char);
    void LCD_Char(unsigned char x);
    void LCD_String(const char *);
    void LCD_String_xy(char,char,const char *);
    void LCD_Clear();


#ifdef	__cplusplus
}
#endif

#endif	/* LCD_H */

