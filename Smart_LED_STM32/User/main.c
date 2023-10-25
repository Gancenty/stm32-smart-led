#include "includes.h"
LED_TYPE led;

int main(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_AFIO, ENABLE);
	GPIO_PinRemapConfig(GPIO_Remap_SWJ_JTAGDisable, ENABLE);
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
	io_init();
  usart1_init(115200);
	delay_init();
	time_init();
	rtc_init();
	smart_led_control_init();
	led.bright=50;
	led.fixed_time_off=60;
	while(1)
	{
		schedule_task();
		oled_interface();
	}
}
