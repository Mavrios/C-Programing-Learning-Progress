/*Preprocessor*/
/* Including Standard I/O library*/
#include <stdio.h>

void main(void)
{
        /*Definition Variables*/
    int x = 10 , y = 20 , z = 30 , *p = &x , *q = &y , *r = &z ;
        /*Calling Function*/
        /*Printing The Result*/
    printf("x = %d\n",x);
    printf("y = %d\n",y);
    printf("z = %d\n",z);
    printf("p = %p\n",p);
    printf("q = %p\n",q);
    printf("r = %p\n",r);
    printf("*p = %d\n",*p);
    printf("*q = %d\n",*q);
    printf("*r = %d\n",*r);
    printf("\nSWAPPING POITNERS\n\n");
    r = p;
    p = q;
    q = r;
    printf("x = %d\n",x);
    printf("y = %d\n",y);
    printf("z = %d\n",z);
    printf("p = %p\n",p);
    printf("q = %p\n",q);
    printf("r = %p\n",r);
    printf("*p = %d\n",*p);
    printf("*q = %d\n",*q);
    printf("*r = %d\n",*r);

}

