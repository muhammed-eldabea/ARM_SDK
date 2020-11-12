/*========================================================================*/  
/* [AUTHOR]      :  Muhammed Eldabea Hashem                               */
/* [DATE ]       :  7 NOV 2020   										  */
/* [VERSION]     :  V2.1                                                  */
/*========================================================================*/


#ifndef USART_CONFIG_H_ 
#define USART_CONFIG_H_ 


/********** HARDWARE AND BAUDRATE CONFIGURATION ***********/

/* 
option : 
        (0)  >>  DISABLE TX   
        (1)  >>  ENSABLE TX       

*/
#define USART_TX_ENABLE   1 
/* 
option : 
        (0)  >>  DISABLE RX   
        (1)  >>  ENSABLE RX       

*/
#define USART_RX_ENABLE   1

/* 4800   >> 0x683
   9600   >> 0x341
   14400  >> 0x2BC
   38400  >> 0x0D0
   115200 >> 0x045                                           */ 


#define  USART_BAUDRATE_VALUE 0x341 


/**
    STEADY LOW VALUE IN THE CK PIN  >> 0 
	STEADY HIGH VALUE IN THE CK PIN >> 1
*/

#define  USART_CLOCK_POLARITY 0 

/**
    READ WITH FIRST  CLOCK CAPTURE  >> 0 
	READ WITH SECOND CLOCK CAPTURE  >> 1
*/

#define  USART_CLOCK_PHASE 0 




/******************************************************/

/* 
option : 
        (0)  >>  1 Start BIT >> 8 BIT_DATA >> n Stop Bit 
        (1)  >>  1 Start BIT >> 9 BIT_DATA >> n Stop Bit    

*/

#define USART_WORD_LEGNTH   0 

/* 
option : 
        (0)  >>  IDLE LINE  
        (1)  >>  Address MArk     

*/

#define USART_WAKE_UP_METHOD   0 

/* 
option : 
        (0)  >>  PARITY CONTROL DISABLE   
        (1)  >>  PARITY CONTROL ENABLE      

*/
#define USART_PARITY_STATE_SELECTION    0  

/* 
option : 
        (0)  >>  EVEN PARITY SELECTION   
        (1)  >>  ODD  PARITY SELECTION      

*/
#define USART_PARITY_TYPE_SELECTION   0 


/*
*
 >> 1   STOP BIT  0 
 >> 1.5 STOP BIT  1 
 >> 2   STOP BIT  2
 >> 0.5 STOP BIT  3 

*/


#define USART_STOP_BIT_SELECTION  0 

/*=============================================================*/ 


/*********  INTERRUPT CONFIURATION **********/

/* 
option : 
        (0)  >>  DISABLE PARITY INTERRUPT    
        (1)  >>  ENSABLE PARITY INTERRUPT      

*/
#define USART_PARITY_INTERRUPT_ENABLE   0 


/* 
option : 
        (0)  >>  DISABLE TX INTERRUPT    
        (1)  >>  ENSABLE TX INTERRUPT      

*/
#define USART_TX_INTERRUPT_ENABLE   0 


/* 
option : 
        (0)  >>  DISABLE TCI INTERRUPT    
        (1)  >>  ENSABLE TCI INTERRUPT      

*/
#define TRANSMITION_COMPLET_INTERRUPT 0 

/* 
option : 
        (0)  >>  DISABLE RX INTERRUPT    
        (1)  >>  ENSABLE RX INTERRUPT      

*/
#define USART_RX_INTERRUPT_ENABLE   0 

/* 
option : 
        (0)  >>  DISABLE IDLE INTERRUPT    
        (1)  >>  ENSABLE IDLE INTERRUPT      

*/
#define USART_IDLE_INTERRUPT_ENABLE   0 

 /*========================================================*/ 




#endif 