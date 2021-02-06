/* Including Standard I/O library*/
#include <stdio.h>


/*Prototype*/
void Swap(void);

    /*INILAIZATION Global VARABILES*/
int s32_Number1 = 0 , s32_Number2=0 ;
void main(void)
{


    /*GETTING DATA FROM THE USER*/
    printf("X Before swap : ");
    scanf("%d",&s32_Number1);
   printf("Y Before swap : ");
    scanf("%d",&s32_Number2);

    /*Calling Function*/
    Swap();
    /*Printing output*/
    printf("X after swap %d \n",s32_Number1 );
    printf("Y after swap %d \n",s32_Number2 );

}
    /*INILAIZATION Global VARABILES*/

void Swap(void)
{
    /*
    int s32_temp = 0;

    s32_temp = s32_Number1;
    s32_Number1 = s32_Number2;
    s32_Number2 = s32_temp;
    
    s32_Number1 += s32_Number2;
    s32_Number2 = s32_Number1 - s32_Number1;
    s32_Number1 -= s32_Number2;

    s32_Number1 *= s32_Number2;
    s32_Number2 = s32_Number1 / s32_Number2;
    s32_Number1 /= s32_Number2;
    */
    s32_Number1 ^= s32_Number2 ; 
    s32_Number2 = s32_Number1 ^ s32_Number2 ;
    s32_Number1 ^= s32_Number2 ; 


}