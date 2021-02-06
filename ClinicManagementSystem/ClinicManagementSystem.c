#include <stdio.h>
#include <stdlib.h>
#include "STD_TYPES.h"
#include "BIT_MATHS.h"
#include "LinkedList.h"
#include "ClinicManagementSystem.h"




int main(void){
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //                                                      LOGIN SYSTEM                                                                 //
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    u16 u16Input = 0;                                                                                       //VARIABLE TO GET INPUTS FROM THE USER
    u8 u8Flag = 0;                                                                                          //FLAG VARIABLE USED IN ADMIN MODE ACCESS

    /************************************************************
    *                   u8Schedule (BIT MAP)
    *   BIT(0)-> USED TO STORE FIRST  SLOT
    *   BIT(1)-> USED TO STORE SECOND SLOT
    *   BIT(2)-> USED TO STORE THIRD  SLOT
    *   BIT(3)-> USED TO STORE FOURTH SLOT
    *   BIT(4)-> USED TO STORE FIFTH  SLOT
    *   BIT(5)-> USED TO STORE SIXTH  SLOT
    ************************************************************/
    u8 u8Schedule = 0;                                                                                      //8-BIT VARIABLE TO STORE RESERVED SLOTS WITH THE DOCOTR

    u16 u16Password = 0;                                                                                    //VARIABLE TO GET ENTERED PASSWORD FROM THE USER
    Patient Data_Input;                                                                                     //PATIENT STRUCT USED TO STORE USER INPUT
    system("cls");                                                                                          //CLEARING CMD
    printf("\n-------------------------------------------Welcome To Clinic Management System------------------------------------------ \n");
    /*                                                   INFINITE LOOP FOR CLINIC SYSTEM                                                  */
    while(TRUE){
        printf("[1] To Login in User Mode\n");
        printf("[2] To Login in Admin Mode\n\n");
        scanf("%hu",&u16Input);                                                                             //GET USER INPUT FOR ACCESSING ([1]USER OR [2] ADMIN)
        
        while(u16Input> 2 || u16Input < 1){                                                                 //LOOP TO CHECK IF USER ENTERED INVALID CHOICE
            printf("Invalid Choice!!\n");
            printf("[1] To Login in User Mode\n");
            printf("[2] To Login in Admin Mode\n\n");
            scanf("%hu",&u16Input);                                                                         //ASK THE USER TO ENTER VALID INPUT
        }
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //                                                         ADMIN MODE                                                                //
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        if(u16Input == ADMIN_MODE){
            system("cls");                                                                                  //CLEARING CMD
            printf("\n-------------------------------------------------You Choosed Admin Mode-------------------------------------------------\n");
            for(u8Iterator = 0 ; u8Iterator < NUMBER_OF_TRIES ; u8Iterator++){                              //LOOP TO CALCUTE NUMBER OF TRIES THAT USER TAKE TO ENTER THE RIGHT PASSWORD
                printf("Please Enter Password\n");
                /*                                              USED IN DEBUGGING                                                         */
                #ifdef DEBUG
                    printf("Iterator = %d" , u8Iterator);
                #endif
                scanf("%hu",&u16Password);                                                                  //ASK USER TO ENTER ADMIN PASSWORD
                if(u16Password == PASSWORD){                                                                //CHECK IF THE PASSWORD RIGHT
                    SET_BIT(u8Flag,0);                                                                      //RAISE THE FLAG THAT THE USER ENTERED RIGHT PASSWORD
                    break;                                                                                  //BREAKING THE LOOP
                }
                else{                                                                                       //ELSE
                    printf("Wrong Password!!\n");
                    if(u8Iterator == (NUMBER_OF_TRIES - 1)){                                                //CHECK IF THE USER EXICEST THE 3 TRIES
                        system("cls");                                                                      //CLEARING CMD
                        printf("\n----------------------------------------------------No More Tries !!----------------------------------------------------\n");
                        return 0;                                                                           //CLOSE THE PROGRAM
                    }
                    else{
                        printf("You have %d more tries. Be Care!!\n",NUMBER_OF_TRIES - u8Iterator - 1);     //WARNING FOR THE USER WITH THE REMAINING NUMBER OF TRIES TO ENTER THE PASSWORD
                        printf("*********************************\n");
                    }
                }
            }

        if(GET_BIT(u8Flag , 0)){                                                                            //CHECK THE FLAG THAT USER ENTERED THE RIGHT PASSWORD
            system("cls");
            printf("\n-------------------------------------------------Welcome To Admin Mode.-------------------------------------------------\n\n");
            /*                                                   INFINITE LOOP FOR ADMIN MODE                                                     */
            while(TRUE){
            printf("[1] Add new patient record\n");
            printf("[2] Edit patient record\n");
            printf("[3] Reserve a slot with the doctor\n");
            printf("[4] Cancel reservation\n");
            printf("[5] Logout\n\n");
            scanf("%hu",&u16Input);                                                                         //ASK THE USER TO ENTER CHOICE
            while(u16Input> 5 || u16Input < 1){                                                             //LOOP TO CHECH IF THE USER ENTERED INVALID CHOICE
                printf("\nINVALID CHOICE!!\n\n");
                printf("[1] Add new patient record\n");
                printf("[2] Edit patient record\n");
                printf("[3] Reserve a slot with the doctor\n");
                printf("[4] Cancel reservation\n");
                printf("[5] Logout\n\n");
                scanf("%hu",&u16Input);                                                                     //ASK THE USER TO ENTER A VALID CHOICE
            }

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //                                                   ADDING NEW PATIENT                                                              //
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

            if(u16Input == ADD_NEW_PATIENT ){
                system("cls");                                                                              //CLEARING CMD
                printf("\n-------------------------------------------------Add new patient record-------------------------------------------------\n\n");
                printf("Please Enter The Patient Name: ");
                scanf("%s",&Data_Input.Name);                                                               //ASK THE ADMIN TO ENTER THE NAME OF PATIENT
                printf("Please Enter The Patient Age: ");
                scanf("%hu",&Data_Input.Age);                                                               //ASK THE ADMIN TO ENTER THE AGE OF PATIENT
                printf("Please Enter The Patient Gender [M or F]: ");
                scanf(" %c",&Data_Input.Gender);                                                            //ASK THE ADMIN TO ENTER THE GENDER OF PATIENT
                printf("Please Enter The Patient ID: ");
                scanf("%hu",&Data_Input.ID);                                                                //ASK THE ADMIN TO ENTER THE ID OF PATIENT


                if(u8SearchList(Data_Input)){                                                               //CHECK IF THE ID IS EXISTED
                    printf("Existed ID!!\n");
                    printf("Entry has been rejected!!\n\n\n");
                }
                else{                                                                                       //IF THE ID IN VALID
                    system("cls");                                                                          //CLEAR CMD
                    vidAddLast(Data_Input);                                                                 //STORE PATIENT DATA INTO LIST
                    printf("\nSucessful entry\n");
                    printf("Patient Data has been saved\n\n");
                    // system("cls");
                    printf("\n-------------------------------------------------------Admin Mode-------------------------------------------------------\n\n");
                }
            }

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //                                                  EDIT PATIENT RECORD                                                              //
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

            else if(u16Input == EDIT_PATIENT_RECORD){
                system("cls");                                                                              //CLEAR CMD
                printf("\n---------------------------------------------------Edit patient record--------------------------------------------------\n\n");
                printf("Please Enter The Patient ID: ");                                                    
                scanf("%hu",&Data_Input.ID);                                                                //ASK ADMIN TO ENTER THE PATIENT ID
                if(u8SearchList(Data_Input)){                                                               //CHECK IF THE ID IS VALID
                    printf("Patient Found!! \n\n");                                                          
                    vidViewList(Data_Input);                                                                //PRINTING THE PATIENT DATA 
                    printf("\n");
                    printf("Please Enter The Patient Name: ");
                    scanf("%s",&Data_Input.Name);                                                           //ASK THE ADMIN TO ENTER THE EDITED PATIENT NAME
                    printf("Please Enter The Patient Age: ");
                    scanf("%hu",&Data_Input.Age);                                                           //ASK THE ADMIN TO ENTER THE EDITED PATIENT AGE
                    printf("Please Enter The Patient Gender [M or F]: ");
                    scanf(" %c",&Data_Input.Gender);                                                        //ASK THE ADMIN TO ENTER THE EDITED PATIENT GENDER
                    vidEditList(Data_Input);                                                                //FUNCTION TO EDIT PATIENT LIST DATA
                    system("cls");                                                                          //CLEAR CMD
                    puts("");                                                                               //PRINT NEWLINE
                    vidViewList(Data_Input);                                                                //PRINT EDITED PATIENT DATA
                    printf("\n-------------------------------------------------------Admin Mode-------------------------------------------------------\n\n");

                }
                else{                                                                                       //IF INVALID ID
                    system("cls");                                                                          //CLEAR CMD 
                    printf("\nThe Patient ID not exist!! \n");
                    printf("\n-------------------------------------------------------Admin Mode-------------------------------------------------------\n\n");
                }
            }

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //                                             RESERVE A SLOT WITH THE DOCTOR                                                        //
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

            else if(u16Input == RESERVE_SLOT_WITH_DOCTOR){
                system("cls");                                                                              //CLEAR CMD
                printf("\n---------------------------------------------Reserve a slot with the doctor---------------------------------------------\n\n");
                printf("Please Enter The Patient ID: ");
                scanf("%hu",&Data_Input.ID);                                                                //ASK ADMIN TO ENTER PATIENT ID
                if(u8SearchList(Data_Input)){                                                               //CHECK IF VALID ID
                    if(u8ReservedPatient(Data_Input)){                                                      //CHECK IF THE PATIENT IS ALREADY RESERVED A SLOT
                        system("cls");                                                                      //CLEAN CMD
                        printf("\nThe Patient is already reserved a slot with the doctor!!\n");
                        printf("\n-------------------------------------------------------Admin Mode-------------------------------------------------------\n\n");
                    }
                    else{                                                                                   //IF NOT RESERVED BEFORE 
                    vidAvlSchedule(&u8Schedule);                                                            //PRINT THE AVAILABLE SCHEDULE TIME
                    printf("\nChoose the suitable time: ");
                    scanf("%hu",&u16Input);                                                                 //ASK THE ADMIN TO ENTER SUITABLE TIME
                    u16Input = u8MakeReservation(&u8Schedule,u16Input);
                    if(u16Input != 0xFF){
                        SET_BIT(Data_Input.Reservation,u16Input);                                           //STORE THE RESERVED TIME INTO VARIABLE
                        vidAddReservationList(Data_Input);                                                  //STORE THE RESERVED TIME TO THE PATIENT LIST
                        Data_Input.Reservation=FALSE;                                                       //RESET
                    }
                /*                                              USED IN DEBUGGING                                                         */
                    #ifdef DEBUG
                    vidViewList(Data_Input);
                    #endif
                    printf("\n-------------------------------------------------------Admin Mode-------------------------------------------------------\n\n");
                    
                    }
                }
                else{
                    system("cls");                                                                          //CLEAN CMD
                    printf("\nThe Patient ID not exist!! \n");
                    printf("\n-------------------------------------------------------Admin Mode-------------------------------------------------------\n\n");
                }
            }

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //                                                      CANCEL RESERVATION                                                           //
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            else if(u16Input == CANCEL_RESERVATION){                
                system("cls");                                                                              //CLEAN CMD
                printf("\n---------------------------------------------------CANCEL RESERVATION---------------------------------------------------\n\n");
                printf("Please Enter The Patient ID: ");
                scanf("%hu",&Data_Input.ID);                                                                //ASK THE ADMIN TO ENTER THE PATIENT ID
                if(u8SearchList(Data_Input)){                                                               //CHECK IF THE ID IS VALID
                    vidCancelReservation(Data_Input,&u8Schedule);                                           //CANCELING THE SCHEDULE AND MAKE THE TIME AVL AGAIN
                    printf("The Reservation Canceled Succesfully!!\n\n");
                    printf("\n-------------------------------------------------------Admin Mode-------------------------------------------------------\n\n");
                /*                                              USED IN DEBUGGING                                                         */
                    #ifdef DEBUG
                    vidAvlSchedule(&u8Schedule);
                    vidViewList(Data_Input);
                    #endif

                }
                else{
                    system("cls");                                                                          //CLEAR CMD
                    printf("\nThe Patient ID not exist!! \n");                             
                    printf("\n-------------------------------------------------------Admin Mode-------------------------------------------------------\n\n");
                }
            }

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //                                                            LOGOUT                                                                 //
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            else if(u16Input == LOGOUT){
                system("cls");                                                                              //CLEAR CMD
                printf("\n-------------------------------------------Welcome To Clinic Management System------------------------------------------ \n");
                break;                                                                                      //BREAK THE INFITIE LOOP TO GET BACK TO MAIN MENU
                
            }



            }

        }

    }

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //                                                          USER MODE                                                                //
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        else{
            system("cls");                                                                                  //CLEAR CMD
            printf("\n---------------------------------------------------Welcome To User Mode-------------------------------------------------\n");
            // while(TRUE){
                printf("[1] View Patient Record\n");                                                    
                printf("[2] View Today Reservation\n\n");
                scanf("%hu",&u16Input);                                                                     //ASK USER TO ENTER MENU CHOICE
                while(u16Input> 2 || u16Input < 1){                                                         //CHECK IF THE INPUT IS INVALID
                    printf("\nINVALID CHOICE!!\n\n");
                    printf("[1] View Patient Record\n");
                    printf("[2] View Today Reservation\n\n");
                    scanf("%hu",&u16Input);                                                                 //ASK THE USER TO ENTER AGAIN
                }
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //                                                     VIEW PATIENT RECORD                                                           //
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                if(u16Input == VIEW_PATIENT_RECORD){
                    system("cls");                                                                          //CLEAR CMD
                    printf("\n----------------------------------------------------View Patient Record-------------------------------------------------\n");
                    printf("Please Enter The Patient ID: ");
                    scanf("%hu",&Data_Input.ID);                                                            //ASK THE USER TO ENTER THE ID
                    if(u8SearchList(Data_Input)){                                                           //CHECK IF THE ID IS VALID
                        vidViewList(Data_Input);                                                            //PRINT THE PATIENT INFORMATION
                    }
                    else{                                                                                   //IF THE ID IS INVALID
                        system("cls");                                                                      //CLEAR CMD
                        printf("\nThe Patient ID not exist!! \n");
                        printf("\n--------------------------------------------------------User Mode-------------------------------------------------------\n\n");
                    }
                }
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //                                                    VIEW TODAY RESERVATION                                                         //
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                if(u16Input == VIEW_TODAYS_RESERVATION){
                    system("cls");                                                                          //CLEAR CMD
                    printf("\n-------------------------------------------------View Today Reservation-------------------------------------------------\n");
                    vidViewReservationList();                                                               //PRINT ALL OF THE RESERVATION ATTACHED WITH ID
                }
        // }
        printf("\n-------------------------------------------Welcome To Clinic Management System------------------------------------------ \n");

        }
    }
}








    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //                                                   FUNCTIONS IMPLEMENTATION                                                        //
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void vidAvlSchedule(u8 *ptrSchedule){
    u8Counter = 0;                                                                                          //COUNTER USED TO CHECK THE RESERVED SLOTS
    printf("\nThe available reservation slots: \n");
    if(*ptrSchedule == 0){                                                                                  //IF SCHEDULE = 0 THAT'S MEAN THERE'S NO ONE RESERVED YET
        printf("[0] 2:00 PM - 2:30 PM\n");
        printf("[1] 2:30 PM - 3:00 PM\n");
        printf("[2] 3:00 PM - 3:30 PM\n");
        printf("[3] 3:30 PM - 4:00 PM\n");
        printf("[4] 4:00 PM - 4:30 PM\n");
        printf("[5] 4:30 PM - 5:00 PM\n");
    }
    else{                                                                                                   //IF THERE'S RESERVED SLOTS
        for(u8Iterator = 0 ; u8Iterator < NUMBER_OF_SCHEDULE ; u8Iterator++){                               //LOOP TO CHECK FOR ACTIVE BITS IN SCHEDULE
            if(GET_BIT(*ptrSchedule,u8Iterator)){                                                           //CHECK IF THE BIT NO.(ITERATOR) IS ACTIVE
                #ifdef DEBUG
                printf("Iterator= %d\t",u8Iterator);
                printf("GET_BIT(%d) = %d\n",*ptrSchedule,GET_BIT(*ptrSchedule,u8Iterator));
                #endif
                u8Counter++;                                                                                //INCREAMENT THE COUNTER
            }
            else{                                                                                           //IF THE BIT IS LOW
                switch(u8Iterator){                                                                         //CHECK THE SWITCH AND PRINT THE AVAILABLE TIMES
                    case 0:
                        printf("[%d] 2:00 PM - 2:30 PM\n",u8Iterator - u8Counter);
                        break;
                    case 1:
                        printf("[%d] 2:30 PM - 3:00 PM\n",u8Iterator - u8Counter);
                        break;
                    case 2:
                        printf("[%d] 3:00 PM - 3:30 PM\n",u8Iterator - u8Counter);
                        break;
                    case 3:
                        printf("[%d] 3:30 PM - 4:00 PM\n",u8Iterator - u8Counter);
                        break;
                    case 4:
                        printf("[%d] 4:00 PM - 4:30 PM\n",u8Iterator - u8Counter);
                        break;
                    case 5:
                        printf("[%d] 4:30 PM - 5:00 PM\n",u8Iterator - u8Counter);
                        break;
                }
            }
        }
    }
}


