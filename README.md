# ARM_SDK
## MCAL 
1. **RCC** (Rest and Clock control) 
    APIs provided : 
    - void RCC_voidInitSysClock(void)  ;
    - void RCC_voidDisableClock(uint8 Copy_u8PeriphealID,uint8 Copy_u8BusName) ; 
    - void RCC_voidEnableClock(uint8 Copy_u8PeriphealID,uint8 Copy_u8BusName) ; 
    - uint8 RCC_uint8ReturnCalibration(void) ; 
 
2. **GPIO** 
  APIs Provided : 
     - void GPIO_voidSetDataDirection(uint8 copy_u8PORT,uint8 copy_u8PIN,uint8 copy_u8MODE) ; 
     - void GPIO_voidSetDataValue(uint8 copy_u8PORT,uint8 copy_u8PIN,uint8 copy_uVALUE) ; 
     - uint8 GPIO_u8GetDataValue(uint8 copy_u8PORT,uint8 copy_u8PIN) ; 
     - void GPIO_voidWriteToPort(uint8 copy_u8PORT,uint16 copy_u8PORTvalue) ;
