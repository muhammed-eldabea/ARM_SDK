/*========================================================================*/  
/* [AUTHOR]      :  Muhammed Eldabea Hashem                               */
/* [DATE ]       :  7 NOV 2020   										  */
/* [VERSION]     :  V2.1                                                  */
/*========================================================================*/ 

#include "STD_TYPES.h" 
#include  "BIT_MATH.h" 

#include "RCC_interface.h"
#include "RCC_config.h" 
#include "RCC_private.h" 




void RCC_voidInitSysClock(void) 
{




#if RCC_CLOCK_SECURITY_SYSTEM == 1 
SET_BIT(RCC_CR,19) ;
#endif 

/*microcontroler stream output clock */
RCC_CFGR = (RCC_CFGR & 0xF8FFFFFF ) | ((RCC_MCO_CONFIG_OUTPUT & 0x07)<<24);
/*PLL multiplication value */
RCC_CFGR = (RCC_CFGR & 0xFFC3FFFF ) | ((RCC_PLL_MULTIPLICATION_VALUE & 0x0F)<<18);
/*ADC prescaler */
RCC_CFGR = (RCC_CFGR & 0xFFFF3FFF ) | ((RCC_ADC_PRESCALER_SELECT & 0x03)<<14);
/*APB2 presacler speed  */
RCC_CFGR = (RCC_CFGR & 0xFFFFC7FF ) | ((RCC_APB2_PRESCALER_SPEED_SELECT & 0x07)<<11);
/*APB1 presacler speed  */
RCC_CFGR = (RCC_CFGR & 0xFFFFF8FF ) | ((RCC_APB1_PRESCALER_SPEED_SELECT & 0x07)<<8);
/*AHB presacler speed  */
RCC_CFGR = (RCC_CFGR & 0xFFFFFF0F ) | ((RCC_AHB_PRESCALER_SELECT & 0x0F)<<4); 
/*system clock switch */
RCC_CFGR = (RCC_CFGR & 0xFFFFFFFC ) | ((SYSTEM_CLOCK_SWITCH_OPTION_SELECT & 0x03)<<0); 


#if RCC_RCC_PLLXTPRE_SELECT == 1 
	SET_BIT(RCC_CFGR,17) ; 
#endif

#if RCC_PLL_SOURCE_SELECT == 1 
	SET_BIT(RCC_CFGR,16) ; 
#endif  


/* used to bypass the external  oscilator source 
this bit need to b set whene we dealing with the crystal  **/ 

#if RCC_CLOCK_TYPE == 1
	SETBIT(RCC_CR,16) ; /*HSE on */
	SETBIT(RCC_CR,18) ; /*bypass on */
	/*wait for HSE  clock to be  ready */ 
	while(1 != GET_BIT(RCC_CR17)) ; 

#elif RCC_CLOCK_TYPE == 0 
 	SET_BIT(RCC_CR,16) ; /*HSE on */
	/*wait for HSE clock to be  ready */ 


#elif RCC_CLOCK_TYPE == 2 
	SETBIT(RCC_CR,0) ; /*HSI on */ 
	/*wait for HSI clock to be  ready */ 
	while(1 != GET_BIT(RCC_CR,1)) ;
	/*HSITRIM value configuration */
	RCC_CR = (RCC_CR &0xFFFFFF07) | ((RCC_HSITRIM_VALUE & 0x001F)<<3) ; 
#endif 

#if RCC_PLL_SOURCE_ENABLE == 1 
	SET_BIT(RCC_CR,24) ; 
	while(1 != GET_BIT(RCC_CR,25)) ; 
#endif 


} 




void RCC_voidEnableCLK (u8 PERIPHERAL ) 
{
	
	/*used to select the catageory of the  perihperal  bus */
u8 Local_u8Cat  = PERIPHERAL & 0x60 ; 

switch (Local_u8Cat) 
{

case 0x00 : SET_BIT(RCC_APB2ENR , (PERIPHERAL & 0x1F))  ;  break ;
case 0x20 : SET_BIT(RCC_APB1ENR , (PERIPHERAL & 0x1F))  ;  break ;
case 0x40 : SET_BIT(RCC_AHBENR , (PERIPHERAL & 0x1F))  ;   break ;
}

} 


void RCC_voidDisableCLK (u8 PERIPHERAL ) 
{ 

/* RCC_peripheralBus_*/	
	
	/*used to select the catageory of the  perihperal  bus */
u8 Local_u8Cat  = PERIPHERAL & 0x60 ; 

switch (Local_u8Cat) 
{

case 0x00 :
 /*this mean perihpheral conected to APB2*/  
 CLEAR_BIT(RCC_APB2RSTR , (PERIPHERAL & 0x1F))  ; 
 break ;

case 0x20 :
 /*this mean perihpheral conected to APB2*/  
 CLEAR_BIT(RCC_APB1RSTR , (PERIPHERAL & 0x1F))  ; 
 break ; 

case 0x40 :
 /*this mean perihpheral conected to APB2*/  
 CLEAR_BIT(RCC_AHBENR , (PERIPHERAL & 0x1F))  ; 
 break ;
}

} 
