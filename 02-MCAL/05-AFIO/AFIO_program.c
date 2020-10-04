/*========================================================

[Author]      : Muhammed Eldabea Hashem 
[Description] : contain the private data of the NVIC
[Date]        : 20 JUL 2020 
[Version]     : V01 
=========================================================*/





void AFIO_void_SetEXTI_configuration(uint8 copy_u8Line,uint8 copy_u8PortMap) 
{


uint8 Local_RegIndex = (((copy_u8Line+1)/4)-1)  ; 

AFIO_REG->EXTICR[Local_RegIndex]  &= (~((0b1111)<<(copy_u8Line*4))) ; 
AFIO_REG->EXTICR[Local_RegIndex]  |=((copy_u8PortMap)<<(copy_u8Line*4)) ; 

}