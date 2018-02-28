/*
 * tasks.h
 *
 *  Created on: 24/01/2018
 *      Author: josepablocb
 */

#ifndef KERNEL_TASKS_H_
#define KERNEL_TASKS_H_

//
// Estructura para controlar una tarea
//
typedef struct task{
    unsigned char   *STACK;
    unsigned int    STACK_SIZE;
    unsigned char   state;
    unsigned char   priority;
    void            (*task_function)(void);
    //Otros datos de control
}task;

typedef task*           task_ptr;

//Inicializar parametros de tarea
//Registrar tarea en el sistema

#endif /* KERNEL_TASKS_H_ */