u8 u8MakeReservation(u8 *ptrSchedule ,u16 u16Input){
    if(u16Input>NUMBER_OF_SCHEDULE - u8Counter - 1){                                                        //CHECK IF THE USER INPUT INVALID
        system("cls");
        printf("\nInvalid TIME!!\n");                                               
        return 0xFF;
    }
    else{                                                                                                   //ELSE THAT MEAN USER INPUT IS VALID                        
        for(u8Iterator=0;u8Iterator< NUMBER_OF_SCHEDULE; u8Iterator++){                                     //LOOP IN THE BITS OF PTR SCHEDULE
            if(!GET_BIT(*ptrSchedule,u8Iterator)){                                                          //CHECK IF THE BIT IS INACTIVE
                if(u16Input){                                                                               //CHECK IF USER INPUT NOT ZERO
                    u16Input--;                                                                             //DECREMENTING 
                }
                else{                                                                                       //THAT MEAN THE LOOP REACHED TO DESERVED BIT
                    SET_BIT(*ptrSchedule,u8Iterator);                                                       //SET BIT IN PTR SCHEDULE
                    system("cls");                                                                          //CLEAR CMD
                    printf("Successful Reservation\n\n"); 
                    return u8Iterator;                                                                      //RETURN BIT NUMBER
                }
            }
        }
    }
}


