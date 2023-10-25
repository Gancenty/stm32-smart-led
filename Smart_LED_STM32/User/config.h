#ifndef _CONFIG_H
#define _CONFIG_H
#include "stm32f10x.h"

#define MAX_RX_LEN     512
#define MAX_TX_LEN     512

#define MAX_LED_MODE   3
#define SWITCH_MODE 0
#define SENSE_MODE 	1
#define TIME_MODE 	2

#define MAX_COLOR_MODE 3
#define NOMAL_LIGHT  0
#define WARM_LIGHT 	 1
#define COLD_LIGHT 	 2

#define UNHEALTHY_DISTANCE 10

#define MAX_UI_MODE 2
#define MAIN_UI 0
#define SET_UI  1
typedef struct{
	u32 timestamp;
	u32 lastupdate;
	u8 	timezone;
	u16 year;
	u8 	month;
	u8 	day;
	u8 	weekday;
	u8 	hour;
	u8 	minute;
	u8 	second;	
}TIME;

typedef struct CanFly_Control{	
	uint8_t usart_rx[MAX_RX_LEN];
	uint8_t usart_tx[MAX_TX_LEN];
	volatile uint16_t rxlen;
	volatile uint16_t txlen;
	uint8_t rxflag;
	
	uint8_t net;
	uint8_t mode;
	uint8_t led_status;//1--ON  0--OFF
	uint8_t have_people;
	float 	distance;
	uint32_t unhealthy_times;
	uint8_t color_mode;
	uint8_t bright;
	TIME time;
	uint32_t start_time;
	uint32_t fixed_time_off;
	volatile uint32_t timer_ms;
	uint8_t interface_mode; 
}LED_TYPE;

extern LED_TYPE led;



#endif
