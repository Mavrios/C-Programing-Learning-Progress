/* Including Standard I/O library*/
#include <stdio.h>


void main(void)
{
    /*Inilazation u8_Value*/
    int s32_Number1 = 0 ;
    int s32_Number2 = 0 ;
    int s32_Res = 0 ; 
    /*Printing String output*/
    printf("Please Enter Number 1 : \n");
    /*Getting Number from the user*/
    scanf("%d",&s32_Number1);
    /*Printing String output*/
    printf("Please Enter Number 2 : \n");
    /*Getting Number from the user*/
    scanf("%d",&s32_Number2);
    /*Printing the output that user entered*/
    s32_Res = s32_Number1 & s32_Number2;
    printf("Number1 & Number2 = %d\n",s32_Res);
    s32_Res = s32_Number1 | s32_Number2;
    printf("Number1 | Number2 = %d\n",s32_Res);
    s32_Res = s32_Number1 ^ s32_Number2;
    printf("Number1 ^ Number2 = %d\n",s32_Res);
    s32_Res = s32_Number1 << s32_Number2;
    printf("Number1 << Number2 = %d\n",s32_Res);
    s32_Res = s32_Number1 >> s32_Number2;
    printf("Number1 >> Number2 = %d\n",s32_Res);

}