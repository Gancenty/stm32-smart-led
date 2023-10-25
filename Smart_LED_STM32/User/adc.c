#include "adc.h"

#define PM25_LOW	 GPIO_SetBits(GPIOA,GPIO_Pin_2)
#define PM25_HIGH  GPIO_ResetBits(GPIOA,GPIO_Pin_2)
void ADC_Config(void)
{
	ADC_InitTypeDef ADC_InitStructure;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_ADC1,ENABLE);	
	GPIO_InitTypeDef GPIO_InitStructure;
	//PA0作为模拟通道输入引脚 PM2.5                        
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AIN;
	//GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz; 
	GPIO_Init(GPIOA, &GPIO_InitStructure);        

	//PA1作为模拟通道输入引脚 SMOKE   
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_1;                         
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AIN;
	GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;           
	GPIO_Init(GPIOA, &GPIO_InitStructure);
	
	//PA2作为脉冲输出引脚 
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2;                         
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;           
	GPIO_Init(GPIOA, &GPIO_InitStructure);
	PM25_LOW;
	
	ADC_DeInit(ADC1);
	ADC_InitStructure.ADC_Mode = ADC_Mode_Independent;
	ADC_InitStructure.ADC_ScanConvMode = DISABLE;
	ADC_InitStructure.ADC_ContinuousConvMode = DISABLE;
	ADC_InitStructure.ADC_ExternalTrigConv = ADC_ExternalTrigConv_None; 
	ADC_InitStructure.ADC_DataAlign = ADC_DataAlign_Right;
	ADC_InitStructure.ADC_NbrOfChannel = 0;
	ADC_Init(ADC1, &ADC_InitStructure);
	RCC_ADCCLKConfig(RCC_PCLK2_Div6);
	ADC_Cmd(ADC1,ENABLE);
	
	ADC_ResetCalibration(ADC1);
	while(ADC_GetResetCalibrationStatus(ADC1)==SET);
 
	ADC_StartCalibration(ADC1);
	while(ADC_GetCalibrationStatus(ADC1)==SET);
}

unsigned short ADC_Get(uint8_t ch){
	ADC_RegularChannelConfig(ADC1, ch, 1, ADC_SampleTime_239Cycles5);//配置ADC1通道11为55.5个采样周期 
	ADC_SoftwareStartConvCmd(ADC1, ENABLE);

	while(ADC_GetFlagStatus(ADC1,ADC_FLAG_EOC)==RESET);
	return ADC_GetConversionValue(ADC1);
}
unsigned short ADC_Get_Aver(uint8_t ch){
	uint8_t i=0,times=3;
	uint32_t temp=0;
	for(i=0;i<times;i++){
		temp+=ADC_Get(ch);
	}
	return temp/times;
}
void Air_Get_Smoke(void)
{
//	unsigned short vol=ADC_Get_Aver(ADC_Channel_1);
//	air.smoke_num=(float)vol/4096*3.3;
//	if(air.smoke_num>1.2){
//		air.fan_sta=1;
//		air.humi_sta=1;
//	}
}


