#ifndef _COMM_H
#define _COMM_H
#include "includes.h"

#define HUMI_STA_FUN 0X01
#define FAN_STA_FUN  0X02
#define LED_STA_FUN  0X03
#define TEMP_DATA_FUN 0X04
#define HUMI_DATA_FUN 0X05
#define SMOKE_FUN 0X06

#define P_TAIL 0XFF

void led_msg_upload(void);
void led_msg_download(void);
void smart_led_control_init(void);
void beep_on(void);
void beep_off(void);


#endif 
