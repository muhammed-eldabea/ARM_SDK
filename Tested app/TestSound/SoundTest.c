
#include  "STD_TYPES.h"
#include  "BIT_MATH.h"



#include  "RCC_interface.h"
#include "STK_interface.h"
#include  "DIO_interface.h"
#include  "DIO_private.h"


#include "song.h"

volatile  u16 inc = 0 ;

void voidSetDAC (void)

{


	GPIOA_ODR = untitled_raw[inc] ;
	inc++ ;


if (inc ==  39660)
{
	inc = 0 ;
}

}



void main (void)
{

	RCC_voidInitSysClock() ;
	RCC_voidEnableClock(RCC_APB2,2) ;


	MGPIO_VidSetPinDirection(GPIOA,PIN0,0b0010) ;
	MGPIO_VidSetPinDirection(GPIOA,PIN1,0b0010) ;
	MGPIO_VidSetPinDirection(GPIOA,PIN2,0b0010) ;
	MGPIO_VidSetPinDirection(GPIOA,PIN3,0b0010) ;
	MGPIO_VidSetPinDirection(GPIOA,PIN4,0b0010) ;
	MGPIO_VidSetPinDirection(GPIOA,PIN5,0b0010) ;
	MGPIO_VidSetPinDirection(GPIOA,PIN6,0b0010) ;
	MGPIO_VidSetPinDirection(GPIOA,PIN7,0b0010) ;

	MSTK_voidInit() ;
	MSTK_voidSetIntervalPeriodic(125,voidSetDAC) ;


	while(1) ;
}
