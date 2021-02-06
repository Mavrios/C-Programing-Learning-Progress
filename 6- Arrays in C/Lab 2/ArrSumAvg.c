/* Including Standard I/O library*/
#include <stdio.h>


void main(void)
{
        /*GETTING DATA FROM USER*/
    char chrLength = 10;
    int intArr[chrLength] ,intIterator = 0 , intSum = 0;

    for(intIterator = 0 ; intIterator < chrLength ; intIterator++)
    {
        printf("Please Enter Number %d : ",intIterator+1);
        scanf("%d",&intArr[intIterator]);
        intSum+=intArr[intIterator];
    }

        /*Printing the output*/
    printf("Sum of array elements = %d \n",intSum);
    printf("Avarage of array elements = %.1f \n",(float) intSum/chrLength);
}