void vidCancelReservation(Patient Cpy_Data,u8 *ptrSchedule){

    Node *ptr = head;                                                                                       //STORE LIST HEAD IN PTR
    while(ptr != NULL){                                                                                     //LOOP UNTIL REACH THE END OF THE LIST
            if(ptr->u32Data.ID == Cpy_Data.ID){                                                             //CHECK IF NODE ID EQUAL THE REQUIRED ID
                break;                                                                                      //BREAKING LOOP
            }
            ptr=ptr->Next;                                                                                  //SWITCH TO THE NEXT NODE
    }
    for(u8Iterator = 0 ; u8Iterator < NUMBER_OF_SCHEDULE ; u8Iterator++){                                   //LOOP TO CHECK THE ACTIVE RESERVED BIT
        if(GET_BIT(ptr->u32Data.Reservation,u8Iterator)){                                                   //CHECK IF THE BIT IS ACTIVE TO GET SCHEDULE TIME

            #ifdef DEBUG
            printf("\nSchedule = %d\n",*ptrSchedule);
            #endif

            CLR_BIT(*ptrSchedule,u8Iterator);                                                               //CLEARING THE BIT

            #ifdef DEBUG
            printf("\nSchedule = %d\n",*ptrSchedule);
            #endif
            ptr->u32Data.Reservation = 0;                                                                   //RESETING THE RESERVATION INTO ZERO
            break;                                                                                          //BREAKING FORM THE LOOP
        }
    }

}

