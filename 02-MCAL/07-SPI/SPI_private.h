/************************************************************************/ 
/* [AUTHER]      : MUHAMMED ELDABEA HASHEM                              */ 
/* [DATE]        : 2 OCT 2020                                           */ 
/* [VERSION]     : V01                                                  */ 
/************************************************************************/ 

#ifndef SPI_PRIVATE_H 
#define  SPI_PRIVATE_H 




/*************** USER DEFINED DATA *****************/ 

typedef struct 
{
    /* Register of the SPI driver  */
    volatile u32 CR1 ; 
    volatile u32 CR2 ;
    volatile u32 SR ;
    volatile u32 DR ; 
    volatile u32 CRCPR ;
    volatile u32 RXCRCR ;
    volatile u32 TXCRCR ; 
    volatile u32 I2SCFGR; 
    volatile u32 I2SPR; 

}SPI_REG_TYPE;
 

#define SPI_REG   (( volatile SPI_REG_TYPE*)0x40013000) 

/************** Private Definations **********/ 

#define SPI_SLAVE_SELECT   0 
#define SPI_MASTER_SELECT  1 
#define SPI_CLOCK_RISING_LEADING 0
#define SPI_CLOCK_FALLING_LEADING 1 
#define SPI_CLOCK_PHASE_READ_THEN_WRITE 0 
#define SPI_CLOCK_PHASE_WRITE_THEN_READ  1 
#define SPI_LSBFIRST_MOST  0 
#define SPI_LSBFIRST_LEAST  1 




/****************** Enumeratin value **********************/

typedef enum {
BIDIOE_Receive_Only_Mode ,BIDIOE_Transmit_Only_Mode, BIDIOE_NO_MODE

}SPI_BIDIOE_OPTION ; 

/***********************/ 
typedef enum {

SPI_PRESCALER_BY_2 , SPI_PRESCALER_BY_4 ,SPI_PRESCALER_BY_16,
SPI_PRESCALER_BY_32,SPI_PRESCALER_BY_64,SPI_PRESCALER_BY_128,
SPI_PRESCALER_BY_256 
} SPI_PRESCALER_OPTION; 

/***********************/

typedef enum {
    NO_CRC_PHASE , CRC_PHASE_ENABLE 
}CRC_PHASE_STATE ;  

/***********************/

typedef enum 
{
    Disable , Enable 
}Feature_Control ; 

/***********************/

typedef enum 
{
    Data_Format_8_BIT , Data_Format_16_BIT
}SPI_DATA_FORMAT_OPTION ; 

/***********************/

typedef enum {
    SPI_FULL_DUPLEX , SPI_RECIVE_ONLY 
}SPI_RXONLY_OPTION ; 

/***********************/

typedef enum {
    SPI_SSM_CONTROL_BY_HW,SPI_SSM_CONTROL_BY_SW
}SPI_SSM_OPTION ; 





#endif 