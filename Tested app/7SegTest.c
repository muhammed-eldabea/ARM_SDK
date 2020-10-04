/*
 * main.c
 *
 *  Created on: Aug 25, 2020
 *      Author: Muhammed Eldabea Hashem 
 */

#include  "STD_TYPES.h"
#include  "BIT_MATH.h"


#include "RCC_interface.h"
#include "GPIO_inteface.h"





#define SEV_SEG_CONTROL_PORT GPIOA

#define SEV_SEG_1	0x06
#define SEV_SEG_2	0x5B
#define SEV_SEG_3	0x4F
#define SEV_SEG_4	0x66
#define SEV_SEG_5	0x6D
#define SEV_SEG_6	0x7D
#define SEV_SEG_7	0X07
#define SEV_SEG_8	0x7F
#define SEV_SEG_9	0x6F
#define SEV_SEG_0   0x3f




void main (void ) {
	uint8 SEV_SEG[10] = {SEV_SEG_0,SEV_SEG_1,SEV_SEG_2,SEV_SEG_3,
			SEV_SEG_4,SEV_SEG_5,SEV_SEG_6,SEV_SEG_7
			,SEV_SEG_8,SEV_SEG_9};
	uint8 num = 0 ;
	RCC_voidInitSysClock() ;
	RCC_voidEnableClock(RCC_PERIPHERAL_ID_IOPA,RCC_APB2) ;
	GPIO_voidSetDataDirection(GPIOA,0,0x02) ;
	GPIO_voidSetDataDirection(GPIOA,1,0x02) ;
	GPIO_voidSetDataDirection(GPIOA,2,0x02) ;
	GPIO_voidSetDataDirection(GPIOA,3,0x02) ;
	GPIO_voidSetDataDirection(GPIOA,4,0x02) ;
	GPIO_voidSetDataDirection(GPIOA,5,0x02) ;
	GPIO_voidSetDataDirection(GPIOA,6,0x02) ;
	GPIO_voidSetDataDirection(GPIOA,7,GPIO_INPUT_PULL_UP_DOWN_MODE) ;
	GPIO_voidSetDataDirection(GPIOA,8,GPIO_INPUT_PULL_UP_DOWN_MODE) ;
	GPIO_voidSetDataValue(GPIOA,8,HIGH) ;
	GPIO_voidSetDataValue(GPIOA,7,HIGH) ;


	while(1)
	{


		for (uint16 i=0 ; i<9 ; i++)
		{

			GPIO_voidWriteToPort(GPIOA,SEV_SEG[i]) ;

			for(uint16 j = 0 ; j<3500;j++  )
			{
				for(uint16 j = 0 ; j<3500;j++  ){
					asm("NOP") ;
				}
			}
		}







	}
}


