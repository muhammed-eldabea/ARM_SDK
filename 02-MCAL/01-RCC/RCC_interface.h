/*************************************************************************************

&File Name     :  RCC_interface.h
&[Author] 	   :  Muhammed Eldabea HAshem 
&[Date]   	   :  11 Aug 2020 
&[Description] :  contain the interface option and Register that will be used to enable 
				  the module  and public function used by the other modules 
&[Version]     :  V01

**************************************************************************************/

#ifndef RCC_interface_H
#define RCC_interface_H




/*=================================Defined Macros==================================*/

#define  RCC_AHP 0
#define  RCC_APB1 1
#define  RCC_APB2 2


#define RCC_PERIPHERAL_ID_TIM11   	21
#define	RCC_PERIPHERAL_ID_DAC		29
#define	RCC_PERIPHERAL_ID_TIM10  	20
#define	RCC_PERIPHERAL_ID_PWR		28
#define RCC_PERIPHERAL_ID_TIM9		19
#define RCC_PERIPHERAL_ID_BKP		27
#define RCC_PERIPHERAL_ID_ADC3		15
#define	RCC_PERIPHERAL_ID_USART1	14
#define RCC_PERIPHERAL_ID_USB		23
#define RCC_PERIPHERAL_ID_TIM8		13
#define RCC_PERIPHERAL_ID_I2C2		22
#define RCC_PERIPHERAL_ID_SPI1 		12
#define RCC_PERIPHERAL_ID_I2C1		21
#define RCC_PERIPHERAL_ID_TIM1  	11
#define RCC_PERIPHERAL_ID_USART5	20
#define RCC_PERIPHERAL_ID_ADC2		10
#define RCC_PERIPHERAL_ID_ADC1		9
#define RCC_PERIPHERAL_ID_USART4	19
#define RCC_PERIPHERAL_ID_TIM1  	11
#define RCC_PERIPHERAL_ID_USART3	18
#define RCC_PERIPHERAL_ID_IOPG		 8 
#define RCC_PERIPHERAL_ID_USART2 	17
#define RCC_PERIPHERAL_ID_IOPF 		7
#define RCC_PERIPHERAL_ID_SPI3 		15
#define RCC_PERIPHERAL_ID_IOPE   	6
#define RCC_PERIPHERAL_ID_SPI2 		14
#define RCC_PERIPHERAL_ID_IOPD  	5
#define RCC_PERIPHERAL_IDWWDG		11
#define RCC_PERIPHERAL_ID_IOPC 		4
#define RCC_PERIPHERAL_ID_TIM14		8 
#define RCC_PERIPHERAL_ID_IOPB      3
#define RCC_PERIPHERAL_ID_TIM13		7 
#define RCC_PERIPHERAL_ID_IOPA      2
#define RCC_PERIPHERAL_ID_TIM12		6
#define RCC_PERIPHERAL_ID_AFIO      0
#define RCC_PERIPHERAL_ID_TIM7 		5
#define RCC_PERIPHERAL_ID_TIM6 		4					
#define RCC_PERIPHERAL_ID_TIM5		3
#define RCC_PERIPHERAL_ID_TIM4 		2
#define RCC_PERIPHERAL_ID_TIM3 		1
#define RCC_PERIPHERAL_ID_TIM2 		0
typedef unsigned char         uint8;



			/******************** Function Definations **********************/

void RCC_voidInitSysClock(void)  ;
void RCC_voidDisableClock(uint8 Copy_u8PeriphealID,uint8 Copy_u8BusName) ; 
void RCC_voidEnableClock(uint8 Copy_u8PeriphealID,uint8 Copy_u8BusName) ; 
uint8 RCC_uint8ReturnCalibration(void) ; 
 




#endif 
