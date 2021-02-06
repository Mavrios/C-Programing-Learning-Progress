/* INCLUDING LIBRARIES*/
#include <stdio.h>                                                                              //INCLUDING STANDARD INPUT OUTPUT LIBRARY
#include <stdlib.h>                                                                             //INCLUDING STANDRAD LIBRARY FOR DYNAMIC MEMORY
#include "STD_TYPES.h"                                                                          //INCLUDING STD_TYPES 

/* DECLARE AN STRUCT FOR LINKED LIST */
typedef struct Node{    
    u32 u32Data;                                                                                //VARIBALE HAS THE DATA OF THE NODE
    struct Node * Next;                                                                         //POINTER OF NODE HAS THE NEXT NODE ADDRESS
}Node;                                                

Node * head = NULL;                                                                             //DECLARE AND INITALIZE HEAD WITH NULL

/*Functions Prototypes*/
void vidAddFirst(u32 Cpy_Data);                                                                 //FUNCTION USED TO ADD NODE TO THE START OF LINKED LIST
void vidDeleteFirst(void);                                                                      //FUNCTION USED TO DELETE THE FIRST NODE OF LINKED LIST
void vidAddLast(u32 Cpy_Data);                                                                  //FUNCTION USED TO ADD NODE TO THE END OF LINKED LIST                                                                  
void vidDeleteLast(void);                                                                       //FUNCTION USED TO DELETE THE LAST NODE OF LINKED LIST                                                                       
void vidDeleteNode(u32 Cpy_Data);                                                               //FUNCTION USED TO DELETE ANY NODE HAS THE VALUE CHOOSEN 
void vidAddNode(u32 Cpy_Data,u32 Cpy_Index);                                                    //FUNCTION USED TO ADD NODE TO CERTAIN INDEX START WITH 0 TO THE LAST OF LIST
void vidViewList(void);                                                                         //FUNCTION THE PRINT THE LINKED LIST


void main(void){
    vidAddFirst(11);                                                                            //ADD 11 TO THE START OF THE LINKED LIST                                
    vidAddFirst(11);                                                                            //ADD 11 TO THE START OF THE LINKED LIST   
    vidAddFirst(2);                                                                             //ADD 2 TO THE START OF THE LINKED LIST   
    vidAddFirst(11);                                                                            //ADD 11 TO THE START OF THE LINKED LIST   
    vidAddLast(10);                                                                             //ADD 10 TO THE END OF THE LINKED LIST   
    vidAddLast(11);                                                                             //ADD 11 TO THE END OF THE LINKED LIST   
    vidAddLast(12);                                                                             //ADD 12 TO THE END OF THE LINKED LIST   
    vidAddNode(100,100);                                                                        //ADD 100 TO THE INDEX 100 (IF THAT INDEX EXIST WILL PUT IT IF NOT WILL PUT IT TO THE END OF THE LINKED LIST)
    vidAddNode(100,2);                                                                          //ADD 100 TO THE INDEX 2 (IF THAT INDEX EXIST WILL PUT IT IF NOT WILL PUT IT TO THE END OF THE LINKED LIST)
    vidViewList();                                                                              //PRINTING THE LINKED LIST
    vidDeleteNode(11);                                                                          //DELETING ANY NODE HAS (11) VALUE
    vidDeleteFirst();                                                                           //DELETING THE FIRST NODE
    vidDeleteLast();                                                                            //DELETING THE LAST NODE
    vidViewList();                                                                              //PRINTING THE LINKED LIST                                                                  
    vidDeleteFirst();                                                                           //DELETING THE FIRST NODE
    vidDeleteLast();                                                                            //DELETING THE LAST NODE
    vidViewList();                                                                              //PRINTING THE LINKED LIST
}

/* FUNCTIONS IMPLEMENTATION */
void vidAddFirst(u32 Cpy_Data){
    Node *ptr = (Node *) malloc(sizeof(Node));                                                  //RESERVE SIZE OF STRUCT(NODE) IN HEAP AND STORE THE ADDRESS IN ptr
    ptr->u32Data = Cpy_Data;                                                                    //STORE Cpy_Data IN STRUCT DATA
    ptr->Next = head;                                                                           //STORE THE NEXT ADDRESS (OLD head) IN THE PTR NEXT
    head = ptr;                                                                                 //CHANGE THE HEAD NOW TO NEW FIRST NODE
}

void vidViewList(void){
    
    if(head != NULL){                                                                           //CHECK IF THE head ISN'T EQUAL NULL (LIST EMPTY)
        Node *ptr = head;                                                                       //STORE HEAD TO NEW POINTER CALLED ptr
        do{
            printf("%d\n",ptr->u32Data);                                                        //PRINT THE DATA OF THE NODE
            ptr = ptr -> Next;                                                                  //MOVING TO THE NEXT NODE
        }while(ptr != NULL);                                                                    //LOOP UNTIL THE PTR EQUAL NULL
    }
    else{
        printf("The List is Empty!!\n");                                                        //PRINT THIS IF THE LIST IS EMPTY
    }
    printf("------------------------\n");                                                       //PRINT THIS AFTER FINISHING ALL PRINTS
}

