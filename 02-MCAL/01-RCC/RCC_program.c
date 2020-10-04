
/*************************************************************************************

&[File name]   :  RCC_program.c
&[Author] 	   :  Muhammed Eldabea HAshem 
&[Date]   	   :  11 Aug 2020 
&[Description] :  all private data that will used with the RCC module and private function
				  only RCC can use   
&[Version]     :  V02

**************************************************************************************/



	/*==============================INCLUDES================================*/


#include "STD_TYPES.h" 
#include "BIT_MATH.h"


#include "RCC_interface.h"
#include "RCC_privat.h"
#include "RCC_config.h" 


  /*=========================Function Definitions==============================*/ 	




void RCC_voidEnableClock(uint8 Copy_u8PeriphealID,uint8 Copy_u8BusName){

	/***************************************************************

	[Function name] : RCC_voidEnableCLock  (Scroll down for option )
	[Description]   : used to enable the source clock that by the way 
					  will enable the peripheral when the enable bit 
					  of the peripheral it self is activated 
	[Argument]      : << input >> 
					   peripheralID : a uint8 variable used to 
					   		pass the peripheralID to the function 
					   BusName : hold the bus name as not all 
					   			peripheral connected to the same bus  
					  << output >> 
					  	return  : a void 


OPTION : >>APB2 Peripheral 					APB1
		 RCC_APB2_PERIPHERAL_TIM11  | RCC_APB1_PERIPHERAL_DAC
		 RCC_APB2_PERIPHERAL_TIM10  | RCC_APB1_PERIPHERAL_PWR
		 RCC_APB2_PERIPHERAL_TIM19	| RCC_APB1_PERIPHERAL_BKP
		 RCC_APB2_PERIPHERAL_ADC3	| RCC_APB1_PERIPHERAL_CAN
		 RCC_APB2_PERIPHERAL_USART1 | RCC_APB1_PERIPHERAL_USB
		 RCC_APB2_PERIPHERAL_TIM18	| RCC_APB1_PERIPHERAL_I2C2
		 RCC_APB2_PERIPHERAL_SPI1 	| RCC_APB1_PERIPHERAL_I2C1
		 RCC_APB2_PERIPHERAL_TIM1   | RCC_APB1_PERIPHERAL_USART5
		 RCC_APB2_PERIPHERAL_ADC2	| RCC_APB1_PERIPHERAL_USART4	
		 RCC_APB2_PERIPHERAL_TIM1   | RCC_APB1_PERIPHERAL_USART3
		 RCC_APB2_PERIPHERAL_IOPG   | RCC_APB1_PERIPHERAL_USART2 
		 RCC_APB2_PERIPHERAL_IOPF 	| RCC_APB1_PERIPHERAL_SPI3 
		 RCC_APB2_PERIPHERAL_IOPE   | RCC_APB1_PERIPHERAL_SPI2 
		 RCC_APB2_PERIPHERAL_IOPD   | RCC_APB1_PERIPHERALWWDG
		 RCC_APB2_PERIPHERAL_IOPC   | RCC_APB1_PERIPHERAL_TIM14 
		 RCC_APB2_PERIPHERAL_IOPB   | RCC_APB1_PERIPHERAL_TIM13 
		 RCC_APB2_PERIPHERAL_IOPA   | RCC_APB1_PERIPHERAL_TIM12
		 RCC_APB2_PERIPHERAL_AFIO   | RCC_APB1_PERIPHERAL_TIM7 
		 							| RCC_APB1_PERIPHERAL_TIM6 
		 							| RCC_APB1_PERIPHERAL_TIM5
		 							| RCC_APB1_PERIPHERAL_TIM4
		 							| RCC_APB1_PERIPHERAL_TIM3
		 							| RCC_APB1_PERIPHERAL_TIM2


	****************************************************************/


if(Copy_u8PeriphealID <=31) 
{

/*depending on the bus name one case will be activated to enable 
 * the peripheral*/
		switch (Copy_u8BusName) 
		{
			case  RCC_AHP : 

					SET_BIT(RCC_AHBENR,Copy_u8PeriphealID)  ; 
 					break ; 

			case RCC_APB1  : 
					
					SET_BIT(RCC_APB1ENR,Copy_u8PeriphealID) ; 
 					break ; 
			
			case RCC_APB2  : 
					
					SET_BIT(RCC_APB2ENR,Copy_u8PeriphealID)  ; 
 					break ; 

 			default : 
 					/*Return ERROR */
 				//	#error ("UNDEFINED BusName IS USED")
 					break ; 

 		}
}


else 
{

	/*Return Error*/
//	#error peripheralID should be less that 31

}


/*EOF*/
}
 



