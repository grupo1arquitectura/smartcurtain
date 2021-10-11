/* 
 * File:   utils.h
 * Author: Oscar Hoyos
 *
 * Created on 16 de septiembre de 2021, 09:19 PM
 */

#ifndef UTILS_H
#define	UTILS_H

#ifdef	__cplusplus
extern "C" {
#endif

    /*
     * unsigned char = 8 bits (0-255)
     * char = 8 bits (-127 a +127)
     * int = 16 bits
     */
    #include "lcd.h"


    void despertador();
    
    //Funciones motor
    void motorApertura();
    void motorCierre();
    void motor_ini();
    void motorStop();
    //Teclado
    char keypad_ini();
    unsigned char Keypad_Key_Press();
    //Bluetooth
    void USART_Init();
    char USART_ReceiveChar();
    //Despertador
    int varHoraAlarma = 0;
    int varMinutosAlarma = 0;
    int varFechaAlarma = 0;
    //RTC
    int int RTC_get(int prmOpcion);

#ifdef	__cplusplus
}
#endif

#endif	/* UTILS_H */

