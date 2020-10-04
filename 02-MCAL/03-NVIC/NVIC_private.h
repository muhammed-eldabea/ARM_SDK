/*========================================================

[Author]      : Muhammed Eldabea Hashem 
[Description] : contain the private data of the NVIC
[Date]        : 20 JUL 2020 
[Version]     : V01 
=========================================================*/



#ifndef NVIC_PRIVATE_H 
#define NVIC_PRIVATE_H 

#define NVIC_BASE_ADDRESSE  0xE000E100 

					/*Register definition */ 

/*Interrupt Set enable Register */
#define NVIC_ISER0 *((volatile uint32*)(NVIC_BASE_ADDRESSE+0x000))
#define NVIC_ISER1 *((volatile uint32*)(NVIC_BASE_ADDRESSE+0x004))
#define NVIC_ISER2 *((volatile uint32*)(NVIC_BASE_ADDRESSE+0x008))  

/*Interrupt Clear enable Register */
#define NVIC_ICER0 *((volatile uint32*)(NVIC_BASE_ADDRESSE+0x080))
#define NVIC_ICER1 *((volatile uint32*)(NVIC_BASE_ADDRESSE+0x084))
#define NVIC_ICER2 *((volatile uint32*)(NVIC_BASE_ADDRESSE+0x088))  

/*Interrupt Set pending   Register */
#define NVIC_ISPR0 *((volatile uint32*)(NVIC_BASE_ADDRESSE+0x100))
#define NVIC_ISPR1 *((volatile uint32*)(NVIC_BASE_ADDRESSE+0x104))
#define NVIC_ISPR2 *((volatile uint32*)(NVIC_BASE_ADDRESSE+0x108)) 

/*Interrupt clear pending   Register */
#define NVIC_ICPR0 *((volatile uint32*)(NVIC_BASE_ADDRESSE+0x180))
#define NVIC_ICPR1 *((volatile uint32*)(NVIC_BASE_ADDRESSE+0x184))
#define NVIC_ICPR2 *((volatile uint32*)(NVIC_BASE_ADDRESSE+0x188)) 

/*Interrupt Active flag reading  */
#define NVIC_IABR0 *((volatile uint32*)(NVIC_BASE_ADDRESSE+0x200))
#define NVIC_IABR1 *((volatile uint32*)(NVIC_BASE_ADDRESSE+0x204))
#define NVIC_IABR2 *((volatile uint32*)(NVIC_BASE_ADDRESSE+0x208)) 

/*interrupt priority register  
*this register is a byte accessible */ 
#define NVIC_IPR_BASE_ADDRESSE ((volatile uint32*)(NVIC_BASE_ADDRESSE+0x300))

/*to byte access */ 
#define NVIC_IPR ((volatile uint8*)(NVIC_BASE_ADDRESSE+0x300)) 


/*System control block */
/*used to format the priority division */
#define SCB_BASE_ADDRESSE 0xE000ED00 
#define SBC_AIRCR *((volatile uint32*)(SCB_BASE_ADDRESSE+0x0C)) 

  

























#endif