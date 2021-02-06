/* Including Standard I/O library*/
#include <stdio.h>


void main(void)
{
    /*INILAIZATION VARABILES*/
    int s32_Grade = 0 ;

    /*GETTING DATA FROM THE USER*/
    printf("Please enter your grade (0 : 100) : ");
    scanf("%d",&s32_Grade);

    /*Check even or odd*/
    if (0 <= s32_Grade && s32_Grade <50){
    printf("Your rating is failed");
    }
    else if (50 <= s32_Grade && s32_Grade <65)
    {
        printf("Your rating is Normal");
    }
    else if (65 <= s32_Grade && s32_Grade <75)
    {
        printf("Your rating is Good");
    }
    else if (75 <= s32_Grade && s32_Grade <85)
    {
        printf("Your rating is Very Good");
    }
    else if (s32_Grade >= 85 && s32_Grade <= 100)
    {
        printf("Your rating is Excellent");
    }
    else
    {
        printf("You entered Wrong grade");
    }
    
}