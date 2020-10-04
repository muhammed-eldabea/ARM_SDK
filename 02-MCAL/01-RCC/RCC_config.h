
/*************************************************************************************

&[File Name]
&[Author] 	   :  Muhammed Eldabea HAshem 
&[Date]   	   :  11 Aug 2020 
&[Description] :  contain the configuration that will be changed by the user 
&[Version]     :  V02

**************************************************************************************/


#ifndef RCC_config_H
#define RCC_config_H 



/************ CONFIGURATION PARAMETERS*******************/


/*	 OPTION :      >>	RCC_HSE_CRYSTAL
			       >>	RCC_HSE_RC 
			       >>	RCC_HSI
			       >>	RCC_PLL 	*/
#define RCC_CLOCK_TYPE RCC_HSE_CRYSTAL 


/* if PLL clock is selected you should also provide the PLL source 
 option you have  : >>	RCC_PLL_WITH_HSE_CRYSTAL
					>>	RCC_PLL_WITH_HSE_RC
					>>	RCC_PLL_WITH_HSI 
					>>	RCC_PLL_DISABLE
						*/
#define RCC_PLL_SOURCE RCC_PLL_DISABLE 


/*
CLOCK_SECURITY_SYSTEM 
 if any faluir happen to the external clock source it will give 
 an interrupt and enable the internal clock 
					  OPTION :>> ENABLE_FEATURE
							  >> DISABLE_FEATURE
*/
#define RCC_CLOCK_SECURITY_SYSTEM DISABLE_FEATURE 


/*confgiure the trim value that is used to select the best 
frequency value with less error  you should first mesure the frequency
then calulate the error  on step more or less the default value(16)
will reflect on the real frequnce value by +/- 40KHz */ 
#define RCC_HSITRIM_VALUE  0x00000010 


/*Use the to select the multiplication factor of PLL output
option : RCC_PLL_INPUT_CLOCK_X2,
		 RCC_PLL_INPUT_CLOCK_X3
		 RCC_PLL_INPUT_CLOCK_X4,
		 RCC_PLL_INPUT_CLOCK_X5
		 RCC_PLL_INPUT_CLOCK_X6,
		 RCC_PLL_INPUT_CLOCK_X7
		 RCC_PLL_INPUT_CLOCK_X8,
		 RCC_PLL_INPUT_CLOCK_X9
		 RCC_PLL_INPUT_CLOCK_X10,
		 RCC_PLL_INPUT_CLOCK_X11
		 RCC_PLL_INPUT_CLOCK_X12,
		 RCC_PLL_INPUT_CLOCK_X12
		 RCC_PLL_INPUT_CLOCK_X14,
		 RCC_PLL_INPUT_CLOCK_X15
		 RCC_PLL_INPUT_CLOCK_X16_0,
		 RCC_PLL_INPUT_CLOCK_X16_1 
*/
#define RCC_PLL_MULTIPLICATION_VALUE RCC_PLL_INPUT_CLOCK_X2 


/*use it to select if HSE will be divied by tow or input the 
  same signal 
	option : RCC_HSE_CLOCK_NOT_DIVIDED
			 RCC_HSE_CLOCK_DIVIDED_BY_2   */
#define RCC_RCC_PLLXTPRE_SELECT  RCC_HSE_CLOCK_NOT_DIVIDED

/*select the source signal type for PLL 
option :    RCC_PLL_SOURCE_HSI_BY_2 
			RCC_PLL_SOURCE_HSE            */ 
#define RCC_PLL_SOURCE_SELECT RCC_PLL_SOURCE_HSI_BY_2 


/*used to select the prescaler value of ADC 
 you should enable it first 

         ENABLE_FEATURE
		 DISABLE_FEATURE

 option : >> PREPHERAL_NOT_USED 
			RCC_ADC_PRE_BY_2 , RCC_ADC_PRE_BY_4
			RCC_ADC_PRE_BY_6 , RCC_ADC_PRE_BY_9*/
