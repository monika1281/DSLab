#include<stdio.h>
#include<stdlib.h>

struct node{
             int data;
             struct node *prev;
             struct node *next;
                     };
struct node *head, *tail = NULL;
                     
 void create(int data){       
                               struct node *newnode = (struct node *)malloc(sizeof(newnode));
                               newnode -> data = data;
                               newnode -> prev = NULL;
                               newnode -> next = NULL;
                               if (head == NULL)
                               {
                               head = newnode;
                               tail = newnode;
                               }
                               else
                               {
                               newnode -> prev = tail;
                               tail->next = newnode;
                               tail = newnode;
                               
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
              printf("%5ld\t",(long)current->prev);
              printf("%5ld\t",(long)current->next);
              printf("%5ld\t",(long)current);
              printf("\n");
              current = current->next;
              }
              }
void insert(int pos){
	                struct node *newnode = (struct node *)malloc(sizeof(struct node));
                    printf("enter a new node value:");
                    scanf("%d",&newnode->data);	                
	                if (pos == 1){
	                	newnode->next = head;
	                	head -> prev = newnode;
                        head = newnode;
                        head -> prev = NULL;
					}
					else{
						struct node *current = head;
						int i;               
                  for (i= 1; i< pos-1; i++)
                { 
                   current = current -> next ;
                }
                newnode -> next = current -> next;
                newnode -> prev = current;
                current -> next = newnode;
                current -> next ->next -> prev = newnode;
				}
}
void delete(int pos)
{
	                struct node *temp = head;
	                struct node *current = head;
	                int length=0;
	                int i;
					while (current != NULL){
						length++;
						current = current -> next ;
					}
					printf("length: %d\n",length);
	                if (pos == 1){
	                	temp = head;
	                	head = head -> next;
	                	temp -> next = NULL;
	                	head -> prev = NULL;
					}
					else if (pos == length) {
    current = head;
    while (current->next != tail) {
        current = current->next;
    }
    current->next->prev = NULL;
    current->next = NULL;
    tail = current;
}

					
					else{
						temp = head;
						for(i= 1; i< pos-1; i++)
                       { 
                        temp = temp -> next;
                       }
                      temp->next-> next -> prev = temp ; 
                      temp->next = temp -> next -> next; 
					}
	
}

void linear_search(int key){
	                    struct node *current = head;
	                    int length=0;
	                    while (current != NULL){
						length++;
						current = current -> next ;
					}
					current = head;
					int i ;
					for (i = 1; i<=length; i++){
					   if (current -> data == key){
					   	printf("element found at %d pos\n",i);
					   	return;
					   }
					   else{
					   	current = current->next;
					   }	
					}
					if (i > length) {
                        printf("Element not found in the linked list.\n");
    }					
}
                                                                  
int main(){
            int ch=0;
            int item;
            int pos;
            while (ch != 6){	
            printf("1.Create 2.Insert 3.Delete 4.Display 5.Searching 6.Exit\n");
            printf("enter choice:");
            scanf("%d",&ch);            
            switch(ch){
            	case 1: printf("enter:");
				        scanf("%d",&item);
            	        create(item);
            	        break;
            	case 2: printf("enter pos:");
            	        scanf("%d",&pos);
            	        insert(pos);
            	        break;
			    case 3: printf("enter pos:");
            	        scanf("%d",&pos);
			        	delete(pos);
			            break;
			    case 4: display();
			            break;
			    case 5: printf("enter key:");
			            scanf("%d",&item);
				        linear_search(item);
				        break;
			    case 6: exit(0);
            		
			}
		}

          return 0;
          
}
