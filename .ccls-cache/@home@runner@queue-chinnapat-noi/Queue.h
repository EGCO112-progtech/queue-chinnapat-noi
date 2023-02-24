#include <stdio.h>
#include <stdlib.h>
#include "Node.h"

typedef struct {
	 NodePtr headPtr,tailPtr;
	int size;
}Queue;

int enqueue_struct(Queue* q,int x,int y){
  Node *new_node=(Node*) malloc(sizeof(Node));
  if(new_node){ 
   new_node->order_number = x;
   new_node->qty = y;
  new_node->nextPtr = NULL;
  if(q->headPtr == NULL)  q->headPtr=new_node;
  else q->tailPtr->nextPtr=new_node;
  q->tailPtr=new_node;
  q->size++;
    }
  /*Finish enqueue */
}


int dequeue_struct(Queue* q){
   NodePtr t=q->headPtr;

  if(q->size>0){
  //printf("qty = %d",t->qty);
  int price;
    int z; 
     //z=k->order_number;
  
    switch(t->order_number)
      {
        case 1:
            printf("Mark 100 Bahts\n");  
            price=t->qty*100; break;
        case 2:
              printf("Son 20 Bahts\n");
              price=t->qty*20; break;
        case 3:
              printf("Pang 50 Bahts\n");
              price=t->qty*50; break;
        default:
              printf("No food\n");
              price=0;
      }
     q->headPtr=t->nextPtr;
  if(q->headPtr==NULL) q->tailPtr=NULL;
     q->size--;
     free(t);
     return price;
    }
   printf("Empty queue");
   return 0;
}

