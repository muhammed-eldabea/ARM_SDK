/*========================================================================*/  
/* [AUTHOR]      :  Muhammed Eldabea Hashem                               */
/* [DATE ]       :  7 NOV 2020   										  */
/* [VERSION]     :  V2.1                                                  */
/*========================================================================*/


#ifndef USART_PRIVATE_H_
#define USART_PRIVATE_H_ 


#define USART1_BASE_ADDRESS 0x40013800
#define USART2_BASE_ADDRESS 0x40004400
#define USART3_BASE_ADDRESS 0x40004800
#define USART4_BASE_ADDRESS 0x40004C00
#define USART5_BASE_ADDRESS 0x40005000 
 




typedef  struct 
{

    volatile  u32 SR ;
    volatile  u32 DR ;
    volatile  u32 BRR ;
    volatile  u32 CR[3] ; 
    volatile  u32 GTPR ;

}USART_REG ; 

#define  USART1_REGs_ACCESS ((volatile USART_REG * )USART1_BASE_ADDRESS)
#define  USART2_REGs_ACCESS ((volatile USART_REG * )USART2_BASE_ADDRESS)
#define  USART3_REGs_ACCESS ((volatile USART_REG * )USART3_BASE_ADDRESS)
#define  USART4_REGs_ACCESS ((volatile USART_REG * )USART4_BASE_ADDRESS) 
#define  USART5_REGs_ACCESS ((volatile USART_REG * )USART5_BASE_ADDRESS) 







#endif 
