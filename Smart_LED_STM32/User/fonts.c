#include "fonts.h"

/*阴码 逐列式 逆向*/
const unsigned char ascii[][14]={
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*" ",0*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0x04,0x00,0x04,0x00,0x00,0x00,0x00},/*"!",1*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x3C,0x00,0x00,0x00,0x00,0x00,0x3C,0x00,0x00,0x00,0x00,0x00},/*""",2*/
/* (7 X 14 , Menlo ) */

{0x00,0x01,0x10,0x07,0xF0,0x01,0x1C,0x05,0xD0,0x03,0x3C,0x01,0x10,0x01},/*"#",3*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x70,0x02,0x48,0x04,0xFC,0x1F,0x88,0x04,0x90,0x03,0x00,0x00},/*"$",4*/
/* (7 X 14 , Menlo ) */

{0x38,0x00,0xA8,0x00,0xA8,0x00,0x50,0x03,0xC0,0x04,0xC0,0x04,0x20,0x03},/*"%",5*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x80,0x03,0x78,0x06,0x64,0x04,0x84,0x05,0x04,0x03,0x80,0x05},/*"&",6*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x00,0x00,0x00,0x00,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"'",7*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x00,0x00,0xF0,0x07,0x0C,0x18,0x00,0x00,0x00,0x00,0x00,0x00},/*"(",8*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x00,0x00,0x02,0x08,0x0E,0x0E,0xF0,0x01,0x00,0x00,0x00,0x00},/*")",9*/
/* (7 X 14 , Menlo ) */

{0x20,0x02,0x40,0x01,0x80,0x00,0xF0,0x07,0x80,0x00,0x40,0x01,0x20,0x02},/*"*",10*/
/* (7 X 14 , Menlo ) */

{0x80,0x00,0x80,0x00,0x80,0x00,0xF0,0x03,0x80,0x00,0x80,0x00,0x80,0x00},/*"+",11*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x1E,0x00,0x06,0x00,0x00,0x00,0x00},/*",",12*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00},/*"-",13*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x00,0x00,0x00,0x06,0x00,0x06,0x00,0x00,0x00,0x00,0x00,0x00},/*".",14*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x00,0x08,0x00,0x06,0x80,0x01,0x60,0x00,0x18,0x00,0x04,0x00},/*"/",15*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0xF8,0x03,0x8C,0x04,0x64,0x04,0x14,0x06,0xF8,0x03,0x00,0x00},/*"0",16*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x00,0x00,0x08,0x04,0x04,0x04,0xFC,0x07,0x00,0x04,0x00,0x04},/*"1",17*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x08,0x04,0x04,0x06,0x04,0x05,0x84,0x04,0x44,0x04,0x38,0x04},/*"2",18*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x08,0x02,0x04,0x04,0x44,0x04,0x44,0x04,0x44,0x04,0xB8,0x03},/*"3",19*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x80,0x01,0x60,0x01,0x30,0x01,0x0C,0x01,0xFC,0x07,0x00,0x01},/*"4",20*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x3C,0x02,0x24,0x04,0x24,0x04,0x24,0x04,0x64,0x06,0xC0,0x03},/*"5",21*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0xF0,0x01,0x48,0x06,0x24,0x04,0x24,0x04,0x64,0x06,0xC8,0x03},/*"6",22*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x04,0x00,0x04,0x04,0x04,0x03,0xC4,0x00,0x3C,0x00,0x0C,0x00},/*"7",23*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0xB8,0x03,0x44,0x04,0x44,0x04,0x44,0x04,0x44,0x04,0xB8,0x03},/*"8",24*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x78,0x02,0xCC,0x04,0x84,0x04,0x84,0x04,0x4C,0x02,0xF0,0x01},/*"9",25*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x00,0x00,0x60,0x06,0x60,0x06,0x00,0x00,0x00,0x00,0x00,0x00},/*":",26*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x00,0x00,0x60,0x1E,0x60,0x0E,0x00,0x00,0x00,0x00,0x00,0x00},/*";",27*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0xC0,0x00,0xC0,0x00,0x20,0x01,0x20,0x01,0x20,0x01,0x10,0x02},/*"<",28*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x20,0x01,0x20,0x01,0x20,0x01,0x20,0x01,0x20,0x01,0x20,0x01},/*"=",29*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x10,0x02,0x20,0x01,0x20,0x01,0x20,0x01,0xC0,0x00,0xC0,0x00},/*">",30*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x00,0x00,0x08,0x00,0xC4,0x06,0x64,0x00,0x24,0x00,0x18,0x00},/*"?",31*/
/* (7 X 14 , Menlo ) */

{0xE0,0x07,0x10,0x08,0xC8,0x11,0x28,0x12,0x28,0x12,0x28,0x12,0xF0,0x03},/*"@",32*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x00,0x06,0xE0,0x01,0x1C,0x01,0x1C,0x01,0xE0,0x01,0x00,0x06},/*"A",33*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0xFC,0x07,0x44,0x04,0x44,0x04,0x44,0x04,0xB8,0x03,0x00,0x00},/*"B",34*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0xF0,0x01,0x08,0x02,0x04,0x04,0x04,0x04,0x04,0x04,0x08,0x02},/*"C",35*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0xFC,0x07,0x04,0x04,0x04,0x04,0x04,0x04,0x08,0x02,0xF0,0x01},/*"D",36*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0xFC,0x07,0x44,0x04,0x44,0x04,0x44,0x04,0x44,0x04,0x00,0x00},/*"E",37*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0xFC,0x07,0x44,0x00,0x44,0x00,0x44,0x00,0x44,0x00,0x00,0x00},/*"F",38*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0xF0,0x01,0x08,0x02,0x04,0x04,0x04,0x04,0x44,0x04,0xC8,0x03},/*"G",39*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0xFC,0x07,0x40,0x00,0x40,0x00,0x40,0x00,0xFC,0x07,0x00,0x00},/*"H",40*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x04,0x04,0x04,0x04,0xFC,0x07,0x04,0x04,0x04,0x04,0x00,0x00},/*"I",41*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x00,0x02,0x00,0x04,0x04,0x04,0x04,0x04,0xFC,0x03,0x00,0x00},/*"J",42*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0xFC,0x07,0x40,0x00,0x60,0x00,0x90,0x01,0x0C,0x02,0x04,0x04},/*"K",43*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0xFC,0x07,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04},/*"L",44*/
/* (7 X 14 , Menlo ) */

