/* Including Standard I/O library*/
#include <stdio.h>


void main(void)
{
        /*GETTING DATA FROM USER*/
    int s32_ID = 0 , s32_Password = 0 , s32_i = 0 ;
    
    printf("Enter ID: ");
    scanf("%d",&s32_ID);

    switch (s32_ID) 
    { 
        case 1234:
            printf("Enter Password: ");
            for(s32_i = 0 ; s32_i < 3 ; s32_i++)
            {
                scanf("%d",&s32_Password);
                if(s32_Password == 7788)
                {
                    printf("Welcome Ahmed");
                    break;
                }
                else if (s32_i < 2)
                {
                    printf("Try Again: ");
                }
            }
            if(s32_i == 3)
            {
                printf("Incorrect Password for 3 times, No more tries");
            }
            break;

        case 5678:
            printf("Enter Password: ");
            for(s32_i = 0 ; s32_i < 3 ; s32_i++)
            {
                scanf("%d",&s32_Password);
                if(s32_Password == 5566)
                {
                    printf("Welcome Amr");
                    break;
                }
                else if (s32_i < 2)
                {
                    printf("Try Again: ");
                }
                break;
            }
            if(s32_i == 3)
            {
                printf("Incorrect Password for 3 times, No more tries");
            }
            break;

        case 9870:
            printf("Enter Password: ");
            for(s32_i = 0 ; s32_i < 3 ; s32_i++)
            {
                scanf("%d",&s32_Password);
                if(s32_Password == 1122)
                {
                    printf("Welcome Amr");
                    break;
                }
                else if (s32_i < 2)
                {
                    printf("Try Again: ");
                }
                break;
            }
            if(s32_i == 3)
            {
                printf("Incorrect Password for 3 times, No more tries");
            }
            break;

        default:
            printf("You are not registered");
            break;
    }
        

}