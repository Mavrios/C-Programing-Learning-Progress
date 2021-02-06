/* Including Standard I/O library*/
#include <stdio.h>

/*Functions Prototype*/
int intAdd(int intNum1 , int intNum2);
int intSubstract(int intNum1 , int intNum2);
int intMultiply(int intNum1 , int intNum2);
int intDivide(int intNum1 , int intNum2);
int intAnd(int intNum1 , int intNum2);
int intOr(int intNum1 , int intNum2);
int intNot(int intNum1);
int intXor(int intNum1 , int intNum2);
int intReminder(int intNum1 , int intNum2);
int intIncrement(int intNum1);
int intDecrement(int intNum1);

void main(void)
{
        /*Definition Variables*/
    int intID = 0 , intNum1 = 0 , intNum2 = 0 ;
        /*Get ID from the user*/
    printf("Please Enter The Operation ID: " );
    scanf("%d",&intID);
        /*Calling Function and Printing The Result*/
    switch(intID)
    {
        /*ADD CASE IS SELECTED*/
        case 1:
            printf("Add operation is selected\n");
            printf("Please Enter First Number: " );
            scanf("%d",&intNum1);
            printf("Please Enter Second Number: " );
            scanf("%d",&intNum2);
            printf("The result of add operation is %d" , intAdd(intNum1,intNum2));
            break;

        /*Substract CASE IS SELECTED*/
        case 2:
            printf("Substract operation is selected\n");
            printf("Please Enter First Number: " );
            scanf("%d",&intNum1);
            printf("Please Enter Second Number: " );
            scanf("%d",&intNum2);
            printf("The result of Substract operation is %d" , intSubstract(intNum1,intNum2));
            break;

        /*Multiply CASE IS SELECTED*/
        case 3:
            printf("Multiply operation is selected\n");
            printf("Please Enter First Number: " );
            scanf("%d",&intNum1);
            printf("Please Enter Second Number: " );
            scanf("%d",&intNum2);
            printf("The result of Multiply operation is %d" , intMultiply(intNum1,intNum2));
            break;

        /*Divide CASE IS SELECTED*/
        case 4:
            printf("Divide operation is selected\n");
            printf("Please Enter First Number: " );
            scanf("%d",&intNum1);
            printf("Please Enter Second Number: " );
            scanf("%d",&intNum2);
            printf("The result of Divide operation is %d" , intDivide(intNum1,intNum2));
            break;    

        /*And CASE IS SELECTED*/
        case 5:
            printf("And operation is selected\n");
            printf("Please Enter First Number: " );
            scanf("%d",&intNum1);
            printf("Please Enter Second Number: " );
            scanf("%d",&intNum2);
            printf("The result of And operation is %d" , intAnd(intNum1,intNum2));
            break;    

        /*Or CASE IS SELECTED*/
        case 6:
            printf("Or operation is selected\n");
            printf("Please Enter First Number: " );
            scanf("%d",&intNum1);
            printf("Please Enter Second Number: " );
            scanf("%d",&intNum2);
            printf("The result of Or operation is %d" , intOr(intNum1,intNum2));
            break;    

        /*Not CASE IS SELECTED*/
        case 7:
            printf("Not operation is selected\n");
            printf("Please Enter Number: " );
            scanf("%d",&intNum1);
            printf("The result of Not operation is %d" , intNot(intNum1));
            break;    

        /*Xor CASE IS SELECTED*/
        case 8:
            printf("Xor operation is selected\n");
            printf("Please Enter First Number: " );
            scanf("%d",&intNum1);
            printf("Please Enter Second Number: " );
            scanf("%d",&intNum2);
            printf("The result of Xor operation is %d" , intXor(intNum1,intNum2));
            break;    

        /*Reminder CASE IS SELECTED*/
        case 9:
            printf("Reminder operation is selected\n");
            printf("Please Enter First Number: " );
            scanf("%d",&intNum1);
            printf("Please Enter Second Number: " );
            scanf("%d",&intNum2);
            printf("The result of Reminder operation is %d" , intReminder(intNum1,intNum2));
            break;    

        /*Increment CASE IS SELECTED*/
        case 10:
            printf("Increment operation is selected\n");
            printf("Please Enter Number: " );
            scanf("%d",&intNum1);
            printf("The result of Increment operation is %d" , intIncrement(intNum1));
            break;    

        /*Decrement CASE IS SELECTED*/
        case 11:
            printf("Decrement operation is selected\n");
            printf("Please Enter Number: ");
            scanf("%d",&intNum1);
            printf("The result of Decrement operation is %d" , intDecrement(intNum1));
            break;    
    }
}

    /*Functions Implementation*/

    /*Add Implementation*/
int intAdd(int intNum1 , int intNum2)
{
    return (intNum1 + intNum2) ;
}
    /*Substract Implementation*/
int intSubstract(int intNum1 , int intNum2)
{
    return (intNum1 - intNum2) ;
}
    /*Multiply Implementation*/
int intMultiply(int intNum1 , int intNum2)
{
    return (intNum1 * intNum2) ;
}
    /*Divide Implementation*/
int intDivide(int intNum1 , int intNum2)
{
    return (intNum1 / intNum2) ;
}
    /*And Implementation*/
int intAnd(int intNum1 , int intNum2)
{
    return (intNum1 & intNum2) ;
}
    /*Or Implementation*/
int intOr(int intNum1 , int intNum2)
{
    return (intNum1 | intNum2) ;
}
    /*Not Implementation*/
int intNot(int intNum1)
{
    return !intNum1;
}
    /*Xor Implementation*/
int intXor(int intNum1 , int intNum2)
{
    return (intNum1 ^ intNum2);
}
    /*Reminder Implementation*/
int intReminder(int intNum1 , int intNum2)
{
    return (intNum1 % intNum2);
}
    /*Increment Implementation*/
int intIncrement(int intNum1)
{
    return (++intNum1);
}
    /*Decrement Implementation*/
int intDecrement(int intNum1)
{
    return (--intNum1);
}
 