#include "N76E003.h"
#include "stepper.h"
#include "key.h"
#include "delay.h"

#define angle1	30 //旋转角度
#define angle2 	60 //旋转角度

//主函数
int main(void)
{	
	Set_All_GPIO_Quasi_Mode; // Define in Function_define.h
	while(1)
	{	

		if(key_scanf() == 1)
		{
			rotate(angle1,0);
			
			Timer3_Delay1s(4);
			
			rotate(angle1,1);
		}
		
		if(key_scanf() == 2)
		{
			rotate(angle2,0);
			
			Timer3_Delay1s(4);
			
			rotate(angle2,1);
		}
	}
}
//


