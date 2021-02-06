#ifndef LINKEDLIST_H
#define LINKEDLIST_H

// #include "STD_TYPES.h"
// #include <stdio.h>
// #include <stdlib.h>
#define FALSE   0
#define TRUE    1

typedef struct{
    s8 Name[100];
    u16 Age;
    u16 ID;   
    s8 Gender;
    u8 Reservation;
}Patient;

/* DECLARE AN STRUCT FOR LINKED LIST */
typedef struct Node{    
    Patient u32Data;                                                                             //VARIBALE HAS THE DATA OF THE NODE
    struct Node * Next;                                                                         //POINTER OF NODE HAS THE NEXT NODE ADDRESS
}Node;                                                

Node * head = NULL;                                                                             //DECLARE AND INITALIZE HEAD WITH NULL

/*Functions Prototypes*/
void vidAddFirst(Patient Cpy_Data);                                                             //FUNCTION USED TO ADD NODE TO THE START OF LINKED LIST
void vidAddLast(Patient Cpy_Data);                                                              //FUNCTION USED TO ADD NODE TO THE END OF LINKED LIST                                                                  
void vidViewList(Patient Cpy_Data);                                                             //FUNCTION THE PRINT THE LINKED LIST
u8   u8SearchList(Patient Cpy_Data);
void vidEditList(Patient Cpy_Data);
void vidAddReservationList(Patient Cpy_Data);
void vidCancelReservation(Patient Cpy_Data,u8 *ptrShecdule);
void vidViewReservationList(void);
u8 u8ReservedPatient(Patient Cpy_Data);
#endif