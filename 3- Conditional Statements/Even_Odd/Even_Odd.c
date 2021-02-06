/* Including Standard I/O library*/
#include <stdio.h>


void main(void)
{
    /*INILAIZATION VARABILES*/
    int s32_Number = 0 ;

    /*GETTING DATA FROM THE USER*/
    printf("Please enter Number : ");
    scanf("%d",&s32_Number);

    /*Check even or odd*/
    if (s32_Number%2)
    {
        printf("The Number is odd");
    }
    else
    {
        printf("The Number is even");
    }

}