/*Preprocessor*/
/* Including Standard I/O library*/
#include <stdio.h>
/*Fuctions Prototype*/
int intSum(int intNum1 , int intNum2);
int intSub(int intNum1 , int intNum2);
int intMul(int intNum1 , int intNum2);
int intDiv(int intNum1 , int intNum2);

void main(void)
{
        /*Definition Variables*/
    int intNum1 = 0 , intNum2 = 0, intOperation = 0;
    int (*ptr[4]) (int Num1 , int Num2) = {intSum , intSub , intMul , intDiv};
        /*Get Numbers from the user*/
    printf("Please Enter Number 1 : ");
    scanf("%d",&intNum1);
    printf("Please Enter Number 2 : ");
    scanf("%d",&intNum2);
    printf("Please Enter Operation : ");
    scanf("%d",&intOperation);
        /*Calling Function*/
        /*Printing The Result*/
    printf("The Result of Operation is %d",ptr[intOperation](intNum1 , intNum2));
}

    /*Functions Implementations*/ 

int intSum(int intNum1 , int intNum2)
{
    return intNum1 + intNum2;
}
int intSub(int intNum1 , int intNum2)
{
    return intNum1 - intNum2;
}
int intMul(int intNum1 , int intNum2)
{
    return intNum1 * intNum2;
}
int intDiv(int intNum1 , int intNum2)
{
    return intNum1 / intNum2;
}