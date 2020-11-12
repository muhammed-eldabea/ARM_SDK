/*========================================================================*/  
/* [AUTHOR]      :  Muhammed Eldabea Hashem                               */
/* [DATE ]       :  7 NOV 2020   										  */
/* [VERSION]     :  V2.1                                                  */
/*========================================================================*/ 

/*** GPIO INPUT CONFIGURATION ***/

#define GPIO_INPUT_ANALOG_MODE        0b0000  
#define GPIO_INPUT_FLOATING_INPUT     0b0100  
#define GPIO_INPUT_WITH_PP            0b1000 

/*** GPIO OUTPUT WITH  10 MHz ***/ 

#define GPIO_OUTPUT10MHz_GP_PP       0b0001  
#define GPIO_OUTPUT10MHz_GP_OD  	 0b0101 
#define GPIO_OUTPUT10MHz_AF_PP       0b1001 
#define GPIO_OUTPUT10MHz_AF_OD       0b1101  

/*** GPIO OUTPUT WITH  2 MHz ***/ 

#define GPIO_OUTPUT2MHz_GP_PP       0b0010  
#define GPIO_OUTPUT2MHz_GP_OD       0b0110 
#define GPIO_OUTPUT2MHz_AF_PP       0b1010 
#define GPIO_OUTPUT2MHz_AF_OD       0b1110

/*** GPIO OUTPUT WITH  5 MHz ***/ 

#define GPIO_OUTPUT50MHz_GP_PP       0b0011  
#define GPIO_OUTPUT50MHz_GP_OD       0b0111 
#define GPIO_OUTPUT50MHz_AF_PP       0b1011 
#define GPIO_OUTPUT50MHz_AF_OD       0b1111  



#define GPIOA 0 
#define GPIOB 1 
#define GPIOC 2  

#define HIGH  1 
#define LOW   0  


void GPIO_voidSetPinDirection(volatile  u8 Copy_u8PORT , volatile u8 Copy_u8PIN , volatile u8 Copy_u8PinState  )  ; 
void GPIO_voidSetPinSTAT(volatile  u8 Copy_u8PORT , volatile u8 Copy_u8PIN , volatile u8 Copy_u8PinState)  ; 
 u8 GPIO_voidGetPinSTAT(volatile  u8 Copy_u8PORT , volatile u8 Copy_u8PIN )  ; 


