
/*************************************************************************************

&[File Name]   :  GPIO_private.h
&[Author] 	   :  Muhammed Eldabea HAshem
&[Date]   	   :  19 Aug 2020
&[Description] :  Register defination and option defination values that used in config
&[Version]     :  V01

**************************************************************************************/

#ifndef GPIO_PRIVATE_H
#define GPIO_PRIVATE_H

#define GPIOA_Base_Address        0x40010800            // define the boundary address of GPIO port A
#define GPIOB_Base_Address        0x40010C00            // define the boundary address of GPIO port B
#define GPIOC_Base_Address        0x40011000            // define the boundary address of GPIO port C

        /*       REGISTERS ADDRESSES FOR Port A        */

#define GPIOA_CRL                 *((uint32*)(GPIOA_Base_Address + 0x00))
#define GPIOA_CRH                 *((uint32*)(GPIOA_Base_Address + 0x04))
#define GPIOA_BSR                 *((uint32*)(GPIOA_Base_Address + 0x10))
#define GPIOA_IDR                 *((uint32*)(GPIOA_Base_Address + 0x08))
#define GPIOA_ODR                 *((uint32*)(GPIOA_Base_Address + 0x0c))
#define GPIOA_BRR                 *((uint32*)(GPIOA_Base_Address + 0x14))
#define GPIOA_LCK                 *((uint32*)(GPIOA_Base_Address + 0x18))

        /*       REGISTERS ADDRESSES FOR Port B        */

#define GPIOB_CRL                 *((uint32*)(GPIOB_Base_Address + 0x00))
#define GPIOB_CRH                 *((uint32*)(GPIOB_Base_Address + 0x04))
#define GPIOB_IDR                 *((uint32*)(GPIOB_Base_Address + 0x08))
#define GPIOB_ODR                 *((uint32*)(GPIOB_Base_Address + 0x0c))
#define GPIOB_BSR                 *((uint32*)(GPIOB_Base_Address + 0x10))
#define GPIOB_BRR                 *((uint32*)(GPIOB_Base_Address + 0x14))
#define GPIOB_LCK                 *((uint32*)(GPIOB_Base_Address + 0x18))

        /*       REGISTERS ADDRESSES FOR Port C        */

#define GPIOC_CRL                 *((uint32*)(GPIOC_Base_Address + 0x00))
#define GPIOC_CRH                 *((uint32*)(GPIOC_Base_Address + 0x04))
#define GPIOC_IDR                 *((uint32*)(GPIOC_Base_Address + 0x08))
#define GPIOC_ODR                 *((uint32*)(GPIOC_Base_Address + 0x0c))
#define GPIOC_BSR                 *((uint32*)(GPIOC_Base_Address + 0x10))
#define GPIOC_BRR                 *((uint32*)(GPIOC_Base_Address + 0x14))
#define GPIOC_LCK                 *((uint32*)(GPIOC_Base_Address + 0x18))





                            /*================================< USED Macros>===================================*/


















#endif
