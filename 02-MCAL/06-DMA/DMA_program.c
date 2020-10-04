/******************************************************************************/ 
/* [Auther]       :  Muhammed  Eldabea Hashem                                 */ 
/* [Date]         :  20 SEP 2020                                              */ 
/* [Version]      :  V01                                                      */ 
/******************************************************************************/   

#include "01-STD_TYPES/STD_TYPES.h" 
#include  "02-BIT_MATH/BIT_MATH.h" 



#include "06-DMA/DMA_interface.h" 
#include "06-DMA/DMA_config.h" 
#include "06-DMA/DMA_private.h" 



void MDMA_voidChannelInit(void) 
{

/*****************************************************************/
/* [USAGE]       : USED to init the DMA DEPENDING ON THE        */
/*                 STATIC CONFIGURATION                       */
/* [Parameter]   : void                                      */ 
/************************************************************/



#if DMA_ChannelEnable  == 1  
/* CONFIGURATION FOR MEMORY TO MEMORY MODE */
DMA_REGSX -> DMA_Channelx[0].CCR = ( DMA_REGEX -> DMA_Channelx[0].CCR  & 0XFFFFBFFF ) | ((DMA_CHANNEL1_MEMtoMEM & 0X03 )<<14) ;   

/* CONFIGURATION FOR PERIORITY */
DMA_REGSX -> DMA_Channelx[0].CCR = ( DMA_REGEX -> DMA_Channelx[0].CCR  & 0XFFFFCFFF ) | ((DMA_Channel_Periority_Level & 0X03 )<<12) ;   

/* CONFIGURATION FOR MEMORY SIZE */
DMA_REGEX -> DMA_Channelx[0].CCR = ( DMA_REGEX -> DMA_Channelx[0].CCR  & 0XFFFF3FFF ) | ((DMA_Channel_MemorySize & 0X03 )<<10) ;   

/* CONFIGURATION FOR PERIPHERAL SIZE */
DMA_REGEX -> DMA_Channelx[0].CCR = ( DMA_REGEX -> DMA_Channelx[0].CCR  & 0XFFFFFCFF ) | ((DMA_Channel_Peripheral_Size & 0X03 )<<8) ;   

/* CONFIGURATION FOR MEMORY INCREMENT*/
DMA_REGEX -> DMA_Channelx[0].CCR = ( DMA_REGEX -> DMA_Channelx[0].CCR  & 0XFFFFFF7F ) | ((DMA_Channel_Memory_INCR_MODE & 0X01 )<<7) ;   

/* CONFIGURATION FOR PERIPHERAL SIZE */
DMA_REGEX -> DMA_Channelx[0].CCR = ( DMA_REGEX -> DMA_Channelx[0].CCR  & 0XFFFFFFBF ) | ((DMA_Channel_Peripheral_INCR_MODE & 0X01 )<<6) ;   


#endif  

#if DMA_Channe2Enable  == 1  

/* CONFIGURATION FOR MEMORY TO MEMORY MODE */
DMA_REGSX -> DMA_Channelx[1].CCR = ( DMA_REGEX -> DMA_Channelx[1].CCR  & 0XFFFFBFFF ) | ((DMA_CHANNEL2_MEMtoMEM & 0X03 )<<14) ;   

/* CONFIGURATION FOR PERIORITY */
DMA_REGSX -> DMA_Channelx[1].CCR = ( DMA_REGEX -> DMA_Channelx[1].CCR  & 0XFFFFCFFF ) | ((DMA_Channe2_Periority_Level & 0X03 )<<12) ;   

/* CONFIGURATION FOR MEMORY SIZE */
DMA_REGEX -> DMA_Channelx[1].CCR = ( DMA_REGEX -> DMA_Channelx[1].CCR  & 0XFFFF3FFF ) | ((DMA_Channe2_MemorySize & 0X03 )<<10) ;   

/* CONFIGURATION FOR PERIPHERAL SIZE */
DMA_REGEX -> DMA_Channelx[1].CCR = ( DMA_REGEX -> DMA_Channelx[1].CCR  & 0XFFFFFCFF ) | ((DMA_Channe2_Peripheral_Size & 0X03 )<<8) ;   

/* CONFIGURATION FOR MEMORY INCREMENT*/
DMA_REGEX -> DMA_Channelx[1].CCR = ( DMA_REGEX -> DMA_Channelx[1].CCR  & 0XFFFFFF7F ) | ((DMA_Channe2_Memory_INCR_MODE & 0X01 )<<7) ;   

/* CONFIGURATION FOR PERIPHERAL SIZE */
DMA_REGEX -> DMA_Channelx[1].CCR = ( DMA_REGEX -> DMA_Channelx[1].CCR  & 0XFFFFFFBF ) | ((DMA_Channe2_Peripheral_INCR_MODE & 0X01 )<<6) ;   


#endif 
#if DMA_Channe3Enable  == 1  
/* CONFIGURATION FOR MEMORY TO MEMORY MODE */
DMA_REGSX -> DMA_Channelx[2].CCR = ( DMA_REGEX -> DMA_Channelx[2].CCR  & 0XFFFFBFFF ) | ((DMA_CHANNEL3_MEMtoMEM & 0X03 )<<14) ;   

/* CONFIGURATION FOR PERIORITY */
DMA_REGSX -> DMA_Channelx[2].CCR = ( DMA_REGEX -> DMA_Channelx[2].CCR  & 0XFFFFCFFF ) | ((DMA_Channe3_Periority_Level & 0X03 )<<12) ;   

/* CONFIGURATION FOR MEMORY SIZE */
DMA_REGEX -> DMA_Channelx[2].CCR = ( DMA_REGEX -> DMA_Channelx[2].CCR  & 0XFFFF3FFF ) | ((DMA_Channe3_MemorySize & 0X03 )<<10) ;   

/* CONFIGURATION FOR PERIPHERAL SIZE */
DMA_REGEX -> DMA_Channelx[2].CCR = ( DMA_REGEX -> DMA_Channelx[2].CCR  & 0XFFFFFCFF ) | ((DMA_Channe3_Peripheral_Size & 0X03 )<<8) ;   

/* CONFIGURATION FOR MEMORY INCREMENT*/
DMA_REGEX -> DMA_Channelx[2].CCR = ( DMA_REGEX -> DMA_Channelx[2].CCR  & 0XFFFFFF7F ) | ((DMA_Channe3_Memory_INCR_MODE & 0X01 )<<7) ;   

/* CONFIGURATION FOR PERIPHERAL SIZE */
DMA_REGEX -> DMA_Channelx[2].CCR = ( DMA_REGEX -> DMA_Channelx[2].CCR  & 0XFFFFFFBF ) | ((DMA_Channe3_Peripheral_INCR_MODE & 0X01 )<<6) ;   


#endif 
#if DMA_Channe4Enable  == 1  
/* CONFIGURATION FOR MEMORY TO MEMORY MODE */
DMA_REGSX -> DMA_Channelx[3].CCR = ( DMA_REGEX -> DMA_Channelx[3].CCR  & 0XFFFFBFFF ) | ((DMA_CHANNEL4_MEMtoMEM & 0X03 )<<14) ;   

/* CONFIGURATION FOR PERIORITY */
DMA_REGSX -> DMA_Channelx[3].CCR = ( DMA_REGEX -> DMA_Channelx[3].CCR  & 0XFFFFCFFF ) | ((DMA_Channe4_Periority_Level & 0X03 )<<12) ;   

/* CONFIGURATION FOR MEMORY SIZE */
DMA_REGEX -> DMA_Channelx[3].CCR = ( DMA_REGEX -> DMA_Channelx[3].CCR  & 0XFFFF3FFF ) | ((DMA_Channe4_MemorySize & 0X03 )<<10) ;   

/* CONFIGURATION FOR PERIPHERAL SIZE */
DMA_REGEX -> DMA_Channelx[3].CCR = ( DMA_REGEX -> DMA_Channelx[3].CCR  & 0XFFFFFCFF ) | ((DMA_Channe4_Peripheral_Size & 0X03 )<<8) ;   

/* CONFIGURATION FOR MEMORY INCREMENT*/
DMA_REGEX -> DMA_Channelx[3].CCR = ( DMA_REGEX -> DMA_Channelx[3].CCR  & 0XFFFFFF7F ) | ((DMA_Channe4_Memory_INCR_MODE & 0X01 )<<7) ;   

/* CONFIGURATION FOR PERIPHERAL SIZE */
DMA_REGEX -> DMA_Channelx[3].CCR = ( DMA_REGEX -> DMA_Channelx[3].CCR  & 0XFFFFFFBF ) | ((DMA_Channe4_Peripheral_INCR_MODE & 0X01 )<<6) ;   


#endif 
#if DMA_Channe5Enable  == 1  
/* CONFIGURATION FOR MEMORY TO MEMORY MODE */
DMA_REGSX -> DMA_Channelx[4].CCR = ( DMA_REGEX -> DMA_Channelx[4].CCR  & 0XFFFFBFFF ) | ((DMA_CHANNEL5_MEMtoMEM & 0X03 )<<14) ;   

/* CONFIGURATION FOR PERIORITY */
DMA_REGSX -> DMA_Channelx[4].CCR = ( DMA_REGEX -> DMA_Channelx[4].CCR  & 0XFFFFCFFF ) | ((DMA_Channe5_Periority_Level & 0X03 )<<12) ;   

/* CONFIGURATION FOR MEMORY SIZE */
DMA_REGEX -> DMA_Channelx[4].CCR = ( DMA_REGEX -> DMA_Channelx[4].CCR  & 0XFFFF3FFF ) | ((DMA_Channe5_MemorySize & 0X03 )<<10) ;   

/* CONFIGURATION FOR PERIPHERAL SIZE */
DMA_REGEX -> DMA_Channelx[4].CCR = ( DMA_REGEX -> DMA_Channelx[4].CCR  & 0XFFFFFCFF ) | ((DMA_Channe5_Peripheral_Size & 0X03 )<<8) ;   

/* CONFIGURATION FOR MEMORY INCREMENT*/
DMA_REGEX -> DMA_Channelx[4].CCR = ( DMA_REGEX -> DMA_Channelx[4].CCR  & 0XFFFFFF7F ) | ((DMA_Channe5_Memory_INCR_MODE & 0X01 )<<7) ;   

/* CONFIGURATION FOR PERIPHERAL SIZE */
DMA_REGEX -> DMA_Channelx[4].CCR = ( DMA_REGEX -> DMA_Channelx[4].CCR  & 0XFFFFFFBF ) | ((DMA_Channe5_Peripheral_INCR_MODE & 0X01 )<<6) ;   


#endif 
#if DMA_Channe6Enable  == 1  
/* CONFIGURATION FOR MEMORY TO MEMORY MODE */
DMA_REGSX -> DMA_Channelx[5].CCR = ( DMA_REGEX -> DMA_Channelx[5].CCR  & 0XFFFFBFFF ) | ((DMA_CHANNEL6_MEMtoMEM & 0X03 )<<14) ;   

/* CONFIGURATION FOR PERIORITY */
DMA_REGSX -> DMA_Channelx[5].CCR = ( DMA_REGEX -> DMA_Channelx[5].CCR  & 0XFFFFCFFF ) | ((DMA_Channe6_Periority_Level & 0X03 )<<12) ;   

/* CONFIGURATION FOR MEMORY SIZE */
DMA_REGEX -> DMA_Channelx[5].CCR = ( DMA_REGEX -> DMA_Channelx[5].CCR  & 0XFFFF3FFF ) | ((DMA_Channe6_MemorySize & 0X03 )<<10) ;   

/* CONFIGURATION FOR PERIPHERAL SIZE */
DMA_REGEX -> DMA_Channelx[5].CCR = ( DMA_REGEX -> DMA_Channelx[5].CCR  & 0XFFFFFCFF ) | ((DMA_Channe6_Peripheral_Size & 0X03 )<<8) ;   

/* CONFIGURATION FOR MEMORY INCREMENT*/
DMA_REGEX -> DMA_Channelx[5].CCR = ( DMA_REGEX -> DMA_Channelx[5].CCR  & 0XFFFFFF7F ) | ((DMA_Channe6_Memory_INCR_MODE & 0X01 )<<7) ;   

/* CONFIGURATION FOR PERIPHERAL SIZE */
DMA_REGEX -> DMA_Channelx[5].CCR = ( DMA_REGEX -> DMA_Channelx[5].CCR  & 0XFFFFFFBF ) | ((DMA_Channe6_Peripheral_INCR_MODE & 0X01 )<<6) ;   


#endif 
#if DMA_Channe7Enable  == 1  
/* CONFIGURATION FOR MEMORY TO MEMORY MODE */
DMA_REGSX -> DMA_Channelx[6].CCR = ( DMA_REGEX -> DMA_Channelx[6].CCR  & 0XFFFFBFFF ) | ((DMA_CHANNEL7_MEMtoMEM & 0X03 )<<14) ;   

/* CONFIGURATION FOR PERIORITY */
DMA_REGSX -> DMA_Channelx[6].CCR = ( DMA_REGEX -> DMA_Channelx[6].CCR  & 0XFFFFCFFF ) | ((DMA_Channe7_Periority_Level & 0X03 )<<12) ;   

/* CONFIGURATION FOR MEMORY SIZE */
DMA_REGEX -> DMA_Channelx[6].CCR = ( DMA_REGEX -> DMA_Channelx[6].CCR  & 0XFFFF3FFF ) | ((DMA_Channe7_MemorySize & 0X03 )<<10) ;   

/* CONFIGURATION FOR PERIPHERAL SIZE */
DMA_REGEX -> DMA_Channelx[6].CCR = ( DMA_REGEX -> DMA_Channelx[6].CCR  & 0XFFFFFCFF ) | ((DMA_Channe7_Peripheral_Size & 0X03 )<<8) ;   

/* CONFIGURATION FOR MEMORY INCREMENT*/
DMA_REGEX -> DMA_Channelx[6].CCR = ( DMA_REGEX -> DMA_Channelx[6].CCR  & 0XFFFFFF7F ) | ((DMA_Channe7_Memory_INCR_MODE & 0X01 )<<7) ;   

/* CONFIGURATION FOR PERIPHERAL SIZE */
DMA_REGEX -> DMA_Channelx[6].CCR = ( DMA_REGEX -> DMA_Channelx[6].CCR  & 0XFFFFFFBF ) | ((DMA_Channe7_Peripheral_INCR_MODE & 0X01 )<<6) ;   


#endif 




}
void MDMA_voidChannelStart(U8 Copy_u8ChannelID ,u32 * Copy_Pu32peripheralAdd, u32 * Copy_Pu32MemorAdd,u16 Copy_u16BlockLen) 
{ 
    u8 index = Copy_u8ChannelID -1 ; 
    
    /*be sure that the channel in off */
    CLR_BIT(DMA_REGEX -> DMA_Channelx[index].CCR , 0 ) ;
    /*Data  block length */
    DMA_REGEX -> DMA_Channelx[index].CNDTR = (Copy_u16BlockLen & 0x0000FFFF) ; 
    /* peripheral address */
    DMA_REGEX -> DMA_Channelx[index].CPAR  = Copy_Pu32peripheralAdd  ;  
    /* memory address */ 
     DMA_REGEX -> DMA_Channelx[index].CMAR = Copy_Pu32MemorAdd ; 
     /*be sure that the channel in enable */
    SET_BIT(DMA_REGEX -> DMA_Channelx[index].CCR , 0 ) ;
    break; 



} 







void MDMA_voidEnableInterrupt (u8 Copy_u8ChanelID ,u8 Copy_u8Interrupt) 
{

/***************************************************************/ 
/*  [USAGE] to enable any one of the next interrupt            */
/*  1- Transfer error interrupt     >> ID  >> 3                */
/*  2-  Half transfer interrupt     >> ID  >> 2                */ 
/*  3-  Transfer complete interrupt >> ID  >> 1                */ 
/***************************************************************/ 

SET_BIT(DMA_REGEX -> DMA_Channelx[Copy_u8ChanelID-1].CCR , Copy_u8Interrupt ) ; 

} 


void MDMA_voidDisableInterrupt (u8 Copy_u8ChanelID ,u8 Copy_u8Interrupt) 
{

/***************************************************************/ 
/*  [USAGE] to enable any one of the next interrupt            */
/*  1- Transfer error interrupt     >> ID  >> 3                */
/*  2-  Half transfer interrupt     >> ID  >> 2                */ 
/*  3-  Transfer complete interrupt >> ID  >> 1                */ 
/***************************************************************/ 

CLR_BIT(DMA_REGEX -> DMA_Channelx[Copy_u8ChanelID-1].CCR , Copy_u8Interrupt ) ; 

}

