#include "interface.h"
char display_array[512];
void led_set_interface(void)
{
	OLED_GReset();
	
	//显示时间字符
	OLED_GDrawBitmap(0,0,ch[0],14,14);
	OLED_GDrawBitmap(14,0,ch[1],14,14);
	sprintf(display_array,":%02d:%02d:%02d",led.time.hour,led.time.minute,led.time.second);
	oled_drawstring(28,2,display_array,WIDTH,HEIGHT);

	OLED_GDrawBitmap(0,15,ch[22],14,14);
	OLED_GDrawBitmap(14,15,ch[23],14,14);
	OLED_GDrawBitmap(14*2,15,ch[24],14,14);
	OLED_GDrawBitmap(14*3,15,ch[25],14,14);
	sprintf(display_array,":%d",led.unhealthy_times);
	oled_drawstring(14*4,16,display_array,WIDTH,HEIGHT);
	
	
	OLED_GDrawBitmap(0,29,ch[26],14,14);
	OLED_GDrawBitmap(14,29,ch[27],14,14);
	OLED_GDrawBitmap(14*2,29,ch[28],14,14);
	OLED_GDrawBitmap(14*3,29,ch[29],14,14);
	sprintf(display_array,":%d min",led.fixed_time_off/60);
	oled_drawstring(14*4,31,display_array,WIDTH,HEIGHT);
	oled_display();		
	
}
void led_main_interface(void)
{
	OLED_GReset();
	
	//显示时间字符
	OLED_GDrawBitmap(0,0,ch[0],14,14);
	OLED_GDrawBitmap(14,0,ch[1],14,14);
	sprintf(display_array,":%02d:%02d:%02d",led.time.hour,led.time.minute,led.time.second);
	oled_drawstring(28,2,display_array,WIDTH,HEIGHT);
	//显示是否有人字符
	if(led.have_people){
		OLED_GDrawBitmap(100,0,ch[8],14,14);
	}else{
		OLED_GDrawBitmap(100,0,ch[9],14,14);
	}
	OLED_GDrawBitmap(114,0,ch[10],14,14);
	//显示距离字符
	OLED_GDrawBitmap(0,15,ch[2],14,14);
	OLED_GDrawBitmap(14,15,ch[3],14,14);
	sprintf(display_array,":%.2fcm %s",led.distance,led.distance<UNHEALTHY_DISTANCE?"!":"OK");
	oled_drawstring(28,16,display_array,WIDTH,HEIGHT);
	//显示亮度字符
	OLED_GDrawBitmap(0,29,ch[4],14,14);
	OLED_GDrawBitmap(14,29,ch[5],14,14);
	sprintf(display_array,":%03d%%",led.bright);
	oled_drawstring(28,30,display_array,WIDTH,HEIGHT);
	//显示灯的模式
	if(led.color_mode==COLD_LIGHT){
		OLED_GDrawBitmap(72,30,ch[11],14,14);
		OLED_GDrawBitmap(72+14,30,ch[15],14,14);
	}
	if(led.color_mode==WARM_LIGHT){
		OLED_GDrawBitmap(72,30,ch[12],14,14);
		OLED_GDrawBitmap(72+14,30,ch[15],14,14);
	}
	if(led.color_mode==NOMAL_LIGHT){
		OLED_GDrawBitmap(72,30,ch[13],14,14);
		OLED_GDrawBitmap(72+14,30,ch[14],14,14);
		OLED_GDrawBitmap(72+14*2,30,ch[15],14,14);
	}
	//显示灯的模式和状态
	OLED_GDrawBitmap(0,44,ch[16],14,14);
	OLED_GDrawBitmap(14,44,ch[17],14,14);
	sprintf(display_array,":%d",led.mode+1);
	oled_drawstring(28,44,display_array,WIDTH,HEIGHT);
	OLED_GDrawBitmap(72,44,ch[18],14,14);
	OLED_GDrawBitmap(72+14,44,ch[19],14,14);
	if(led.led_status){
		OLED_GDrawBitmap(72+14*2,44,ch[20],14,14);
	}else{
		OLED_GDrawBitmap(72+14*2,44,ch[21],14,14);
	}
	
	oled_display();	
}
void oled_interface(void)
{
	switch(led.interface_mode){
		case MAIN_UI:led_main_interface();break;
		case SET_UI:led_set_interface();break;
		default:break;
	}

}

