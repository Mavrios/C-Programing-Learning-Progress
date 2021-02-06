/* Including Standard I/O library*/
#include <stdio.h>

int Add(int Num1 , int Num2);
int Sub(int Num1 , int Num2);
int Mul(int Num1 , int Num2);
int Div(int Num1 , int Num2);

void main(void)
{
    int s32Number1 = 0 , s32Number2 = 0 , s32Resul;
    char s8Operation = 0;
    printf("Please Enter Number 1 : ");
    scanf("%d",&s32Number1);
    printf("Please Enter Number 2 : ");
    scanf("%d",&s32Number2);
    printf("Please Enter Operation : ");
    scanf(" %c" , &s8Operation);
    printf("Hesham");

    switch (s8Operation)
    {
        case '+':
            printf("The Result is %d ",Add(s32Number1 , s32Number2));
            break;
        case '-':
            printf("The Result is %d ",Sub(s32Number1 , s32Number2));
            break;
        case '*':
            printf("The Result is %d ",Mul(s32Number1 , s32Number2));
            break;
        case '/':
            printf("The Result is %d ",Div(s32Number1 , s32Number2));
            break;
        default:
            printf("Wrong Operation!!");
            break;
    }
}

