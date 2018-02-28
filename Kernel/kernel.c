/*
 * kernel.c
 *
 *  Created on: 24/01/2018
 *      Author: josepablocb
 */
#include "kernel.h"

//*****************************************************************************
//
// Variable to remember our clock frequency
//
//*****************************************************************************
volatile uint32_t g_ui32SysClock = 0;

//****************************************************************************
//
// Global system tick counter
//
//****************************************************************************
volatile uint32_t g_ui32SysTickCount = 0;

void SysTickIntHandler(void){
    g_ui32SysTickCount++;

}

void SysInit(){
    //
    // Run from the PLL at 120 MHz.
    //
    //MAP_SysCtlClockFreqSet
    g_ui32SysClock = MAP_SysCtlClockFreqSet((SYSCTL_XTAL_25MHZ |
                                             SYSCTL_OSC_MAIN |
                                             SYSCTL_USE_PLL |
                                             SYSCTL_CFG_VCO_480), 120000000);

    //
    // Enable the system tick.
    //
    SysTickPeriodSet(g_ui32SysClock / SYSTICKS_PER_SECOND);
    SysTickIntEnable();
    SysTickEnable();
}

void SysDelay(uint32_t ticks){
    //(g_ui32SysClock
    ROM_SysCtlDelay(ticks);
}
