#include "botton.h"

void botton_init(void)
{
	GPIO_InitTypeDef GPIO_InitStruct;
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IPD;
	GPIO_InitStruct.GPIO_Pin = BOTTOM1_PIN;
	GPIO_InitStruct.GPIO_Speed=GPIO_Speed_10MHz;
	GPIO_Init(BOTTOM1_PORT,&GPIO_InitStruct);
	
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IPD;
	GPIO_InitStruct.GPIO_Pin = BOTTOM2_PIN;
	GPIO_InitStruct.GPIO_Speed=GPIO_Speed_10MHz;
	GPIO_Init(BOTTOM2_PORT,&GPIO_InitStruct);
	
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IPD;
	GPIO_InitStruct.GPIO_Pin = BOTTOM3_PIN;
	GPIO_InitStruct.GPIO_Speed=GPIO_Speed_10MHz;
	GPIO_Init(BOTTOM3_PORT,&GPIO_InitStruct);
	
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IPD;
	GPIO_InitStruct.GPIO_Pin = BOTTOM4_PIN;
	GPIO_InitStruct.GPIO_Speed=GPIO_Speed_10MHz;
	GPIO_Init(BOTTOM4_PORT,&GPIO_InitStruct);
	
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IPD;
	GPIO_InitStruct.GPIO_Pin = BOTTOM5_PIN;
	GPIO_InitStruct.GPIO_Speed=GPIO_Speed_10MHz;
	GPIO_Init(BOTTOM5_PORT,&GPIO_InitStruct);
}

void botton_scan(void)
{
	static uint32_t high_cnt[5]={0};
	if(PBin(3)==1){
		high_cnt[0]++;
		if(high_cnt[0]>25){
			if(led.interface_mode==MAIN_UI){
				if(led.bright!=100){
					led.bright=(led.bright+1)%101;			
				}
			}
			if(led.interface_mode==SET_UI){
				led.start_time=led.time.timestamp;
				led.fixed_time_off=(led.fixed_time_off+60);
			}
		}
	}else{
		if(high_cnt[0]>3&&high_cnt[0]<25){
			if(led.interface_mode==MAIN_UI){
				if(led.bright!=100){
					led.bright=(led.bright+1)%101;			
				}
			}
			if(led.interface_mode==SET_UI){
				led.start_time=led.time.timestamp;
				led.fixed_time_off=(led.fixed_time_off+60);
			}
		}
		high_cnt[0]=0;
	}
	if(PBin(4)==1){
		high_cnt[1]++;
		if(high_cnt[1]>25){
			if(led.interface_mode==MAIN_UI){
				if(led.bright!=0){
					led.bright=(led.bright-1)%101;			
				}
			}
			if(led.interface_mode==SET_UI){
				if(led.fixed_time_off>=60){
					led.start_time=led.time.timestamp;
					led.fixed_time_off=(led.fixed_time_off-60);
				}
			}
		}
	}else{
		if(high_cnt[1]>3&&high_cnt[1]<25){
			if(led.interface_mode==MAIN_UI){
				if(led.bright!=0){
					led.bright=(led.bright-1)%101;			
				}
			}
			if(led.interface_mode==SET_UI){
				if(led.fixed_time_off>=60){
					led.start_time=led.time.timestamp;
					led.fixed_time_off=(led.fixed_time_off-60);
				}
			}
		}
		high_cnt[1]=0;
	}
	if(PBin(5)==1){
		high_cnt[2]++;
	}else{
		if(led.interface_mode==MAIN_UI){
			if(high_cnt[2]>3&&high_cnt[2]<25){
				led.color_mode=(led.color_mode+1)%MAX_COLOR_MODE;
			}
		}
		high_cnt[2]=0;
	}
	if(PBin(14)==1){
		high_cnt[3]++;
	}else{
		if(high_cnt[3]>3){
			if(led.mode==SWITCH_MODE){
				led.led_status=!led.led_status;
			}
			if(led.mode==TIME_MODE){
				led.led_status=!led.led_status;
				led.start_time=led.time.timestamp;
			}
		}
		high_cnt[3]=0;
	}
	if(PBin(15)==1){
		high_cnt[4]++;
		if(high_cnt[4]==25){
			led.interface_mode=(led.interface_mode+1)%MAX_UI_MODE;
		}
	}else{
		if(led.interface_mode==MAIN_UI){
			if(high_cnt[4]>3&&high_cnt[4]<25){
				led.mode=(led.mode+1)%MAX_LED_MODE;
				if(led.mode==TIME_MODE){
					led.start_time=led.time.timestamp;
				}
			}
		}
		high_cnt[4]=0;
	}
}
