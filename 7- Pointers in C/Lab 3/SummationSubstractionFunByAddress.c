/*Preprocessor*/
/* Including Standard I/O library*/
#include <stdio.h>
/*Fuctions Prototype*/
void vidSum(int *ptrNum1 , int *ptrNum2 , int *ptrSummation , int *ptrSubtraction);

void main(void)
{
        /*Definition Variables*/
    int intNum1 = 0 , intNum2 = 0 , intSummation = 0 , intSubtraction = 0;
        /*Get Numbers from the user*/
    printf("Please Enter Value 1 : ");
    scanf("%d",&intNum1);
    printf("Please Enter Value 2 : ");
    scanf("%d",&intNum2);
        /*Calling Function*/
    vidSum(&intNum1,&intNum2,&intSummation,&intSubtraction);
        /*Printing The Result*/
    printf("The Result of Summation is: %d\n",intSummation);
    printf("The Result of Subtraction is: %d\n",intSubtraction);
}

void vidSum(int *ptrNum1 , int *ptrNum2 , int *ptrSummation , int *ptrSubtraction)
{
    *ptrSummation =  *ptrNum1 + *ptrNum2;
    *ptrSubtraction =  *ptrNum1 - *ptrNum2;
}