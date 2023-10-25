#include "delay.h"
static u8  fac_us=0;                            //us��ʱ������               
static u16 fac_ms=0;                            //ms��ʱ������  
 
//��ʼ���ӳٺ���
//SYSTICK��ʱ�ӹ̶�ΪHCLKʱ�ӵ�1/8����SYSTICK=SYSCLK/8
//SYSCLK:ϵͳʱ��
void delay_init(void)
{
    SysTick_CLKSourceConfig(SysTick_CLKSource_HCLK_Div8);    //ѡ���ⲿʱ��  HCLK/8

    fac_us=SystemCoreClock/8000000;                          //SYSTICKʱ��Ϊ9M����8��Ƶ��ʱ��fac_us=9����SysTick����9��������ʱ1us
    fac_ms=(u16)fac_us*1000;                                 //��OS��,����ÿ��ms��Ҫ��systickʱ����   
}    

//��ѯSysTick->CTRL�Ĵ���bit0�Ƿ�Ϊ1����Ϊ1ʱ��˵������ʱʱ�䵽��
//������ʱ�����У�������SysTick�жϣ�
//��ʱnus
//nusΪҪ��ʱ��us��.                                               
void delay_us(u32 nus)
{        
    u32 temp;             
    SysTick->LOAD=nus*fac_us;                       //��ʱʱ�����               
    SysTick->VAL=0x00;                              //��ռ�����
    SysTick->CTRL|=SysTick_CTRL_ENABLE_Msk ;        //��ʼ����      

    do
    {
        temp=SysTick->CTRL;
    }while((temp&0x01)&&!(temp&(1<<16)));           //�ȴ�ʱ�䵽��
 
    SysTick->CTRL&=~SysTick_CTRL_ENABLE_Msk;        //�رռ�����
    SysTick->VAL =0X00;                             //��ռ�����     
}

//��ʱnms
//ע��nms�ķ�Χ
//SysTick->LOADΪ24λ�Ĵ���,����,�����ʱΪ:
//nms<=0xffffff*8*1000/SYSCLK
//SYSCLK��λΪHz,nms��λΪms
//��72M������,nms<=1864
void delay_ms(u16 nms)
{                     
    u32 temp;           
    SysTick->LOAD=(u32)nms*fac_ms;                //ʱ�����(SysTick->LOADΪ24bit)
    SysTick->VAL =0x00;                           //��ռ�����
    SysTick->CTRL|=SysTick_CTRL_ENABLE_Msk ;      //��ʼ����  
    do
    {
        temp=SysTick->CTRL;
    }while((temp&0x01)&&!(temp&(1<<16)));        //�ȴ�ʱ�䵽��   
    SysTick->CTRL&=~SysTick_CTRL_ENABLE_Msk;     //�رռ�����
    SysTick->VAL =0X00;                          //��ռ�����              
}