#define RCC_ADC_PRESCALER_ENABLE DISABLE_FEATURE
#define RCC_ADC_PRESCALER_SELECT PREPHERAL_NOT_USED 


/*RCC_APB2_PRESCALER_SPEED prescaler 
 you should enable it first 

         ENABLE_FEATURE
		 DISABLE_FEATURE

option : RCC_APB2_PRESCALER_SPEED_DIVIDED_BY_2,
		 RCC_APB2_PRESCALER_SPEED_DIVIDED_BY_4,
		 RCC_APB2_PRESCALER_SPEED_DIVIDED_BY_8,	
		 RCC_APB2_PRESCALER_SPEED_DIVIDED_BY_16   */

#define RCC_APB2_PRESCALER_SPEED_ENABLE  DISABLE_FEATURE
#define RCC_APB2_PRESCALER_SPEED_SELECT  RCC_APB2_PRESCALER_SPEED_DIVIDED_BY_2

/*RCC_APB1_PRESCALER_SPEED prescaler
 you should enable it first 
         ENABLE_FEATURE
		 DISABLE_FEATURE
Warning: the software has to set correctly these bits to not exceed 36 MHz on this domain. 
option : RCC_APB1_PRESCALER_SPEED_NOT_DIVIDED,
		 RCC_APB1_PRESCALER_SPEED_DIVIDED_BY_2,
		 RCC_APB1_PRESCALER_SPEED_DIVIDED_BY_4,
		 RCC_APB1_PRESCALER_SPEED_DIVIDED_BY_8,	
		 RCC_APB1_PRESCALER_SPEED_DIVIDED_BY_16   */

#define RCC_APB1_PRESCALER_SPEED_ENABLE  DISABLE_FEATURE
#define RCC_APB1_PRESCALER_SPEED_SELECT RCC_APB1_PRESCALER_SPEED_NOT_DIVIDED


/*AHB prescale speed 
 you should enable it first 

         ENABLE_FEATURE
		 DISABLE_FEATURE

options : RCC_AHB_PRESCALER_NOT_DIVIDED,RCC_AHB_PRESCALER_BY_2,
		  RCC_AHB_PRESCALER_BY_4,RCC_AHB_PRESCALER_BY_8 , 
		  RCC_AHB_PRESCALER_BY_16,RCC_AHB_PRESCALER_BY_64,
		  RCC_AHB_PRESCALER_BY_128,RCC_AHB_PRESCALER_BY_256 , 
		  RCC_AHB_PRESCALER_BY_512

*/
#define RCC_APHB_PRESCALER_SPEED_ENABLE  DISABLE_FEATURE
#define RCC_AHB_PRESCALER_SELECT  RCC_AHB_PRESCALER_NOT_DIVIDED,RCC_AHB_PRESCALER_BY_2


/*
chose the clock option 
option : RCC_HSI_USED_AS_CLOCK_SYSTEM,RCC_HSE_USED_AS_CLOCK_SYSTEM,
    	 RCC_PLL_USED_AS_CLOCK_SYSTEM,RCC_NOT_ALLOWED_USED_AS_CLOCK_SYSTEM
*/
#define SYSTEM_CLOCK_SWITCH_OPTION_SELECT RCC_HSE_USED_AS_CLOCK_SYSTEM


/*
used to stream the clock and mesure it 
OPTION FOR MCO  :
	>>RCC_MCO_OUTPUT_NO_CLOCK,
	>>RCC_MCO_OUTPUT_SYSCLCK , 
	>>RCC_MCO_OUTPUT_HSI,
	>>RCC_MCO_OUTPUT_HSE,
	>>RCC_MCO_OUTPUT_PLL_DIVIDED_BY_TOW */

#define RCC_MCO_CONFIG_OUTPUT RCC_MCO_OUTPUT_NO_CLOCK







#endif 
