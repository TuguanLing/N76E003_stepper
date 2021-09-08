#include "N76E003.h"
#include "key.h"
#include "delay.h"

sbit key1 	= P0^6;//转动30°
sbit key2 	= P0^7;//转动60°

char key_scanf(void)
{
	if(key1==1||key2==1)
	{
		Timer0_Delay1ms(10);
		if(key1==1)return 1;
		else if(key2==1)return 2;
	}else
	{
		
	}
	return 0;
}