void RCC_voidDisableClock(uint8 Copy_u8PeriphealID,uint8 Copy_u8BusName){

	/***************************************************************

	[Function name] : RCC_voidDisableCLock 
	[Description]   : used to Disable the source clock that by the way 
					  a power will be save when the peripheral if off  
					  of the peripheral it self is activated 
	[Argument]      : << input >> 
					   peripheralID : a uint8 variable used to 
					   		pass the peripheralID to the function 
					   BusName : hold the bus name as not all 
					   			peripheral connected to the same bus  
					  << output >> 
					  	return  : a void 

OPTION : >>APB2 Peripheral 					APB1
		 RCC_APB2_PERIPHERAL_TIM11  | RCC_APB1_PERIPHERAL_DAC
		 RCC_APB2_PERIPHERAL_TIM10  | RCC_APB1_PERIPHERAL_PWR
		 RCC_APB2_PERIPHERAL_TIM19	| RCC_APB1_PERIPHERAL_BKP
		 RCC_APB2_PERIPHERAL_ADC3	| RCC_APB1_PERIPHERAL_CAN
		 RCC_APB2_PERIPHERAL_USART1 | RCC_APB1_PERIPHERAL_USB
		 RCC_APB2_PERIPHERAL_TIM18	| RCC_APB1_PERIPHERAL_I2C2
		 RCC_APB2_PERIPHERAL_SPI1 	| RCC_APB1_PERIPHERAL_I2C1
		 RCC_APB2_PERIPHERAL_TIM1   | RCC_APB1_PERIPHERAL_USART5
		 RCC_APB2_PERIPHERAL_ADC2	| RCC_APB1_PERIPHERAL_USART4	
		 RCC_APB2_PERIPHERAL_TIM1   | RCC_APB1_PERIPHERAL_USART3
		 RCC_APB2_PERIPHERAL_IOPG   | RCC_APB1_PERIPHERAL_USART2 
		 RCC_APB2_PERIPHERAL_IOPF 	| RCC_APB1_PERIPHERAL_SPI3 
		 RCC_APB2_PERIPHERAL_IOPE   | RCC_APB1_PERIPHERAL_SPI2 
		 RCC_APB2_PERIPHERAL_IOPD   | RCC_APB1_PERIPHERALWWDG
		 RCC_APB2_PERIPHERAL_IOPC   | RCC_APB1_PERIPHERAL_TIM14 
		 RCC_APB2_PERIPHERAL_IOPB   | RCC_APB1_PERIPHERAL_TIM13 
		 RCC_APB2_PERIPHERAL_IOPA   | RCC_APB1_PERIPHERAL_TIM12
		 RCC_APB2_PERIPHERAL_AFIO   | RCC_APB1_PERIPHERAL_TIM7 
		 							| RCC_APB1_PERIPHERAL_TIM6 
		 							| RCC_APB1_PERIPHERAL_TIM5
		 							| RCC_APB1_PERIPHERAL_TIM4
		 							| RCC_APB1_PERIPHERAL_TIM3
		 							| RCC_APB1_PERIPHERAL_TIM2

	****************************************************************/


if(Copy_u8PeriphealID <=31) 
{

/*depending on the bus name one case will be activated to enable 
 * the peripheral*/
		switch (Copy_u8BusName) 
		{
			case  RCC_AHP : 

					CLEAR_BIT(RCC_AHBENR,Copy_u8PeriphealID)   ; 
 					break ; 

			case RCC_APB1  : 
					
					CLEAR_BIT(RCC_APB1ENR,Copy_u8PeriphealID) ;  
 					break ; 
			
			case RCC_APB2  : 
					
					CLEAR_BIT(RCC_APB2ENR,Copy_u8PeriphealID)  ; 
 					break ; 

 			default : 
 					/*Return ERROR */
 				//	#error ("UNDEFINED BusName IS USED")
 					break ; 

 		}
}


else 
{

	/*Return Error*/
	//#error ("peripheralID should be less that 31")

}


/*EOF*/
} 



