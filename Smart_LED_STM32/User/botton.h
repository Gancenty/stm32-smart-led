#ifndef _BOTTOM_H
#define _BOTTOM_H
#include "includes.h"


#define BOTTOM1_PORT GPIOB
#define BOTTOM1_PIN  GPIO_Pin_5

#define BOTTOM2_PORT GPIOB
#define BOTTOM2_PIN  GPIO_Pin_4

#define BOTTOM3_PORT GPIOB
#define BOTTOM3_PIN  GPIO_Pin_5

#define BOTTOM4_PORT GPIOB
#define BOTTOM4_PIN  GPIO_Pin_14

#define BOTTOM5_PORT GPIOB
#define BOTTOM5_PIN  GPIO_Pin_15

void botton_init(void);
void botton_scan(void);


#endif

