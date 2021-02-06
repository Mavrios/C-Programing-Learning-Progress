/* Including Standard I/O library*/
#include <stdio.h>


void main(void)
{
        /*GETTING DATA FROM USER*/
    int intLength = 0;
    printf("Please Enter Array Size : " );
    scanf("%d",&intLength);

    int intArr[intLength] ,intIterator = 0 , intflag = 1 ;

    for(intIterator = 0 ; intIterator < intLength ; intIterator++)
    {
        printf("Please Enter Number %d : ",intIterator+1);
        scanf("%d",&intArr[intIterator]);
    }

    for(intIterator = 0 ; intIterator < intLength / 2 ; intIterator++)
    {
        if(intArr[intIterator]!=intArr[intLength-intIterator -1])
        {
            intflag = 0;
            break;
        }
    }

        /*Printing the output*/
    if(intflag)
    {
        printf("Mirror");
    }
    else
    {
        printf("Not Mirror");
    }
    
}