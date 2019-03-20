#include <stdio.h>
#include "queue.h"
#include "boolean.h"
/*
Name: Suyanka Pokharel
Course: Computer Programming II
*/
int menu(void); 

int main(void){
    queue q;
    int choice, data_item;
    init_queue(&q);
    choice = menu();


    while(choice !=4){
      
       switch(choice){
          case 1: if(!is_full()){
                    printf("Enter a data:\n");
                    scanf("%d",&data_item);
                    add(&q,data_item);
                  }
                  else{
                    printf("Error! Queue is full\n");
                  }
                  break;
   
          case 2: if(!is_empty(q)){
                    data_item= fetch(&q);
                    printf("%d is deleted\n",data_item);
                  }
                  else{
                    printf("Error! Queue is empty\n");
                  }
                  break;
      
          case 3:if (!is_empty(q))
                    print_queue(q);
                 else{
                    printf("Error! Queue is empty\n");
                 }
                 break;
          default:
                    printf("%d is not a valid selection\n",choice);
      
       }
    choice= menu();
    }
}
int menu(void){
   int selection;
   printf("1:Add\n");
   printf("2:Fetch\n");
   printf("3:List\n");
   printf("4:Quit\n");
   printf("Enter a selection\n");
   scanf("%d",&selection);
   return selection;
}




          



