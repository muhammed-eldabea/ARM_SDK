/*************************************************************************/ 
/* [Author]  : Muhammad Eldabea Hashem                                   */ 
/* [Date]    : 7 OCT 2020                                                */
/* [Version]  : V01                                                      */ 
/*************************************************************************/ 

#include "01-LIB/01-STD_TYPES/STD_TYPES.h" 
#include "01-LIB/02-BIT_MATH/BIT_MATH.h" 

#include "02-MCAL/01-RCC/RCC_interface.h" 
#include "02-MCAL/02-GPIO/GPIO_inteface.h" 
#include "02-MCAL/07-SPI/SPI_interface.h" 
#include "02-MCAL/06-SYSTICK/SYSTICK_interface.h" 


#include "03-HCAL/04-TFT Display/TFT_interface.h"
#include "03-HCAL/04-TFT Display/TFT_privat.h" 
#include "03-HCAL/04-TFT Display/TFT_config.h" 


/* be sure that we have the right configuration */
#define SPI_LSBFIRST_SELECT     SPI_LSBFIRST_MOST 
#define SPI_CLOCK_POLARITY      SPI_CLOCK_FALLING_LEADING
#define SPI_CLOCK_PHASE         SPI_CLOCK_PHASE_WRITE_THEN_READ




/*=======================< FUNCTION DEFINATIONS >===========================*/

void HTFT_voidInit(void) 
{  

    /******* <  INITIALIZE ALL NEEDED MODULES > ******/

    GPIO_voidSetDataDirection(TFT_A0_PIN_CONENCTION,GPIO_OUTPUT50_AF_PUSH_PULL_MODE) ; 
    GPIO_voidSetDataDirection(TFT_RESET_PIN_CONENCTION,GPIO_OUTPUT50_AF_PUSH_PULL_MODE) ; 

    /*Reset Pulse */ 
    RestSignal() ; 
    /* Sleep Out CMD >> 0x11 */ 
    WriteCommand(0x11) ; 
    /* delay 150 ms   */ 
    MSTK_voidSetBusyWait(150000
    ) ;
    /* Color mode CMD >> 0x3A */ 
    WriteCommand(0x3A) ; 
    WriteData(COLOR_STANDARD) ; 
    /* Display ON   0x29 */ 
    WriteCommand(0x29) ; 

} 


void HTFT_voidDisplayImage(const u16* Copy_ptrArrOfImage) 
{ 

    u8 counter = 0 ; 
/**Set the X axis */ 
WriteCommand(0x2A) ; 
WriteData(0) ;
WriteData(0) ;
WriteData(0) ;
WriteData(127) ;  

/**Set the Y axis */ 

WriteCommand(0x2B) ; 
WriteData(0) ;
WriteData(0) ;
WriteData(0) ;
WriteData(127) ;


/*Raw write*/
WriteCommand(0x2C) ;

for (counter = 0 ; counter<20480 ; counter++) 
{
WriteData(Copy_ptrArrOfImage[counter]>>8) ; 
WriteData(Copy_ptrArrOfImage[counter]& 0x00ff) ;  
}

} 



static void WriteCommand(u8 Copy_u8Command) 
{  
    u8 Local_u8Temp ; 
    /*set the pin TO LOW for Command mode*/
    GPIO_voidSetDataValue(TFT_A0_PIN_CONENCTION,LOW) ; 
   /*send the command*/ 
    MSPI_voidSendGetDataSynch(Copy_u8Command,&Local_u8Temp) ;
}


static void WriteData(u8 Copy_u8Data) 
{  
    u8 Local_u8Temp ; 
    /*set the pin to HIGH for Data MODE*/
    GPIO_voidSetDataValue(TFT_A0_PIN_CONENCTION,HIGH) ;
    /*send the data*/ 
    MSPI_voidSendGetDataSynch(Copy_u8Data,&Local_u8Temp) ; 

} 

static void RestSignal(void) 
{

GPIO_voidSetDataValue(TFT_RESET_PIN_CONENCTION,LOW) ;

GPIO_voidSetDataValue(TFT_RESET_PIN_CONENCTION,HIGH) ; 
MSTK_voidSetBusyWait(100) ;

GPIO_voidSetDataValue(TFT_RESET_PIN_CONENCTION,LOW) ; 
MSTK_voidSetBusyWait(1) ;

GPIO_voidSetDataValue(TFT_RESET_PIN_CONENCTION,HIGH) ; 
MSTK_voidSetBusyWait(100) ;

GPIO_voidSetDataValue(TFT_RESET_PIN_CONENCTION,LOW) ; 
MSTK_voidSetBusyWait(100) ; 

GPIO_voidSetDataValue(TFT_RESET_PIN_CONENCTION,HIGH) ; 
MSTK_voidSetBusyWait(120000) ;

}