u8 u8ReservedPatient(Patient Cpy_Data){
    Node *ptr = head;                                                                                       //STORE LIST HEAD IN PTR
    while(ptr != NULL){                                                                                     //LOOP UNTIL REACH THE END OF THE LIST
        if(ptr->u32Data.ID == Cpy_Data.ID){                                                                 //CHECK IF NODE ID EQUAL THE REQUIRED ID
            break;                                                                                          //BREAKING LOOP
        }
        ptr=ptr->Next;                                                                                      //SWITCH TO THE NEXT NODE
    }
    if(ptr->u32Data.Reservation != 0){                                                                      //CHECK IF THE PATIENT RESERVED ANY SLOT
        return TRUE;                                                                                        //IF RESERVED RETURN TRUE
    }
    else{
        return FALSE;                                                                                       //IF NOT RESERVED RETURN FALSE
    }
}

void vidViewReservationList(void){
    if(head != NULL){                                                                                       //CHECK IF THE LIST IS EMPTY
        Node *ptr = head;                                                                                   //STORE LIST HEAD IN PTR
        while(ptr != NULL ){                                                                                //LOOP UNTIL REACH THE END OF THE LIST
            if(ptr->u32Data.Reservation == 0){                                                              //CHECK IF THIS PATIANT DIDN'T RESERVE SLOT
                ptr = ptr->Next;                                                                            //SWITCH INTO THE NEXT NODE
                continue;                                                                                   //GO TO THE NEXT ITERATOR
            }
            else{
                for(u8Iterator = 0 ; u8Iterator < NUMBER_OF_SCHEDULE ; u8Iterator++){                       //LOOP TO CHECK THE RESERVED TIME
                    if(GET_BIT(ptr->u32Data.Reservation,u8Iterator)){                                       //CHECK THE BITS AND PRINT THE TIME
                        switch(u8Iterator){
                            case 0:
                                printf("ID: %d - Reservation: 2:00 PM - 2:30 PM\n",ptr->u32Data.ID);
                                break;
                            case 1:
                                printf("ID: %d - Reservation: 2:30 PM - 3:00 PM\n",ptr->u32Data.ID);
                                break;
                            case 2:
                                printf("ID: %d - Reservation: 3:00 PM - 3:30 PM\n",ptr->u32Data.ID);
                                break;
                            case 3:
                                printf("ID: %d - Reservation: 3:30 PM - 4:00 PM\n",ptr->u32Data.ID);
                                break;
                            case 4:
                                printf("ID: %d - Reservation: 4:00 PM - 4:30 PM\n",ptr->u32Data.ID);
                                break;
                            case 5:
                                printf("ID: %d - Reservation: 4:30 PM - 5:00 PM\n",ptr->u32Data.ID);
                                break;
                        }
                        }
                }
            }
            ptr = ptr->Next;                                                                                //SWITCH TO THE NEXT NODE
        } 
    }
}



