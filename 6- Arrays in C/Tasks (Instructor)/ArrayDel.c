/*Preprocessor*/
/* Including Standard I/O library*/
#include <stdio.h>
#define SIZE    10

void vidSwap(int *Num1 , int *Num2);
void main(void)
{
        /*GETTING DATA FROM USER*/
    int intArr[SIZE]={0} , intIterator=0 ;
        /*Get Numbers from the user*/
    for(intIterator = 0 ; intIterator < SIZE ; intIterator++)
    {
        printf("Please enter number %d : ",intIterator+1);
        scanf("%d",&intArr[intIterator]);
    }
    printf("Please Enter Index to delete : ");
    scanf("%d",&intIterator);
    for(intIterator ; intIterator < SIZE ; intIterator++)
    {
        vidSwap(&intArr[intIterator],&intArr[intIterator+1]);
    }
    intArr[SIZE-1]=0;
        /*Printing The Result*/
    for(intIterator = 0 ; intIterator < SIZE ; intIterator++)
    {
        printf("Array Index [%d] = %d  \n",intIterator ,intArr[intIterator]);
    
    }
}

void vidSwap(int *Num1 , int *Num2)
{
    int temp = 0 ; 
    temp = *Num1;
    *Num1 = *Num2;
    *Num2 = temp;
}