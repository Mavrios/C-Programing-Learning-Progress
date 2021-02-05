/* Including Standard I/O library*/
#include <stdio.h>

void Swap(int *s32_Num1 ,int *s32_Num2);

void main(void)
{
    /*Inilatzation Variables*/
    int s32_Number1 = 0;
    int s32_Number2 = 0;

    /*Printing Data & Getting Data from User*/
    printf("Please Enter Two Numbers : ");
    scanf("%d %d",&s32_Number1,&s32_Number2);

    /*Swapping Proccessing*/
    Swap(&s32_Number1,&s32_Number2);

    /*Printing out Data for the user*/
    printf("\nFirst number is : %d\n",s32_Number1);
    printf("\nSecond number is : %d\n",s32_Number2);

}

void Swap(int *s32_Num1 ,int *s32_Num2)
{
    int s32_Temp = 0;
    s32_Temp = *s32_Num1;
    *s32_Num1 = *s32_Num2;
    *s32_Num2 = s32_Temp;  
}