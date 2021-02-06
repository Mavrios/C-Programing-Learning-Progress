/* Including Standard I/O library*/
#include <stdio.h>


void main(void)
{
        /*GETTING DATA FROM USER*/
    int s32_Num1 = 0 , s32_Num2 = 0 , s32_Num3 = 0;
    
    printf("Enter number 1: ");
    scanf("%d",&s32_Num1);
    printf("Enter number 2: ");
    scanf("%d",&s32_Num2);
    printf("Enter number 3: ");
    scanf("%d",&s32_Num3);

    if(s32_Num1 >= s32_Num2 && s32_Num1 >= s32_Num3 )
    {
        printf("Maximum number is %d",s32_Num1);
    }
    if(s32_Num2 >= s32_Num1 && s32_Num2 >= s32_Num3 )
    {
        printf("Maximum number is %d",s32_Num2);
    }
    if(s32_Num3 >= s32_Num1 && s32_Num3 >= s32_Num2 )
    {
        printf("Maximum number is %d",s32_Num3);
    }
}