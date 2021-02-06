/*Preprocessor*/
/* Including Standard I/O library*/
#include <stdio.h>
#include "STD_TYPES.h"
/*Fuctions Prototype*/
void Maximum(s32 intNum1);


void main(void)
{
        /*Definition Variables*/
    s32 intNum1 = 0 , iterator = 0;

        /*Get Numbers from the user*/
    for(iterator = 0 ; iterator < 3 ; iterator++)
    {
        printf("Please Enter Number: ");
        scanf("%d",&intNum1);
        Maximum(intNum1);
    }
}

    /*Functions Implementations*/ 

void Maximum(s32 intNum1)
{
    static s32 Max = 0;
    static u8 flag = 0;
    if(!flag)
    {
        Max = intNum1;
        flag++;
    }
    else
    {
        if(Max < intNum1)
        {
            Max = intNum1;
        }
    }
printf("The Maximum Number is : %d\n",Max);
}