#include<stdio.h>
#include<stdlib.h>

struct node{
             int data;
             struct node *next;
                     };
struct node *head, *tail = NULL;
                     
 void create(int data){
                               
                               struct node *newnode = (struct node *)malloc(sizeof(struct node));
                               newnode -> data = data;
                               newnode -> next = NULL;
                               if (head == NULL)
                               {
                               head = newnode;
                               tail = newnode;
                               }
                               else
                               {
                               tail->next = newnode;
                               newnode -> next = head;
                               tail = tail -> next;
                               
                               }
                               
                               
                               //printf("element inserted");
                       }
                       
void display(){
              struct node *current = head;
              if (head == NULL){  // list is null
              printf("Empty Linked List");
              }
              else {//list is not null
              printf("Elements of Linked list are:\n");
              do{
              printf("%5d\t", current->data);
              printf("%5ld\t",(long)current->next);
              printf("%5ld\t",(long)current);
              printf("\n");
              current = current->next;
             }while(current!=head);
              
              
              }
              }


                               
                         
int main(){
          
          
          
          create(10);
          create(20);
          create(30);
          create(40);  
          display();
          
          return 0;
          
          }
          

              
          


