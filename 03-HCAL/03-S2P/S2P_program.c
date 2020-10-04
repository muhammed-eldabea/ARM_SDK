/********************************************************************************/ 
/*  [AUTOR]     :  MUHAMMED ELDABEA HASHEM                                      */ 
/*  [DATA]      :  30 SEP 2020                                                  */ 
/*  [VERSION]  :  V01                                                           */ 
/********************************************************************************/ 


                /********************MAIN LIBRARY********************/
#include "01-STD_TYPES/STD_TYPES.h" 
#include "02-BIT_MATH/BIT_MATH.h"  
                
                /******************* MCAL LAYERS LIPRARYS************/

#include "02-DIO/DIO_interface.h" 
#include"01-RCC/RCC_interface.h " 
#include "04-STK/STK_interface.h"  
                /**********************Drivers *******************/ 


#include "03-S2P/S2P_interface.h"
#include "03-S2P/S2P_config.h"  
#include "03-S2P/S2P_private.h" 






        /******************** Function Defintion ******************************/

void S2P_voidinit(void) 
{
    /*ENABLE THE RCC CLOCK SOURCE FOR GPIOA*/
    RCC_voidInitSysClock() ;
    RCC_voidEnableClock(RCC_APB2,2) ; 

/*SET THE NEEDED IN DIRCTION A PUSH PULL PINS WITH 2MHz FREQUENCY RATE*/
    MGPIO_VidSetPinDirection(SERIAL_DATA_PIN,OUTPUT_SPEED_2MHZ_PP) ;
    MGPIO_VidSetPinDirection(SERIAL_SHIFT_CLOCK_PIN,OUTPUT_SPEED_2MHZ_PP) ;
    MGPIO_VidSetPinDirection(SERIAL_STORAGE_CLOCK_PIN,OUTPUT_SPEED_2MHZ_PP) ; 
 
    /*enable the Sys Tick*/ 
    MSTK_voidInit() ; 

} 



void S2P_SendDataSynch(u8 Copy_u8DatatoSend)  
{  
    /* send bit by bit  */ 
    /*startg with ost signtific bit */

    s8 Local_s8Counter ; 
    u8 Local_u8Bit ; 

    for (Local_u8Counter = 7 ; Local_u8Counter >=0 ; Local_u8Counter--) 
    {  
        /*Get the bit */
        Local_u8Bit = GET_BIT(Copy_u8DatatoSend,Local_u8Counter) ; 
        
        /*Send the data*/
        MGPIO_VidSetPinValue(SERIAL_DATA_PIN,Local_u8Bit) ; 

        /*send pulse clock */ 
        MGPIO_VidSetPinValue(SERIAL_SHIFT_CLOCK_PIN,HIGH) ; 
        MSTK_voidSetBusyWait(1) ; 
        MGPIO_VidSetPinValue(SERIAL_SHIFT_CLOCK_PIN,LOW) ; 
        MSTK_voidSetBusyWait(1) ; 


    }  
    /*send a pulse to storage clock */
        MGPIO_VidSetPinValue(SERIAL_STORAGE_CLOCK_PIN,HIGH) ; 
        MSTK_voidSetBusyWait(1) ; 
        MGPIO_VidSetPinValue(SERIAL_STORAGE_CLOCK_PIN,LOW) ; 
        MSTK_voidSetBusyWait(1) ; 


}
