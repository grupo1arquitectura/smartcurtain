/* 
 * File:   alarmas.h
 * Author: Oscar Hoyos
 *
 * Created on 30 de septiembre de 2021, 12:43 PM
 */

#ifndef ALARMAS_H
#define	ALARMAS_H

#ifdef	__cplusplus
extern "C" {
#endif
#include "config.h"
    void ledencendido();
    void ledActivador();
    void ledestado(unsigned int prmEstado);
    void lederror();


#ifdef	__cplusplus
}
#endif

#endif	/* ALARMAS_H */

