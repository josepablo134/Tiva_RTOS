/*
 * scheduler.h
 *
 *  Created on: 01/02/2018
 *      Author: josepablocb
 */

#ifndef KERNEL_SCHEDULER_H_
#define KERNEL_SCHEDULER_H_

typedef struct{
    unsigned int status;
    unsigned int bsr;
    unsigned int wreg;
    unsigned int pc;
    void (*function)();
}thread;

#endif /* KERNEL_SCHEDULER_H_ */
