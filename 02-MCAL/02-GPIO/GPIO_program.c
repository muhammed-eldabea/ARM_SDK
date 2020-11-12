/*========================================================================*/  
/* [AUTHOR]      :  Muhammed Eldabea Hashem                               */
/* [DATE ]       :  7 NOV 2020   										  */
/* [VERSION]     :  V2.1                                                  */
/*========================================================================*/ 



#include "STD_TYPES.h" 
#include "BIT_MATH.h"

#include "GPIO_interface.h"
#include "GPIO_config.h"
#include "GPIO_private.h"




void GPIO_voidSetPinDirection(volatile  u8 Copy_u8PORT , volatile u8 Copy_u8PIN , volatile u8 Copy_u8PinState  ) 
{

u8 pin = 0 ; 

if ((Copy_u8PIN <=15 ) && (Copy_u8PIN >=0) ) 
{

if (Copy_u8PIN <= 7 ) 
{

switch (Copy_u8PORT) 
{

case GPIOA : 
 				GPIOA_CRL = GPIOA_CRL & (!(0x0000000F << Copy_u8PIN))   ; 
 				GPIOA_CRL |= ((Copy_u8PinState & 0x0000000F)<<Copy_u8PIN ) ;    

				break ;
case GPIOB : 
 				GPIOB_CRL = GPIOB_CRL & (!(0x0000000F << Copy_u8PIN))   ; 
 				GPIOB_CRL |= ((Copy_u8PinState & 0x0000000F)<<Copy_u8PIN ) ;    

				break ;
case GPIOC :
 				GPIOC_CRL = GPIOC_CRL & (!(0x0000000F << Copy_u8PIN))   ; 
 				GPIOC_CRL |= ((Copy_u8PinState & 0x0000000F)<<Copy_u8PIN ) ;    

				break ; 

}

} 
else if (Copy_u8PIN > 7 ) 
{


pin = Copy_u8PIN - 8 ; 

switch (Copy_u8PORT) 
{

case GPIOA : 
 				GPIOA_CRL = GPIOA_CRL & (!(0x0000000F << pin))   ; 
 				GPIOA_CRL |= ((Copy_u8PinState & 0x0000000F)<<pin ) ;    

				break ;
case GPIOB : 
 				GPIOB_CRL = GPIOB_CRL & (!(0x0000000F << pin))   ; 
 				GPIOB_CRL |= ((Copy_u8PinState & 0x0000000F)<<pin ) ;    

				break ;
case GPIOC :
 				GPIOC_CRL = GPIOC_CRL & (!(0x0000000F << pin))   ; 
 				GPIOC_CRL |= ((Copy_u8PinState & 0x0000000F)<<pin ) ;    

				break ; 

}

}


} 



/*  EOF */

} 


void GPIO_voidSetPinSTAT(volatile  u8 Copy_u8PORT , volatile u8 Copy_u8PIN , volatile u8 Copy_u8PinState) 
{
 
switch (Copy_u8PORT) 
{

case GPIOA : 
 	if (Copy_u8PinState == HIGH) 
 	{
		SET_BIT(GPIOA_ODR,Copy_u8PIN) ; 
 	} 
 	else if (Copy_u8PinState == LOW) 
 	{
 		CLEAR_BIT(GPIOA_ODR,Copy_u8PIN) ; 
 	}
	break ;

case GPIOB : 
 	if (Copy_u8PinState == HIGH) 
 	{
		SET_BIT(GPIOB_ODR,Copy_u8PIN) ; 
 	} 
 	else if (Copy_u8PinState == LOW) 
 	{
 		CLEAR_BIT(GPIOB_ODR,Copy_u8PIN) ; 
 	}
	break ;

case GPIOC : 
 	if (Copy_u8PinState == HIGH) 
 	{
		SET_BIT(GPIOC_ODR,Copy_u8PIN) ; 
 	} 
 	else if (Copy_u8PinState == LOW) 
 	{
 		CLEAR_BIT(GPIOC_ODR,Copy_u8PIN) ; 
 	}
	break ; 

}
 
} 


 u8 GPIO_voidGetPinSTAT(volatile  u8 Copy_u8PORT , volatile u8 Copy_u8PIN ) 
{
	 u8 local_u8state = 0 ;

switch (Copy_u8PORT) 
{

case GPIOA : 
		local_u8state =  GET_BIT(GPIOA_IDR,Copy_u8PIN) ; 
	break ;

case GPIOB : 
		local_u8state = GET_BIT(GPIOB_IDR,Copy_u8PIN) ; 
	break ;

case GPIOC : 
		local_u8state = GET_BIT(GPIOC_IDR,Copy_u8PIN) ; 
	break ; 

} 
return local_u8state ; 

}  





