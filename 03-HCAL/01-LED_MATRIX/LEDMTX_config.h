/****************************************************************************************/
/*  [AUTHER]  : Muhammed Eldabea HAshem                                                 */ 
/*  [DATE]    : 12 SEP 2020                                                             */ 
/*  [VERSION] : V01                                                                     */ 
/****************************************************************************************/ 


#ifndef LED_MATX_CONFIG_H 
#define LED_MATX_CONFIG _H 


            /**************** Given Configuration ***************/



/*select the delay time */
#define LEDMTX_FRAME_WAITING_TIME 2500 


                 /* ROWS SELECTION */
    /*Select the Port and pin seperated by a comma , */ 
#define LEDMTX_ROW0     GPIOA,0 
#define LEDMTX_ROW1     GPIOA,1    
#define LEDMTX_ROW2     GPIOA,2
#define LEDMTX_ROW3     GPIOA,3
#define LEDMTX_ROW4     GPIOA,4
#define LEDMTX_ROW5     GPIOA,5
#define LEDMTX_ROW6     GPIOA,6
#define LEDMTX_ROW7     GPIOA,7

                 /* COULMN SELECTION */
    /*Select the Port and pin seperated by a comma , */ 
#define LEDMTX_COLM0     GPIOB,0 
#define LEDMTX_COLM1     GPIOB,1    
#define LEDMTX_COLM2     GPIOB,5
#define LEDMTX_COLM3     GPIOB,6
#define LEDMTX_COLM4     GPIOB,7
#define LEDMTX_COLM5     GPIOB,8
#define LEDMTX_COLM6     GPIOB,9
#define LEDMTX_COLM7     GPIOB,10












#endif 