{0xFC,0x07,0x1C,0x00,0x60,0x00,0xE0,0x00,0x1C,0x00,0xFC,0x07,0x00,0x00},/*"M",45*/
/* (7 X 14 , Menlo ) */

{0xFC,0x07,0x1C,0x00,0x70,0x00,0xC0,0x01,0x00,0x07,0xFC,0x07,0x00,0x00},/*"N",46*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0xF0,0x01,0x0C,0x06,0x04,0x04,0x04,0x04,0x0C,0x06,0xF0,0x01},/*"O",47*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0xFC,0x07,0x44,0x00,0x44,0x00,0x44,0x00,0x44,0x00,0x38,0x00},/*"P",48*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0xF0,0x01,0x0C,0x06,0x04,0x04,0x04,0x04,0x0C,0x1E,0xF0,0x03},/*"Q",49*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0xFC,0x07,0x44,0x00,0x44,0x00,0x44,0x00,0xC4,0x00,0x38,0x03},/*"R",50*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x38,0x02,0x64,0x04,0x44,0x04,0x44,0x04,0x44,0x04,0x88,0x03},/*"S",51*/
/* (7 X 14 , Menlo ) */

{0x04,0x00,0x04,0x00,0x04,0x00,0xFC,0x07,0x04,0x00,0x04,0x00,0x04,0x00},/*"T",52*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0xFC,0x03,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0xFC,0x03},/*"U",53*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x0C,0x00,0xF0,0x00,0x00,0x07,0x00,0x07,0xF0,0x00,0x0C,0x00},/*"V",54*/
/* (7 X 14 , Menlo ) */

{0x3C,0x00,0xE0,0x07,0xE0,0x03,0x10,0x00,0xE0,0x03,0xE0,0x07,0x3C,0x00},/*"W",55*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x04,0x04,0x18,0x03,0xF0,0x00,0xF0,0x00,0x18,0x03,0x04,0x04},/*"X",56*/
/* (7 X 14 , Menlo ) */

{0x04,0x00,0x08,0x00,0x30,0x00,0xC0,0x07,0x30,0x00,0x08,0x00,0x04,0x00},/*"Y",57*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x04,0x06,0x04,0x07,0xC4,0x04,0x64,0x04,0x1C,0x04,0x0C,0x04},/*"Z",58*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0x1F,0x04,0x10,0x00,0x00,0x00,0x00},/*"[",59*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x04,0x00,0x18,0x00,0x60,0x00,0x80,0x01,0x00,0x06,0x00,0x08},/*"\",60*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x00,0x00,0x04,0x10,0xFC,0x1F,0x00,0x00,0x00,0x00,0x00,0x00},/*"]",61*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x30,0x00,0x18,0x00,0x0C,0x00,0x18,0x00,0x30,0x00,0x20,0x00},/*"^",62*/
/* (7 X 14 , Menlo ) */

{0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10},/*"_",63*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x04,0x00,0x00,0x00,0x00,0x00},/*"`",64*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x10,0x03,0x90,0x04,0x90,0x04,0x90,0x04,0xE0,0x07,0x00,0x00},/*"a",65*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0xFE,0x07,0x10,0x04,0x10,0x04,0x10,0x04,0xE0,0x03,0x00,0x00},/*"b",66*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0xE0,0x03,0x30,0x06,0x10,0x04,0x10,0x04,0x20,0x04,0x00,0x00},/*"c",67*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0xE0,0x03,0x10,0x04,0x10,0x04,0x10,0x04,0xFE,0x07,0x00,0x00},/*"d",68*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0xE0,0x03,0xB0,0x04,0x90,0x04,0x90,0x04,0xE0,0x04,0xC0,0x00},/*"e",69*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x10,0x00,0x10,0x00,0xFC,0x07,0x12,0x00,0x12,0x00,0x00,0x00},/*"f",70*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0xE0,0x03,0x10,0x16,0x10,0x24,0x10,0x24,0xF0,0x1F,0x00,0x00},/*"g",71*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0xFE,0x07,0x20,0x00,0x10,0x00,0x10,0x00,0xE0,0x07,0x00,0x00},/*"h",72*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x00,0x00,0x10,0x04,0x10,0x04,0xF4,0x07,0x00,0x04,0x00,0x04},/*"i",73*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x00,0x00,0x10,0x20,0x10,0x20,0xF2,0x1F,0x00,0x00,0x00,0x00},/*"j",74*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0xFE,0x07,0x80,0x00,0xC0,0x01,0x30,0x02,0x00,0x04,0x00,0x00},/*"k",75*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x04,0x00,0x04,0x00,0xFC,0x03,0x00,0x04,0x00,0x04,0x00,0x00},/*"l",76*/
/* (7 X 14 , Menlo ) */

{0xF0,0x07,0x10,0x00,0x10,0x00,0xF0,0x07,0x10,0x00,0x10,0x00,0xF0,0x07},/*"m",77*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0xF0,0x07,0x20,0x00,0x10,0x00,0x10,0x00,0xE0,0x07,0x00,0x00},/*"n",78*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0xE0,0x03,0x10,0x04,0x10,0x04,0x10,0x04,0xE0,0x03,0x00,0x00},/*"o",79*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0xF0,0x3F,0x10,0x04,0x10,0x04,0x10,0x04,0xE0,0x03,0x00,0x00},/*"p",80*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0xE0,0x03,0x10,0x04,0x10,0x04,0x10,0x04,0xF0,0x3F,0x00,0x00},/*"q",81*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x00,0x00,0xF0,0x07,0x30,0x00,0x10,0x00,0x10,0x00,0x20,0x00},/*"r",82*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x60,0x02,0x90,0x04,0x90,0x04,0x90,0x04,0x20,0x03,0x00,0x00},/*"s",83*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x10,0x00,0x10,0x00,0xFC,0x07,0x10,0x04,0x10,0x04,0x00,0x00},/*"t",84*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0xF0,0x03,0x00,0x04,0x00,0x04,0x00,0x04,0xF0,0x07,0x00,0x00},/*"u",85*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x30,0x00,0xC0,0x01,0x00,0x06,0xC0,0x01,0x30,0x00,0x00,0x00},/*"v",86*/
/* (7 X 14 , Menlo ) */

