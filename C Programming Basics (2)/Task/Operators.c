/* Including Standard I/O library*/
#include <stdio.h>


void main(void)
{
        /*GETTING DATA FROM USER*/
    int s32_Num1 = 0 , s32_Num2 = 0;
    printf("Please Enter number a: ");
    scanf("%d",&s32_Num1);
    printf("Please Enter number b: ");
    scanf("%d",&s32_Num2);

    printf("a + b = %d\n",s32_Num1+s32_Num2);
    printf("a - b = %d\n",s32_Num1-s32_Num2);
    printf("a * b = %d\n",s32_Num1*s32_Num2);
    printf("a & b = %d\n",s32_Num1&s32_Num2);
    printf("a | b = %d\n",s32_Num1|s32_Num2);
    printf("a ^ b = %d\n",s32_Num1^s32_Num2);
    printf("~a = %d\n",~s32_Num1);
    printf("~b = %d\n",~s32_Num2);


}