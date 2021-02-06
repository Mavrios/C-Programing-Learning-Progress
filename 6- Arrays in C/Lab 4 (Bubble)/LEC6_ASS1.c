/* Including Standard I/O library*/
#include <stdio.h>
    /*Function Prototype*/
void vidSwap(int *intNumber1 ,int *intNumber2);

void main(void)
{
        /*GETTING DATA FROM USER*/
    int intLength = 0 , intTemp = 0 , intIterator = 0 , intIterator2 = 1 ;
        /*Get Array length from the user*/
    printf("Please Enter Array Size : " );
    scanf("%d",&intLength);

        /*Get Array Element from the user*/
    for(intIterator = 0 ; intIterator < intLength ; intIterator++)
    {
        printf("Please Enter Number %d : ",intIterator+1);
        scanf("%d",&intArr[intIterator]);
    }
    printf("Sorting !! \n");

        /*Bubble Sort Algorithim*/
    for(intIterator = 0 ; intIterator < intLength - 1 ; intIterator++)
    {
        for(intIterator2 = 0 ; intIterator2 <  intLength - intIterator - 1 ; intIterator2++)
        {
            if(intArr[intIterator2] > intArr[intIterator2+1] )
            {

                vidSwap(&intArr[intIterator2] , &intArr[intIterator2+1]);
                
            }
        }
    }
        /*Printing Sorting Array*/
    for(intIterator = 0 ; intIterator < intLength ; intIterator++)
    {
        printf("Element Number %d = %d\n",intIterator+1,intArr[intIterator]);
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