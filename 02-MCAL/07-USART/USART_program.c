/************************************************************************/ 
/* [AUTHER]      : MUHAMMED ELDABEA HASHEM                              */ 
/* [DATE]        : 5 OCT 2020                                           */ 
/* [VERSION]     : V01                                                  */ 
/************************************************************************/  

#include "01-LIB/01-STD_TYPES/STD_TYPES.h"
#include "01-LIB/02-BIT_MATH/BIT_MATH.h" 


#include "02-MCAL/08-USART/USART_interface.h"
#include "02-MCAL/08-USART/USART_private.h"
#include "02-MCAL/08-USART/USART_config.h"





void MUSART_voidInit(void) 
{

/*configure the Baud Rate depending on 
the value of the frequency and the value of  Selected Baud Rate */
USART_REG->BRR = USART_EQV_BUAD_RATE ;  



#if USART_WORD_LENGTH == USART_9_BIT 
SET_BIT(USART_REG->CR1 , 12) ; 
#endif 

#if USART_WAKE_UP_METHOD == USART_ADDRESS_MARK_WAKE 
SET_BIT(USART_REG->CR1 , 11) ; 
#endif

#if USART_PARITY_ENABLE == Enable 
SET_BIT(USART_REG->CR1 , 10) ; 
#endif 

#if USART_PARITY_ENABLE == Enable 
SET_BIT(USART_REG->CR1 , 10) ; 
#endif  

#if USART_PARITY_SELECTION == USART_ODD_PARITY 
SET_BIT(USART_REG->CR1 , 9) ; 
#endif  

#if USART_PARITY_INTERRUPT == Enable 
SET_BIT(USART_REG->CR1 , 8) ; 
#endif   

#if USART_TX_INTERRUPT == Enable 
SET_BIT(USART_REG->CR1 , 7) ; 
#endif  

#if USART_TX_COMPLET_INTERRUPT == Enable 
SET_BIT(USART_REG->CR1 , 6) ; 
#endif 

#if USART_TX_COMPLET_INTERRUPT == Enable 
SET_BIT(USART_REG->CR1 , 5) ; 
#endif 

#if USART_RX_INTERRUPT == Enable 
SET_BIT(USART_REG->CR1 , 4) ; 
#endif 


#if USART_TX_ENABLE == Enable 
SET_BIT(USART_REG->CR1 , 3) ; 
#endif

#if USART_RX_ENABLE == Enable 
SET_BIT(USART_REG->CR1 , 2) ; 
#endif 

#if USART_RWU_ENABLE == Enable 
SET_BIT(USART_REG->CR1 , 1) ; 
#endif 





/*enable the module after finishing the configuration */
#if USART_ENABLE_MODULE == Enable 
SET_BIT(USART_REG->CR1 , 13) ; 
#endif


}

void MUSART_voidTransmit(u8 Copy_u8Arr[])  
{  
    u8 Local_IDX = 0 ; 
    /*loop until the terminate char in the array */
    while (Copy_u8Arr[Local_IDX] != '\0') 
    {

        USART_REG ->DR = Copy_u8Arr[Local_IDX] ;  
        /*wait for transmitting complet*/ 
        while (GET_BIT(USART_REG->SR,6) == 0 ) ; 
        /*increase the pointer index*/
        Local_IDX++ ; 
    }

} 


u8   MUSART_u8GetData(void) 
{ 
    /*Wait for Data recived */
     while (GET_BIT(USART_REG->SR,5) == 0 ) ; 
    return ((u8)(0xFF & (USART_REG->DR))) ; 

} 


