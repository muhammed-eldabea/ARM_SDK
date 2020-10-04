/******************************************************************************/ 
/* [Auther]       :  Muhammed  Eldabea Hashem                                 */ 
/* [Date]         :  20 SEP 2020                                              */ 
/* [Version]      :  V01                                                      */ 
/******************************************************************************/ 

#ifndef DMA_INTERFACE_H 
#define DMA_INTERFACE_H 

/************************** Structrue ****************************/
typedef Struct {
/* [USAGE] : used to change the configuration of channel in run time  */

u8 DMA_ChannelEnable   
u8 DMA_Channel_Periority_Level  
u8 DMA_Channel_MemorySize 
u8 DMA_Channel_Peripheral_Size 
u8 DMA_Channel_Memory_INCR_MODE
u8 DMA_Channel_Peripheral_INCR_MODE 
u8 DMA_Channel_Circular_MODE
} u8HANNEL_CONFIGURATION_RUNTIME ; 

typedef enum {

   DMA_Transfer_complete_interrupt = 1  
  ,DMA_Half_transfer_interrupt
 , DMA_Transfer_error_interrupt
 
 }DMA_INTERRUPT_SOURCES ; 


/******************* Function Defintion ***********************/

void MDMA_voidChannelInit(void)  ; 
void MDMA_voidEnableInterrupt (u8 Copy_u8ChanelID ,u8 Copy_u8Interrupt)  ; 
void MDMA_voidDisableInterrupt (u8 Copy_u8ChanelID ,u8 Copy_u8Interrupt)  ; 
void MDMA_voidChannelStart(U8 Copy_u8ChannelID ,u32 * Copy_Pu32peripheralAdd, u32 * Copy_Pu32MemorAdd,u16 Copy_u16BlockLen)  ; 





#endif 