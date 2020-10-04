
/*************************************************************************************

&[File Name]   :  GPIO_program.c
&[Author] 	   :  Muhammed Eldabea HAshem 
&[Date]   	   :  19 Aug 2020 
&[Description] :  functions definations that will be used  
&[Version]     :  V01

 **************************************************************************************/



/*==========================> INCLUDES <===============================*/


/*including needded Bit math and STD types */
#include "STD_TYPES.h" 
#include "BIT_MATH.h"  


/* get the peripheral library */ 
#include "GPIO_inteface.h"
#include "GPIO_private.h"
#include "GPIO_config.h"	









/*==========>Function Definations <===========*/

void GPIO_voidSetDataDirection(uint8 copy_u8PORT,uint8 copy_u8PIN,uint8 copy_u8MODE) 
{ 

	/*--------------------------------------------------------------------------------------
[FUNCTION NAME] :GPIO_voidSetDataDirection
[DESRIPTION]    : used to configure the direction of the pin  
[ARGUMENT(S)]   : 
   [IN]  : PORT NAME (GPIOX) 
   		   PIN Number (0-15)
 		   MODE: 
 		   		 GPIO_INPUT_ANALOG_MODE 
				 GPIO_INPUT_FLOATING_MODE
				 GPIO_INPUT_PULL_UP_DOWN_MODE
				 GPIO_OUTPUT10_PUSH_PULL_MODE    	
				 GPIO_OUTPUT10_OPEN_DRAIN_MODE   	
				 GPIO_OUTPUT10_AF_PUSH_PULL_MODE 	
				 GPIO_OUTPUT10_AF_OPEN_DRAIN_MODE	
				 GPIO_OUTPUT2_PUSH_PULL_MODE    		
				 GPIO_OUTPUT2_OPEN_DRAIN_MODE   		
				 GPIO_OUTPUT2_AF_PUSH_PULL_MODE 		
				 GPIO_OUTPUT2_AF_OPEN_DRAIN_MODE		
				 GPIO_OUTPUT50_PUSH_PULL_MODE    	
				 GPIO_OUTPUT50_OPEN_DRAIN_MODE   	
				 GPIO_OUTPUT50_AF_PUSH_PULL_MODE 	
				 GPIO_OUTPUT50_AF_OPEN_DRAIN_MODE	   
   [OUT] :  	 void 

[Return]      : void 
---------------------------------------------------------------------------------------*/ 



	/*PINS from 0 to 7 dealing with low register
and from 8 to 15 it deal with High register */

	if(copy_u8PIN<=7)
	{
		switch (copy_u8PORT) 
		{
		case GPIOA :
			GPIOA_CRL &= ~ ( ( 0b1111 )    << ( copy_u8PIN * 4 ));// R M W
			GPIOA_CRL |= ( copy_u8MODE ) << ( copy_u8PIN * 4 );

			break ;

		case GPIOB :
			GPIOB_CRL &= ~ ( ( 0b1111 )    << ( copy_u8PIN * 4 ));// R M W
			GPIOB_CRL |= ( copy_u8MODE ) << ( copy_u8PIN * 4 );
			break ;

		case GPIOC :
			if(copy_u8PIN <=2)
			{
				GPIOC_CRL &= ~ ( ( 0b1111 )    << ( copy_u8PIN * 4 ));// R M W
				GPIOC_CRL |= ( copy_u8MODE ) << ( copy_u8PIN * 4 );
			}
			else
			{
				//#error ("PORTC has only a 3 PINS")
			}
			break ;




		}

	} 


	else if ((copy_u8PIN <=15))
	{	
		/*we will dealing with a new register that used to configue the pins from 8-15 
		we need to substruct the 8 from the pins number */
		copy_u8PIN -=8 ; 

		switch (copy_u8PORT) 
		{
		case GPIOA :
			GPIOA_CRH &= ~ ( ( 0b1111 )    << ( copy_u8PIN * 4 ));// R M W
			GPIOA_CRH |= ( copy_u8MODE ) << ( copy_u8PIN * 4 );
			break ;

		case GPIOB :
			GPIOB_CRH &= ~ ( ( 0b1111 )    << ( copy_u8PIN * 4 ));// R M W
			GPIOB_CRH |= ( copy_u8MODE ) << ( copy_u8PIN * 4 );
			break ;

		case GPIOC :
			GPIOC_CRH &= ~ ( ( 0b1111 )    << ( copy_u8PIN * 4 ));// R M W
			GPIOC_CRH |= ( copy_u8MODE ) << ( copy_u8PIN * 4 );
			break ;




		}




	} 


	/*EOF*/
} 


void GPIO_voidSetDataValue(uint8 copy_u8PORT,uint8 copy_u8PIN,uint8 copy_u8VALUE)
{
	/*--------------------------------------------------------------------------------------
[FUNCTION NAME] :GPIO_voidSetValue
[DESRIPTION]    : used to change the state of the pins from low to high and vice versa   
[ARGUMENT(S)]   : 
   [IN]  : PORT NAME (GPIOX) 
   		   PIN Number (0-15)
 		   VALUE/STATE: 
 		   				>>HIGH
 		   				>>LOW 	   
   [OUT] :  	 void 

[Return]      : void 
---------------------------------------------------------------------------------------*/ 






	switch (copy_u8PORT)
	{
	case GPIOA :
		if( copy_u8VALUE == HIGH ){

			SET_BIT( GPIOA_ODR , copy_u8PIN );

		}else if( copy_u8VALUE == LOW ){
			CLEAR_BIT(  GPIOA_ODR , copy_u8PIN );
		}
		break ;

	case GPIOB :
		if( copy_u8VALUE == HIGH ){

			SET_BIT( GPIOB_ODR , copy_u8PIN );

		}else if( copy_u8VALUE == LOW ){
			CLEAR_BIT(  GPIOB_ODR , copy_u8PIN );
		}
		break ;

	case GPIOC :
		if( copy_u8VALUE == HIGH ){

			SET_BIT( GPIOC_ODR , copy_u8PIN );

		}else if( copy_u8VALUE == LOW ){
			CLEAR_BIT(  GPIOC_ODR , copy_u8PIN );
		}
		break ;




	}



	/*EOF*/
}



void GPIO_voidWriteToPort(uint8 copy_u8PORT,uint16 copy_u8PORTvalue)
{
	switch (copy_u8PORT)
	{
	case GPIOA :
		GPIOA_ODR = copy_u8PORTvalue ;
		break ;

	case GPIOB :
		GPIOB_ODR = copy_u8PORTvalue ;
		break ;

	case GPIOC :
		GPIOC_ODR = copy_u8PORTvalue ;
		break ;




	}
}

uint8 GPIO_u8GetDataValue(uint8 copy_u8PORT,uint8 copy_u8PIN)
{

	switch(copy_u8PORT)
	{
	case GPIOA :
		return GET_BIT(GPIOA_IDR,copy_u8PIN) ;
		break ;

	case GPIOB :
		return GET_BIT(GPIOB_IDR,copy_u8PIN) ;
		break ;

	case GPIOC :
		return GET_BIT(GPIOC_IDR,copy_u8PIN) ;
		break ;

	}
}



