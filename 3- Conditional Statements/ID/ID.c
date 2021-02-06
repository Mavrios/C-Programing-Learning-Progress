/* Including Standard I/O library*/
#include <stdio.h>


void main(void)
{
    /*INILAIZATION VARABILES*/
    int s32_ID = 0 ;

    /*GETTING DATA FROM THE USER*/
    printf("Please enter your ID : ");
    scanf("%d",&s32_ID);

    /*Check ID*/
    switch(s32_ID)
    {
        case 1234:
            printf("Welcome Ahmed");
            break;
        case 5678:
            printf("Welcome Youssef");
            break;
        case 1145:
            printf("Welcome Mina");
            break;
        default:
            printf("Wrong ID");
            break;
    }
}