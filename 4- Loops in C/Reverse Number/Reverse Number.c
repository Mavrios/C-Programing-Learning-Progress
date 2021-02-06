/* Including Standard I/O library*/
#include <stdio.h>


void main(void)
{
    int s32_Num = 0;
    printf("Enter an integer Number: ");
    scanf("%d",&s32_Num);
    while (s32_Num){
        printf("%d",s32_Num % 10);
        s32_Num/=10;
    }
    
}
