//
//  linkedlist.c
//  
//
//  Created by Ryo Kono on 6/26/14.
//
//

#include <stdio.h>
#include <stdlib.h>

struct ll {
    int data;
    struct ll *next;
    
};

typedef struct ll element;

int main(){
    struct ll *head, *current, *temp;
    
    
    head = NULL;
    for (int i=0; i<=4; i++){
        current = (struct ll *)malloc(sizeof(struct ll));
        current -> data = i-4;
        current -> next =  NULL;
        if(i == 0)
            head = current;
        else
            temp->next = current;
        temp = current;
        
    }//for
    
    current = head;
    
    while(current){
        printf("%d ",current -> data);
        current = current -> next;
    }
}