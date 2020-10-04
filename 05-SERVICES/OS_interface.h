/*************************************************************************************/
/* [NAME]    : Muhammed Eldabea HAshem                                               */ 
/* [Date]    : 17 SEP 2020                                                           */ 
/* [VERSION] : V01                                                                   */ 
/*************************************************************************************/

#ifndef OS_INTERFACE_H 
#define OS_INTERFACE_H 


#define NULL (void*)0 

typedef enum  {
TASK_READY,TASK_WAITING,TASK_SUSPEND
}TASE_STATE_OPTIONS; 




/************************ Function Defination *************************/

void SOS_voidCreatTask(u8 Copy_u8Periority , void(*ptr)(void) ,u16 Copy_u8Peridicity, u8 Copy_u8FIRSTdelay ) ; 
void SOS_voidStart(void) ; 
void SOS_voidSetTaskState(u8 Copy_TaskID,u8 Copy_u8State) ; 
void SOS_voidTaskSuspend(u8 Copy_u8TaskID) ;
void SOS_voidTaskResume(u8 Copy_u8TaskID) ;
void SOS_voidTaskKill(u8 Copy_u8TaskID) ; 











#endif 




