#include "control.h"
void smart_led_control_init(void)
{
	GPIO_InitTypeDef GPIO_InitStructure;
	
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_13;                         
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;           
	GPIO_Init(GPIOC, &GPIO_InitStructure);
	GPIO_ResetBits(GPIOC,GPIO_Pin_13);
	//红外距离传感器引脚初始化
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9;                         
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
	GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;           
	GPIO_Init(GPIOB, &GPIO_InitStructure);
	
	//蜂鸣器引脚初始化
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_3;                         
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;           
	GPIO_Init(GPIOA, &GPIO_InitStructure);
	GPIO_ResetBits(GPIOA,GPIO_Pin_3);
	
	botton_init();
	distance_init();
	ws2812b_init();
	iic_init();
	oled_init();
}

void led_msg_upload(void)
{
	sprintf((char *)led.usart_tx,"{%d,%d,%d,%d,%d}",led.led_status,led.bright,led.mode,led.color_mode,led.unhealthy_times);
	USART1_SendStr((char *)led.usart_tx);
}
void led_msg_download(void)
{
	long long timestamp;
	int a,b,c,d,e;
	sscanf((const char*)led.usart_rx,"{%d,%d,%d,%d,%d,%lld}",&a,&b,&c,&d,&e,&timestamp);
	led.net=a;
	led.led_status=b;
	led.bright=c;
	led.mode=d;
	led.color_mode=e;
	if(led.led_status==1){
		led.start_time=led.time.timestamp;
	}
	RTC_set(timestamp);
}
void beep_on(void)
{
	GPIO_SetBits(GPIOA,GPIO_Pin_3);
}

void beep_off(void)
{
	GPIO_ResetBits(GPIOA,GPIO_Pin_3);
}
