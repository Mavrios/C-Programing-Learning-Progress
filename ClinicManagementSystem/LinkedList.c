
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