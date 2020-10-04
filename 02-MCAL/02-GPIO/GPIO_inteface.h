
/*************************************************************************************

&[File Name]   :  GPIO.interface.h
&[Author] 	   :  Muhammed Eldabea HAshem 
&[Date]   	   :  11 Aug 2020 
&[Description] :  function prototypes and shared configuration  
&[Version]     :  V01

**************************************************************************************/



 							/*GPIO PORT*/
#define GPIOA	0
#define GPIOB	1
#define GPIOC	2
#define GPIOD	3
#define GPIOE	4
#define GPIOF	5
#define GPIOG	6

typedef unsigned char         uint8;
					 /*PINS DEFINATION*/
typedef enum 
{
	PIN0,PIN1,PIN2,PIN3,PIN4,PIN5,PIN6,PIN7,PIN8,PIN9,
       PIN10,PIN11,PIN12,PIN13,PIN14,PIN15
}GPIO_PINS; 

typedef enum 
{
	LOW,HIGH
}GPIO_PINS_SATES;


/*INPUT MODE */
#define GPIO_INPUT_ANALOG_MODE             0b0000
#define GPIO_INPUT_FLOATING_MODE           0b0100
#define GPIO_INPUT_PULL_UP_DOWN_MODE       0b1000


/*OUTPUT MAX SEPPED 10MHz MODE*/

#define GPIO_OUTPUT10_PUSH_PULL_MODE      0b0001
#define GPIO_OUTPUT10_OPEN_DRAIN_MODE     0b0101
#define GPIO_OUTPUT10_AF_PUSH_PULL_MODE   0b1001
#define GPIO_OUTPUT10_AF_OPEN_DRAIN_MODE  0b1101


/*OUTPUT MAX SEPPED 2MHz MODE*/

#define GPIO_OUTPUT2_PUSH_PULL_MODE              0b0010
#define GPIO_OUTPUT2_OPEN_DRAIN_MODE             0b0110
#define GPIO_OUTPUT2_AF_PUSH_PULL_MODE           0b1010
#define GPIO_OUTPUT2_AF_OPEN_DRAIN_MODE          0b1110

/*OUTPUT MAX SEPPED 50MHz MODE*/

#define GPIO_OUTPUT50_PUSH_PULL_MODE      0b0011
#define GPIO_OUTPUT50_OPEN_DRAIN_MODE     0b0111
#define GPIO_OUTPUT50_AF_PUSH_PULL_MODE   0b1011
#define GPIO_OUTPUT50_AF_OPEN_DRAIN_MODE  0b1111





			/*==========>Function Decleartios<===========*/
void GPIO_voidSetDataDirection(uint8 copy_u8PORT,uint8 copy_u8PIN,uint8 copy_u8MODE) ; 
void GPIO_voidSetDataValue(uint8 copy_u8PORT,uint8 copy_u8PIN,uint8 copy_uVALUE) ; 
uint8 GPIO_u8GetDataValue(uint8 copy_u8PORT,uint8 copy_u8PIN) ; 
void GPIO_voidWriteToPort(uint8 copy_u8PORT,uint16 copy_u8PORTvalue) ;
