/*
 * main.c
 *
 *  Created on: Sep 2, 2020
 *      Author: Ahmed
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "RCC_interface.h"
#include "DIO_interface.h"
#include "EXTI0_interface.h"
#include "NVIC_interface.h"
#include "STK_interface.h"
#include "HLEDMAT_interface.h"

volatile u8   u8StartFlag       = 0;
volatile u32  u32FrameData[50]  = {0};
volatile u8   u8EdgeCounter     = 0;
volatile u8   u8Data            = 0;




void main(void)
{
	u8 data[50] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 4, 12, 4, 124, 0, 56, 40, 56, 0, 126, 16, 126, 0, 120, 20, 18, 20, 120, 0, 124, 4, 12, 4, 124, 0, 124, 68, 40, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} ;

	/* RCC Initialize */
	RCC_voidInitSysClock();
	RCC_voidEnableClock(RCC_APB2,2); /* GPIOA Enable Clock */
	RCC_voidEnableClock(RCC_APB2,3);

	/* IO Pins Initialization */

	/* EXTI Initializtion */
	/* A0 EXTI0 Enabled / Falling Edge */

	/* Enable EXTI0 from NVIC */

	HLEDMAT_voidInit () ;
MSTK_voidInit() ;


	while(1)
	{
for (u8  i = 0 ; i <42 ; i++  )
{
		u8 * ptr = &data[i] ;
		HLEDMAT_voidDisplayFrame(ptr) ;
		MSTK_voidSetBusyWait(250) ;
}

	}
}
