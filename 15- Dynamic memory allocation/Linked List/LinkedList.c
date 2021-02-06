/* Including Standard I/O library*/
#include <stdio.h>
#include "../STD_TYPES.h"
#include <stdlib.h>

typedef struct node {
	
	u32 data ;
	struct node * next ;
	
}mynode ;


#define null 0
mynode * head = null ;

void AddFirst(u32 Copy_Data);
void ViewList(void);
void DeleteFirst(void);
void AddLast(u32 Copy_Data);
void DeleteLast(void);
void DeleteNode(u32 Copy_Data);
void AddNode(u32 Copy_Data , u32 Copy_Index);

void main(void){
	
	AddFirst(1);
	AddFirst(1);
	AddFirst(1);
	AddFirst(1);
	AddFirst(1);
	AddFirst(1);
	AddFirst(1);
	AddFirst(1);
	AddFirst(1);
	AddFirst(50);
	
	ViewList();
	AddNode(0 , 0);
	AddNode(1 , 1);
	AddNode(2 , 2);
	AddNode(3 , 3);
	AddNode(4 , 4);
	AddNode(100 , 100);
	AddNode(4 , 10900);

	DeleteNode(1);
	ViewList();
	
}

void AddFirst(u32 Copy_Data){
	
	mynode * ptr = (mynode *)malloc( sizeof(mynode) );
	
	ptr -> data = Copy_Data ;
	ptr -> next = head ;
	head = ptr ;
}

void ViewList(void){
	
	if(head != null){
		
		mynode * ptr = head ;
		
		do{
			
			printf("%d\n", ptr -> data );
			ptr = ptr -> next ;
			
		}while( ptr != null );
		
	}else{
		printf("Empty List \n");
	}
	
	printf("---------------------\n");
	
}
	

void DeleteFirst(void){
	
	if( head != null ){
		
		mynode * temp = head ;

		head  =  head -> next ;
		
		free(temp);
		
	}else{
		
		printf("Empty List");
		
	}
	
}

void AddLast(u32 Copy_Data){
    if(head != null){
        mynode * ptr = (mynode *) malloc(sizeof(mynode));
        ptr->data = Copy_Data;
        ptr->next = null;
        mynode * temp = head;
        while(temp -> next != null){
            temp = temp -> next;
        }
        temp -> next = ptr;
    }
    else
    {
        AddFirst(Copy_Data);
    }
}

void DeleteLast(void){
	if( head != null ){
		mynode * temp = head ;
        if(temp->next == null){
            free(head);
            head = null;
        }
        else{
        while(temp -> next -> next != null ){
            
            temp = temp -> next;
        }
        mynode * last  = temp->next;
        temp->next = null; 
		free(last);
		
	}
    }else{
		
		printf("Empty List");
		
	}
}


void DeleteNode(u32 Copy_Data){
	mynode * ptr = head;
	mynode * temp = null;
	while(ptr -> data == Copy_Data){
		DeleteFirst();
		ptr = head;
	}
	while ((ptr -> next) != null){
		if(ptr -> next -> data == Copy_Data){
			temp = ptr -> next ;
			ptr -> next = ptr -> next -> next;
			free(temp);
		}
		else{
			ptr = ptr->next;

		}
	}
}

void AddNode(u32 Copy_Data , u32 Copy_Index){
	mynode *ptr = head;
	if(Copy_Index == 0)
	{
		AddFirst(Copy_Data);
	}
	else{
		u32 iterator = 0 ;
		while(iterator++ < Copy_Index - 1 && ptr->next != null){
			ptr= ptr->next;
		}
		mynode * Node = (mynode *) malloc(sizeof(mynode));
		Node -> data = Copy_Data ;
		Node -> next = ptr -> next;
		ptr -> next = Node ;
	}

}