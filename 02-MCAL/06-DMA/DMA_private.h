/******************************************************************************/ 
/* [Auther]       :  Muhammed  Eldabea Hashem                                 */ 
/* [Date]         :  20 SEP 2020                                              */ 
/* [Version]      :  V01                                                      */ 
/******************************************************************************/ 

#ifndef DMA_PRIVATE_H 
#define DMA_PRIVATE_H 


/*********************** Regester Defintion *****************************/
typedef struct 
{
    volatile u32  DMA_ISR  ;  /*Flag register*/
    volatile u32 DMA_IFCR  ;  /*Clear Flag Register*/ 

    struct DMA_Configuration_Channel 
    {
        volatile u32 CCR ; 
        volatile u32 CNDTR ; 
        volatile u32 CPAR ; 
        volatile u32 CMAR ;
        volatile u32 Reserved ;  
    }DMA_ChannelX[7]  ; 


}DMA_REG_Type;





/******************** Private Macros *****************************/

#define DMA_REGSX      (( volatile DMA_REG_TYPE*)0x40020000))  


/******************* Private Configuration **********************/

/*ENABLE OR DISBALE CHANNEL */
#define DMA_ENABLE_CHANNEL                  1 
#define DMA_DISABLE_CHANNEL                 0 

/*MEMORY TO MEMORY MODE */
#define DMA_MEMORY_TO_MEMORY_MODE_ENABLE    1 
#define DMA_MEMORY_TO_MEMORY_MODE_DISABLE   0

/* PRIORITY CONFIGURATION*/
#define DMA_CHANNEL_PRIORITY_LOW            0
#define DMA_CHANNEL_PRIORITY_MEDIUM         1
#define DMA_CHANNEL_PRIORITY_HIGH           2
#define DMA_CHANNEL_PRIORITY_VERY_HIGH      3

/* PERIPHERAL AND MEMORY SIZE SELECTION */
#define DMA_MEMORY_PERIHPHERAL_SIZE_8       0
#define DMA_MEMORY_PERIHPHERAL_SIZE_16      1
#define DMA_MEMORY_PERIHPHERAL_SIZE_32      2 

/* INCREMENT MODE */
#define DMA_MEMORY_INCREMANT_ENABLE         0
#define DMA_MEMORY_INCREMANT_DISABLE        0 
#define DMA_PERIPHERAL_INCREMANT_ENABLE     0
#define DMA_PERIPHERAL_INCREMANT_DISABLE    0


#define DMA_CIRCULAR_ENABLE                 1
#define DMA_CIRCULAR_DISABLE                0 

/******* DATA DIRECTION ******/ 
#define DMA_DATA_DIRECTION_READ_FROM_PERIPHERAL 0
#define DMA_DATA_DIRECTION_READ_FROM_MEMORY     1 

#endif 