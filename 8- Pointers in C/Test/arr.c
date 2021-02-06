/* Including Standard I/O library*/
#include <stdio.h>
    /*Function Prototype*/
void vidSwap(int *ptrNumber1 ,int *ptrNumber2);

void main(void)
{
    int intNum1 [3] = {0,1,2}  , intNum2 = 0;
    int *ptr = intNum1;
    printf("///%d///",ptr[2]);

}

    /*Function Implementation*/
void vidSwap(int *ptrNumber1 , int *ptrNumber2)
{
    int temp = 0 ;
    temp = *ptrNumber1;
    *ptrNumber1 = *ptrNumber2;
    *ptrNumber2 = temp; 
}