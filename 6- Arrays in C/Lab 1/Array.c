/* Including Standard I/O library*/
#include <stdio.h>


void main(void)
{
        /*GETTING DATA FROM USER*/
    char chrLength = 10;
    int intArr[chrLength] ,intIterator = 0 ;

    for(intIterator = 0 ; intIterator < chrLength ; intIterator++)
    {
        printf("Please Enter Number %d : ",intIterator+1);
        scanf("%d",&intArr[intIterator]);
    }
    printf("The value in Reverse \n");
    for(intIterator = chrLength - 1 ; intIterator >= 0 ; --intIterator)
    {
        printf("%d\n",intArr[intIterator]);
    }
}