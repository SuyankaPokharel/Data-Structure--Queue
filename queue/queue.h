#include "boolean.h"
#ifndef QUEUE_H
#define QUEUE_H
typedef struct queuenode{
  int data;
  struct queuenode *next;
  } *node_pointer;
 
typedef struct endpointer{
     node_pointer front;
     node_pointer back;
}*queue;

int menu(void);
void init_queue(queue *);
boolean is_full(void);
boolean is_empty(queue);
void add(queue *,int);
int fetch(queue *);
void print_queue(queue);
#endif









