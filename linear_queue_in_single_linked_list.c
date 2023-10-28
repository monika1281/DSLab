#include<stdio.h>
#include<stdlib.h>
struct node{
             int data;
             struct node *next;
                     };
struct node *f, *r = NULL;

void enqueue(int data){
	struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode -> data = data;
    newnode -> next = NULL;
	if (f==NULL){
		f = newnode;
		r = newnode;
		
	}
	else{
		r ->next = newnode;
		r = newnode;
	}
	
}
void dequeue(){
	struct node *temp = f;
	if (f==NULL){
		printf("Queue is empty\n");
		return;
		
	}
	else{
		f = f->next;
		temp->next = NULL;			
	}		
}
void display(){
	struct node *current = f;
              if (f == NULL){  
              printf("Queue is Empty\n");
              return;
              }
              else {
              printf("Elements of the queue are:\n");
              }
              do{
              printf("%5d\t", current->data);
              printf("%5ld\t",(long)current->next);
              printf("%5ld\t",(long)current);
              printf("\n");
              current = current->next;
             }while(current!=NULL);	
}

int main(){
	int ch=0;
    int data;
    while (1){	
    printf("1.Enqueue 2.Dequeue 3.Display 4.Exit\n");
    printf("enter choice:");
    scanf("%d",&ch);            
    switch(ch){
    	case 1: printf("enter:");
		        scanf("%d",&data);
    	        enqueue(data);
    	        break;
	    case 2: dequeue();
	            break;
		case 3: display();
			    break;
		case 4: exit(0);      		
		}
		}
}
