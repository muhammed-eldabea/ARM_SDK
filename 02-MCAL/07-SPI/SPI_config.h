/************************************************************************/ 
/* [AUTHER]      : MUHAMMED ELDABEA HASHEM                              */ 
/* [DATE]        : 2 OCT 2020                                           */ 
/* [VERSION]     : V01                                                  */ 
/************************************************************************/ 

#ifndef SPI_CONFIG_h
#define SPI_CONFIG_h 


#define SPI_ENABLE_CRC          Disable 
#define SPI_CRCNEXT             NO_CRC_PHASE
#define SPI_DFF                 Data_Format_8_BIT
#define SPI_SPI_RXONLY_OPTION   SPI_FULL_DUPLEX
#define SPI_SSM                 SPI_SSM_CONTROL_BY_HW
#define SPI_BIDIMODE            Disable
#define SPI_BIDIOE              BIDIOE_NO_MODE
#define SPI_LSBFIRST_SELECT     SPI_LSBFIRST_MOST 
#define SPI_ENABLE              Enable
#define SPI_MODE_SELECT         SPI_MASTER_SELECT 
#define SPI_CLOCK_POLARITY      SPI_CLOCK_RISING_LEADING
#define SPI_CLOCK_PHASE         SPI_CLOCK_PHASE_WRITE_THEN_READ
#define SPI_BAUD_RATE           SPI_PRESCALER_BY_2 
#define SPI_TXEIE               Disable 
#define SPI_RXEIE               Disable 
#define SPI_ERRIE               Disable 
#define SPI_TXDMAEN             Disable
#define SPI_RXDMAEN             Disable

/*************  MASTER SLAVE PINS SELECTION  **************/

#define MASTER_SLAVE_SELECTION1  GPIOA,9  




#endif 