/*========================================================
[Author]      : Muhammed Eldabea Hashem                  
[Description] : most used bit math macros 
[Date]        : 20 JUL 2020 
[Version]     : V01 
=========================================================*/



#ifndef BIT_MATH_H
#define BIT_MATH_H 

/*used to set a specific bit in a register*/
#define SET_BIT(REG,BIT)    ((REG)= (REG)|(1<<BIT))
/*used to clear a specific bit in a register*/
#define CLEAR_BIT(REG,BIT)  ((REG)= (REG)& (~(1<<BIT)))
/*used to Get value of a specific bit in a register*/
#define GET_BIT(REG,BIT)    ((REG)&(1<<BIT))  
/*used to Toggle a specific bit in a register*/
#define TOG_BIT(REG,BIT)    ((REG)= (REG) ~ (1<<BIT))
/*used to insert a specific value in specific position */
#define BYTE_INSERT(REG,REG_CLEAR,INSERTED_VALUE,INSERTED_CLEARVALUE,SHIFT_VALUE) 	 ((REG) = ((REG)  & (REG_CLEAR)) | (( ((uint32)INSERTED_VALUE) & (INSERTED_CLEARVALUE)) << (SHIFT_VALUE))) 
/*insert a bit in a given location */
#define BIT_INSERT(REG,BIT_NUMBER,VALUE) 	 ((REG) = ((REG)  & (¬((0x00000001)<<(BIT_NUMBER)) | (( ((uint32)VALUE) & (0x00000001)) << (BIT_NUMBER))) 

#endif
