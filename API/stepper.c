#include "stepper.h"
#include "N76E003.h"

void rotate(float rotate_angle,char rotate_dir)
{
	int temp;
	temp = (steps*(rotate_angle/360));
	dir = rotate_dir;
	en = 0;
	while(temp--)
	{
		pulse = 1;
		Timer0_Delay100us(speed);
		pulse = 0;
		Timer0_Delay100us(speed);
	}
	en = 1;
}
//

