/* Including Standard I/O library*/
#include <stdio.h>


void main(void)
{
    /*INILAIZATION VARABILES*/
    int s32_Num1 = 0 , s32_Num2 = 0 , s32_Num3 = 0;

    /*GETTING DATA FROM THE USER*/
    printf("Please enter 3 Numbers : ");
    scanf("%d %d %d",&s32_Num1,&s32_Num2,&s32_Num3);

    /*REVERSING OUTPUTS ORDER*/
    printf("Reversing on progress\n");
    printf("%d\n%d\n%d\n",s32_Num3,s32_Num2,s32_Num1);
}