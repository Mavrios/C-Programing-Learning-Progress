/* Including Standard I/O library*/
#include <stdio.h>


void main(void)
{
        /*GETTING DATA FROM USER*/
    int s32_Hight = 0 , s32_i = 0 , s32_j = 0 , s32_k = 0;
    
    printf("Enter Hight: ");
    scanf("%d",&s32_Hight);


    for(s32_i = 0 ; s32_i < s32_Hight ; s32_i++)
    {
        for(s32_j = 0 ; s32_j < s32_Hight - s32_i - 1 ; s32_j++)
        {
            printf(" ");
        }
        for(s32_k = 0 ; s32_k < s32_i+s32_i+1 ; s32_k++)
        {
            printf("*");
        }
        printf("\n");
    }
}