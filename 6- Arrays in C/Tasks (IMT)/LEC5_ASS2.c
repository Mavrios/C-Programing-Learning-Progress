/*Preprocessor*/
/* Including Standard I/O library*/
#include <stdio.h>
#define SIZE    10


void main(void)
{
        /*Definition Variables*/
    int intClass1[SIZE]={0} , intClass2[SIZE]={0} , intClass3[SIZE]={0}  , intPassedStudent = 0 , intFailedStudent = 0 , intHighestGrade = 0 , intLowestGrade = 0 , intAvgGrade = 0 , intIterator = 0;


        /*CLASS ONE*/
    printf("Class 1 Grade Data \n");         
    for(intIterator = 0 ; intIterator < SIZE ; intIterator++)
    {                                                                              
        printf("Please enter Grade of student number %d : ",intIterator+1);
        scanf("%d",&intClass1[intIterator]);
        if(intClass1[intIterator] > 100 || intClass1[intIterator] < 0 )
        {
            printf("WRONG GRADE\n");
            intIterator--;
        }
        else
        {
            intHighestGrade = intHighestGrade<intClass1[intIterator] ? intClass1[intIterator] : intHighestGrade ;
            if(!intIterator)
            {
                intLowestGrade = intClass1[intIterator];
            }
            else
            {
                intLowestGrade = (intLowestGrade>intClass1[intIterator]) ? intClass1[intIterator] : intLowestGrade ;    
            }

            if(intClass1[intIterator] >= 50)
            {
                intPassedStudent++;
            }
            else
            {
                intFailedStudent++;
            }
            intAvgGrade+=intClass1[intIterator];
        }
    }

        /*CLASS TWO*/
    printf("Class 2 Grade Data \n");
    for(intIterator = 0 ; intIterator < SIZE ; intIterator++)
    {
        printf("Please enter Grade of student number %d : ",intIterator+1);
        scanf("%d",&intClass2[intIterator]);
        if(intClass2[intIterator] > 100 || intClass2[intIterator] < 0 )
        {
            printf("WRONG GRADE\n");
            intIterator--;
        }
        else
        {
            intHighestGrade = intHighestGrade<intClass2[intIterator] ? intClass2[intIterator] : intHighestGrade ;
            intLowestGrade = (intLowestGrade>intClass2[intIterator]) ? intClass2[intIterator] : intLowestGrade ;    

            if(intClass2[intIterator] >= 50)
            {
                intPassedStudent++;
            }
            else
            {
                intFailedStudent++;
            }
            intAvgGrade+=intClass2[intIterator];
        }
    }

        /*CLASS THREE*/
    printf("Class 3 Grade Data \n");
    for(intIterator = 0 ; intIterator < SIZE ; intIterator++)
    {
        printf("Please enter Grade of student number %d : ",intIterator+1);
        scanf("%d",&intClass3[intIterator]);
        if(intClass3[intIterator] > 100 || intClass3[intIterator] < 0 )
        {
            printf("WRONG GRADE\n");
            intIterator--;
        }
        else
        {
            intHighestGrade = intHighestGrade<intClass3[intIterator] ? intClass3[intIterator] : intHighestGrade ;

            intLowestGrade = (intLowestGrade>intClass3[intIterator]) ? intClass3[intIterator] : intLowestGrade ;    

            if(intClass3[intIterator] >= 50)
            {
                intPassedStudent++;
            }
            else
            {
                intFailedStudent++;
            }
            intAvgGrade+=intClass3[intIterator];
        }
    }
        /*Printing The Result*/
    printf("Number of passed students %d\n",intPassedStudent);
    printf("Number of passed students %d\n",intFailedStudent);
    printf("The Highest grade is %d\n",intHighestGrade);
    printf("The Lowest grade is %d\n",intLowestGrade);
    printf("The Average grade is %d\n",intAvgGrade/30);
}
