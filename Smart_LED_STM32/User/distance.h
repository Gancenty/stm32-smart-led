#ifndef _ULTRASONIC_DISTACE_H
#define _ULTRASONIC_DISTACE_H

#define DISTANCE_PORT 		GPIOB
#define DISTANCE_PIN  		GPIO_Pin_7
#define DISTANCE_ECO_PORT GPIOB
#define DISTANCE_ECO_PIN  GPIO_Pin_6
#include "includes.h"

void distance_init(void);
void distance_get(float* distance);





#endif
