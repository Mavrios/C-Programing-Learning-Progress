/* Including Standard I/O library*/
#include <stdio.h>

/*Functions Prototype*/
int intGet_Max(int intNum1 , int intNum2 , int intNum3 , int intNum4);
int intGet_Min(int intNum1 , int intNum2 , int intNum3 , int intNum4);

void main(void)
{
        /*Definition Variables*/
    int intNum1 = 0 , intNum2 = 0 , intNum3 = 0 , intNum4 = 0 ;
        /*Get Numbers from the user*/
    printf("Please Enter First Number: " );
    scanf("%d",&intNum1);
    printf("Please Enter Second Number: " );
    scanf("%d",&intNum2);
    printf("Please Enter Third Number: " );
    scanf("%d",&intNum3);
    printf("Please Enter Fourth Number: " );
    scanf("%d",&intNum4);

        /*Calling Function and Printing The Result*/
    printf("__________________________________________\n");
    printf("The Maximum Number is %d\n" ,intGet_Max(intNum1,intNum2,intNum3,intNum4));
    printf("The Minimum Number is %d\n" ,intGet_Min(intNum1,intNum2,intNum3,intNum4));
}

    /*Functions Implementation*/
int intGet_Max(int intNum1 , int intNum2 , int intNum3 , int intNum4)
{
    if(intNum1 >= intNum2 && intNum1 >= intNum3 && intNum1 >= intNum4)
    {
        return intNum1;
    }
    else if(intNum2 >= intNum1 && intNum2 >= intNum3 && intNum2 >= intNum4)
    {
        return intNum2;
    }
    else if(intNum3 >= intNum1 && intNum3 >= intNum2 && intNum3 >= intNum4)
    {
        return intNum3;
    }
    else
    {
        return intNum4;
    }
    
    
}

int intGet_Min(int intNum1 , int intNum2 , int intNum3 , int intNum4)
{
    if(intNum1 <= intNum2 && intNum1 <= intNum3 && intNum1 <= intNum4)
    {
        return intNum1;
    }
    else if(intNum2 <= intNum1 && intNum2 <= intNum3 && intNum2 <= intNum4)
    {
        return intNum2;
    }
    else if(intNum3 <= intNum1 && intNum3 <= intNum2 && intNum3 <= intNum4)
    {
        return intNum3;
    }
    else
    {
        return intNum4;
    }
}
 