{0x30,0x00,0xC0,0x03,0x00,0x07,0xC0,0x00,0x00,0x07,0xC0,0x03,0x30,0x00},/*"w",87*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x10,0x04,0x60,0x03,0xC0,0x01,0x60,0x03,0x10,0x04,0x00,0x00},/*"x",88*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x30,0x20,0xC0,0x33,0x00,0x0E,0xC0,0x01,0x30,0x00,0x00,0x00},/*"y",89*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x10,0x06,0x10,0x05,0x90,0x04,0x50,0x04,0x30,0x04,0x00,0x00},/*"z",90*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x80,0x00,0x80,0x00,0x78,0x1F,0x04,0x20,0x04,0x20,0x00,0x00},/*"{",91*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0x3F,0x00,0x00,0x00,0x00,0x00,0x00},/*"|",92*/
/* (7 X 14 , Menlo ) */

{0x00,0x00,0x04,0x20,0x04,0x20,0x7C,0x3F,0x80,0x00,0x80,0x00,0x00,0x00},/*"}",93*/
/* (7 X 14 , Menlo ) */

{0x80,0x00,0x40,0x00,0x40,0x00,0x80,0x00,0x00,0x01,0x00,0x01,0x80,0x00},/*"~",94*/
/* (7 X 14 , Menlo ) */
};

