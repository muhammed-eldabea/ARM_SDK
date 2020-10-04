/************************************************************************/ 
/* [AUTHER]      : MUHAMMED ELDABEA HASHEM                              */ 
/* [DATE]        : 2 OCT 2020                                           */ 
/* [VERSION]     : V01                                                  */ 
/************************************************************************/ 
 


 #include "01-LIB/01-STD_TYPES/STD_TYPES.h" 
 #include "01-LIB/02-BIT_MATH/BIT_MATH.h" 


 #include "02-MCAL/07-SPI/SPI_interface.h" 
 #include "02-MCAL/07-SPI/SPI_private.h" 
 #include "02-MCAL/07-SPI/SPI_config.h"




volatile void (*Gptr_SPICallBack)(u8) = (void*)0 ; 




void MSPI_voidinit(void) 
{

/* [USAGE] : initialze the SPI module 
             depending on a static configuration 
             given in the COnfig.h file */





MGPIO_VidSetPinDirection(MASTER_SLAVE_SELECTION1,OUTPUT_SPEED_2MHZ_PP) ; 

/*=========================================================*/ 
/*                     CR1 Register                        */ 
/*=========================================================*/


#if SPI_BIDIMODE == Enable 
SET_BIT(SPI_REG->CR1 , 15) ; 
#endif 

#if SPI_BIDIOE == BIDIOE_Transmit_Only_Mode 
SET_BIT(SPI_REG->CR1 , 14) ; 
#endif

#if SPI_ENABLE_CRC == Enable 
SET_BIT(SPI_REG->CR1 , 13) ; 
#endif  

#if SPI_CRCNEXT == CRC_PHASE_ENABLE 
SET_BIT(SPI_REG->CR1 , 12) ; 
#endif 

#if SPI_DFF == Data_Format_16_BIT 
SET_BIT(SPI_REG->CR1 , 11) ; 
#endif  

#if SPI_SPI_RXONLY_OPTION == SPI_RECIVE_ONLY 
SET_BIT(SPI_REG->CR1 , 10) ; 
#endif   

#if SPI_SSM == SPI_SSM_CONTROL_BY_HW 
SET_BIT(SPI_REG->CR1 , 9 ) ; 
#endif   

#if SPI_LSBFIRST_SELECT == SPI_LSBFIRST_LEAST 
SET_BIT(SPI_REG->CR1 , 7) ; 
#endif   


#if SPI_MODE_SELECT == SPI_MASTER_SELECT  
SET_BIT( SPI_REG->CR1 , 2) ; 
#endif  

#if SPI_CLOCK_POLARITY == SPI_CLOCK_FALLING_LEADING  
SET_BIT( SPI_REG->CR1 , 1) ; 
#endif  

#if SPI_CLOCK_PHASE == SPI_CLOCK_PHASE_WRITE_THEN_READ  
SET_BIT( SPI_REG->CR1 , 0) ; 
#endif


/*** << SPI BAUDRATE(Pre-Scaler) Configuation >>  ***/
SPI_REG->CR1 = (SPI_REG->CR1  & (0xFFFFFFE3)) | ((0x00 % 0x07)<<3) ; 
 


/*=========================================================*/ 
/*                     CR2 Register                        */ 
/*=========================================================*/

#if SPI_TXEIE == Enable 
SET_BIT( SPI_REG->CR2 , 7) ; 
#endif 

#if SPI_RXEIE == Enable 
SET_BIT( SPI_REG->CR2 , 6) ; 
#endif

#if SPI_ERRIE == Enable 
SET_BIT( SPI_REG->CR2 , 5) ; 
#endif 


/*When this bit is set,
 the DMA request is made 
 whenever the TXE flag is set.*/

#if SPI_TXDMAEN == Enable 
SET_BIT( SPI_REG->CR2 , 1) ; 
#endif 

/*When this bit is set,
 the DMA request is made 
 whenever the RXE flag is set.*/
#if SPI_RXDMAEN == Enable 
SET_BIT( SPI_REG->CR2 , 0) ; 
#endif




            /**** << Enable the Peripheral >> *****/
#if  SPI_ENABLE == Enable
SET_BIT(SPI_REG->CR1 , 6) ;
#endif





}


void MSPI_voidSendGetDataSynch(u16 Copy_u16DataToSend , u16 *Copy_u16DataToGet) 

{

/*enable the selection pin in the slave */

MGPIO_VidSetPinValue(MASTER_SLAVE_SELECTION1,LOW) ; 

/*Send the data */
SPI_REG->DR  = Copy_u32DataToSend ; 

/*wait for the communiccation end */
while ( GET_BIT(SPI_REG->SR , 7) == 1 ) ; 

/*Get the data from the slave */
*Copy_u16DataToGet =  SPI_REG->DR  ; 

/*Disable the selection pin in the slave */
MGPIO_VidSetPinValue(MASTER_SLAVE_SELECTION1,HIGH) ;

} 

void MSPI_voidSendGetDataSynch(u16 Copy_u32DataToSend , void (*CallBack)(u8)) 
{

MGPIO_VidSetPinValue(MASTER_SLAVE_SELECTION1,LOW) ; 

/*Send the data */
SPI_REG->DR  = Copy_u32DataToSend ; 


Gptr_SPICallBack =  CallBack ; 


/*Disable the selection pin in the slave */
MGPIO_VidSetPinValue(MASTER_SLAVE_SELECTION1,HIGH) ;



}





void SPI1_IRQHandler(void) 
{
/*Used mainly for the goal of Asynch Data*/

Gptr_SPICallBack(SPI_REG->DR ) ; 

MGPIO_VidSetPinValue(MASTER_SLAVE_SELECTION1,HIGH) ; 

}
