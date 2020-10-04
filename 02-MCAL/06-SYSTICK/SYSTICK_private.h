/***************************************************************/
/* [Authr]    :   MUhammed  Eldabea Hashem                     */
/* [Date]     :   7 SEP 2020                                   */ 
/* [Version]  :   V01                                          */ 
/***************************************************************/ 
 


#ifndef SYS_TICK_PRIVATE_H 
#define SYS_TICK_PRIVATE_H  

            /****************** PERIPHERAL REGISTERS *********************/ 

/* SYSTICK BASE Address  */

#define SYSTICK_BASE_ADDRESS  0xE000E010

/*SYSTICK Registers */

#define STK_CTRL  *(( volatile uint32 *)(SYSTICK_BASE_ADDRESS+0x00))
#define STK_LOAD  *(( volatile uint32 *)(SYSTICK_BASE_ADDRESS+0x04)) 
#define STK_VAL   *(( volatile uint32 *)(SYSTICK_BASE_ADDRESS+0x08))
#define STK_CALB  *(( volatile uint32 *)(SYSTICK_BASE_ADDRESS+0x0c))


            /***************** CONFIGURATON OPTIONS ****************/


/*configuration for selection the clock source */ 
typedef enum {
    SYSTICK_CLKSRC_AHB_BY_8,SYSTICK_CLKSRC_AHB
}SYSTICK_CLOCK_SOURCE_SELECTION_OPTION;





            /******************* PRIVATE FUNCTION *******************/



static void MSYS_voidPriv_CallBack(void(*Copy_voidptrtoFunc) (void)) ; 
void SysTick_Handler(void)  ; 

#endif 