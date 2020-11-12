/*========================================================================*/  
/* [AUTHOR]      :  Muhammed Eldabea Hashem                               */
/* [DATE ]       :  7 NOV 2020   										  */
/* [VERSION]     :  V2.1                                                  */
/*========================================================================*/


#ifndef RCC_INTERFACE_H_ 
#define RCC_INTERFACE_H_  

    #define      RCC_PERIPHERAL_TIM11         21 
    #define      RCC_PERIPHERAL_TIM10         20
	#define 	 RCC_PERIPHERAL_TIM9	 	   19
	#define 	 RCC_PERIPHERAL_ADC3	       15 
	#define 	 RCC_PERIPHERAL_USART1        14 
	#define 	 RCC_PERIPHERAL_TIM8	       13
	#define 	 RCC_PERIPHERAL_SPI1 	       12 
	#define 	 RCC_PERIPHERAL_TIM1          11 
	#define 	 RCC_PERIPHERAL_ADC2		   10 
	#define 	 RCC_PERIPHERAL_ADC1           9 
	#define 	 RCC_PERIPHERAL_IOPG           8 
	#define 	 RCC_PERIPHERAL_IOPF           7 
	#define 	 RCC_PERIPHERAL_IOPE           6 
	#define 	 RCC_PERIPHERAL_IOPD           5 
	#define 	 RCC_PERIPHERAL_IOPC           4 
	#define 	 RCC_PERIPHERAL_IOPB           3 
	#define 	 RCC_PERIPHERAL_IOPA           2 
	#define 	 RCC_PERIPHERAL_AFIO           0 
		 							
		 							
	#define      RCC_PERIPHERAL_DAC            61  
	#define      RCC_PERIPHERAL_PWR  			60 
	#define      RCC_PERIPHERAL_BKP			59
	#define      RCC_PERIPHERAL_CAN			57 
	#define   	 RCC_PERIPHERAL_USB			55
	#define   	 RCC_PERIPHERAL_I2C2			54
	#define   	 RCC_PERIPHERAL_I2C1			53
	#define   	 RCC_PERIPHERAL_USART5			52
	#define   	 RCC_PERIPHERAL_USART4			51
	#define   	 RCC_PERIPHERAL_USART3			50	
	#define   	 RCC_PERIPHERAL_USART2			49 
	#define   	 RCC_PERIPHERAL_SPI3 			47
	#define   	 RCC_PERIPHERAL_SPI2 			46
	#define   	 RCC_PERIPHERALWWDG			43 
	#define   	 RCC_PERIPHERAL_TIM14 			40 
	#define   	 RCC_PERIPHERAL_TIM13 			39	
	#define   	 RCC_PERIPHERAL_TIM12			38	
	#define   	 RCC_PERIPHERAL_TIM7			37	
	#define   	 RCC_PERIPHERAL_TIM6 			36	
	#define   	 RCC_PERIPHERAL_TIM5			35 
	#define   	 RCC_PERIPHERAL_TIM4           34
	#define   	 RCC_PERIPHERAL_TIM3 			33 
	#define   	 RCC_PERIPHERAL_TIM2           32   


	#define      RCC_PERIPHERAL_SDIO            74   
	#define      RCC_PERIPHERAL_FSMC  			72 
	#define      RCC_PERIPHERAL_SRCE		   	70
	#define      RCC_PERIPHERAL_FLIRF		   	68 
	#define   	 RCC_PERIPHERAL_SRAM		   	66
	#define   	 RCC_PERIPHERAL_DMA2			65
	#define   	 RCC_PERIPHERAL_DMA1			64 



void RCC_voidInitSysClock(void)  ; 

void RCC_voidEnableCLK (u8 PERIPHERAL )  ; 

void RCC_voidDisableCLK (u8 PERIPHERAL )  ; 








	




#endif 