void vidAddFirst(Patient Cpy_Data){
    Node *ptr = (Node *) malloc(sizeof(Node));                                                              //RESERVE SIZE OF STRUCT(NODE) IN HEAP AND STORE THE ADDRESS IN ptr
    ptr->u32Data = Cpy_Data;                                                                                //STORE Cpy_Data IN STRUCT DATA
    ptr->Next = head;                                                                                       //STORE THE NEXT ADDRESS (OLD head) IN THE PTR NEXT
    head = ptr;                                                                                             //CHANGE THE HEAD NOW TO NEW FIRST NODE
}

void vidViewList(Patient Cpy_Data){
    if(head != NULL){                                                                                       //CHECK IF THE head ISN'T EQUAL NULL (LIST EMPTY)
        Node *ptr = head;                                                                                   //STORE HEAD TO NEW POINTER CALLED ptr
        while(ptr != NULL){                                                                                 //LOOP UNTIL REACH THE END OF THE LIST                                                 
            if(ptr->u32Data.ID == Cpy_Data.ID){                                                             //CHECK IF THE ID EQUAL TO REQUIRED ID
                u8Iterator = 0;                                                                             //RESET ITERATOR
                printf("ID: %d\n",ptr->u32Data.ID);                                                         //PRINT THE ID OF THE PATIENT 
                printf("Name: ");
                while(ptr->u32Data.Name[u8Iterator]!='\0'){
                    printf("%c",ptr->u32Data.Name[u8Iterator++]);                                           //PRINT THE NAME OF THE PATIENT
                }
                printf("\nAge: %d\n",ptr->u32Data.Age);                                                     //PRINT THE AGE OF THE PATIENT
                printf("Gender: %c\n",ptr->u32Data.Gender);                                                 //PRINT THE GENDER OF THE PATIENT


                for(u8Iterator = 0 ; u8Iterator < NUMBER_OF_SCHEDULE ; u8Iterator++){                       //LOOP TO PRINT THE RESERVED TIME IF AVL 
                    if(GET_BIT(ptr->u32Data.Reservation,u8Iterator)){
                        switch(u8Iterator){
                            case 0:
                                printf("Reservation: 2:00 PM - 2:30 PM\n");
                                break;
                            case 1:
                                printf("Reservation: 2:30 PM - 3:00 PM\n");
                                break;
                            case 2:
                                printf("Reservation: 3:00 PM - 3:30 PM\n");
                                break;
                            case 3:
                                printf("Reservation: 3:30 PM - 4:00 PM\n");
                                break;
                            case 4:
                                printf("Reservation: 4:00 PM - 4:30 PM\n");
                                break;
                            case 5:
                                printf("Reservation: 4:30 PM - 5:00 PM\n");
                                break;
                    }
                    }
                    
            }
            }
            ptr=ptr->Next;                                                                                  //SWITCH TO THE NEXT NODE
        }

    }
    else{
        printf("There's No Patient Recorded!!\n");                                                          //PRINT THIS IF THE LIST IS EMPTY
    }
    // printf("------------------------\n");                                                                //PRINT THIS AFTER FINISHING ALL PRINTS
}


