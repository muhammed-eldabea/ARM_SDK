/************************************************************************/ 
/* [AUTHER]      : MUHAMMED ELDABEA HASHEM                              */ 
/* [DATE]        : 2 OCT 2020                                           */ 
/* [VERSION]     : V01                                                  */ 
/************************************************************************/  




#ifndef SPI_INTERFACE_H 
#define  SPI_INTERFACE_H 



void MSPI_voidinit(void) ; 
void MSPI_voidSendGetDataSynch(u16 Copy_u32DataToSend , u16 *Copy_u32DataToGet) ; 
void MSPI_voidSendGetDataSynch(u16 Copy_u32DataToSend , void (*CallBack)(u8)) ;  
















#endif  