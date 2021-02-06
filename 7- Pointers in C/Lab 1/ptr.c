/*Preprocessor*/
/* Including Standard I/O library*/
#include <stdio.h>
/*Fuctions Prototype*/


void main(void)
{
        /*Definition Variables*/
    int intNum = 0 , *ptr = &intNum;
        /*Get Numbers from the user*/
    printf("Please Enter Number : ");
    scanf("%d",&intNum);
        /*Printing The Result*/
    printf("X before change is: %d\n",intNum);
    *ptr = 20 ; 
    printf("X after change is: %d\n",intNum);

}
