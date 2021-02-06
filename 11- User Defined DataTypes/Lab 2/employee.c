/*Preprocessor*/
/* Including Standard I/O library*/
#include <stdio.h>
#include "STD_TYPES.h"

typedef struct {
    u16 u16Sallary;
    u16 u16Bonus;
    u16 u16Deduction;

}emp;

/*Fuctions Prototype*/

void main(void)
{
        /*Definition Variables*/
    emp Ahmed,Waleed,Amr;
    u16 u16Total = 0;
        /*Get Numbers from the user*/
    printf("Please Enter Ahmed Salary : ");
    scanf("%d",&Ahmed.u16Sallary);
    u16Total += Ahmed.u16Sallary;

    printf("Please Enter Ahmed Bonus : ");
    scanf("%d",&Ahmed.u16Bonus);
    u16Total += Ahmed.u16Bonus;

    printf("Please Enter Ahmed Deduction : ");
    scanf("%d",&Ahmed.u16Deduction);
    u16Total -= Ahmed.u16Deduction;

    
    printf("\nPlease Enter Amr Salary : ");
    scanf("%d",&Amr.u16Sallary);
    u16Total += Amr.u16Sallary;

    printf("Please Enter Amr Bonus : ");
    scanf("%d",&Amr.u16Bonus);
    u16Total += Amr.u16Bonus;

    printf("Please Enter Amr Deduction : ");
    scanf("%d",&Amr.u16Deduction);
    u16Total -= Amr.u16Deduction;



    printf("\nPlease Enter Waleed Salary : ");
    scanf("%d",&Waleed.u16Sallary);
    u16Total += Waleed.u16Sallary;

    printf("Please Enter Waleed Bonus : ");
    scanf("%d",&Waleed.u16Bonus);
    u16Total += Waleed.u16Bonus;

    printf("Please Enter Waleed Deduction : ");
    scanf("%d",&Waleed.u16Deduction);
    u16Total -= Waleed.u16Deduction;

    printf("Total Value Needed is %d",u16Total);
}

    /*Functions Implementations*/ 

