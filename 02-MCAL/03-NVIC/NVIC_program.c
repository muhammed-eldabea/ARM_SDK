/*========================================================

[Author]      : Muhammed Eldabea Hashem 
[Description] : contain the definition of function
[Date]        : 20 JUL 2020 
[Version]     : V01 
=========================================================*/



#ifndef NVIC_PROGRAME_H 
#define NVIC_PROGRAME_H 


#include "STD_TYPES.h" 
#include "BIT_MATH.h" 


#include "NVIC_interface.h"
#include "NVIC_config.h"
#include "NVIC_private.h"



void_NVIC_voidR



void NCIV_voidEnableInterrupt(uint8 copy_u8InterruptId) 
{


if( copy_u8InterruptId <=31) 
{ /*as writing zero has no effect a can write directly to the register */
	NVIC_ISER0=(1<<copy_u8InterruptId) ; 
}

else if( copy_u8InterruptId <=59)   
{   
	NVIC_ISER1=(1<<(copy_u8InterruptId-32)) ; 
}

else 
{
	/*return error */
}


}


void NCIV_voidDisableInterrupt(uint8 copy_u8InterruptId) 
{ 

/*used to Disable the interrupt */

if( copy_u8InterruptId <=31) 
{ /*as writing zero has no effect a can write directly to the register */
	NVIC_ICER0=(1<<copy_u8InterruptId) ; 
}

else if( copy_u8InterruptId <=59)   
{   
	NVIC_ICER1=(1<<(copy_u8InterruptId-32)) ; 
}

else 
{
	/*return error */
}

}



void NCIV_voidSetPendingIREQ(uint8 copy_u8InterruptId) 
{

/*used to  set the pending flag */

if( copy_u8InterruptId <=31) 
{ /*as writing zero has no effect a can write directly to the register */
	NVIC_ISPR0=(1<<copy_u8InterruptId) ; 
}

else if( copy_u8InterruptId <=59)   
{   
	NVIC_ISPR1=(1<<(copy_u8InterruptId-32)) ; 
}

else 
{
	/*return error */
}


}


void NCIV_voidClearPendingIREQ(uint8 copy_u8InterruptId) 
{ 

/*used to Disable the interrupt */

if( copy_u8InterruptId <=31) 
{ /*as writing zero has no effect a can write directly to the register */
	NVIC_ICPR0=(1<<copy_u8InterruptId) ; 
}

else if( copy_u8InterruptId <=59)   
{   
	NVIC_ICPR1=(1<<(copy_u8InterruptId-32)) ; 
}

else 
{
	/*return error */
}

}




uint8 NVIC_u8ReacActiveInterruptFlag(uint8 copy_u8InterruptId) 
{ 
	uint8 Local_FlagReturn = 0 ; 

	if( copy_u8InterruptId <=31) 
{ 
	FlagReturn = GET_BIT(Local_FlagReturn,copy_u8InterruptId) ; 	
}

else if( copy_u8InterruptId <=59)   
{   
	FlagReturn = GET_BIT(Local_FlagReturn,(copy_u8InterruptId-32)) ; 
}

else 
{
	/*return error */
}
return Local_FlagReturn ; 
} 



void NCIV_voidSetPirority(sint8 copy_s8InterruptID,uint8 copy_u8GroubPirority,uint8 copy_u8SubGroubPirority,uint32 copy_u32Groub) 
{ 

/*next part will determinat used to represent the pirority */
uint8 Local_u8Pirority = (copy_u8SubGroubPirority | (copy_u8GroubPirority<<(copy_u32Groub-0xFA050300 )/256)) ; 

/*Core peripheral*/ 



/*External peripheral */
if(copy_u8InterruptId >=0) 
{
	NVIC_IPR[copy_s8InterruptID] = (Local_u8Pirority<<4) ; 
}
 


}















#endif