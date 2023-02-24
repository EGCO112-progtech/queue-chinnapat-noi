#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.h"

#include "Queue.h"

int main(int argc , char **argv) {
   NodePtr headPtr=NULL;
   NodePtr tailPtr=NULL;
   //For struct Queue
   Queue q;
   q.headPtr=NULL;
   q.tailPtr=NULL;
   q.size=0;
   int i, x;
   int cash,z;
  int a=1;
   

 for(i=1;i<argc;i++){
        if(strcmp(argv[i],"x")==0){
          printf("Custome no.%d\n",a);
          a++;
          x=dequeue_struct(&q);
         //   printf("price %d",x);
          if(x>0){
            printf("You have to pay %d\n",x);
            do{
              printf("Cash :");
              scanf("%d",&cash);
            }while(cash < x );
          printf("Thank you\n");
            int l=cash-x;
          if(cash > x) printf("Change is %d\n",l);
          }
        }
        else {
       enqueue_struct(&q, atoi(argv[i]),atoi(argv[i+1]));
           i++;
        }
   }
   printf("=================================\n");
   if(q.size>0) printf("There are %d ppl left in the queue",q.size);
   else printf("No queue");

  printf("\nClear all nodes\n");
  
while(q.size>0) dequeue_struct(&q);
  
  return 0;
  
}
