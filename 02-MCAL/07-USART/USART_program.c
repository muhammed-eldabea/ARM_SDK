/*========================================================================*/  
/* [AUTHOR]      :  Muhammed Eldabea Hashem                               */
/* [DATE ]       :  7 NOV 2020   										  */
/* [VERSION]     :  V2.1                                                  */
/*========================================================================*/

#include "STD_TYPES.h" 
#include "BIT_MATH.h" 


#include  "USART_interface.h" 
#include "USART_config.h" 
#include "USART_private.h" 




void USART_INIT( )
{ 




	/** HARDWARE CONFIGURATION **/

#if USART_WORD_LEGNTH == 1 
	SET_BIT((Copy_USART_REG_PTR->CR[1]),12) ; 
#endif 

#if USART_WAKE_UP_METHOD == 1 
	SET_BIT((Copy_USART_REG_PTR->CR[1]),11) ;
#endif 

#if USART_TX_ENABLE == 1 
	SET_BIT((USART1_REGs_ACCESS->CR[0]),3) ;
#endif 

#if USART_RX_ENABLE == 1
	SET_BIT((USART1_REGs_ACCESS->CR[0]),2) ;
#endif 


	/***Parity check control ***/
#if USART_PARITY_STATE_SELECTION == 1 
	SET_BIT((Copy_USART_REG_PTR->CR[1]),10) ;
#endif  

#if USART_PARITY_TYPE_SELECTION == 1 
	SET_BIT((Copy_USART_REG_PTR->CR[1]),9) ;
#endif 

#if USART_PARITY_INTERRUPT_ENABLE == 1 
	SET_BIT((Copy_USART_REG_PTR->CR[1]),8) ;
#endif  

	/** interrupt control configuration **/

#if USART_TX_INTERRUPT_ENABLE == 1 
	SET_BIT((Copy_USART_REG_PTR->CR[1]),7) ;
#endif  

#if TRANSMITION_COMPLET_INTERRUPT == 1 
	SET_BIT((Copy_USART_REG_PTR->CR[1]),6) ;
#endif  

#if USART_RX_INTERRUPT_ENABLE == 1 
	SET_BIT((Copy_USART_REG_PTR->CR[1]),5) ;
#endif

#if USART_IDLE_INTERRUPT_ENABLE == 1 
	SET_BIT((Copy_USART_REG_PTR->CR[1]),4) ;
#endif

	/* BAUDRATE CONFIGURATION */
	USART1_REGs_ACCESS->BRR   =  USART_BAUDRATE_VALUE   ;

	/* STOP BIT  CONFIGURATION */
	USART1_REGs_ACCESS->CR[1]  &= 0XFFFFCFFF ;
	USART1_REGs_ACCESS->CR[1]  |=  (( 0X03 & USART_STOP_BIT_SELECTION )<<12)  ;



	/*enable the usart module */
	SET_BIT((USART1_REGs_ACCESS->CR[0]),13) ;

	/* CLEAR THE STAUTES REGISTER */
	USART1_REGs_ACCESS->SR = 0  ;

}   




void USART_SEND_DATA (u8 DATA)
{
	USART1_REGs_ACCESS -> DR = DATA  ;
	while (GET_BIT((USART1_REGs_ACCESS -> SR) , 6 )  !=  1 ) ;

} 


void USART_SEND_ARRAY ( u8 DATA_ARR[])
{ 
	u8 Local_indx = 0  ;
	while (DATA_ARR[Local_indx]  != '\0')
	{
		USART_SEND_DATA( DATA_ARR[Local_indx])  ;
		Local_indx++ ;
	}
}

u8 USART_GET_DATA ( )
{

	u8 DATA = 0 ; 

	while (GET_BIT((USART1_REGs_ACCESS -> SR) , 5 )  !=  1 ) ;
	DATA =  USART1_REGs_ACCESS -> DR   ;
	return DATA ;

} 

