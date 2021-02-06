/* Including Standard I/O library*/
#include <stdio.h>



void main(void)
{
    int intSize = 0 ;
    printf("Enter Array Size : ");
    scanf("%d",&intSize);
    int intArr [intSize]  , intSum = 0 ;
    char chrIterator = 0;
    int *ptrArr = intArr;
    for(chrIterator = 0 ; chrIterator < intSize ; chrIterator++)
    {
        printf("Please Enter Number %d :",chrIterator+1);
        scanf("%d",&intArr[chrIterator]);
        /*intSum+=*(ptrArr+chrIterator);*/
        intSum+=ptrArr[chrIterator];
    }
    
    printf("The Summation is : %d",intSum);

}
