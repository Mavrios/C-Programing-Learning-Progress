/* Including Standard I/O library*/
#include <stdio.h>


void main(void)
{
    /*Inilatzation Variables*/
    char s8_Number1 = 0;
    char s8_Number2 = 0;
    char s8_Temp = 0;

    /*Printing Data & Getting Data from User*/
    printf("Please Enter Two Numbers : ");
    scanf("%d %d",&s8_Number2,&s8_Number1);

    /*Swapping Proccessing*/
    s8_Temp=s8_Number1;
    s8_Number1=s8_Number2;
    s8_Number2=s8_Temp;

    /*Printing out Data for the user*/
    printf("\nFirst number is : %d\n",s8_Number1);
    printf("\nSecond number is : %d\n",s8_Number2);

}