/************************************************************************/ 
/* [AUTHER]      : MUHAMMED ELDABEA HASHEM                              */ 
/* [DATE]        : 5 OCT 2020                                           */ 
/* [VERSION]     : V01                                                  */ 
/************************************************************************/  


#ifndef UART_CONFIG_H
#define UART_CONFIG_H 



/**** MODE SELECT ****/
/*[OPTION] : Disable >> Enable  */
#define USART_RX_ENABLE  Enable 

/*[OPTION] : Disable >> Enable  */
#define USART_TX_ENABLE  Enable 


/* next value used with frequenct 8MHz*/
/*For Baud Rate yoy can use one of the next values*/
/* 4800   >> 0x683
   9600   >> 0x341
   14400  >> 0x2BC
   38400  >> 0x0D0
   115200 >> 0x045                                           */ 
#define USART_EQV_BUAD_RATE   0x341 

/*[OPTION] : Disable >> Enable  */
#define USART_ENABLE_MODULE  Enable 

/*[OPTION] :  USART_8_BIT >> USART_9_BIT */
#define USART_WORD_LENGTH    USART_8_BIT 

/*[OPTION] : USART_IDLE_LINE_WAKE >> USART_ADDRESS_MARK_WAKE */
#define USART_WAKE_UP_METHOD USART_IDLE_LINE_WAKE 

/*[OPTION] : Disable >> Enable  */
#define USART_PARITY_ENABLE  Disable 

/* [OPRION] :   USART_EVEN_PARITY >> USART_ODD_PARITY */
#define USART_PARITY_SELECTION USART_EVEN_PARITY 

/*Receiver wakeup*/
/*[OPTION] : Disable >> Enable  */
#define USART_RWU_ENABLE  Disable 



/****** INTERRUPT SOURCE CONTROL ******/

/*[OPTION] : Disable >> Enable  */
#define USART_PARITY_INTERRUPT  Disable 

/*[OPTION] : Disable >> Enable  */
#define USART_TX_INTERRUPT  Disable 

/*[OPTION] : Disable >> Enable  */
#define USART_TX_COMPLET_INTERRUPT  Disable 

/*[OPTION] : Disable >> Enable  */
#define USART_RX_INTERRUPT  Disable 

/*[OPTION] : Disable >> Enable  */
#define USART_IDLE_INTERRUPT  Disable 













#endif 