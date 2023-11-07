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
              printf("%5ld\t",(long)current);
              printf("\n");
              current = current->next;
              }
              }

void reverse(){
    struct node *current = head;
    int length = 0;
    if (head == NULL) {
        printf("Cannot reverse an empty list.\n");
        return;
    }
    do{
        length++;
        current = current -> next ;
       }while (current != NULL);
printf("length:%d\n",length);
int a[length];
current =head;
   for(int i=length-1;i>=0;i--)
   {
    a[i] = current -> data;
    current = current -> next ;
   }
                       
 printf("Reversed linked list:");
 for(int i=0;i<length;i++){
     printf("%5d",a[i]);
 }
 printf("\n");
 return;
}				
int main(){
            int ch=0;
            int item;
            int pos;
            while (1){	
            printf("1.Create 2.Display 3.Reverse 4.Exit\n");
            printf("enter choice:");
            scanf("%d",&ch);            
            switch(ch){
            	case 1: printf("enter:");
				        scanf("%d",&item);
            	        create(item);
            	        break;
			    case 2: display();
			            break;
			    case 3: reverse();
                        break;
			    case 4: exit(0);
            		
			}
		}

          return 0;
          
          }
-------------------------------------------------------------------
output:
1.Create 2.Display 3.Reverse 4.Exit
enter choice:1
enter:1
1.Create 2.Display 3.Reverse 4.Exit
enter choice:1
enter:2
1.Create 2.Display 3.Reverse 4.Exit
enter choice:1
enter:3
1.Create 2.Display 3.Reverse 4.Exit
enter choice:2
Elements of Linked list are:
    1	5864160	5864128	
    2	5864192	5864160	
    3	    0	5864192	
1.Create 2.Display 3.Reverse 4.Exit
enter choice:3
length:3
Reversed linked list:    3    2    1
1.Create 2.Display 3.Reverse 4.Exit
enter choice:4

