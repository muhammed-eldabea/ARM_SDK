/*========================================================================*/  
/* [AUTHOR]      :  Muhammed Eldabea Hashem                               */
/* [DATE ]       :  7 NOV 2020   										  */
/* [VERSION]     :  V2.1                                                  */
/*========================================================================*/

#ifndef USART_INTERFACE_H_ 
#define USART_INTERFACE_H_ 




void USART_INIT(  )  ;
void USART_SEND_DATA ( u8 DATA) ;
u8 USART_GET_DATA ( ) ;
void USART_SEND_ARRAY ( u8 DATA_ARR[]) ;





#endif 
