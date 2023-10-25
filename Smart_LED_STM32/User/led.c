#include "led.h"

uint16_t LED_Buffer[DATA_SIZE*LED_NUM+5];

void ws2812b_init(void)
{
	GPIO_InitTypeDef  GPIO_InitStructure;
	TIM_TimeBaseInitTypeDef  TIM_TimeBaseStructure;
	TIM_OCInitTypeDef  TIM_OCInitStructure;
	DMA_InitTypeDef DMA_InitStructure;
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM3,ENABLE);  
	RCC_AHBPeriphClockCmd(RCC_AHBPeriph_DMA1,ENABLE); 

	GPIO_InitStructure.GPIO_Pin = WS2812B_PIN;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;                             
	GPIO_Init(WS2812B_PORT,&GPIO_InitStructure);

	TIM_TimeBaseStructure.TIM_Prescaler=0;
	TIM_TimeBaseStructure.TIM_CounterMode=TIM_CounterMode_Up;
	TIM_TimeBaseStructure.TIM_Period=WS2812B_ARR;
	TIM_TimeBaseStructure.TIM_ClockDivision=TIM_CKD_DIV1;
	TIM_TimeBaseInit(TIM3,&TIM_TimeBaseStructure);
	TIM_Cmd(TIM3, DISABLE);		
	TIM_DMACmd(TIM3, TIM_DMA_CC4, ENABLE);
	
	TIM_OCInitStructure.TIM_OCMode = TIM_OCMode_PWM1;
	TIM_OCInitStructure.TIM_OutputState = TIM_OutputState_Enable;
	TIM_OCInitStructure.TIM_Pulse = 0;
	TIM_OCInitStructure.TIM_OCPolarity = TIM_OCPolarity_High;
	TIM_OC4Init(TIM3, &TIM_OCInitStructure);
	TIM_OC4PreloadConfig(TIM3, TIM_OCPreload_Enable);
	
	DMA_InitStructure.DMA_PeripheralBaseAddr = (uint32_t)&(TIM3->CCR4);
	DMA_InitStructure.DMA_MemoryBaseAddr = (uint32_t)&LED_Buffer;
	DMA_InitStructure.DMA_DIR = DMA_DIR_PeripheralDST;
	DMA_InitStructure.DMA_BufferSize = 0;
	DMA_InitStructure.DMA_PeripheralInc = DMA_PeripheralInc_Disable;
	DMA_InitStructure.DMA_MemoryInc = DMA_MemoryInc_Enable;
	DMA_InitStructure.DMA_PeripheralDataSize = DMA_PeripheralDataSize_HalfWord;
	DMA_InitStructure.DMA_MemoryDataSize = DMA_MemoryDataSize_HalfWord;
	DMA_InitStructure.DMA_Mode = DMA_Mode_Normal;
	DMA_InitStructure.DMA_Priority = DMA_Priority_VeryHigh;											
	DMA_InitStructure.DMA_M2M = DMA_M2M_Disable;
	DMA_Init(DMA1_Channel3, &DMA_InitStructure);
	
	DMA_Cmd(DMA1_Channel3, ENABLE);
}
void WS2812B_Reset(void)
{
	GPIO_ResetBits(WS2812B_PORT,WS2812B_PIN);
	delay_us(150);	//此处延时时间最小值大于50us即可
}
uint16_t WS2812B_Write_24Bits(uint16_t num,uint32_t GRB_Data,uint8_t bright)
{
  uint16_t i=0;
	uint8_t color[3];
	color[0]=(GRB_Data>>16)&0XFF;
	color[1]=(GRB_Data>>8)&0XFF;
	color[2]=(GRB_Data>>0)&0XFF;
	for(i=0;i<3;i++){
		color[i]=(float)color[i]*((float)bright/255);
	}
	GRB_Data=color[0]<<16|color[1]<<8|color[2];
	
	for(i = 0; i < DATA_SIZE; i++)
	{
		LED_Buffer[num + i] = ((GRB_Data << i) & 0x800000) ? T1H : T0H;
	}
	return num+DATA_SIZE;
}
//点亮灯珠
void WS2812B_Show(uint16_t num)
{
	uint8_t need_reset=0;
	while(DMA_GetCurrDataCounter(DMA1_Channel3)!=0){
		need_reset=1;
	}
	if(need_reset){
		WS2812B_Reset();
	}
	LED_Buffer[num*DATA_SIZE]=0;
	DMA_Cmd(DMA1_Channel3, DISABLE);
	TIM_Cmd(TIM3,DISABLE);
	TIM_SetCompare4(TIM3,0);
	TIM_SetCounter(TIM3,0);
	DMA_SetCurrDataCounter(DMA1_Channel3, num*DATA_SIZE+1);
	TIM_Cmd(TIM3,ENABLE);
	DMA_Cmd(DMA1_Channel3, ENABLE);
}

void ws2812b_status(uint16_t num)
{
	static uint16_t offset=0;
	uint16_t next=0;
	switch(led.mode){
		case SWITCH_MODE:offset=0;break;
		case SENSE_MODE:led.led_status=led.have_people;if(led.distance<UNHEALTHY_DISTANCE){if(offset<led.bright)offset++;}else{if(offset>0)offset--;}break;
		case TIME_MODE:offset=0;if(led.led_status==1){if(led.time.timestamp-led.start_time>led.fixed_time_off){led.led_status=0;}else{led.led_status=1;}}break;
		default:break;
	}
	if(led.led_status==1){
		if(led.color_mode==COLD_LIGHT){
			for(uint16_t i=0;i<num;i++){
				next=WS2812B_Write_24Bits(next,WHITE_COLOR,(float)(led.bright-offset)/100*255);
			}
		}
		if(led.color_mode==NOMAL_LIGHT){
			for(uint16_t i=0;i<num;i++){
				if(i%2){
					next=WS2812B_Write_24Bits(next,YELLOW_COLOR,(float)(led.bright-offset)/100*255);
				}else{
					next=WS2812B_Write_24Bits(next,WHITE_COLOR,(float)(led.bright-offset)/100*255);
				}
			}
		}
		if(led.color_mode==WARM_LIGHT){
			for(uint16_t i=0;i<num;i++){
				next=WS2812B_Write_24Bits(next,YELLOW_COLOR,(float)(led.bright-offset)/100*255);
			}
		}
	}else{
		for(uint16_t i=0;i<num;i++){
			next=WS2812B_Write_24Bits(next,0x000000,0);
		}
	}
	WS2812B_Show(num);
}

