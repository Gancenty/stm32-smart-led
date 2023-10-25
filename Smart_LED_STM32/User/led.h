#ifndef _LED_H
#define _LED_H
#include "includes.h"

#define WS2812B_PIN    GPIO_Pin_1
#define WS2812B_PORT   GPIOB
#define WS2812B_HIGH   GPIO_SetBits(WS2812B_PORT,WS2812B_PIN)
#define WS2812B_LOW	   GPIO_ResetBits(WS2812B_PORT,WS2812B_PIN)

#define WS2812B_ARR 90-1
#define T0H 30-1
#define T1H 60-1

#define LED_NUM  	 12
#define DATA_SIZE  24

#define YELLOW_COLOR 0Xb1ff00
#define WHITE_COLOR  0XFFFFFF

void ws2812b_init(void);
void ws2812b_status(uint16_t num);


#endif

