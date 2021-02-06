/* Including Standard I/O library*/
#include <stdio.h>


void main(void)
{
    /*INILAIZATION VARABILES*/
    int s32_Number = 0 ;

    /*GETTING DATA FROM THE USER*/
    printf("Please enter number : ");
    scanf("%d",&s32_Number);

    /*Check Number*/
    s32_Number > 0 ? printf("+") : (s32_Number == 0 ? printf("0") : printf("-"));
}