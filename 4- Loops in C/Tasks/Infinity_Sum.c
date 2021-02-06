/* Including Standard I/O library*/
#include <stdio.h>


void main(void)
{
        /*GETTING DATA FROM USER*/
    int s32_Number1 = 0 , s32_Number2 = 0 ;
    
    while(1)
    {

    printf("Please enter first number: ");
    scanf("%d",&s32_Number1);
    printf("Please enter second number: ");
    scanf("%d",&s32_Number2);

    printf("The result is : %d \n",s32_Number1+s32_Number2);

    }
}