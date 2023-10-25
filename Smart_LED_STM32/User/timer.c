#include "timer.h"
void time_init(void)
{
	TIM_TimeBaseInitTypeDef TIM_TimeBaseInitStruct;
	NVIC_InitTypeDef NVIC_InitStruct;

	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM2, ENABLE);
	TIM_DeInit(TIM2);
	
	TIM_TimeBaseInitStruct.TIM_ClockDivision=TIM_CKD_DIV1;
	TIM_TimeBaseInitStruct.TIM_CounterMode=TIM_CounterMode_Up;
	TIM_TimeBaseInitStruct.TIM_Period=9;
	TIM_TimeBaseInitStruct.TIM_Prescaler=7199;
	
	NVIC_InitStruct.NVIC_IRQChannelCmd=ENABLE;
	NVIC_InitStruct.NVIC_IRQChannelPreemptionPriority=0;
	NVIC_InitStruct.NVIC_IRQChannelSubPriority=2;
	NVIC_InitStruct.NVIC_IRQChannel=TIM2_IRQn;
	NVIC_Init(&NVIC_InitStruct);
	
	TIM_TimeBaseInit(TIM2, &TIM_TimeBaseInitStruct);
	TIM_ITConfig(TIM2, TIM_IT_Update, ENABLE);	
	TIM_Cmd(TIM2, ENABLE);
}
uint32_t lms=0;
void TIM2_IRQHandler(void){             
	if(TIM_GetITStatus(TIM2,TIM_IT_Update) != RESET)//Òç³öÖÐ¶Ï 
	{		
		led.timer_ms++;
		if(led.timer_ms-lms>20){
			lms=led.timer_ms;
			botton_scan();
		}
		
	}
	TIM_ClearITPendingBit(TIM2,TIM_IT_Update);
}	

