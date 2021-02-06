/*Preprocessor*/
/* Including Standard I/O library*/
#include <stdio.h>

void main(void)
{
        /*GETTING DATA FROM USER*/
    int intSize = 0 ; 
    printf("Please Enter The Array Size : ");
    scanf("%d",&intSize);
    int intArr[intSize] , intIterator = 0 , intOneCounter = 0 , intZeroCounter = 0 , intMax = 0 ;
        /*Get Numbers from the user*/

    printf("\nPlease Enter Zeros and Ones only !!\n\n");
    for(intIterator = 0 ; intIterator < intSize ; intIterator++)
    {
        printf("Please Enter Number %d : " , intIterator);
        scanf("%d",&intArr[intIterator]);
        if(intArr[intIterator] == 0 || intArr[intIterator] == 1)
        {
            if(intArr[intIterator] == 1)
            {
                intOneCounter++;
                if(intOneCounter == 2)
                {
                    intMax = (intMax<intZeroCounter ? intZeroCounter : intMax);
                    intOneCounter=1;
                    intZeroCounter=0;
                }
            }
            else
            {
                if(intOneCounter)
                {
                    intZeroCounter++;
                }    
            }
            
        }
        else
        {
            printf("\nPlease Enter Zeros and Ones only !!\n\n");
            intIterator--;
        }
        
    }
    printf("The Biggest Number Of Zeros is %d ", intMax);
}

