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
void insertatbegin(){
                 struct node *newnode = (struct node *)malloc(sizeof(struct node));
                 printf("enter a new node value:");
                 scanf("%d",&newnode->data);
                 newnode->next = head;
                 head = newnode;
                 printf("Elements of Linked list are:\n");
                 while(newnode !=NULL)
                 {
                 printf("%5d\t", newnode->data);
                 printf("%5ld\t",(long)newnode->next);
                 printf("\n");
                 newnode = newnode->next;
                 }
                 
                 }
void insertatpos(int pos){
                struct node *newnode = (struct node *)malloc(sizeof(struct node));
                struct node *current = head;
                struct node *temp = head;
                //int pos;
                //printf("enter pos:");
                //scanf("%d",&pos);
                printf("enter a new node value:");
                scanf("%d",&newnode->data);
                int i;
               
                for (i= 1; i< pos-1; i++)
                { 
                   current = current -> next ;
                }
                newnode -> next = current -> next;
                current -> next = newnode;
                while(temp !=NULL)
                 {
                 printf("%5d\t", temp->data);
                 printf("%5ld\t",(long)temp->next);
                 printf("%5ld\t",(long)temp);
                 printf("\n");
                 temp = temp->next;
                 }
                 }
                
                
                     
              
                         
int main(){
          
          
          
          create(10);
          create(20);
          create(30);
          create(40);  
          display();
          int pos;
          printf("enter pos:");
          scanf("%d",&pos);
          if (pos == 0){
          insertatbegin();
          }
          else if (pos != 0){
          insertatpos(pos);
          }
          return 0;
          
          }
          

              
          


