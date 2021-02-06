/* Including Standard I/O library*/
#include <stdio.h>


void main(void)
{
        /*GETTING DATA FROM USER*/
    /*ASSUME ID 1234 AND PASSWORD 5678*/
    int s32_ID= 0 , s32_Password = 0 ;
    printf("Please enter your ID: ");
    scanf("%d",&s32_ID);
    if(s32_ID == 1234)
    {
        printf("Please enter your Password: ");
        scanf("%d",&s32_Password);

        if(s32_Password == 5678)
        {
            printf("Welcome Kishk");
        }
        else
        {
            printf("Incorrect Password");
        }    

    }
    
    else
    {
        printf("Incorrect ID");
    }
    
    
}