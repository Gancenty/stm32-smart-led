#include "schedule.h"


void DUTY_2MS(void)
{
	static uint32_t lms=0;
	if(led.timer_ms-lms>=2){
		lms=led.timer_ms;
		
	}
}
void DUTY_10MS(void)
{
	static uint32_t lms=0;
	if(led.timer_ms-lms>=10){
		lms=led.timer_ms;
		
	}	
	
	
}
void DUTY_50MS(void)
{
	static uint32_t lms=0;
	if(led.timer_ms-lms>=10){
		lms=led.timer_ms;
	}	
	
}
void DUTY_100MS(void)
{
	static uint32_t lms=0;
	if(led.timer_ms-lms>=100){
		lms=led.timer_ms;
		
		ws2812b_status(12);
	}
}
void DUTY_500MS(void)
{
	static uint32_t lms=0;
	static uint8_t unhealth;
	if(led.timer_ms-lms>=500){
		lms=led.timer_ms;
	
		led.have_people=GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_9);
		distance_get(&led.distance);
		if(led.mode==SENSE_MODE){
			if(led.distance<UNHEALTHY_DISTANCE){
				beep_on();
				if(unhealth==0){
					led.unhealthy_times++;
					unhealth=1;
				}
			}else{
				beep_off();
				unhealth=0;
			}
		}else{
			beep_off();
		}
		
	}
}
void DUTY_1S(void)
{
	static uint32_t lms=0;
	if(led.timer_ms-lms>=1000){
		lms=led.timer_ms;
		
		led_msg_upload();
	}
}
void DUTY_5S(void)
{
	static uint32_t lms=0;
	if(led.timer_ms-lms>=5000){
		lms=led.timer_ms;
		
	}
}
void schedule_task(void)
{
	DUTY_2MS();
	DUTY_10MS();
	DUTY_50MS();
	DUTY_100MS();
	DUTY_500MS();
	DUTY_1S();
	DUTY_5S();
}
