/* Including Standard I/O library*/
#include <stdio.h>


void main(void)
{
        /*GETTING DATA FROM USER*/
    int intLength = 0 , intTarget = 0 ,intStart = 0 , intEnd = 0 , intMid =0;
        /*Get Array length from the user*/
    printf("Please Enter Array Size : " );
    scanf("%d",&intLength);
    int intArr[intLength] ,intIterator = 0 , intIterator2 = 1 ;
        /*Get Array Element from the user*/
    for(intIterator = 0 ; intIterator < intLength ; intIterator++)
    {
        printf("Please Enter Number %d : ",intIterator+1);
        scanf("%d",&intArr[intIterator]);
    }
    printf("Please Enter Target element : " );
    scanf("%d",&intTarget);
    printf("Searching !! \n");
    intEnd = intLength - 1 ;
        /*Linear Search Algorithim*/
    while(intStart <= intEnd)
    {
        intMid = ( intStart + intEnd ) / 2 ;
        if(intArr[intMid] == intTarget)
        {
            printf("Element Found in index %d",intMid);
            break;
        }
        else if (intArr[intMid] < intTarget)
        {
            intStart = intMid + 1 ;
        }
        else
        {
            intEnd = intMid - 1 ;
        }
    }
    if(intStart> intEnd)
        printf("Element Not Found");

}
 