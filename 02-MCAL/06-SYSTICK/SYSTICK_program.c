/***************************************************************/
/* [Authr]    :   MUhammed  Eldabea Hashem                     */
/* [Date]     :   7 SEP 2020                                   */ 
/* [Version]  :   V01                                          */ 
/***************************************************************/ 
 


#include "STD_TYPES.h" 
#include "BIT_MATH.h"  


/* get the peripheral library */ 
#include "SYSTICK_inteface.h"
#include "SYSTICK_private.h"
#include "SYSTICK_config.h"








void MSTK_voidInit(void) 
{
    /*configuration the source clock depending on 
    the connfiguration given in the config file */
 STK_CTRL=  (STK_CTRL & 0xFFFFFFFE) | ( SYSTICK_CLKSRC_CONFIG & 0x00000001)  ; 
    
    
    
}


void MSTK_voidSetBusyWait(uint32 Copy_u32Ticks) 
{   
    /*enable the counter*/
    SET_BIT(STK_CTRL,0) ;  
    /*set the counting value */
    STK_LOAD  = ( STK_LOAD & 0x0FF000000 ) | (Copy_u32Ticks & 0x00FFFFFF) ;  
    /*wait until the counting  flag is set*/
    while (GET_BIT(STK_CTRL,16) ==0)  {}
    /*clear the flag  by reading it */ 
    CLEAR_BIT(STK_CTRL,16) ;
    /* Disable the clock */ 
    CLEAR_BIT(STK_CTRL,0) ; 
    
 } 


void MSTK_voidSetIntervalSingle(uint32 Copy_u32Ticks,void(*Copy_ptr)(void)) 
{
      
    /*set the counting value */
    STK_LOAD  = ( STK_LOAD & 0x0FF000000 ) | (Copy_u32Ticks & 0x00FFFFFF) ;  
    
    
    /*set the call back function */
    MSYS_voidPriv_CallBack(Copy_ptr) ; 
    
    /*enable the counter*/
    SET_BIT(STK_CTRL,0) ;
    /*enable the interrupt req*/
    SET_BIT(STK_CTRL,1) ;
    
   
    
}

void MSTK_voidSetIntervalPeriodic(uint32 Copy_u32Ticks,void(*Copy_ptr)(void)) 
{
   
    /*set the counting value */
    STK_LOAD  = ( STK_LOAD & 0x0FF000000 ) | (Copy_u32Ticks & 0x00FFFFFF) ;  
    /*set the call back function */
    MSYS_voidPriv_CallBack(Copy_ptr) ;
    /*enable the interrupt req*/
    SET_BIT(STK_CTRL,1) ;
    /*enable the counter*/
    SET_BIT(STK_CTRL,0) ;  
}


void MSTK_voidStopInterval(void) 
{   
    
    /*clear the flag */
    CLEAR_BIT(STK_CTRL,16) ;
    /* Disable the clock */ 
    CLEAR_BIT(STK_CTRL,0) ; 
    /*clear the data register*/
    STK_LOAD =0x00000000 ;
    STK_VAL =0x00000000 ;
}

uint32 MSTK_voidGetElpasedTime(void) 
{
    
}


uint32 MSTK_voidGetRemainingTime(void) 
{
    
} 


static void MSYS_voidPriv_CallBack(void(*Copy_voidptrtoFunc) (void)) 
{ 

    Glob_ptrCallBack = Copy_voidptrtoFunc ; 
    
} 



void SysTick_Handler(void)  
{                              

    if(Glob_ptrCallBack== MSTK_voidSetIntervalSingle ) 

    {
    *(Glob_ptrCallBack)() ; 
     /*clear the flag  by reading it */ 
    CLEAR_BIT(STK_CTRL,16) ;
    /* Disable the clock */ 
    CLEAR_BIT(STK_CTRL,0) ; 
    

    } 

    else
    {
        
   if(Glob_ptrCallBack != (void*)0)  
   {
       *(Glob_ptrCallBack)() ;
   }

    }
    
}
