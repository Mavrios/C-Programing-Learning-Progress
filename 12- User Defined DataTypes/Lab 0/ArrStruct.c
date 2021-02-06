/*Preprocessor*/
/* Including Standard I/O library*/
#include <stdio.h>
#include "STD_TYPES.h"

typedef struct {
    u8 u8ID;
    u16 u16Password;
    u8 f32Sallary;

}emp;

typedef struct {
    u8 u8ID;
    u8 u16Password;
    u16 f32Sallary;

}emp2;

/*Fuctions Prototype*/

void main(void)
{
        /*Definition Variables*/
    printf("Ex1: %d\n", sizeof(emp));
    printf("Ex2: %d\n", sizeof(emp2));

}

    /*Functions Implementations*/ 