const unsigned char fly[28][128] = { 
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X03,0X00,
0X00,0X00,0X03,0X00,0X00,0X80,0X03,0X00,0X00,0XC0,0X06,0X00,0X00,0XC0,0X06,0X00,
0X00,0X60,0XFC,0X01,0X00,0X20,0XFE,0X00,0X00,0X30,0X66,0X00,0X00,0X10,0X33,0X00,
0X00,0X98,0X39,0X00,0X00,0XC8,0X3E,0X00,0X00,0XEC,0X63,0X00,0X00,0XE4,0XC1,0X00,
0X00,0XF6,0X80,0X01,0X00,0X3A,0XC0,0X03,0X00,0X1F,0XF8,0X00,0X80,0X85,0X1F,0X00,
0X80,0XF8,0X00,0X00,0XC0,0X1F,0X00,0X00,0XC0,0X01,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0X00,
0X00,0X00,0X03,0X00,0X00,0X80,0X03,0X00,0X00,0XC0,0X02,0X00,0X00,0XC0,0X06,0X00,
0X00,0X60,0XFC,0X00,0X00,0X20,0XFE,0X00,0X00,0X30,0X66,0X00,0X00,0X10,0X33,0X00,
0X00,0X98,0X19,0X00,0X00,0XC8,0X3E,0X00,0X00,0XCC,0X67,0X00,0X00,0XE4,0XC1,0X00,
0X00,0XF6,0X80,0X01,0X00,0X3A,0X80,0X03,0X00,0X1F,0XF0,0X01,0X80,0X8D,0X1F,0X00,
0X80,0XF0,0X01,0X00,0XC0,0X3F,0X00,0X00,0XC0,0X01,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X01,0X00,0X00,0X80,0X03,0X00,0X00,0XC0,0X03,0X00,0X00,0X40,0X02,0X00,
0X00,0X60,0X06,0X00,0X00,0X20,0XFE,0X00,0X00,0X30,0XFE,0X00,0X00,0X10,0X33,0X00,
0X00,0X98,0X19,0X00,0X00,0XC8,0X1C,0X00,0X00,0XCC,0X37,0X00,0X00,0XE4,0X61,0X00,
0X00,0XF6,0XC0,0X00,0X00,0X7B,0X80,0X01,0X00,0X1F,0XE0,0X01,0X80,0X0D,0X7E,0X00,
0X80,0XE0,0X07,0X00,0XC0,0X7C,0X00,0X00,0XC0,0X07,0X00,0X00,0X40,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X01,0X00,0X00,0X80,0X01,0X00,0X00,0XC0,0X01,0X00,0X00,0X40,0X01,0X00,
0X00,0X60,0X03,0X00,0X00,0X20,0X02,0X00,0X00,0X30,0X7E,0X00,0X00,0X10,0X73,0X00,
0X00,0X98,0X39,0X00,0X00,0XC8,0X1C,0X00,0X00,0X4C,0X1E,0X00,0X00,0XE4,0X33,0X00,
0X00,0XF6,0X31,0X00,0X00,0X7B,0X60,0X00,0X00,0X3F,0XC0,0X00,0X80,0X0D,0XF0,0X00,
0X80,0X06,0X3F,0X00,0XC0,0XF0,0X03,0X00,0XC0,0X3F,0X00,0X00,0XE0,0X03,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X80,0X00,0X00,0X00,0XC0,0X01,0X00,0X00,0XC0,0X01,0X00,
0X00,0X60,0X01,0X00,0X00,0X20,0X01,0X00,0X00,0X30,0X7B,0X00,0X00,0X10,0X7F,0X00,
0X00,0X98,0X31,0X00,0X00,0XCC,0X1C,0X00,0X00,0X4C,0X0E,0X00,0X00,0X66,0X0F,0X00,
0X00,0XF6,0X19,0X00,0X00,0X7B,0X30,0X00,0X00,0X3D,0X20,0X00,0X80,0X1D,0X60,0X00,
0X80,0X06,0XF8,0X00,0XC0,0X82,0X1F,0X00,0X60,0XFE,0X00,0X00,0XE0,0X0F,0X00,0X00,
0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XC0,0X00,0X00,0X00,0XC0,0X00,0X00,
0X00,0XE0,0X00,0X00,0X00,0XB0,0X01,0X00,0X00,0XB0,0X01,0X00,0X00,0X18,0X3F,0X00,
0X00,0X98,0X3F,0X00,0X00,0XCC,0X18,0X00,0X00,0X4C,0X0E,0X00,0X00,0X66,0X07,0X00,
0X00,0XF2,0X0F,0X00,0X00,0XFB,0X0C,0X00,0X00,0X3D,0X18,0X00,0X80,0X1D,0X30,0X00,
0X80,0X0E,0X20,0X00,0XC0,0X06,0X7C,0X00,0X60,0XF0,0X07,0X00,0XE0,0X7F,0X00,0X00,
0XE0,0X03,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X40,0X00,0X00,0X00,0X60,0X00,0X00,
0X00,0XE0,0X00,0X00,0X00,0XF0,0X00,0X00,0X00,0XD0,0X00,0X00,0X00,0X98,0X00,0X00,
0X00,0X88,0X1F,0X00,0X00,0XCC,0X1C,0X00,0X00,0X64,0X0E,0X00,0X00,0X26,0X03,0X00,
0X00,0XF2,0X03,0X00,0X00,0XFB,0X06,0X00,0X80,0X3D,0X0C,0X00,0X80,0X1C,0X18,0X00,
0XC0,0X0E,0X18,0X00,0X40,0X07,0X38,0X00,0X60,0XC1,0X1F,0X00,0X20,0XFE,0X01,0X00,
0XF0,0X0F,0X00,0X00,0X30,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X60,0X00,0X00,
0X00,0X70,0X00,0X00,0X00,0X70,0X00,0X00,0X00,0X58,0X00,0X00,0X00,0XD8,0X00,0X00,
0X00,0XCC,0X1F,0X00,0X00,0XCC,0X1E,0X00,0X00,0X66,0X06,0X00,0X00,0X32,0X03,0X00,
0X00,0XF3,0X03,0X00,0X00,0X79,0X02,0X00,0X80,0X3D,0X06,0X00,0X80,0X1E,0X0C,0X00,
0XC0,0X0E,0X08,0X00,0X60,0X03,0X18,0X00,0X20,0XC1,0X1F,0X00,0X30,0XFE,0X01,0X00,
0XF0,0X0F,0X00,0X00,0X30,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X60,0X00,0X00,0X00,0X60,0X00,0X00,
0X00,0X70,0X00,0X00,0X00,0X70,0X00,0X00,0X00,0X58,0X00,0X00,0X00,0X48,0X00,0X00,
0X00,0XCC,0X1F,0X00,0X00,0X64,0X0E,0X00,0X00,0X66,0X06,0X00,0X00,0XB3,0X03,0X00,
0X00,0XFB,0X01,0X00,0X80,0X7D,0X03,0X00,0X80,0X3C,0X06,0X00,0XC0,0X0E,0X04,0X00,
0X40,0X07,0X0C,0X00,0X60,0X03,0X1C,0X00,0X20,0XE1,0X0F,0X00,0X30,0XFF,0X01,0X00,
0XF8,0X07,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X60,0X00,0X00,0X00,0X60,0X00,0X00,
0X00,0X70,0X00,0X00,0X00,0X50,0X00,0X00,0X00,0X58,0X00,0X00,0X00,0X4C,0X00,0X00,
0X00,0XCC,0X1F,0X00,0X00,0X66,0X0E,0X00,0X00,0X32,0X07,0X00,0X00,0XF3,0X01,0X00,
0X00,0XF9,0X03,0X00,0X80,0X3D,0X02,0X00,0X80,0X1C,0X06,0X00,0XC0,0X0E,0X0C,0X00,
0X60,0X07,0X0C,0X00,0X20,0X03,0X1C,0X00,0X30,0XF8,0X0F,0X00,0XF0,0X7F,0X00,0X00,
0XF0,0X01,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X60,0X00,0X00,0X00,0X70,0X00,0X00,
0X00,0X70,0X00,0X00,0X00,0X58,0X00,0X00,0X00,0X48,0X00,0X00,0X00,0XCC,0X0F,0X00,
0X00,0XE4,0X0F,0X00,0X00,0X26,0X06,0X00,0X00,0XB3,0X03,0X00,0X00,0XF9,0X01,0X00,
0X80,0X7D,0X03,0X00,0X80,0X3C,0X02,0X00,0XC0,0X0E,0X06,0X00,0X60,0X07,0X0C,0X00,
0XA0,0X03,0X08,0X00,0XB0,0X81,0X0F,0X00,0X30,0XFF,0X01,0X00,0XF8,0X0F,0X00,0X00,
0X30,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X20,0X00,0X00,0X00,0X70,0X00,0X00,0X00,0X70,0X00,0X00,
0X00,0X78,0X00,0X00,0X00,0X4C,0X00,0X00,0X00,0XCC,0X07,0X00,0X00,0XE4,0X0F,0X00,
0X00,0X26,0X06,0X00,0X00,0X33,0X03,0X00,0X00,0XD9,0X01,0X00,0X80,0XFD,0X01,0X00,
0X80,0X3C,0X03,0X00,0XC0,0X1E,0X06,0X00,0X60,0X07,0X04,0X00,0XA0,0X03,0X0C,0X00,
0XB0,0X01,0X0F,0X00,0X30,0XF8,0X07,0X00,0XF8,0X1F,0X00,0X00,0XF8,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X30,0X00,0X00,0X00,0X30,0X00,0X00,0X00,0X38,0X00,0X00,0X00,0X38,0X00,0X00,
0X00,0X6C,0X00,0X00,0X00,0X6C,0X00,0X00,0X00,0XE6,0X0F,0X00,0X00,0X22,0X06,0X00,
0X00,0X33,0X03,0X00,0X00,0XD9,0X01,0X00,0X80,0XFD,0X01,0X00,0X80,0X3C,0X01,0X00,
0XC0,0X1E,0X03,0X00,0X60,0X0F,0X06,0X00,0XA0,0X03,0X0C,0X00,0XB0,0X01,0X0E,0X00,
0X10,0XF0,0X07,0X00,0X18,0X7F,0X00,0X00,0XF8,0X01,0X00,0X00,0X18,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X30,0X00,0X00,0X00,0X38,0X00,0X00,0X00,0X38,0X00,0X00,0X00,0X3C,0X00,0X00,
0X00,0X24,0X00,0X00,0X00,0XE6,0X0F,0X00,0X00,0XF2,0X07,0X00,0X00,0X33,0X03,0X00,
0X00,0XD9,0X01,0X00,0X80,0XED,0X00,0X00,0XC0,0XBC,0X01,0X00,0XC0,0X1E,0X03,0X00,
0X60,0X0F,0X06,0X00,0XA0,0X07,0X06,0X00,0XB0,0X01,0X0C,0X00,0XD0,0XE0,0X0F,0X00,
0X18,0X7E,0X00,0X00,0XF8,0X07,0X00,0X00,0X38,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X10,0X00,0X00,
0X00,0X18,0X00,0X00,0X00,0X38,0X00,0X00,0X00,0X3C,0X00,0X00,0X00,0X34,0X00,0X00,
0X00,0XE6,0X07,0X00,0X00,0XF2,0X07,0X00,0X00,0X33,0X03,0X00,0X80,0X99,0X01,0X00,
0X80,0XEC,0X00,0X00,0XC0,0XFC,0X01,0X00,0X40,0X1E,0X01,0X00,0X60,0X0F,0X03,0X00,
0X20,0X07,0X06,0X00,0XB0,0X03,0X0C,0X00,0XD0,0X80,0X0F,0X00,0X18,0XFC,0X01,0X00,
0XD8,0X0F,0X00,0X00,0XFC,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X18,0X00,0X00,
0X00,0X1C,0X00,0X00,0X00,0X1C,0X00,0X00,0X00,0X34,0X00,0X00,0X00,0X36,0X00,0X00,
0X00,0XF3,0X07,0X00,0X00,0X33,0X07,0X00,0X80,0X99,0X01,0X00,0X80,0XC8,0X00,0X00,
0XC0,0XEC,0X00,0X00,0XC0,0XBE,0X01,0X00,0X60,0X1F,0X03,0X00,0X20,0X07,0X06,0X00,
0XB0,0X03,0X06,0X00,0XF0,0X01,0X0F,0X00,0X58,0XF0,0X03,0X00,0X18,0X3F,0X00,0X00,
0XFC,0X03,0X00,0X00,0X3C,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X08,0X00,0X00,0X00,0X18,0X00,0X00,
0X00,0X1C,0X00,0X00,0X00,0X1C,0X00,0X00,0X00,0X16,0X00,0X00,0X00,0X32,0X03,0X00,
0X00,0XF3,0X07,0X00,0X00,0X11,0X03,0X00,0X80,0XD9,0X01,0X00,0X80,0XEC,0X00,0X00,
0XC0,0XFC,0X00,0X00,0X40,0X9E,0X01,0X00,0X60,0X0F,0X03,0X00,0XA0,0X07,0X06,0X00,
0XB0,0X03,0X0C,0X00,0XF0,0X80,0X0F,0X00,0X58,0XF8,0X01,0X00,0X88,0X1F,0X00,0X00,
0XFC,0X01,0X00,0X00,0X3C,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X08,0X00,0X00,0X00,0X1C,0X00,0X00,
0X00,0X1C,0X00,0X00,0X00,0X16,0X00,0X00,0X00,0X12,0X00,0X00,0X00,0XF3,0X07,0X00,
0X00,0XF3,0X07,0X00,0X80,0X99,0X03,0X00,0X80,0XC8,0X00,0X00,0XC0,0XEC,0X00,0X00,
0XC0,0XF6,0X01,0X00,0X60,0X1E,0X01,0X00,0X60,0X0F,0X03,0X00,0XA0,0X07,0X06,0X00,
0XB0,0X01,0X0E,0X00,0XF8,0XC0,0X07,0X00,0X58,0X7C,0X00,0X00,0X88,0X0F,0X00,0X00,
0XFC,0X00,0X00,0X00,0X1C,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X18,0X00,0X00,0X00,0X1C,0X00,0X00,
0X00,0X1C,0X00,0X00,0X00,0X16,0X00,0X00,0X00,0X36,0X00,0X00,0X00,0XF2,0X07,0X00,
0X00,0XF3,0X07,0X00,0X80,0X99,0X01,0X00,0X80,0XD9,0X00,0X00,0X80,0XEC,0X00,0X00,
0XC0,0XBE,0X01,0X00,0X60,0X1E,0X03,0X00,0X60,0X0F,0X06,0X00,0XA0,0X07,0X0C,0X00,
0XB0,0X01,0X0E,0X00,0XF0,0XE0,0X07,0X00,0X18,0X7C,0X00,0X00,0XC8,0X0F,0X00,0X00,
0XFC,0X00,0X00,0X00,0X1C,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X18,0X00,0X00,0X00,0X18,0X00,0X00,
0X00,0X3C,0X00,0X00,0X00,0X3C,0X00,0X00,0X00,0X66,0X00,0X00,0X00,0XE6,0X0F,0X00,
0X00,0X73,0X07,0X00,0X00,0X33,0X03,0X00,0X80,0XD9,0X01,0X00,0X80,0XEC,0X01,0X00,
0X80,0X3C,0X03,0X00,0XC0,0X1E,0X06,0X00,0X60,0X0F,0X0C,0X00,0X60,0X07,0X18,0X00,
0XA0,0X03,0X1E,0X00,0XF0,0XE0,0X07,0X00,0X18,0X3C,0X00,0X00,0XD8,0X07,0X00,0X00,
0X78,0X00,0X00,0X00,0X08,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X20,0X00,0X00,0X00,0X30,0X00,0X00,0X00,0X30,0X00,0X00,
0X00,0X78,0X00,0X00,0X00,0X68,0X00,0X00,0X00,0X4C,0X0C,0X00,0X00,0XC4,0X1F,0X00,
0X00,0X66,0X0E,0X00,0X00,0X32,0X06,0X00,0X00,0XB3,0X03,0X00,0X00,0XD9,0X03,0X00,
0X80,0X7D,0X06,0X00,0X80,0X3C,0X0C,0X00,0XC0,0X1E,0X18,0X00,0X40,0X0F,0X38,0X00,
0X60,0X03,0X3E,0X00,0XA0,0XE1,0X07,0X00,0X30,0X7C,0X00,0X00,0XF0,0X07,0X00,0X00,
0X78,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X40,0X00,0X00,0X00,0X60,0X00,0X00,0X00,0X70,0X00,0X00,
0X00,0XF0,0X00,0X00,0X00,0X90,0X00,0X00,0X00,0X98,0X3D,0X00,0X00,0X88,0X3F,0X00,
0X00,0XCC,0X1C,0X00,0X00,0X44,0X0E,0X00,0X00,0X66,0X07,0X00,0X00,0XB2,0X07,0X00,
0X00,0XFB,0X0C,0X00,0X00,0X79,0X18,0X00,0X80,0X3D,0X30,0X00,0X80,0X0E,0X70,0X00,
0XC0,0X07,0X7E,0X00,0X60,0XE3,0X0F,0X00,0X60,0X7C,0X00,0X00,0XF0,0X0F,0X00,0X00,
0XF0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X80,0X00,0X00,0X00,0XC0,0X00,0X00,0X00,0XC0,0X01,0X00,
0X00,0XE0,0X01,0X00,0X00,0X30,0X01,0X00,0X00,0X30,0X7F,0X00,0X00,0X10,0X7F,0X00,
0X00,0X98,0X39,0X00,0X00,0XCC,0X1C,0X00,0X00,0X4C,0X0E,0X00,0X00,0X64,0X1F,0X00,
0X00,0XF6,0X19,0X00,0X00,0XFB,0X30,0X00,0X00,0X3B,0X60,0X00,0X80,0X1D,0XE0,0X00,
0X80,0X0E,0XFC,0X00,0XC0,0XC2,0X0F,0X00,0X40,0XFC,0X00,0X00,0XE0,0X0F,0X00,0X00,
0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X80,0X01,0X00,0X00,0X80,0X01,0X00,0X00,0XC0,0X01,0X00,
0X00,0X40,0X03,0X00,0X00,0X60,0X02,0X00,0X00,0X20,0XFE,0X00,0X00,0X30,0XFE,0X00,
0X00,0X10,0X33,0X00,0X00,0X98,0X19,0X00,0X00,0XC8,0X1C,0X00,0X00,0X4C,0X1E,0X00,
0X00,0XE4,0X33,0X00,0X00,0XF6,0X60,0X00,0X00,0X7A,0XC0,0X00,0X00,0X3F,0XC0,0X01,
0X80,0X0D,0XF8,0X00,0X80,0XC5,0X1F,0X00,0XC0,0XF8,0X00,0X00,0XC0,0X1F,0X00,0X00,
0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X01,0X00,0X00,0X80,0X01,0X00,0X00,0X80,0X03,0X00,
0X00,0XC0,0X02,0X00,0X00,0X40,0X02,0X00,0X00,0X60,0XC6,0X00,0X00,0X30,0XFE,0X00,
0X00,0X30,0X76,0X00,0X00,0X10,0X33,0X00,0X00,0X98,0X1D,0X00,0X00,0XCC,0X1E,0X00,
0X00,0X6C,0X33,0X00,0X00,0XF6,0X61,0X00,0X00,0XF6,0XC0,0X00,0X00,0X3B,0X80,0X01,
0X00,0X1F,0XF0,0X01,0X80,0X8D,0X3F,0X00,0X80,0XF0,0X01,0X00,0XC0,0X3F,0X00,0X00,
0XC0,0X03,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0X00,0X00,0X80,0X03,0X00,
0X00,0XC0,0X03,0X00,0X00,0XC0,0X02,0X00,0X00,0X60,0X06,0X00,0X00,0X60,0XFE,0X00,
0X00,0X30,0XFE,0X00,0X00,0X10,0X73,0X00,0X00,0X98,0X19,0X00,0X00,0XC8,0X1C,0X00,
0X00,0XCC,0X36,0X00,0X00,0XE4,0X63,0X00,0X00,0XF6,0XC0,0X00,0X00,0X7A,0X80,0X01,
0X00,0X3F,0XC0,0X01,0X00,0X0D,0XFE,0X00,0X80,0XC1,0X07,0X00,0XC0,0XFC,0X00,0X00,
0XC0,0X07,0X00,0X00,0XC0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0X00,0X00,0X00,0X03,0X00,
0X00,0X80,0X03,0X00,0X00,0XC0,0X02,0X00,0X00,0X40,0X06,0X00,0X00,0X60,0XE6,0X00,
0X00,0X20,0XFE,0X00,0X00,0X30,0X66,0X00,0X00,0X10,0X33,0X00,0X00,0X98,0X19,0X00,
0X00,0XC8,0X3E,0X00,0X00,0X6C,0X63,0X00,0X00,0XE4,0XC1,0X00,0X00,0XF6,0X80,0X01,
0X00,0X3B,0X80,0X03,0X00,0X1F,0XF8,0X01,0X80,0X0D,0X1F,0X00,0X80,0XF0,0X03,0X00,
0XC0,0X1F,0X00,0X00,0XC0,0X03,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X03,0X00,
0X00,0X80,0X03,0X00,0X00,0X80,0X03,0X00,0X00,0XC0,0X06,0X00,0X00,0X40,0X06,0X00,
0X00,0X60,0XFC,0X00,0X00,0X30,0XEE,0X00,0X00,0X30,0X63,0X00,0X00,0X10,0X39,0X00,
0X00,0X98,0X3D,0X00,0X00,0XCC,0X26,0X00,0X00,0XEC,0XE3,0X00,0X00,0XF6,0XC1,0X01,
0X00,0X7E,0X80,0X03,0X00,0X3F,0XE0,0X03,0X00,0X0F,0X7C,0X00,0X80,0XC1,0X07,0X00,
0X80,0X7C,0X00,0X00,0XC0,0X0F,0X00,0X00,0XC0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
};

