/*Preprocessor*/
/* Including Standard I/O library*/
#include <stdio.h>
/*Fuctions Prototype*/
int intScalarMultiplacation(int *PtrArr1 , int *PtrArr2 ,int intSize);

void main(void)
{
        /*Definition Variables*/
    int intIterator = 0 , intSize = 0;
        /*Get Numbers from the user*/
    printf("Please Enter Size of Array : ");
    scanf("%d",&intSize);

    int intArr1 [intSize] , intArr2 [intSize] ;
    printf("Please Enter Array 1 : \n\n");
    for(intIterator = 0 ; intIterator < intSize ; intIterator++ )
    {
        printf("Enter Element %d : ",intIterator+1);
        scanf("%d",&intArr1[intIterator]);
    }
    printf("Please Enter Array 2 : \n\n");
    for(intIterator = 0 ; intIterator < intSize ; intIterator++ )
    {
        printf("Enter Element %d : ",intIterator+1);
        scanf("%d",&intArr2[intIterator]);
    }


        /*Calling Function*/
        /*Printing The Result*/
    printf("The Result of scalar Multiplacation is = %d",intScalarMultiplacation(intArr1 , intArr2 , intSize ));
}

int intScalarMultiplacation(int *PtrArr1 , int *PtrArr2 , int intSize)
{
    int intSum = 0;
    for(int iterator = 0 ; iterator<intSize ; iterator++)
    {
        intSum+=(PtrArr1[iterator]*PtrArr2[iterator]);
    }
    return intSum;
}