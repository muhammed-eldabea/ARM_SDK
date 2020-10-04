/*========================================================

[Author]      : Muhammed Eldabea Hashem 
[Description] : contain the given option and interface t
				o the user
[Date]        : 20 JUL 2020 
[Version]     : V01 
=========================================================*/



#ifndef NVIC_INTERFACE_H 
#define NVIC_INTERFACE_H 




#define NVIC_GROUB_4_SUB_0 0xFA050300 /*all IPR bits will represent the groub bit  with no sub-groub pirority*/
#define NVIC_GROUB_3_SUB_1  0xFA050400	/* IPR bits will represent the 3-bitgroub with 1-bit sub-groub pirority*/
#define NVIC_GROUB_2_SUB_2  0xFA050500 /* IPR bits will represent the 2-bitgroub with 2-bit sub-groub pirority*/
#define NVIC_GROUB_1_SUB_3  0xFA050600 /* IPR bits will represent the 1-bitgroub with 3-bit sub-groub pirority*/
#define NVIC_GROUB_0_SUB_4  0xFA050700 /* IPR bits will represent the 0-bitgroub with 4-bit sub-groub pirority*/





/********************Function Defination **********************/

void NCIV_voidEnableInterrupt(uint8 copy_u8InterruptId)  ; 
void NCIV_voidDisableInterrupt(uint8 copy_u8InterruptId) ; 
void NCIV_voidClearPendingIREQ(uint8 copy_u8InterruptId)  ; 
void NCIV_voidSetPendingIREQ(uint8 copy_u8InterruptId)  ;  
uint8 NVIC_u8ReacActiveInterruptFlag(uint8 copy_u8InterruptId) ; 
void NCIV_voidSetPirority(sint8 copy_s8InterruptID,uint8 copy_u8GroubPirority,uint8 copy_u8SubGroubPirority,uint32 copy_u32Groub)  ; 
























#endif