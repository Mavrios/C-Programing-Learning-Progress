/* Including Standard I/O library*/
#include <stdio.h>


void main(void)
{
    /*Inilazation u8_Value*/
 char u8_Value = 0 ;
    /*Printing String output*/
    printf("Please Enter Value form 0 to 255\n");
    /*Getting Number from the user*/
    scanf("%d",&u8_Value);
    /*Printing the output that user entered*/
    printf("The value you entered is %d",u8_Value);
}