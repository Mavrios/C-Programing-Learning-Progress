#ifndef CLINICMANAGEMENTSYSTEM_H
#define CLINICMANAGEMENTSYSTEM_H


// #define DEBUG
#define PASSWORD                    1234
#define u8PASSWORD_LENGTH           4
#define FALSE                       0
#define TRUE                        1
#define NUMBER_OF_TRIES             3
#define NUMBER_OF_SCHEDULE          6
#define ADD_NEW_PATIENT             1
#define EDIT_PATIENT_RECORD         2
#define RESERVE_SLOT_WITH_DOCTOR    3
#define CANCEL_RESERVATION          4
#define LOGOUT                      5
#define VIEW_PATIENT_RECORD         1
#define VIEW_TODAYS_RESERVATION     2
#define ADMIN_MODE                  2     
u8 u8Iterator = 0;
u8 u8Counter = 0;


void vidAvlSchedule(u8 *ptrSchedule);
u8 u8MakeReservation(u8 *ptrShecdule ,u16 u16Input);






#endif