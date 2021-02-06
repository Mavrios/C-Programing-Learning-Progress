/*Preprocessor*/
/* Including Standard I/O library*/
#include <stdio.h>
#define SIZE    10


void main(void)
{
        /*Definition Variables*/
    int intArr[SIZE]={0} , intIterator=0 , intMax = 0 , intMin = 0;
        /*Get Numbers from the user*/
    for(intIterator ; intIterator < SIZE ; intIterator++)
    {
        printf("Please enter number %d : ",intIterator+1);
        scanf("%d",&intArr[intIterator]);
        /*Check The Maximum Number the user will enter*/
        intMax = intMax<intArr[intIterator] ? intArr[intIterator] : intMax ;

        if(!intIterator)
        {
            /*THE INITIAL VALUE WILL BE THE FIRST VALUE USER WILL ENTER*/
            intMin = intArr[intIterator];
        }
        else
        {
            intMin = (intMin>intArr[intIterator]) ? intArr[intIterator] : intMin ;    
        }
        
    }
        /*Printing The Result*/
    printf("The Maximum Number is %d\n",intMax);
    printf("The Minimum Number is %d\n",intMin);
}
