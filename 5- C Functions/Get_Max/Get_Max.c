/* Including Standard I/O library*/
#include <stdio.h>

/*Prototype*/
int Get_Max(int s32_Number1 , int s32_Number2);

void main(void)
{
    /*INILAIZATION VARABILES*/
    int s32_Number1 = 0 , s32_Number2=0 ;

    /*GETTING DATA FROM THE USER*/
    printf("Please Enter Value 1 : ");
    scanf("%d",&s32_Number1);
    printf("Please Enter Value 2 : ");
    scanf("%d",&s32_Number2);

    /*Calling Function*/
    printf("The Maximum value is %d ", Get_Max(s32_Number1,s32_Number2));
}

int Get_Max(int s32_Number1 , int s32_Number2)
{
   return (s32_Number1>s32_Number2 ? s32_Number1 : s32_Number2);
}