/* Including Standard I/O library*/
#include <stdio.h>


void main(void)
{
        /*GETTING DATA FROM USER*/
    int intLength = 0 , intTarget = 0;
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

        /*Linear Search Algorithim*/
    for(intIterator = 0 ; intIterator < intLength ; intIterator++)
    {
       if(intTarget == intArr[intIterator])
       {
           printf("Element Fount in Index %d \n",intIterator);
       }
    }

}
 