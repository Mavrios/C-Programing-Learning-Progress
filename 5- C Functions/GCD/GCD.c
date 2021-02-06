/* Including Standard I/O library*/
#include <stdio.h>

/*Functions Prototype*/
int intGDC(int intNum1 , int intNum2);

void main(void)
{
        /*GETTING DATA FROM USER*/
    int intNum1 = 0 , intNum2 = 0 ;
    printf("Please Enter First Number : ");
    scanf("%d",&intNum1);
    printf("Please Enter Second Number : ");
    scanf("%d",&intNum2);
        /*Calling Function and Printing The Result*/
    printf("The GDC is %d",intGDC(intNum1,intNum2));
}

    /*Functions Implementation*/
int intGDC(int intNum1 , int intNum2)
{
    int int_iterator = (intNum1<intNum2 ? intNum1 : intNum2);
    printf("i=%d\n",int_iterator);
    for(int_iterator ; int_iterator>1 ; int_iterator--)
    {
        if (intNum1%int_iterator == 0 && intNum2%int_iterator == 0)
        {
            return int_iterator;
        }
    }
}
  