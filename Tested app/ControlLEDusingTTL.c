/*========================================================================*/  
/* [AUTHOR]      :  Muhammed Eldabea Hashem                               */
/* [DATE ]       :  7 NOV 2020   										  */
/* [VERSION]     :  V2.1                                                  */
/*========================================================================*/


/*
in this project we try to test USART driver using USB TTL 
we conect it to the PC and try to control a led conected to PORTA pin 0 
by sending to letter  
char "r" to turn off the led 
char "s" to turn on the led  


*/









#include "STD_TYPES.h"
#include "BIT_MATH.h"


#include "RCC_interface.h"
#include "GPIO_interface.h"
#include  "USART_interface.h"



void main ()
{
	RCC_voidInitSysClock() ;
	RCC_voidEnableCLK(RCC_PERIPHERAL_IOPA) ;
	RCC_voidEnableCLK(RCC_PERIPHERAL_IOPB) ;
	RCC_voidEnableCLK(RCC_PERIPHERAL_USART1) ;


	GPIO_voidSetPinDirection(GPIOA,0,GPIO_OUTPUT2MHz_GP_PP) ;

	GPIO_voidSetPinDirection(GPIOA,9,GPIO_OUTPUT50MHz_AF_PP) ;
	GPIO_voidSetPinDirection(GPIOA,10,GPIO_INPUT_FLOATING_INPUT) ;

	USART_INIT() ;
	GPIO_voidSetPinSTAT(GPIOA,0,HIGH) ;
	USART_SEND_ARRAY("Hello \n ") ;
	GPIO_voidSetPinSTAT(GPIOA,0,HIGH) ;


	u8 x  ;
	while(1)
	{
		USART_SEND_ARRAY("Hello \n ") ;
		x = USART_GET_DATA() ;


		if (x == 'r')
		{
			GPIO_voidSetPinSTAT(GPIOA,0,LOW) ;
		}
		else if (x == 's')
		{
			GPIO_voidSetPinSTAT(GPIOA,0,HIGH) ;
		}


	}


}
