/*========================================================

[Author]      : Muhammed Eldabea Hashem 
[Description] : contain the private data of the NVIC
[Date]        : 20 JUL 2020 
[Version]     : V01 
=========================================================*/ 

typedef struct 
{

volatile uint32  EVCR ;
volatile uint32  MAPR ; 
volatile uint32  EXTICR[4] ;
volatile uint32  MAPR2 ;  

}AFIO_Type ;  



#define AFIO_REG *((AFIO_Type*)0x40010000)