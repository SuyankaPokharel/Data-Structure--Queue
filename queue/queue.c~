#include "queue.h"
#include "boolean.h"
#include <stdio.h>
#include <stdlib.h>

void init_queue(queue *q){
  (*q)= (queue) malloc (sizeof(struct queuenode));
  (*q)->front = NULL;
  (*q)->back = NULL;
}

boolean is_full(void){
  node_pointer newnode;
  newnode = (node_pointer) malloc (sizeof(struct queuenode));
  if(newnode==NULL)
     return TRUE;
  else{
     free(newnode);
     return FALSE;
  }
}

boolean is_empty(queue q){
  if((q->front==NULL)&&(q->back==NULL))
     return TRUE;
  else
     return FALSE;
}

void add(queue *q, int x){                                                                                                        
   node_pointer newnode;
   newnode=(node_pointer) malloc (sizeof(struct queuenode));
   newnode->data=x;
   newnode->next=NULL;
   if(is_empty(*q)){
      (*q)->front= newnode;
      (*q)->back= newnode;
   }
   else{
      (*q)->back->next= newnode;
      (*q)->back= newnode;
   }
}

int fetch(queue *q){
   node_pointer newnode;
   int data_popped;
   newnode = (*q)->front;
   data_popped= newnode->data;
      if((*q)->front==(*q)->back){
         (*q)->front= NULL;
         (*q)->back= NULL;
      }
      else{
         (*q)->front= newnode->next;
      }
      free(newnode);
      return data_popped;
}

void print_queue(queue q){
   node_pointer newnode;
   newnode=q-> front;
   while(newnode !=NULL){
      printf("%d", newnode->data);
      newnode=newnode->next;
   }
}


