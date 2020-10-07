/*========================================================

[Author]      : Muhammed Eldabea Hashem 
[Description] : contain the definition of standard types
[Date]        : 20 JUL 2020 
[Version]     : V01 
=========================================================*/



#ifndef STD_TYPES
#define STD_TYPES 

/* Boolean Data Type */
typedef unsigned char bool;

/* Boolean Values */
#ifndef FALSE
#define FALSE       (0u)
#endif
#ifndef TRUE
#define TRUE        (1u)
#endif


typedef unsigned char         u8;          /*           0 .. 255             */
typedef signed char           s8;          /*        -128 .. +127            */
typedef unsigned short        u16;         /*           0 .. 65535           */
typedef signed short          s16;         /*      -32768 .. +32767          */
typedef unsigned long         u32;         /*           0 .. 4294967295      */
typedef signed long           s32;         /* -2147483648 .. +2147483647     */
typedef unsigned long long    u64;         /*       0..18446744073709551615  */
typedef signed long long      s64;
typedef float                 f32;
typedef double                f64;

#endif
