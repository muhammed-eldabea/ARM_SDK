/*************************************************************************************/
/* [NAME]    : Muhammed Eldabea HAshem                                               */ 
/* [Date]    : 17 SEP 2020                                                           */ 
/* [VERSION] : V01                                                                   */ 
/*************************************************************************************/

#ifndef OS_PRIVATE_H 
#define OS_PRIVATE_H 


/************************ User Defined Types ***********************/

typedef struct 
{
    u16 periodicity ; 
    void (*Fptr) (void) ; 
    u8 firstDelay ; 
    u8 state ; 

}Task_type; 


/***********************Private Function ****************************/
 static void Schedular (void) ;  
 
 static void  void_function(void)



















#endif 