/* Including Standard I/O library*/
#include <stdio.h>
int factorial(int s32Number);

int fact = 1;
void main(void)
{
    int s32Number = 0;
    scanf("%d",&s32Number);
    printf("The Factorial is %d ", factorial(s32Number));
}

int factorial(int s32Number)
{
    if(s32Number <= 1)
    {
    return 1;
    }

    return s32Number * factorial(s32Number - 1);
}