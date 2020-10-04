/****************************************************************************************/
/*  [AUTHER]  : Muhammed Eldabea HAshem                                                 */ 
/*  [DATE]    : 12 SEP 2020                                                             */ 
/*  [VERSION] : V01                                                                     */ 
/****************************************************************************************/ 






/***************** Library ***********************/


#include "STD_TYPES.h" 
#include "BIT_MATH.h"  


/* get the peripheral library */ 


#include "SYSTICK_inteface.h"
#include "GPIO_inteface.h"

#include "LEDMTX_inteface.h"
#include "LEDMTX_private.h"
#include "LEDMTX_config.h"


/**************FUNCTION DEFINATION **************/



void HLEDMTX_voidInit() 
{
    /*set the Row  pin Direction */
    GPIO_voidSetDataDirection(LEDMTX_ROW0 ,GPIO_OUTPUT2_PUSH_PULL_MODE) ;
    GPIO_voidSetDataDirection(LEDMTX_ROW1 ,GPIO_OUTPUT2_PUSH_PULL_MODE) ;
    GPIO_voidSetDataDirection(LEDMTX_ROW2 ,GPIO_OUTPUT2_PUSH_PULL_MODE) ;
    GPIO_voidSetDataDirection(LEDMTX_ROW3 ,GPIO_OUTPUT2_PUSH_PULL_MODE) ;
    GPIO_voidSetDataDirection(LEDMTX_ROW4 ,GPIO_OUTPUT2_PUSH_PULL_MODE) ;
    GPIO_voidSetDataDirection(LEDMTX_ROW5 ,GPIO_OUTPUT2_PUSH_PULL_MODE) ;
    GPIO_voidSetDataDirection(LEDMTX_ROW6 ,GPIO_OUTPUT2_PUSH_PULL_MODE) ;
    GPIO_voidSetDataDirection(LEDMTX_ROW7 ,GPIO_OUTPUT2_PUSH_PULL_MODE) ;  
    
    /*set the coulmn Pin Direction */
    GPIO_voidSetDataDirection(LEDMTX_COLM0 ,GPIO_OUTPUT2_PUSH_PULL_MODE) ;
    GPIO_voidSetDataDirection(LEDMTX_COLM1 ,GPIO_OUTPUT2_PUSH_PULL_MODE) ;
    GPIO_voidSetDataDirection(LEDMTX_COLM2 ,GPIO_OUTPUT2_PUSH_PULL_MODE) ;
    GPIO_voidSetDataDirection(LEDMTX_COLM3 ,GPIO_OUTPUT2_PUSH_PULL_MODE) ;
    GPIO_voidSetDataDirection(LEDMTX_COLM4 ,GPIO_OUTPUT2_PUSH_PULL_MODE) ;
    GPIO_voidSetDataDirection(LEDMTX_COLM5 ,GPIO_OUTPUT2_PUSH_PULL_MODE) ;
    GPIO_voidSetDataDirection(LEDMTX_COLM6 ,GPIO_OUTPUT2_PUSH_PULL_MODE) ;
    GPIO_voidSetDataDirection(LEDMTX_COLM7 ,GPIO_OUTPUT2_PUSH_PULL_MODE) ; 
   
} 


void HLEDMTX_voidDisplay(uint8 * Copy_u8DataPtrArray) 
{
    
 for (uint8 col = 0 ; col<=7 ; col++) 
 {
     /*Disable all colms*/
     DisableAllCos () ;  
     /*Display the PORT ROW value*/ 
     SetColsValues(Copy_u8DataPtrArray[col]) ; 
     
     /*enable only on Colm */ 
     
       switch (col)  
        {
                
            case 0 :  GPIO_voidSetDataDirection(LEDMTX_COLM0 ,HIGH) ; break ;
            case 1 :  GPIO_voidSetDataDirection(LEDMTX_COLM1 ,HIGH) ; break ;
            case 2 :  GPIO_voidSetDataDirection(LEDMTX_COLM2 ,HIGH) ; break ;
            case 3 :  GPIO_voidSetDataDirection(LEDMTX_COLM3 ,HIGH) ; break ;
            case 4 :  GPIO_voidSetDataDirection(LEDMTX_COLM4 ,HIGH) ; break ;
            case 5 :  GPIO_voidSetDataDirection(LEDMTX_COLM5 ,HIGH) ; break ;
            case 6 :  GPIO_voidSetDataDirection(LEDMTX_COLM6 ,HIGH) ; break ;
            case 7 :  GPIO_voidSetDataDirection(LEDMTX_COLM7 ,HIGH) ; break ;              
                        
        }
     
     /*Delay for hte fram time */ 
     MSTK_voidSetBusyWait(LEDMTX_FRAME_WAITING_TIME) ;  
     
     
     
 }
    
    
    
       
} 









/************** PRIVATE FUNCTION DEFINATION **************/   



static void DisableAllCos(void) 
{
    
    GPIO_voidSetDataValue(LEDMTX_COLM0 ,HIGH) ; 
    GPIO_voidSetDataValue(LEDMTX_COLM1 ,HIGH) ; 
    GPIO_voidSetDataValue(LEDMTX_COLM2 ,HIGH) ; 
    GPIO_voidSetDataValue(LEDMTX_COLM3 ,HIGH) ; 
    GPIO_voidSetDataValue(LEDMTX_COLM4 ,HIGH) ; 
    GPIO_voidSetDataValue(LEDMTX_COLM5 ,HIGH) ; 
    GPIO_voidSetDataValue(LEDMTX_COLM6 ,HIGH) ; 
    GPIO_voidSetDataValue(LEDMTX_COLM7 ,HIGH) ;   
    
} 


static void SetColsValues(uint8 Copy_u8Data) 
{
    
    uint8 Local_u8Bit = 0 ; 
    
    
    
    for (uint8 i = 0 ; i <=7 ; i++) 
    {
        
        Local_u8Bit = GET_BIT(Copy_u8Data , i ) ; 
        
        switch (i) 
        {
                
            case 0 :  GPIO_voidSetDataDirection(LEDMTX_ROW0 ,Local_u8Bit) ; break ;
            case 1 :  GPIO_voidSetDataDirection(LEDMTX_ROW1 ,Local_u8Bit) ; break ;
            case 2 :  GPIO_voidSetDataDirection(LEDMTX_ROW2 ,Local_u8Bit) ; break ;
            case 3 :  GPIO_voidSetDataDirection(LEDMTX_ROW3 ,Local_u8Bit) ; break ;
            case 4 :  GPIO_voidSetDataDirection(LEDMTX_ROW4 ,Local_u8Bit) ; break ;
            case 5 :  GPIO_voidSetDataDirection(LEDMTX_ROW5 ,Local_u8Bit) ; break ;
            case 6 :  GPIO_voidSetDataDirection(LEDMTX_ROW6 ,Local_u8Bit) ; break ;
            case 7 :  GPIO_voidSetDataDirection(LEDMTX_ROW7 ,Local_u8Bit) ; break ;
                        
        }
        
    }   
}