# **MCAL** 

![MACL](https://sandeeptiwari.com/itusybom/2015/11/McalLayer.jpg)




1. **RCC** (Rest and Clock control) 
    APIs provided : 
    - void RCC_voidInitSysClock(void)  ;
    - void RCC_voidDisableClock(uint8 Copy_u8PeriphealID,uint8 Copy_u8BusName) ; 
    - void RCC_voidEnableClock(uint8 Copy_u8PeriphealID,uint8 Copy_u8BusName) ; 
    - uint8 RCC_uint8ReturnCalibration(void) ; 
 _________________________________________________________________

2. **GPIO** 

  APIs Provided :
 
     - void GPIO_voidSetDataDirection(uint8 copy_u8PORT,uint8 copy_u8PIN,uint8 copy_u8MODE) ; 
     - void GPIO_voidSetDataValue(uint8 copy_u8PORT,uint8 copy_u8PIN,uint8 copy_uVALUE) ; 
     - uint8 GPIO_u8GetDataValue(uint8 copy_u8PORT,uint8 copy_u8PIN) ; 
     - void GPIO_voidWriteToPort(uint8 copy_u8PORT,uint16 copy_u8PORTvalue) ; 
     ___________________________________________________________

3. **NVIC** 

   APIs :
 
      - void NCIV_voidEnableInterrupt(uint8 copy_u8InterruptId)  ; 
      - void NCIV_voidDisableInterrupt(uint8 copy_u8InterruptId) ; 
      - void NCIV_voidClearPendingIREQ(uint8 copy_u8InterruptId)  ; 
      - void NCIV_voidSetPendingIREQ(uint8 copy_u8InterruptId)  ;  
      - uint8 NVIC_u8ReacActiveInterruptFlag(uint8 copy_u8InterruptId) ; 
      - void NCIV_voidSetPirority(sint8 copy_s8InterruptID,uint8 copy_u8GroubPirority,uint8 copy_u8SubGroubPirority,uint32 copy_u32Groub)  ;  
     _________________________________________________________________________

 4.**EXTI** (provided by ENG Ahmed Assaf)
 
    APIS : 
       - void MEXTI_voidInit(void);
       - void MEXTI_voidSetSignalLatch(u8 Copy_u8EXTILine , u8 Copy_u8EXTISenseMode);
       - void MEXTI_voidEnableEXTI(u8 Copy_u8EXTILine);
       - void MEXTI_voidDisableEXTI(u8 Copy_u8EXTILine);
       - void MEXTI_voidSoftwareTrigger(u8 Copy_u8EXTILine); 
       ____________________________________________________________

5. **DMA** 
 APIs : 

       -  void MDMA_voidChannelInit(void)  ; 
       -  void MDMA_voidEnableInterrupt (u8 Copy_u8ChanelID ,u8 Copy_u8Interrupt)  ; 
       - void MDMA_voidDisableInterrupt (u8 Copy_u8ChanelID ,u8 Copy_u8Interrupt)  ; 
       -  void MDMA_voidChannelStart(U8 Copy_u8ChannelID ,u32 * Copy_Pu32peripheralAdd, u32 * Copy_Pu32MemorAdd,u16 Copy_u16BlockLen)  ;   
       ______________________________________________________________________

6. **SYSTICK** 

  APIs : 
        - void MSTK_voidInit(void) ;
        - void MSTK_voidSetBusyWait(uint32 Copy_u32Ticks) ;
        - void MSTK_voidSetIntervalSingle(uint32 Copy_u32Ticks,void(*Copy_ptr)(void)) ;
        - void MSTK_voidSetIntervalPeriodic(uint32 Copy_u32Ticks,void(*Copy_ptr)(void)) ;
        - void MSTK_voidStopInterval(void) ; 
        - uint32 MSTK_voidGetElpasedTime(void) ;
        - uint32 MSTK_voidGetRemainingTime(void) ;  
        _________________________________________________________________________

 7. **SPI** 
   APIs : 

        - void MSPI_voidinit(void) ; 
        - void MSPI_voidSendGetDataSynch(u16 Copy_u32DataToSend , u16 *Copy_u32DataToGet) ; 
        - void MSPI_voidSendGetDataSynch(u16 Copy_u32DataToSend , void (*CallBack)(u8)) ; 
        __________________________________________________________

8. **USART** 
 APIs :  

        - void MUSART_voidInit(void) ; 
        - void MUSART_voidTransmit(u8 Copy_u8Arr[],u8 Copy_u8ArrayLength) ;   
        - u8 MUSART_u8GetData(void) ;   


        
        
