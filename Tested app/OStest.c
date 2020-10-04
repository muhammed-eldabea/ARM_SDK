/*
 * main.c
 *
 *  Created on: Sep 20, 2020
 *      Author: tahat
 */




#include "STD_TYPES.h"
#include "BIT_MATH.h"




#include  "DIO_interface.h"
#include "RCC_interface.h"
#include "OS_interface.h"
#include "STK_interface.h"




void LED1(void) ;
void LED2(void) ;
void LED3(void) ;


void main (void)
{

	RCC_voidInitSysClock() ;
	RCC_voidEnableClock(RCC_APB2,2) ;
	MSTK_voidInit() ;


	MGPIO_VidSetPinDirection(GPIOA,PIN0,OUTPUT_SPEED_2MHZ_PP) ;
	MGPIO_VidSetPinDirection(GPIOA,PIN1,OUTPUT_SPEED_2MHZ_PP) ;
	MGPIO_VidSetPinDirection(GPIOA,PIN2,OUTPUT_SPEED_2MHZ_PP) ;

	SOS_voidCreatTask(0,LED1,100) ;
	SOS_voidCreatTask(1,LED2,300) ;
	SOS_voidCreatTask(2,LED3,500) ;
	SOS_voidStart() ;


	while(1)
	{

	}







}


void LED1(void) {
	static u8 PIN0STAT = 0  ;
	TOG_BIT(PIN0STAT,0) ;
	MGPIO_VidSetPinValue(GPIOA,PIN0,PIN0STAT )  ;

}
void LED2(void) {
	static u8 PIN1STAT = 0  ;
	TOG_BIT(PIN1STAT,0) ;
	MGPIO_VidSetPinValue(GPIOA,PIN1,PIN1STAT )  ;

}
void LED3(void) {
	static u8 PIN2STAT = 0  ;
	TOG_BIT(PIN2STAT,0) ;
	MGPIO_VidSetPinValue(GPIOA,PIN2,PIN2STAT )  ;


}
