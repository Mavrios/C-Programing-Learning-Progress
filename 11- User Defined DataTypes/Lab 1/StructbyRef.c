/*Preprocessor*/
/* Including Standard I/O library*/
#include <stdio.h>
#include "STD_TYPES.h"

typedef struct {
    u8 u8ID;
    u16 u16Password;
    f32 f32Sallary;

}emp;

/*Fuctions Prototype*/
void vidIncreament(emp * Employee);

void main(void)
{
        /*Definition Variables*/
    emp Employee = {5,1234,10000};

        /*Get Numbers from the user*/
    printf("BEFORE INCREMENT\n");
    printf("ID = %d\n",Employee.u8ID);
    printf("Password = %d\n",Employee.u16Password);
    printf("Sallary = %.2f\n",Employee.f32Sallary);

    vidIncreament(&Employee);
    printf("-----------------------------------------\n");
    printf("AFTER INCREMENT\n");
    printf("ID = %d\n",Employee.u8ID);
    printf("Password = %d\n",Employee.u16Password);
    printf("Sallary = %.2f\n",Employee.f32Sallary);

}

    /*Functions Implementations*/ 

void vidIncreament(emp *Employee)
{
    Employee->u8ID++;
    Employee->u16Password++;
    Employee->f32Sallary++;
}