void RCC_voidInitSysClock(void)
{


	/***************************************************************

	[Function name] : RCC_InitSysClock 
	[Description]   : initialize the clock of the system and select 
					  the clock  by which the system will work   
	[Argument]      : << input >> 
					  	void  
					  << output >> 
					  	return  : a void 

	****************************************************************/

/*check for clock type*/ 

	#if RCC_CLOCK_TYPE == RCC_HSE_CRYSTAL
		/*set the HSE_ON bit */
		SET_BIT(RCC_CR,16) ;  
		/*wait until the value get stable*/
		//while(1 !=GET_BIT(RCC_CR,17)){} ;

	#elif RCC_CLOCK_TYPE == RCC_HSE_RC 
		/*set the HSE_ON bit */
		SET_BIT(RCC_CR,16) ;  
		/*enable the bypass bit*/
		SET_BIT(RCC_CR,18) ;	
		/*wait until the value get stable*/
		while(1 !=GET_BIT(RCC_CR,17)){} ;

	#elif RCC_CLOCK_TYPE == RCC_HSI 
		/*set the HSION*/
		SET_BIT(RCC_CR,0) ;
		/*HSITRIM value*/
		RCC_CR = (RCC_CR  & 0xFFFFFF07) | (( (uint32)RCC_HSITRIM_VALUE & 0x0000001F) << 3) ;  		
		/*wait until the value get stable */
		while(1 !=GET_BIT(RCC_CR,1)){} ;
	#elif RCC_CLOCK_TYPE == RCC_PLL 
		/*set the PLLON*/
		SET_BIT(RCC_CR,24) ;
		/*select the PLL source */		
				#if RCC_PLL_SOURCE== RCC_PLL_WITH_HSE_CRYSTAL : 
					/*set the HSEON*/
					SET_BIT(RCC_CR,16) ; 
					/*select if the PLL external source should be divied or not */
					BYTE_INSERT(RCC_CFGR,0xFFDFFFF,RCC_RCC_PLLXTPRE_SELECT,0x01,17) ; 
					break ; 
				#elif RCC_PLL_SOURCE== RCC_PLL_WITH_HSE_RC : 
					/*set HSEON*/
					SET_BIT(RCC_CR,16) ; 
					/*SET ByPass*/
					SET_BIT(RCC_CR,18)
					/*select if the PLL external source should be divied or not */
					BYTE_INSERT(RCC_CFGR,0xFFDFFFF,RCC_RCC_PLLXTPRE_SELECT,0x01,17) ; 
					break ;
				#elif RCC_PLL_SOURCE== RCC_PLL_WITH_HSI : 
					/*set HSION bit */
					SET_BIT(RCC_CR,1) ;
					/*HSITRIM value*/
					RCC_CR = (RCC_CR  & 0xFFFFFF07) | (( (uint32)RCC_HSITRIM_VALUE & 0x0000001F) << 3) ;

					break ; 
				#else : 
					/*return an error */ 
					#error ("Select a valid source") 
				#endif 


		/*select the source prescaler*/
		BYTE_INSERT(RCC_CFGR,0xFFEFFFF,RCC_ADC_PRESCALER_SELECT,0x01,16) ; 
		/*PLL multiplication value */
		 BYTE_INSERT(RCC_CFGR,0xFFC3FFFF,RCC_PLL_MULTIPLICATION_VALUE,0x0F,18) ; 

		/*wait until the value get stable */
		while(1 !=GET_BIT(RCC_CR,25)){} ;

	#else 
		#error ("Select a valid clock type")  




	#endif 



#if RCC_CLOCK_SECURITY_SYSTEM  == ENABLE_FEATURE

/*enable clock secuirty system  */
SET_BIT(RCC_CR,19) ; 
#endif

#if RCC_MCO_CONFIG_OUTPUT != RCC_MCO_OUTPUT_NO_CLOCK  
/*insrt the MCO configuration value in the register */
BYTE_INSERT(RCC_CFGR,0xFFF8FFFF,RCC_MCO_CONFIG_OUTPUT,0x07,24) ; 
#endif 


#if RCC_ADC_PRESCALER_ENABLE == ENABLE_FEATURE 
/*ADC prescaler value*/
BYTE_INSERT(RCC_CFGR,0xFFFF3FFF,RCC_ADC_PRESCALER_SELECT,0x03,14) ; 
#endif 



#if RCC_APB2_PRESCALER_SPEED_ENABLE == ENABLE_FEATURE 
/*APB2 prescaler value*/
BYTE_INSERT(RCC_CFGR,0xFFFFC7FF,RCC_APB2_PRESCALER_SPEED_SELECT ,0x07,11) ; 
#endif 

#if RCC_APB1_PRESCALER_SPEED_ENABLE == ENABLE_FEATURE 
/*APB1 prescaler value*/
BYTE_INSERT(RCC_CFGR,0xFFFFF8FF,RCC_APB1_PRESCALER_SPEED_SELECT ,0x07,8) ; 
#endif 

#if RCC_AHB_PRESCALER_SPEED_ENABLE == ENABLE_FEATURE 
/*APB1 prescaler value*/
BYTE_INSERT(RCC_CFGR,0xFFFFFF0F,RCC_AHB_PRESCALER_SPEED_SELECT ,0x07,4) ; 
#endif 

/*SYSTEM_CLOCK_SWITCH_OPTION_SELECT configuration */
BYTE_INSERT(RCC_CFGR,0xFFFFFFF3,SYSTEM_CLOCK_SWITCH_OPTION_SELECT ,0x03,2) ;
//RCC_CFGR = 0x00000001;



/*EOF*/
}





uint8 RCC_uint8ReturnCalibration(void)
{


	/***************************************************************

	[Function name] : RCC_uint8ReturnCalibration 
	[Description]   : return the internal clock  calibration value  
					    
	[Argument]      : << input >> 
					  	void  
					  << RETURN >> 
					  	return  : a uint8 calibrated value  

	****************************************************************/
/*return calibration value*/
return ((RCC_CR & 0x00FF00)>>8) ; 

}