const unsigned char ch[][28] = { /* 0X01,0X01,0X20,0X00,0X20,0X00, */

{0xFC,0x0F,0x44,0x04,0x44,0x04,0xFC,0x0F,0x00,0x00,0x08,0x00,0x48,0x00,0x88,0x01,0x08,0x20,0x08,0x20,0xFF,0x3F,0x08,0x00,0x08,0x00,0x00,0x00},/*"时",0*/
/* (14 X 14 , 宋体 ) */

{0x00,0x00,0xF8,0x3F,0x01,0x00,0x06,0x00,0xF0,0x07,0x92,0x04,0x92,0x04,0x92,0x04,0x92,0x04,0xF2,0x07,0x02,0x20,0x02,0x20,0xFE,0x3F,0x00,0x00},/*"间",1*/
/* (14 X 14 , 宋体 ) */

{0x00,0x10,0xBE,0x1F,0x22,0x10,0xE2,0x0F,0x22,0x09,0x3E,0x09,0x00,0x00,0xFE,0x3F,0x22,0x22,0x22,0x22,0x22,0x22,0xE2,0x23,0x02,0x20,0x00,0x00},/*"距",2*/
/* (14 X 14 , 宋体 ) */

{0x04,0x00,0x04,0x3E,0xF4,0x02,0x84,0x0A,0xD4,0x0E,0xA5,0x0A,0xA6,0x0B,0xA4,0x0A,0xD4,0x0E,0x84,0x2A,0xF4,0x22,0x04,0x3E,0x04,0x00,0x00,0x00},/*"离",3*/
/* (14 X 14 , 宋体 ) */

{0x82,0x23,0x82,0x20,0xBA,0x10,0xAA,0x0E,0xAA,0x02,0xAA,0x02,0xAB,0x02,0xAA,0x02,0xAA,0x02,0xAA,0x1E,0xBA,0x20,0x82,0x20,0x82,0x33,0x00,0x00},/*"亮",4*/
/* (14 X 14 , 宋体 ) */

{0x00,0x20,0x00,0x18,0xFC,0x07,0x14,0x20,0x14,0x21,0x7C,0x13,0x55,0x15,0x56,0x09,0x54,0x09,0x54,0x15,0x7C,0x13,0x14,0x21,0x14,0x20,0x00,0x00},/*"度",5*/
/* (14 X 14 , 宋体 ) */

{0x04,0x02,0x18,0x01,0x80,0x00,0xFF,0x3F,0x00,0x20,0x10,0x10,0x10,0x0C,0x90,0x03,0x7F,0x00,0x90,0x03,0x12,0x0C,0x14,0x10,0x10,0x20,0x00,0x00},/*"状",6*/
/* (14 X 14 , 宋体 ) */

{0x84,0x20,0x84,0x18,0x44,0x00,0x44,0x1C,0x24,0x20,0x54,0x20,0x8F,0x22,0x14,0x2C,0x24,0x20,0x44,0x30,0x44,0x00,0x84,0x04,0x84,0x18,0x00,0x00},/*"态",7*/
/* (14 X 14 , 宋体 ) */

{0x84,0x00,0x44,0x00,0x24,0x00,0xF4,0x3F,0x9C,0x04,0x97,0x04,0x94,0x04,0x94,0x04,0x94,0x24,0x94,0x24,0xF4,0x3F,0x04,0x00,0x04,0x00,0x00,0x00},/*"有",8*/
/* (14 X 14 , 宋体 ) */

{0x40,0x20,0x42,0x10,0x42,0x08,0x42,0x04,0x42,0x02,0xC2,0x01,0x7E,0x00,0xC2,0x1F,0x42,0x20,0x42,0x20,0x42,0x20,0x42,0x20,0x40,0x38,0x00,0x00},/*"无",9*/
/* (14 X 14 , 宋体 ) */

{0x00,0x20,0x00,0x20,0x00,0x10,0x00,0x08,0x00,0x06,0xC0,0x01,0x3F,0x00,0xC0,0x01,0x00,0x06,0x00,0x08,0x00,0x10,0x00,0x20,0x00,0x20,0x00,0x00},/*"人",10*/
/* (14 X 14 , 宋体 ) */

{0x00,0x00,0x02,0x18,0x0C,0x06,0x80,0x01,0x20,0x00,0x90,0x00,0x88,0x04,0x94,0x08,0xA3,0x18,0x84,0x24,0x88,0x02,0x90,0x01,0x20,0x00,0x00,0x00},/*"冷",11*/
/* (14 X 14 , 宋体 ) */

{0xFC,0x0F,0x44,0x04,0x44,0x04,0xFC,0x0F,0x00,0x00,0x42,0x08,0x56,0x26,0xDA,0x23,0x76,0x15,0x5A,0x09,0x52,0x15,0x59,0x23,0x45,0x20,0x00,0x00},/*"暖",12*/
/* (14 X 14 , 宋体 ) */

{0x00,0x00,0xFC,0x03,0x04,0x01,0x04,0x01,0x04,0x01,0x04,0x01,0xFF,0x3F,0x04,0x01,0x04,0x01,0x04,0x01,0x04,0x01,0xFC,0x03,0x00,0x00,0x00,0x00},/*"中",13*/
/* (14 X 14 , 宋体 ) */

{0x70,0x00,0x00,0x00,0xFF,0x3F,0x08,0x00,0x10,0x00,0x40,0x20,0x3C,0x21,0x10,0x21,0x10,0x21,0xFF,0x3F,0x10,0x21,0x10,0x21,0x10,0x20,0x00,0x00},/*"性",14*/
/* (14 X 14 , 宋体 ) */

{0x20,0x00,0x22,0x20,0x24,0x10,0x28,0x0C,0xE0,0x03,0x20,0x00,0x3F,0x00,0x20,0x00,0xE0,0x1F,0x28,0x20,0x24,0x20,0x22,0x20,0x20,0x38,0x00,0x00},/*"光",15*/
/* (14 X 14 , 宋体 ) */
	
{0x08,0x01,0xC8,0x00,0xFF,0x3F,0x48,0x00,0x80,0x24,0xF4,0x25,0x5F,0x15,0x54,0x0D,0x54,0x07,0x54,0x0D,0x5F,0x15,0xF4,0x25,0x04,0x24,0x00,0x00},/*"模",16*/
/* (14 X 14 , 宋体 ) */

{0x08,0x10,0x48,0x10,0x48,0x10,0xC8,0x1F,0x48,0x08,0x48,0x08,0x08,0x08,0x08,0x00,0xFF,0x01,0x08,0x06,0x09,0x08,0x0A,0x10,0x08,0x3C,0x00,0x00},/*"式",17*/
/* (14 X 14 , 宋体 ) */

{0x40,0x20,0x38,0x10,0x00,0x0C,0xFF,0x03,0x20,0x04,0x18,0x18,0x02,0x00,0x02,0x00,0x02,0x20,0x02,0x20,0xFE,0x3F,0x02,0x00,0x02,0x00,0x00,0x00},/*"灯",18*/
/* (14 X 14 , 宋体 ) */

{0x00,0x00,0xF2,0x1F,0x42,0x20,0x42,0x20,0x42,0x20,0x42,0x20,0x42,0x20,0x42,0x20,0x42,0x20,0x42,0x20,0x42,0x20,0x7E,0x20,0x00,0x38,0x00,0x00},/*"已",19*/
/* (14 X 14 , 宋体 ) */

{0x40,0x20,0x41,0x10,0x41,0x0C,0xFF,0x03,0x41,0x00,0x41,0x00,0x41,0x00,0x41,0x00,0x41,0x00,0xFF,0x3F,0x41,0x00,0x41,0x00,0x40,0x00,0x00,0x00},/*"开",20*/
/* (14 X 14 , 宋体 ) */

{0x80,0x20,0x88,0x20,0x88,0x10,0x89,0x08,0x8E,0x04,0x88,0x03,0xF8,0x00,0x88,0x03,0x8C,0x04,0x8B,0x08,0x88,0x10,0x88,0x20,0x80,0x20,0x00,0x00},/*"关",21*/
/* (14 X 14 , 宋体 ) */
	
{0x90,0x00,0x8A,0x00,0xBF,0x3A,0xAA,0x2A,0xBA,0x2A,0xCF,0x2A,0xFA,0x2A,0x84,0x2A,0xAA,0x2A,0x93,0x2A,0x92,0x3A,0xAE,0x00,0xA2,0x00,0x00,0x00},/*"警",22*/
/* (14 X 14 , 宋体 ) */

{0x08,0x21,0x08,0x21,0xFF,0x3F,0x88,0x00,0x48,0x00,0x00,0x00,0xFE,0x3F,0x42,0x10,0xC2,0x0B,0x52,0x04,0x52,0x0A,0xDE,0x11,0x00,0x20,0x00,0x00},/*"报",23*/
/* (14 X 14 , 宋体 ) */

{0x00,0x18,0x02,0x06,0x8C,0x01,0x00,0x00,0x40,0x20,0x30,0x10,0x0F,0x08,0x08,0x06,0xC8,0x01,0x08,0x06,0x08,0x08,0x28,0x10,0x18,0x20,0x00,0x00},/*"次",24*/
/* (14 X 14 , 宋体 ) */

{0x4A,0x21,0x2C,0x25,0x98,0x17,0x7F,0x19,0x18,0x09,0x2C,0x17,0x4A,0x20,0x40,0x00,0x30,0x20,0xCF,0x13,0x08,0x0C,0xF8,0x13,0x08,0x20,0x00,0x00},/*"数",25*/
/* (14 X 14 , 宋体 ) */
	
{0x0C,0x20,0x04,0x10,0x24,0x0F,0x24,0x10,0x24,0x20,0x25,0x20,0xE6,0x3F,0x24,0x22,0x24,0x22,0x24,0x22,0x24,0x22,0x04,0x20,0x0C,0x20,0x00,0x00},/*"定",26*/
/* (14 X 14 , 宋体 ) */

{0xFC,0x0F,0x44,0x04,0x44,0x04,0xFC,0x0F,0x00,0x00,0x08,0x00,0x48,0x00,0x88,0x01,0x08,0x20,0x08,0x20,0xFF,0x3F,0x08,0x00,0x08,0x00,0x00,0x00},/*"时",27*/
/* (14 X 14 , 宋体 ) */

{0x80,0x20,0x88,0x20,0x88,0x10,0x89,0x08,0x8E,0x04,0x88,0x03,0xF8,0x00,0x88,0x03,0x8C,0x04,0x8B,0x08,0x88,0x10,0x88,0x20,0x80,0x20,0x00,0x00},/*"关",28*/
/* (14 X 14 , 宋体 ) */

{0x00,0x00,0xF9,0x3F,0x02,0x00,0x20,0x04,0x22,0x02,0x22,0x01,0xA2,0x08,0x62,0x08,0xFA,0x0F,0x22,0x00,0x22,0x20,0x02,0x20,0xFE,0x3F,0x00,0x00},/*"闭",29*/
/* (14 X 14 , 宋体 ) */


};

