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

#define LED_RE0 LATEbits.RE0 //LED 1
#define LED_RE1 LATEbits.RE1 //LED 2
#define LED_RE2 LATEbits.RE2 //LED 3



#ifdef	__cplusplus
}
#endif

#endif	/* PINOUT_H */

