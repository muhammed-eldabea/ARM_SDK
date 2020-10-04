/******************************************************************************/ 
/* [Auther]       :  Muhammed  Eldabea Hashem                                 */ 
/* [Date]         :  20 SEP 2020                                              */ 
/* [Version]      :  V01                                                      */ 
/******************************************************************************/ 

#ifndef DMA_CONFIG_H 
#define DMA_CONFIG_H 

     /****************************************/
/*       ALL POSIABLE CONFIGURATION             */
 
 /* 

>>>> ENABLE OR DISBALE CHANNEL * 
  1- DMA_ENABLE_CHANNEL                  
 2- DMA_DISABLE_CHANNEL                  

>>>> PRIORITY CONFIGURATION*
   1- DMA_CHANNEL_PRIORITY_LOW            
  2- DMA_CHANNEL_PRIORITY_MEDIUM         
 3-  DMA_CHANNEL_PRIORITY_HIGH           
4- DMA_CHANNEL_PRIORITY_VERY_HIGH      

* PERIPHERAL AND MEMORY SIZE SELECTION *
    1-DMA_MEMORY_PERIHPHERAL_SIZE_8       
   2-DMA_MEMORY_PERIHPHERAL_SIZE_16      
 3-DMA_MEMORY_PERIHPHERAL_SIZE_32      

* INCREMENT MODE *
      1-DMA_MEMORY_INCREMANT_ENABLE         
    2-DMA_MEMORY_INCREMANT_DISABLE        
  3- DMA_PERIPHERAL_INCREMANT_ENABLE     
 4-DMA_PERIPHERAL_INCREMANT_DISABLE    


 DMA_CIRCULAR_ENABLE                 

******* DATA DIRECTION ******
  1-DMA_DATA_DIRECTION_READ_FROM_PERIPHERAL 
 DMA_DATA_DIRECTION_READ_FROM_MEMORY     

*/


/***************Channel 1 Configuration*********/
#define DMA_ChannelEnable                   DMA_ENABLE_CHANNEL     
#define DMA_CHANNEL1_MEMtoMEM               DMA_MEMORY_TO_MEMORY_MODE_ENABLE
#define DMA_Channel_Periority_Level         DMA_CHANNEL_PRIORITY_MEDIUM
#define DMA_Channel_MemorySize              DMA_MEMORY_PERIHPHERAL_SIZE_16
#define DMA_Channel_Peripheral_Size         DMA_MEMORY_PERIHPHERAL_SIZE_16
#define DMA_Channel_Memory_INCR_MODE        DMA_MEMORY_INCREMANT_ENABLE
#define DMA_Channel_Peripheral_INCR_MODE    DMA_PERIPHERAL_INCREMANT_ENABLE
#define DMA_Channel_Circular_MODE           DMA_CIRCULAR_DISABLE


/***************Channel 2 Configuration*********/
#define DMA_Channe2Enable  
#define DMA_CHANNEL2_MEMtoMEM               DMA_MEMORY_TO_MEMORY_MODE_ENABLE                    
#define DMA_Channe2_Periority_Level     
#define DMA_Channe2_MemorySize    
#define DMA_Channe2_Peripheral_Size    
#define DMA_Channe2_Memory_INCR_MODE   
#define DMA_Channe2_Peripheral_INCR_MODE    
#define DMA_Channe2_Circular_MODE     


/***************Channel 3 Configuration*********/
#define DMA_Channe3Enable   
#define DMA_CHANNEL3_MEMtoMEM  
#define DMA_Channe3_Periority_Level  
#define DMA_Channe3_MemorySize 
#define DMA_Channe3_Peripheral_Size 
#define DMA_Channe3_Memory_INCR_MODE
#define DMA_Channe3_Peripheral_INCR_MODE 
#define DMA_Channe3_Circular_MODE 


/***************Channel 4 Configuration*********/
#define DMA_Channe4Enable   
#define DMA_CHANNEL4_MEMtoMEM  
#define DMA_Channe4_Periority_Level  
#define DMA_Channe4_MemorySize 
#define DMA_Channe4_Peripheral_Size 
#define DMA_Channe4_Memory_INCR_MODE
#define DMA_Channe4_Peripheral_INCR_MODE 
#define DMA_Channe4_Circular_MODE 


/***************Channel 5 Configuration*********/
#define DMA_Channe5Enable  
#define DMA_CHANNEL5_MEMtoMEM   
#define DMA_Channe5_Periority_Level  
#define DMA_Channe5_MemorySize 
#define DMA_Channe5_Peripheral_Size 
#define DMA_Channe5_Memory_INCR_MODE
#define DMA_Channe5_Peripheral_INCR_MODE 
#define DMA_Channe5_Circular_MODE 


/***************Channel 6 Configuration*********/
#define DMA_Channe6Enable
#define DMA_CHANNEL6_MEMtoMEM     
#define DMA_Channe6_Periority_Level  
#define DMA_Channe6_MemorySize 
#define DMA_Channe6_Peripheral_Size 
#define DMA_Channe6_Memory_INCR_MODE
#define DMA_Channe6_Peripheral_INCR_MODE 
#define DMA_Channe6_Circular_MODE 


/***************Channel 7 Configuration*********/

#define DMA_Channe7_Enable
#define DMA_CHANNEL7_MEMtoMEM     
#define DMA_Channe7_Periority_Level  
#define DMA_Channe7_MemorySize 
#define DMA_Channe7_Peripheral_Size 
#define DMA_Channe7_Memory_INCR_MODE
#define DMA_Channe7_Peripheral_INCR_MODE 
#define DMA_Channe7_Circular_MODE 





#endif 