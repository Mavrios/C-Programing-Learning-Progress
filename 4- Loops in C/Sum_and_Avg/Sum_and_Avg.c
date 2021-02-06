/* Including Standard I/O library*/
#include <stdio.h>


void main(void)
{
    int s32_sum = 0 , s32_temp = 0;
     printf("Please Enter 10 numbers \n");   
    for(char i = 1 ; i <= 10 ; i++)
    {
    printf("Please enter the Number %d : ",i );
    scanf("%d",&s32_temp);
    s32_sum+=s32_temp;   
    }
    printf("The sum of these Numbers are %d\n " , s32_sum);
    printf("The Average is %.2f" , s32_sum / 10.0);
}