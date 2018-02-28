/*
 * kernel.h
 *
 *  Created on: 24/01/2018
 *      Author: josepablocb
 */

#ifndef KERNEL_KERNEL_H_
#define KERNEL_KERNEL_H_

#include <stdint.h>
#include <stdbool.h>
#include "inc/hw_memmap.h"
#include "driverlib/gpio.h"
#include "driverlib/sysctl.h"
#include "driverlib/rom.h"
#include "driverlib/rom_map.h"
#include "driverlib/systick.h"

//****************************************************************************
//
// The system tick rate expressed both as ticks per second and a millisecond
// period.
//
//****************************************************************************
#define SYSTICKS_PER_SECOND 1000
#define SYSTICK_PERIOD_MS (1000 / SYSTICKS_PER_SECOND)

//*****************************************************************************
//
// External declarations for the interrupt handlers used by the application.
//
//*****************************************************************************
extern void SysTickIntHandler(void);

//
//Inicializa el RTC y el OSC a 120MHz
//
extern void SysInit(void);
//
//Retardo segun un contador
//
extern void SysDelay(uint32_t);



#endif /* KERNEL_KERNEL_H_ */