void vidDeleteFirst(void){
    if(head != NULL){                                                                           //CHECK IF THE head ISN'T EQUAL NULL (LIST EMPTY)
        Node *ptr = head;                                                                       //STORE HEAD TO NEW POINTER CALLED ptr
        head = ptr->Next;                                                                       //STORE NEW HEAD AS THE NEXT NODE
        free(ptr);                                                                              //DELETE THE FIRST NODE 
    }
    else{
        printf("Cannot Delete, The List is Empty!!\n");                                         //CHECK IF THE LIST IS ALREADY EMPTY 
    }
}

void vidAddLast(u32 Cpy_Data){
    if(head != NULL){                                                                           //CHECK IF THE head ISN'T EQUAL NULL (LIST EMPTY)
        Node * last = (Node *) malloc(sizeof(Node));                                            //RESERVE SIZE OF STRUCT(NODE) IN HEAP AND STORE THE ADDRESS IN last
        Node * ptr = head;                                                                      //STORE HEAD TO NEW POINTER CALLED ptr
        while(ptr -> Next != NULL){                                                             //LOOP UNTIL GOING TO THE LAST NODE
            ptr = ptr -> Next;                                                                  //KEEP CHANGING PTR ADDRESS TO GET THE LAST NODE ADDRESS
        }
        last->u32Data = Cpy_Data;                                                               //STORE THE DATA IN THE NEW NODE
        last->Next = NULL;                                                                      //STORE THE NEXT POINTER AS NULL
        ptr->Next = last;                                                                       //MAKE THE OLD LAST NODE POINT TO NEW LAST NODE
    }
    else{
        vidAddFirst(Cpy_Data);                                                                  //IF THE LINKED LIST IS EMPTY USE THE FUNCTION ADD FIRST
    }
}

void vidDeleteLast(void){
    Node * ptr = head;                                                                          //STORE HEAD TO NEW POINTER CALLED ptr
    if(head != NULL && ptr ->Next != NULL ){                                                    //CHECK IF THE LINKED LIST ISN'T EMPTY OR HASN'T ONLY ONE NODE    
        while(ptr -> Next -> Next != NULL){                                                     //LOOP UNTIL GOING TO THE NODE BEFORE THE LAST NODE
            ptr = ptr -> Next;                                                                  //CHANGE THE ptr NODE ADDRESS TO THE NEXT ADDRESS 
        }
        free(ptr->Next);                                                                        //DELETE THE LAST NODE
        ptr->Next=NULL;                                                                         //CHANGE THE NEW LAST NODE POINTER TO POINT TO NULL 
    }
    else{
        vidDeleteFirst();                                                                       //USE DELETE FIRST IF THE LINKED LIST IS EMPTY OF HAS ONLY ONE NODE 
    }
}

void vidDeleteNode(u32 Cpy_Data){
    Node * ptr = head;                                                                          //STORE HEAD TO NEW POINTER CALLED ptr
    if(head != NULL){                                                                           //CHECK IF THE head ISN'T EQUAL NULL (LIST EMPTY)
    while(ptr -> u32Data == Cpy_Data){                                                          //LOOP TO CHECK IF THE FIRST NODE DATA EQUAL TO THE cpy_Data
        vidDeleteFirst();                                                                       //USING THE DELETE FIRST FUNCTION TO DELETE FIRST NODE
        ptr = head;                                                                             //STORE HEAD TO NEW POINTER CALLED ptr                                                                              
    }
    Node * temp = NULL;                                                                         //DEFINE A NEW POINTER TO NODE STRUCT WITH NULL 
    while(ptr -> Next != NULL){                                                                 //LOOP TO GO TO THE LAST NODE
        if(ptr -> Next -> u32Data == Cpy_Data){                                                 //CHECK IF THE NEXT NODE DATA EQUAL HE Cpy_Data
            temp = ptr -> Next;                                                                 //STORE THE NEXT NODE ADDRESS TO temp
            ptr -> Next = ptr -> Next -> Next;                                                  //CHANGE THE NEXT ADDRESS TO THE NEW NEXT ADDRESS
            free(temp);                                                                         //DELETE THE REQUESTED NODE
        }
        else{
        ptr = ptr -> Next;                                                                      //CHANGE THE PTR TO THE NEXT PTR ADDRESS
        }
    }
    }
    else{
        printf("Cannot Delete, The List is Empty!!\n");
    }
}

void vidAddNode(u32 Cpy_Data,u32 Cpy_Index){
    if(Cpy_Index == 0){                                                                         //CHECK IF THE INDEX IS THE FIRST INDEX
        vidAddFirst(Cpy_Data);                                                                  //USE THE ADD FIRST FUNCTION
    }
    else{
        Node *ptr = head;                                                                       //STORE HEAD TO NEW POINTER CALLED ptr
        u32 u32Iterator = 0;                                                                    //DECLARE A ITERATOR FOR LOOP
        while(ptr->Next != NULL && u32Iterator++ < Cpy_Index - 1){                              //LOOP UNTIL GETTING TO LAST LAST NODE OR GOING TO THE INDEX
            ptr = ptr -> Next;                                                                  //CHANGE ptr INDEX TO THE NEXT NODE
        }
    	Node * New = (Node *) malloc(sizeof(Node));                                             //RESERVE SIZE OF STRUCT(NODE) IN HEAP AND STORE THE ADDRESS IN last
		New -> u32Data = Cpy_Data ;                                                             //STORE THE DATA INTO Cpy_Data
		New -> Next = ptr -> Next;                                                              //STORE THE NEXT POITNER TO THE NEXT NODE
		ptr -> Next = New ;                                                                     //STORE THE NEXT NODE TO THE NEW NODE
    }
}