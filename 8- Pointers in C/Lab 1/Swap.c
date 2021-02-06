/* Including Standard I/O library*/
#include <stdio.h>
    /*Function Prototype*/
void vidSwap(int *ptrNumber1 ,int *ptrNumber2);

void main(void)
{
    int intNum1 = 0 , intNum2 = 0;
        /*GETTING DATA FROM USER*/
    printf("Please Enter Num 1 : ");
    scanf("%d",&intNum1);
    printf("Please Enter Num 2 : " );
    scanf("%d",&intNum2);
    vidSwap(&intNum1,&intNum2);
        /*Printing Result*/
    printf("Num 1 = %d \nNum 2 = %d",intNum1,intNum2);


}

    /*Function Implementation*/
void vidSwap(int *ptrNumber1 , int *ptrNumber2)
{
    int temp = 0 ;
    temp = *ptrNumber1;
    *ptrNumber1 = *ptrNumber2;
    *ptrNumber2 = temp; 
}