/* Including Standard I/O library*/
#include <stdio.h>


void main(void)
{
    int s32_Num = 0, s32_iterator = 1;
    printf("Enter the number to display it's multiplication table : ");
    scanf("%d",&s32_Num);
    while(s32_iterator <= s32_Num)
    {
        printf("%d x %d = %d\n",s32_Num, s32_iterator , s32_Num * s32_iterator);
        s32_iterator++;
    }

}