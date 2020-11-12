/*========================================================================*/  
/* [AUTHOR]      :  Muhammed Eldabea Hashem                               */
/* [DATE ]       :  7 NOV 2020   										  */
/* [VERSION]     :  V2.1                                                  */
/*========================================================================*/

#ifndef RCC_CONFIG_H_ 
#define RCC_CONFIG_H_  

#define RCC_PLL_ENABLE   0 

/*used also to select the source for PLL */
/*	 OPTION :      >>	RCC_HSE_CRYSTAL >> 0 
			       >>	RCC_HSE_RC      >> 1 
			       >>	RCC_HSI         >> 2 
			       >>	RCC_PLL         >> 3  	*/
#define RCC_CLOCK_TYPE 0  

/* 
used to select the source of SYSCLOCK
chose the clock option 
option : RCC_HSI_USED_AS_CLOCK_SYSTEM,        >> 0 
		 RCC_HSE_USED_AS_CLOCK_SYSTEM,        >> 1 
    	 RCC_PLL_USED_AS_CLOCK_SYSTEM,    	  >> 2 
    	 RCC_NOT_ALLOWED_USED_AS_CLOCK_SYSTEM >> 3 
*/
#define SYSTEM_CLOCK_SWITCH_OPTION_SELECT 1


/*confgiure the trim value that is used to select the best 
frequency value with less error  you should first mesure the frequency
then calulate the error  on step more or less the default value(16)
will reflect on the real frequnce value by +/- 40KHz */ 
#define RCC_HSITRIM_VALUE  0x00000000 

/* if PLL clock is selected you should also provide the PLL source 
 option you have  : >>	RCC_PLL_Disable >>  0 
					>>  RCC_PLL_ENABLE  >>  1   
						*/ 
#define RCC_PLL_SOURCE_ENABLE 0  



/*Use the to select the multiplication factor of PLL output
option : RCC_PLL_INPUT_CLOCK_X2,   >> 0 
		 RCC_PLL_INPUT_CLOCK_X3    >> 1 
		 RCC_PLL_INPUT_CLOCK_X4,   >> 2
		 RCC_PLL_INPUT_CLOCK_X5    >> 3
		 RCC_PLL_INPUT_CLOCK_X6,   >> 4
		 RCC_PLL_INPUT_CLOCK_X7    >> 5
		 RCC_PLL_INPUT_CLOCK_X8,   >> 6
		 RCC_PLL_INPUT_CLOCK_X9    >> 7
		 RCC_PLL_INPUT_CLOCK_X10,  >> 8
		 RCC_PLL_INPUT_CLOCK_X11   >> 9
		 RCC_PLL_INPUT_CLOCK_X12,  >> 10
		 RCC_PLL_INPUT_CLOCK_X12   >> 11
		 RCC_PLL_INPUT_CLOCK_X14,  >> 12
		 RCC_PLL_INPUT_CLOCK_X15   >> 13
		 RCC_PLL_INPUT_CLOCK_X16_0 >> 14
		 RCC_PLL_INPUT_CLOCK_X16_1 >> 15
*/
#define RCC_PLL_MULTIPLICATION_VALUE 0  

/*
used to stream the clock and mesure it 
OPTION FOR MCO  :
	>>RCC_MCO_OUTPUT_NO_CLOCK,  		 >> 0  
	>>RCC_MCO_OUTPUT_SYSCLCK ,  		 >> 1 
	>>RCC_MCO_OUTPUT_HSI,       		 >> 2 
	>>RCC_MCO_OUTPUT_HSE,      		     >> 2 
	>>RCC_MCO_OUTPUT_PLL_DIVIDED_BY_TOW  >> 3 */  

#define RCC_MCO_CONFIG_OUTPUT 0 

/*
CLOCK_SECURITY_SYSTEM 
 if any faluir happen to the external clock source it will give 
 an interrupt and enable the internal clock 
					  OPTION :>> ENABLE_FEATURE   >> 1 
							  >> DISABLE_FEATURE  >> 0 
*/
#define RCC_CLOCK_SECURITY_SYSTEM 0 








/*use it to select if HSE will be divied by tow or input the 
  same signal 
	option : RCC_HSE_CLOCK_NOT_DIVIDED   >> 0 
			 RCC_HSE_CLOCK_DIVIDED_BY_2  >> 1    */
#define RCC_RCC_PLLXTPRE_SELECT  0

/*select the source signal type for PLL 
option :    RCC_PLL_SOURCE_HSI_BY_2 >> 0 
			RCC_PLL_SOURCE_HSE      >> 1  */ 
#define RCC_PLL_SOURCE_SELECT 0 


/*used to select the prescaler value of ADC 
 you should enable it first 

         ENABLE_FEATURE
		 DISABLE_FEATURE

 option : >> PREPHERAL_NOT_USED 
			RCC_ADC_PRE_BY_2  >> 0 
			RCC_ADC_PRE_BY_4  >> 1 
			RCC_ADC_PRE_BY_6  >> 2 
			RCC_ADC_PRE_BY_8  >> 3   */

#define RCC_ADC_PRESCALER_SELECT 0  


/*RCC_APB2_PRESCALER_SPEED prescaler 

any value except these mean not divided 
option : RCC_APB2_PRESCALER_SPEED_DIVIDED_BY_2  >> 4,
		 RCC_APB2_PRESCALER_SPEED_DIVIDED_BY_4  >> 5,
		 RCC_APB2_PRESCALER_SPEED_DIVIDED_BY_8  >> 6,	
		 RCC_APB2_PRESCALER_SPEED_DIVIDED_BY_16 >> 7  */

#define RCC_APB2_PRESCALER_SPEED_SELECT  0

/*RCC_APB1_PRESCALER_SPEED prescaler

any value except these mean not divided 
option : RCC_APB1_PRESCALER_SPEED_NOT_DIVIDED,
		 RCC_APB1_PRESCALER_SPEED_DIVIDED_BY_2,  >> 4 
		 RCC_APB1_PRESCALER_SPEED_DIVIDED_BY_4,  >> 5 
		 RCC_APB1_PRESCALER_SPEED_DIVIDED_BY_8,	 >> 6 
		 RCC_APB1_PRESCALER_SPEED_DIVIDED_BY_16  >> 7  */

#define RCC_APB1_PRESCALER_SPEED_SELECT 0


/*AHB prescale speed 
 you should enable it first 

         ENABLE_FEATURE
		 DISABLE_FEATURE

options : RCC_AHB_PRESCALER_NOT_DIVIDED, any value expext next 
		  RCC_AHB_PRESCALER_BY_2,     >> 8 
		  RCC_AHB_PRESCALER_BY_4,     >> 9 
		  RCC_AHB_PRESCALER_BY_8 ,    >> 10 
		  RCC_AHB_PRESCALER_BY_16,    >> 11 
		  RCC_AHB_PRESCALER_BY_64,    >> 12 
		  RCC_AHB_PRESCALER_BY_128,   >> 13 
		  RCC_AHB_PRESCALER_BY_256 ,  >> 14 
		  RCC_AHB_PRESCALER_BY_512    >> 15 

*/

#define RCC_AHB_PRESCALER_SELECT   0 
















#endif
