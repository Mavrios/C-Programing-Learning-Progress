/*Preprocessor*/
/* Including Standard I/O library*/
#include <stdio.h>
/*Fuctions Prototype*/
void vidBubbleSort(int *arr , int Size);
void swap (int *Num1 , int *Num2);

void main(void)
{
        /*Definition Variables*/
    int intSize = 0 , iteration = 0;
    scanf("%d",&intSize);
    int Arr [intSize];
        /*Get Numbers from the user*/
    for(iteration = 0; iteration < intSize ; iteration++)
    {
        scanf("%d",&Arr[iteration]);
    }
        /*Calling Function*/
        /*Printing The Result*/
    vidBubbleSort(Arr , intSize);


    for(iteration = 0; iteration < intSize ; iteration++)
    {
        printf("Arr[%d] = %d \n" ,iteration , Arr[iteration]);
    }


}

    /*Functions Implementations*/ 

void vidBubbleSort(int *arr , int Size)
{

    for(int iterator = 0; iterator < Size - 1 ; iterator++)
    {
        for(int iterator2 = 0; iterator2 < Size - iterator - 1; iterator2++)
        {
            if(arr[iterator2] > arr[iterator2+1])
            {
                swap(&arr[iterator2] , &arr[iterator2+1]);
            }
        }
    }

}


void swap (int *Num1 , int *Num2)
{
    int temp = *Num1;
    *Num1 = *Num2;
    *Num2 = temp; 

}