void vidEditList(Patient Cpy_Data){
    Node *ptr = head;                                                                                       //STORE HEAD TO NEW POINTER CALLED ptr
    while(ptr != NULL){                                                                                     //LOOP UNTIL REACH THE END OF THE LIST  
            if(ptr->u32Data.ID == Cpy_Data.ID){                                                             //CHECK IF THE ID EQUAL TO REQUIRED ID
                ptr->u32Data = Cpy_Data;                                                                    //COPY THE NEW DATA INTO THE PATIENT LIST
                break;                                                                                      //BREAKING THE LOOP
            }
            ptr=ptr->Next;                                                                                  //SWITCH THE NODE TO NEXT NODE
    }
}

void vidAddReservationList(Patient Cpy_Data){
    Node *ptr = head;                                                                                       //STORE HEAD TO NEW POINTER CALLED ptr
    while(ptr != NULL){                                                                                     //LOOP UNTIL REACH THE END OF THE LIST  
            if(ptr->u32Data.ID == Cpy_Data.ID){                                                             //CHECK IF THE ID EQUAL TO REQUIRED ID
                ptr->u32Data.Reservation = Cpy_Data.Reservation;                                            //STORE THE THE RESERVATION INTO THE PATIENT LIST
                break;                                                                                      //BREAKING THE LOOP
            }
            ptr=ptr->Next;                                                                                  //SWITCH THE NODE TO NEXT NODE
    }
}
void vidAddLast(Patient Cpy_Data){
    if(head != NULL){                                                                                       //CHECK IF THE head ISN'T EQUAL NULL (LIST EMPTY)
        Node * last = (Node *) malloc(sizeof(Node));                                                        //RESERVE SIZE OF STRUCT(NODE) IN HEAP AND STORE THE ADDRESS IN last
        Node * ptr = head;                                                                                  //STORE HEAD TO NEW POINTER CALLED ptr
        while(ptr -> Next != NULL){                                                                         //LOOP UNTIL GOING TO THE LAST NODE
            ptr = ptr -> Next;                                                                              //KEEP CHANGING PTR ADDRESS TO GET THE LAST NODE ADDRESS
        }
        last->u32Data = Cpy_Data;                                                                           //STORE THE DATA IN THE NEW NODE
        last->Next = NULL;                                                                                  //STORE THE NEXT POINTER AS NULL
        ptr->Next = last;                                                                                   //MAKE THE OLD LAST NODE POINT TO NEW LAST NODE
    }
    else{
        vidAddFirst(Cpy_Data);                                                                              //IF THE LINKED LIST IS EMPTY USE THE FUNCTION ADD FIRST
    }
}



u8   u8SearchList(Patient Cpy_Data){
    Node *ptr = head;                                                                                       //STORE HEAD TO NEW POINTER CALLED ptr
    while(ptr != NULL){                                                                                     //LOOP UNTIL REACH THE END OF THE LIST  
        if(ptr->u32Data.ID == Cpy_Data.ID){                                                                 //CHECK IF THE ID EQUAL TO REQUIRED ID
            return TRUE;                                                                                    //RETURN TRUE
        }
        ptr= ptr->Next;                                                                                     //SWITCH TO THE NEXT NODE
    }

        return FALSE;                                                                                       //RETURN FALSE
}