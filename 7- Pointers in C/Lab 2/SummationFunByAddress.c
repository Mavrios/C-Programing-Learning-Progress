/*Preprocessor*/
/* Including Standard I/O library*/
#include <stdio.h>
/*Fuctions Prototype*/
int intSum(int *ptrNum1 , int *ptrNum2);

void main(void)
{
        /*Definition Variables*/
    int intNum1 = 0 , intNum2 = 0;
        /*Get Numbers from the user*/
    printf("Please Enter Value 1 : ");
    scanf("%d",&intNum1);
    printf("Please Enter Value 2 : ");
    scanf("%d",&intNum2);

        /*Printing The Result*/
    printf("The Result is: %d\n",intSum(&intNum1,&intNum2));

}

int intSum(int *ptrNum1 , int *ptrNum2)
{
    return (*ptrNum1 + *ptrNum2);
}