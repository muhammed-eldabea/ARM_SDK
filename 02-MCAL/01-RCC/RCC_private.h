/*========================================================================*/  
/* [AUTHOR]      :  Muhammed Eldabea Hashem                               */
/* [DATE ]       :  7 NOV 2020   										  */
/* [VERSION]     :  V2.1                                                  */
/*========================================================================*/


#ifndef RCC_PRIVATE_H_ 
#define RCC_PRIVATE_H_  


/* Peripheral Base Address  */ 

#define RCC_baseaddress 0x40021000 

/*Register  Definition */

#define RCC_CR        *(( volatile u32*)  RCC_baseaddress)
#define RCC_CFGR      *(( volatile u32*) (RCC_baseaddress+0x04))
#define RCC_CIR       *(( volatile u32*) (RCC_baseaddress+0x08))
#define RCC_APB2RSTR  *(( volatile u32*) (RCC_baseaddress+0x0C))
#define RCC_APB1RSTR  *(( volatile u32*) (RCC_baseaddress+0x10))
#define RCC_AHBENR    *(( volatile u32*) (RCC_baseaddress+0x14))
#define RCC_APB2ENR   *(( volatile u32*) (RCC_baseaddress+0x18))
#define RCC_APB1ENR   *(( volatile u32*) (RCC_baseaddress+0x1C))
#define RCC_BDCR      *(( volatile u32*) (RCC_baseaddress+0x20))
#define RCC_CSR       *(( volatile u32*)(RCC_baseaddress+0x24))











#endif 
