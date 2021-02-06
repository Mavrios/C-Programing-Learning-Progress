/* Including Standard I/O library*/
#include <stdio.h>
#include "../STD_TYPES.h"
#include <stdlib.h>
    /*Function Prototype*/
void vidSwap(int *intNumber1 ,int *intNumber2);

void main(void)
{
        /*GETTING DATA FROM USER*/
    u8 u8Length = 0 , u8Iterator = 0 , u8Iterator2 = 1 ;
        /*Get Array length from the user*/
    printf("Please Enter Array Size : " );
    scanf("%d",&u8Length);
    s32 * s32Arr = (s32 *) malloc( ( u8Length * sizeof(s32)) );

        /*Get Array Element from the user*/
    for(u8Iterator = 0 ; u8Iterator < u8Length ; u8Iterator++)
    {
        printf("Please Enter Number %d : ",u8Iterator+1);
        scanf("%d",&s32Arr[u8Iterator]);
    }
    printf("\nSorting !! \n\n");

        /*Bubble Sort Algorithim*/
    for(u8Iterator = 0 ; u8Iterator < u8Length - 1 ; u8Iterator++)
    {
        for(u8Iterator2 = 0 ; u8Iterator2 <  u8Length - u8Iterator - 1 ; u8Iterator2++)
        {
            if(s32Arr[u8Iterator2] > s32Arr[u8Iterator2+1] )
            {

                vidSwap(&s32Arr[u8Iterator2] , &s32Arr[u8Iterator2+1]);
                
            }
        }
    }
        /*Printing Sorting Array*/
    for(u8Iterator = 0 ; u8Iterator < u8Length ; u8Iterator++)
    {
        printf("Element Number %d = %d\n",u8Iterator+1,s32Arr[u8Iterator]);
    }


}

    /*Function Implementation*/
void vidSwap(int *intNumber1 , int *intNumber2)
{
    int temp = 0 ;
    temp = *intNumber1;
    *intNumber1 = *intNumber2;
    *intNumber2 = temp; 
}