/* Including Standard I/O library*/
#include <stdio.h>


void main(void)
{
        /*GETTING DATA FROM USER*/
    int s32_Num1 = 0 , s32_Num2 = 0, s32_Num3 = 0, s32_Num4 = 0, s32_Num5 = 0, s32_Num6 = 0, s32_Num7 = 0, s32_Num8 = 0, s32_Num9 = 0, s32_Num10 = 0, s32_Search = 0;
    printf("Please Enter number 1: ");
    scanf("%d",&s32_Num1);
    printf("Please Enter number 2: ");
    scanf("%d",&s32_Num2);
    printf("Please Enter number 3: ");
    scanf("%d",&s32_Num3);
    printf("Please Enter number 4: ");
    scanf("%d",&s32_Num4);
    printf("Please Enter number 5: ");
    scanf("%d",&s32_Num5);
    printf("Please Enter number 6: ");
    scanf("%d",&s32_Num6);
    printf("Please Enter number 7: ");
    scanf("%d",&s32_Num7);
    printf("Please Enter number 8: ");
    scanf("%d",&s32_Num8);
    printf("Please Enter number 9: ");
    scanf("%d",&s32_Num9);
    printf("Please Enter number 10: ");
    scanf("%d",&s32_Num10);
    printf("Please Enter value to search: ");
    scanf("%d",&s32_Search);

    if(s32_Num1 == s32_Search)
    {
        printf("Value is exist at element number 1");
    }

    else if(s32_Num2 == s32_Search)
    {
        printf("Value is exist at element number 2");
    }
    else if(s32_Num3 == s32_Search)
    {
        printf("Value is exist at element number 3");
    }

    else if(s32_Num4 == s32_Search)
    {
        printf("Value is exist at element number 4");
    }
    else if(s32_Num5 == s32_Search)
    {
        printf("Value is exist at element number 5");
    }

    else if(s32_Num6 == s32_Search)
    {
        printf("Value is exist at element number 6");
    }
    else if(s32_Num7 == s32_Search)
    {
        printf("Value is exist at element number 7");
    }

    else if(s32_Num8 == s32_Search)
    {
        printf("Value is exist at element number 8");
    }
    else if(s32_Num9 == s32_Search)
    {
        printf("Value is exist at element number 9");
    }

    else if(s32_Num10 == s32_Search)
    {
        printf("Value is exist at element number 10");
    }
    else
    {
        printf("number no exist");
    }
    
}