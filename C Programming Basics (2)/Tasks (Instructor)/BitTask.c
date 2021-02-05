/* Including Standard I/O library*/
#include <stdio.h>


void main(void)
{
    /*Inilatzation Variables*/
    char s8_Bit = 0 ;
    char s8_Number = 0;
    /*Printing Data & Getting Data from User*/
    printf("Please Enter Bit Number you want to set : ");
    scanf("%d",&s8_Bit);

    /*Set Bit Proccessing*/
    s8_Bit = 1 << s8_Bit;
    s8_Number|=s8_Bit;
    /*Printing Data & Getting Data from User*/
    printf("\nSET BIT IS DONE : %d\n",s8_Number);
    printf("Please Enter Bit Number you want to CLR : ");
    scanf("%d",&s8_Bit);

    /*CLR Bit Proccessing*/
    s8_Bit = 1<<s8_Bit;
    s8_Number &= ~(s8_Bit);

    /*Printing Data & Getting Data from User*/
    printf("\nCLR BIT IS DONE : %d\n",s8_Number);
    printf("Please Enter Bit Number you want to Toggle : ");
    scanf("%d",&s8_Bit);

    /*Toggle Bit Proccessing*/
    s8_Bit= 1<< s8_Bit;
    s8_Number ^= (s8_Bit);

    /*Printing Data & Getting Data from User*/
    printf("\nToggle BIT IS DONE : %d\n",s8_Number);    
    printf("Please Enter Bit Number you want to GET : ");
    scanf("%d",&s8_Bit);


    /*Get Bit Proccessing*/
    s8_Number=8;
    s8_Bit = (s8_Number >> s8_Bit);
    s8_Number = s8_Bit & 0x01;
    printf("\nGET BIT IS DONE : %d\n",s8_Number);    
}