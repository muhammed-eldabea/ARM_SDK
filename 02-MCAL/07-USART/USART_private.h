/************************************************************************/ 
/* [AUTHER]      : MUHAMMED ELDABEA HASHEM                              */ 
/* [DATE]        : 5 OCT 2020                                           */ 
/* [VERSION]     : V01                                                  */ 
/************************************************************************/  

#ifndef USART_PRIVATE_H 
#define USART_PRIVATE_H 

/****************** Register Definations ******************/ 

typedef struct 
{
    /* data */
  volatile  u32 SR ; 
  volatile  u32 DR ; 
  volatile  u32 BRR ; 
  volatile  u32 CR1 ; 
  volatile  u32 CR2 ; 
  volatile  u32 CR3 ; 
  volatile  u32 GTPR ; 

}USART_TYPE;


#define USART_REG  (( volatile  USART_TYPE * )0x40013800) 




/********* Defined Values ************/ 

typedef enum 
{
Disable,Enable 
}Control_option  ; 

typedef enum {
USART_8_BIT,USART_9_BIT 
}USART_MWORD_OPTION;

typedef enum {
USART_IDLE_LINE_WAKE,USART_ADDRESS_MARK_WAKE 
}USART_WAKEUP_OPTION;

typedef enum {
USART_EVEN_PARITY,USART_ODD_PARITY 
}USART_PARITY_SELECTION_OPTION; 







#endif 