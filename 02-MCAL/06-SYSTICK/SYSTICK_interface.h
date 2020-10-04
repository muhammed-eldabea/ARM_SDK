/***************************************************************/
/* [Authr]    :   MUhammed  Eldabea Hashem                     */
/* [Date]     :   7 SEP 2020                                   */ 
/* [Version]  :   V01                                          */ 
/***************************************************************/ 

#ifndef SYS_TICK_INTERFACE_H 
#define  SYS_TICK_INTERFACE_H  


                /********** Global Private Variable ***********/


/*defination for global pointer to function that will be used in 
the callback function for interrupt handling */

volatile  void (*Glob_ptrCallBack)(void) = (void*)0   ; 

/*the number of pierodic iteration function will have */

uint32 G_u32IterationNummber = 0 ; 


            /************** Function Defination *****************/

void MSTK_voidInit(void) ;
void MSTK_voidSetBusyWait(uint32 Copy_u32Ticks) ;
void MSTK_voidSetIntervalSingle(uint32 Copy_u32Ticks,void(*Copy_ptr)(void)) ;
void MSTK_voidSetIntervalPeriodic(uint32 Copy_u32Ticks,void(*Copy_ptr)(void)) ;
void MSTK_voidStopInterval(void) ; 
uint32 MSTK_voidGetElpasedTime(void) ;
uint32 MSTK_voidGetRemainingTime(void) ;















#endif 