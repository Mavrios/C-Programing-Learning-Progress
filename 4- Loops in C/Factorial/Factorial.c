/* Including Standard I/O library*/
#include <stdio.h>


void main(void)
{
    int s32_Num = 0, s32_factorial = 1;
    printf("Enter an integer : ");
    scanf("%d",&s32_Num);
    do
    {
        s32_factorial*=s32_Num;
        s32_Num--;
    } while (s32_Num);
    
    printf("Factorial = %d",s32_factorial);
}