/*************************************************************************************/
/* [NAME]    : Muhammed Eldabea HAshem                                               */ 
/* [Date]    : 17 SEP 2020                                                           */ 
/* [VERSION] : V01                                                                   */ 
/*************************************************************************************/

#include "01-STD_TYPES/STD_TYPES.h" 
#include "02-BIT_MATH/BIT_MATH.h "

#include "04-STK/STK_interface.h" 

#include "05-SERVICES/OS_interface.h" 
#include "05-SERVICES/OS_private.h"
#include "05-SERVICES/OS_config.h"



/**************************** Private Defintion ***************************/

#define TASK_TYPE_NULL (Task_type*)0 

/*********************  USED VARIABLE ****************************/

static Task_type SOS_SYSTEM_TASKS [OS_NUMBER_OF_TASK] = { TASK_TYPE_NULL } ; 
volatile u32 Ticks_COUNTS = 0 ; 



/************************ Function Deceleration *************************/


void SOS_voidCreatTask(u8 Copy_u8Periority , void(*ptr)(void) ,u16 Copy_u8Peridicity , u8 Copy_u8FIRSTdelay ) 
{

/* [USAGE]     : use this function to creat a task and put un in a Ready state  */ 
/* [PArameter] : INPUT >> 
                            1-Copy_u8Periority :descript the priority of a function     
                            2- ptr   a pointer to a void function        
                            3-Copy_u8Peridicity  : the periodic time of a function  
                Return  >>  void          */


/*assign the function address */
SOS_SYSTEM_TASKS[Copy_u8Periority].Fptr = ptr ;  
/*assign the peridicity time  */ 
SOS_SYSTEM_TASKS[Copy_u8Periority].periodicity = Copy_u8Peridicity ; 
/*insert the first delay value */
SOS_SYSTEM_TASKS[Copy_u8Periority].firstDelay = Copy_u8FIRSTdelay ; 

} 


void SOS_voidStart(void) 
{

/*initialize the timer */
MSTK_voidInit () ; 

MSTK_voidSetIntervalPeriodic(1000,Schedular) ; 


}





static void Schedular (void) 
{

/*use this function to make a order of tasks depending on the priority and peridocity 
        tasks */
/******************************************************************************
 >> Old schedular algorithm 
for (u8 indx = 0 ; indx <OS_NUMBER_OF_TASK ; indx++)
{


if( (Ticks_COUNTS %  SOS_SYSTEM_TASKS[indx].periodicity) == 0 ) 
{
 
 SOS_SYSTEM_TASKS[indx].Fptr() ; 

} 

} 
if(Ticks_COUNTS == 60000) 
{
    Ticks_COUNTS = 0 ; 
}
else 
{
Ticks_COUNTS++ ; 
}

*************************************************************************************/

/* i only need the first delay once  at te start of the scheduling time line */

for (u8 indx = 0 ; indx <OS_NUMBER_OF_TASK ; indx++)
{


if((SOS_SYSTEM_TASKS[indx].Fptr != NULL) && (SOS_SYSTEM_TASKS[indx].state == TASK_READY) 
{


if (SOS_SYSTEM_TASKS[indx].firstDelay == 0 )  
{ 
    /*as function has been executed once the periodicity will decreased by one */
    SOS_SYSTEM_TASKS[indx].firstDelay =SOS_SYSTEM_TASKS[indx].periodicity -1 ;  
    SOS_SYSTEM_TASKS[indx].Fptr() ; 
}
SOS_SYSTEM_TASKS[indx].firstDelay-- ; 




} 
}



void SOS_voidSetTaskState(u8 Copy_TaskID,u8 Copy_u8State) 
{

/* [USAGE]  : used tp change the state of the task  */
/* [Paramater] : by passing the task id or periroty and the state 
that can be on of  next option  : 
            TASK_READY,TASK_WAITING,TASK_SUSPEND           */


SOS_SYSTEM_TASKS[Copy_TaskID].state = Copy_u8State ; 



}
 
void SOS_voidTaskSuspend( u8 Copy_u8TaskID) 
{

SOS_SYSTEM_TASKS[Copy_u8TaskID].state=TASK_SUSPEND ; 


}



void SOS_voidTaskResume(u8 Copy_u8TaskID) 
{
SOS_SYSTEM_TASKS[Copy_u8TaskID].state=TASK_READY ;

}

void SOS_voidTaskKill(u8 Copy_u8TaskID) 
{
SOS_SYSTEM_TASKS[Copy_u8TaskID].Fptr = NULL ;  
/*assign the peridicity time  */ 
SOS_SYSTEM_TASKS[Copy_u8TaskID].periodicity = 0 ; 
/*insert the first delay value */
SOS_SYSTEM_TASKS[Copy_u8TaskID].firstDelay = 0 ; 

}


static void  void_function(void) 
{
    asm("NOP") ; 
}