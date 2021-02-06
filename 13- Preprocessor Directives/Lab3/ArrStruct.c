/*Preprocessor*/
/* Including Standard I/O library*/
#include <stdio.h>

#define SET_BIT(BYTE,BIT_NO)    BYTE |= (1<<BIT_NO)
#define CLR_BIT(BYTE,BIT_NO)    BYTE &= ~(1<<BIT_NO)
#define TOG_BIT(BYTE,BIT_NO)    BYTE ^= (1<<BIT_NO)
#define GET_BIT(BYTE,BIT_NO)    ((BYTE>>Bit_NO)&(1))
/*Fuctions Prototype*/

void main(void)
{
        /*Definition Variables*/
    printf("SETBIT = %d",SET_BIT(0,0));
    printf("CLRBIT = %d",CLR_BIT(1,0));
    printf("TOGBIT = %d",TOG_BIT(0,0));
    printf("GETBIT = %d",GET_BIT(1,0));

}

    /*Functions Implementations*/ 

