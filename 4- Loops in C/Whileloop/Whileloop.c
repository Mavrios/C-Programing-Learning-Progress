/* Including Standard I/O library*/
#include <stdio.h>


void main(void)
{
    int s32_Ans = 0;
    printf("Enter The Answer 4x3 \n");
    scanf("%d",&s32_Ans);
    while(s32_Ans != 12)
    {
        printf("Not Correct, Please try again : %d\n",s32_Ans);
        scanf("%d",&s32_Ans);
    }
    printf("Thank you");
}