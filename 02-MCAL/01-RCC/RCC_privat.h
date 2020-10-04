
/*************************************************************************************

&[File name]   :  RCC_privat.h
&[Author] 	   :  Muhammed Eldabea HAshem 
&[Date]   	   :  11 Aug 2020 
&[Description] :  all private data that will used with the RCC module and private function
				  only RCC can use   
&[Version]     :  V01

**************************************************************************************/


#ifndef RCC_privat_H  
#define RCC_privat_H  


/* Peripheral Base Address  */ 

#define RCC_baseaddress 0x40021000 

/*Register  Definition */

#define RCC_CR        *(( volatile uint32*)  RCC_baseaddress)
#define RCC_CFGR      *(( volatile uint32*) (RCC_baseaddress+0x04))
#define RCC_CIR       *(( volatile uint32*) (RCC_baseaddress+0x08))
#define RCC_APB2RSTR  *(( volatile uint32*) (RCC_baseaddress+0x0C))
#define RCC_APB1RSTR  *(( volatile uint32*) (RCC_baseaddress+0x10))
#define RCC_AHBENR    *(( volatile uint32*) (RCC_baseaddress+0x14))
#define RCC_APB2ENR   *(( volatile uint32*) (RCC_baseaddress+0x18))
#define RCC_APB1ENR   *(( volatile uint32*) (RCC_baseaddress+0x1C))
#define RCC_BDCR      *(( volatile uint32*) (RCC_baseaddress+0x20))
#define RCC_CSR        *(( volatile uint32*)0x40021024)

/*bool value*/
#define ENABLE_FEATURE 1 
#define DISABLE_FEATURE 0 
#define PREPHERAL_NOT_USED 70 
/*Bus Name  */
#define RCC_AHB    0 	
#define RCC_APB1   1 
#define RCC_APB2   2 

/*CLOCK TYPES*/ 
#define RCC_HSE_CRYSTAL  0 
#define	RCC_HSE_RC       1 
#define	RCC_HSI			 2 
#define	RCC_PLL 		 3  

/*PLL source Clock */
#define RCC_PLL_WITH_HSE_CRYSTAL 0 
#define RCC_PLL_WITH_HSE_RC      1 
#define RCC_PLL_WITH_HSI         2
#define RCC_PLL_DISABLE          3 

/*PLL multiplication value*/ 
typedef enum {
	RCC_PLL_INPUT_CLOCK_X2,RCC_PLL_INPUT_CLOCK_X3,
	RCC_PLL_INPUT_CLOCK_X4,RCC_PLL_INPUT_CLOCK_X5,
	RCC_PLL_INPUT_CLOCK_X6,RCC_PLL_INPUT_CLOCK_X7,
	RCC_PLL_INPUT_CLOCK_X8,RCC_PLL_INPUT_CLOCK_X9,
	RCC_PLL_INPUT_CLOCK_X10,RCC_PLL_INPUT_CLOCK_X11,
	RCC_PLL_INPUT_CLOCK_X12,RCC_PLL_INPUT_CLOCK_X13,
	RCC_PLL_INPUT_CLOCK_X14,RCC_PLL_INPUT_CLOCK_X15,
	RCC_PLL_INPUT_CLOCK_X16_0,RCC_PLL_INPUT_CLOCK_X16_1
} RCC_PLL_MULTIPLICATION_VALUE; 


/*HSE Divider for PLL entry 
use it whene wh want to divid the input clock by tow  */ 
typedef enum {
	RCC_HSE_CLOCK_NOT_DIVIDED,RCC_HSE_CLOCK_DIVIDED_BY_2
}RCC_PLLXTPRE ;  


/*select the source signal for PLL */
typedef enum {
	RCC_PLL_SOURCE_HSI_BY_2  , RCC_PLL_SOURCE_HSE
}RCC_PLL_SOURCE_VALUE ; 



/*configuration used for the micro-controller output pin */ 

typedef enum {

RCC_MCO_OUTPUT_NO_CLOCK,RCC_MCO_OUTPUT_SYSCLCK , 
RCC_MCO_OUTPUT_HSI,RCC_MCO_OUTPUT_HSE,
RCC_MCO_OUTPUT_PLL_DIVIDED_BY_TOW 

}RCC_MCO_OUTPUT_CONFIURAION_SELECTION ; 



/*ADC prescaler Values*/ 
typedef enum {
	RCC_ADC_PRE_BY_2 , RCC_ADC_PRE_BY_4,
	RCC_ADC_PRE_BY_6 , RCC_ADC_PRE_BY_9
}RCC_ADC_PRESCALER_VALUES ; 



/*APB high-speed prescaler (APB2)*/
typedef enum {
RCC_APB2_PRESCALER_SPEED_NOT_DIVIDED,RCC_APB2_PRESCALER_SPEED_DIVIDED_BY_2=4,
RCC_APB2_PRESCALER_SPEED_DIVIDED_BY_4,RCC_APB2_PRESCALER_SPEED_DIVIDED_BY_8,	
RCC_APB2_PRESCALER_SPEED_DIVIDED_BY_16
}RCC_APB2_PRESCALER_SPEED_VALUE ;

/*APB high-speed prescaler (APB1)
Warning: the software has to set correctly these bits to not exceed 36 MHz on this domain
*/
typedef enum {
RCC_APB1_PRESCALER_SPEED_NOT_DIVIDED,RCC_APB1_PRESCALER_SPEED_DIVIDED_BY_2=4,
RCC_APB1_PRESCALER_SPEED_DIVIDED_BY_4,RCC_APB1_PRESCALER_SPEED_DIVIDED_BY_8,	
RCC_APB1_PRESCALER_SPEED_DIVIDED_BY_16
}RCC_APB1_PRESCALER_SPEED_VALUE ;  



/*option of  speed for AHP speed*/
typedef enum 
{ 
	RCC_AHB_PRESCALER_NOT_DIVIDED,RCC_AHB_PRESCALER_BY_2=4,
	RCC_AHB_PRESCALER_BY_4,RCC_AHB_PRESCALER_BY_8 , 
	RCC_AHB_PRESCALER_BY_16,RCC_AHB_PRESCALER_BY_64,
	RCC_AHB_PRESCALER_BY_128,RCC_AHB_PRESCALER_BY_256 , 
	RCC_AHB_PRESCALER_BY_512	
}RCC_AHB_PRESCALER_VALUES;
	

/*the clock switvh type and state*/
typedef enum {
    RCC_HSI_USED_AS_CLOCK_SYSTEM,RCC_HSE_USED_AS_CLOCK_SYSTEM,
    RCC_PLL_USED_AS_CLOCK_SYSTEM,RCC_NOT_ALLOWED_USED_AS_CLOCK_SYSTEM
   
}SYSTEM_CLOCK_SWITCH_OPTION_VALUES ; 










#endif 
