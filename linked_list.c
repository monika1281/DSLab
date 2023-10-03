#include<stdio.h>
#include<stdlib.h>

struct node{
             int data;
             struct node *next;
                     };
struct node *head, *tail = NULL;
                     
 void create(int data){
                               
                               struct node *newnode = (struct node *)malloc(sizeof(newnode));
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
                               tail = tail->next;
                               
                               }
                               
                               
                               //printf("element inserted");
                       }
                       
void display(){
              struct node *current = head;
              if (head == NULL){
              printf("Empty Linked List");
              }
              printf("Elements of Linked list are:\n");
              while(current !=NULL)
              {
              printf("%5d\t", current->data);
              printf("%5ld\t",(long)current->next);
              printf("\n");
              current = current->next;
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
          

              
          


