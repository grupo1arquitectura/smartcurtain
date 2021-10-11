/* 
 * File:   pinout.h
 * Author: Oscar Hoyos
 *
 * Created on 16 de septiembre de 2021, 08:53 PM
 */
#import "config.h"
#ifndef PINOUT_H
#define	PINOUT_H

#ifdef	__cplusplus
extern "C" {
#endif
//PUETRO A (SENSOR DE LUZ - MOTOR)
#define SENSOR_LUZ PORTAbits.RA0 //Sensore de luz
#define INI1_MOTOR PORTAbits.RA1 //Control motor
#define INI2_MOTOR PORTAbits.RA2 //Control motor

//PUERTO B (RTC - PANTALLA)
    
#define PIN1_PANTALLA PORTBbits.RB2
#define PIN2_PANTALLA PORTBbits.RB3
#define PIN3_PANTALLA PORTBbits.RB4
#define PIN4_PANTALLA PORTBbits.RB5
#define PIN5_PANTALLA PORTBbits.RB6
#define PIN6_PANTALLA PORTBbits.RB7

//PUERTO C (BLUETOOTH)

#define TXD_BLUE PORTCbits.RC6
#define RXD_BLUE PORTCbits.RC7
    
//PUERTO D (TECLADO MATRICIAL)
    
#define PIN1_TECLADO PORTDbits.RD0
#define PIN2_TECLADO PORTDbits.RD1
#define PIN3_TECLADO PORTDbits.RD2
    
#define PINA_TECLADO PORTBbits.RB3
#define PINB_TECLADO PORTBbits.RB4
#define PINC_TECLADO PORTBbits.RB5
#define PINd_TECLADO PORTBbits.RB6

    
//PUERTO E (LEDS)
#define LED_RE0 PORTEbits.RE0 //LED 1
#define LED_RE1 PORTEbits.RE1 //LED 2
#define LED_RE2 PORTEbits.RE2 //LED 3



#ifdef	__cplusplus
}
#endif

#endif	/* PINOUT_H */

