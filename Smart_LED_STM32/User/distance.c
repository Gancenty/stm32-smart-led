#include "distance.h"


void distance_init(void)
{
	GPIO_InitTypeDef GPIO_InitStructure;
	
	GPIO_InitStructure.GPIO_Pin = DISTANCE_PIN;                         
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;           
	GPIO_Init(DISTANCE_PORT, &GPIO_InitStructure);
	GPIO_ResetBits(DISTANCE_PORT,DISTANCE_PIN);
	
	GPIO_InitStructure.GPIO_Pin = DISTANCE_ECO_PIN;                         
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPD;
	GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;           
	GPIO_Init(DISTANCE_ECO_PORT, &GPIO_InitStructure);
	
	TIM_TimeBaseInitTypeDef TIM_TimeBaseInitStruct;
	TIM_ICInitTypeDef TIM_ICInitStruct;
	NVIC_InitTypeDef NVIC_InitStruct;
	
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM4, ENABLE);
	
	TIM_TimeBaseInitStruct.TIM_ClockDivision=TIM_CKD_DIV1;
	TIM_TimeBaseInitStruct.TIM_CounterMode=TIM_CounterMode_Up;
	TIM_TimeBaseInitStruct.TIM_Period=0xffff-1;
	TIM_TimeBaseInitStruct.TIM_Prescaler=72-1;

	TIM_ICInitStruct.TIM_Channel=TIM_Channel_1;
	TIM_ICInitStruct.TIM_ICFilter=0x00;
	TIM_ICInitStruct.TIM_ICPolarity=TIM_ICPolarity_Rising;
	TIM_ICInitStruct.TIM_ICPrescaler=TIM_ICPSC_DIV1;
	TIM_ICInitStruct.TIM_ICSelection=TIM_ICSelection_DirectTI;
	
	NVIC_InitStruct.NVIC_IRQChannel=TIM4_IRQn;
	NVIC_InitStruct.NVIC_IRQChannelCmd=ENABLE;
	NVIC_InitStruct.NVIC_IRQChannelPreemptionPriority=2;
	NVIC_InitStruct.NVIC_IRQChannelSubPriority=0;
	
	TIM_TimeBaseInit(TIM4,&TIM_TimeBaseInitStruct);
	TIM_ICInit(TIM4, &TIM_ICInitStruct);
	NVIC_Init(&NVIC_InitStruct);
	TIM_ITConfig(TIM4,TIM_IT_CC1|TIM_IT_Update, ENABLE);
	TIM_OC1PolarityConfig(TIM4, TIM_ICPolarity_Rising);
	TIM_Cmd(TIM4,ENABLE);
}
uint8_t TIM_CAPTURE_STA=0;
uint16_t TIM_CAPTURE_VAL=0;

void distance_get(float* distance)//单位cm
{
	uint8_t rpt=0;
	GPIO_SetBits(DISTANCE_PORT,DISTANCE_PIN);
	delay_us(20);
	GPIO_ResetBits(DISTANCE_PORT,DISTANCE_PIN);
	while((TIM_CAPTURE_STA&0X80)!=0x80){
		delay_ms(10);
		rpt++;
		if(rpt>10){
			*distance=300;
			return;
		}
	};
	uint32_t cost_us=(TIM_CAPTURE_STA&0x3f)*65536;
	cost_us+=TIM_CAPTURE_VAL;
	TIM_CAPTURE_STA=0;
	TIM_CAPTURE_VAL=0;
	*distance=(float)cost_us*0.034F/2;
}


void TIM4_IRQHandler(void)
{ 
 
 	if((TIM_CAPTURE_STA&0X80)==0)//还未成功捕获	
	{	  
		if (TIM_GetITStatus(TIM4, TIM_IT_Update) != RESET) 
		{	    
			if(TIM_CAPTURE_STA&0X40)//已经捕获到高电平了
			{
				if((TIM_CAPTURE_STA&0X3F)==0X3F)//高电平太长了
				{
					TIM_CAPTURE_STA|=0X80;//标记成功捕获了一次
					TIM_CAPTURE_VAL=0XFFFF;
				}else{
					TIM_CAPTURE_STA++;
				}					
			}	 
		}
		if (TIM_GetITStatus(TIM4, TIM_IT_CC1) != RESET)//捕获1发生捕获事件
		{	
				if(TIM_CAPTURE_STA&0X40)		//捕获到一个下降沿 		
				{	  			
					TIM_CAPTURE_STA|=0X80;		//标记成功捕获到一次高电平脉宽
					TIM_CAPTURE_VAL=TIM_GetCapture1(TIM4);
					TIM_OC1PolarityConfig(TIM4,TIM_ICPolarity_Rising); //CC1P=0 设置为上升沿捕获
				}else{											//还未开始,第一次捕获上升沿
					TIM_CAPTURE_STA=0;				//清空
					TIM_CAPTURE_VAL=0;
					TIM_SetCounter(TIM4,0);
					TIM_CAPTURE_STA|=0X40;		//标记捕获到了上升沿
					TIM_OC1PolarityConfig(TIM4,TIM_ICPolarity_Falling);		//CC1P=1 设置为下降沿捕获
				}		    
		}			     	    					   
 	}

	TIM_ClearITPendingBit(TIM4, TIM_IT_CC1|TIM_IT_Update); //清除中断标志位
 
}
