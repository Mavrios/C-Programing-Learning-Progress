/* Including Standard I/O library*/
#include <stdio.h>


void main(void)
{
    /*INILAIZATION VARABILES*/
    int s32_hours = 0 , s32_salary = 0;

    /*GETTING DATA FROM THE USER*/
    printf("Please enter Number of hours : ");
    scanf("%d",&s32_hours);

    /*Calculate the salary*/
    s32_salary = s32_hours * 50 ; 
    if(s32_hours<40)
    {
        s32_salary = s32_salary - (s32_salary * 10 / 100) ;
        printf("Your Salary is %d",s32_salary);
    }

    printf("Your Salary is %d",s32_salary);

}