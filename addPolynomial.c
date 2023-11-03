#include<stdio.h>
#include<stdlib.h>

struct node{
             int coeff;
             int power;
             struct node *next;
                     };
struct node *head1, *tail1 = NULL;
struct node *head2, *tail2 = NULL;
struct node *head3, *tail3 = NULL;

                     
 void create1(int coeff,int power){       
                               struct node *newnode = (struct node *)malloc(sizeof(struct node));
                               newnode -> coeff = coeff;
                               newnode -> power = power;
                               newnode -> next = NULL;
                              if (head1 == NULL)
                               {
                               head1 = newnode;
                               tail1 = newnode;
                               }
                               else
                               {
                               tail1->next = newnode;
                               tail1 = tail1->next;
                               
                               }
                               
                       }
                       
void display1(){
              struct node *current = head1;
              if (head1 == NULL){
              printf("Empty Linked List\n");
              return;
              }
              printf("Elements of Linked list are:\n");
              while(current !=NULL)
              {
              printf("%dx^%d\t", current->coeff,current->power);
              //printf("%5d\t", current->pow);
              printf("%5ld\t",(long)current->next);
              printf("%5ld\t",(long)current);
              printf("\n");
              current = current->next;
              }
    }
void create2(int coeff,int power){       
                               struct node *newnode = (struct node *)malloc(sizeof(struct node));
                               newnode -> coeff = coeff;
                               newnode -> power = power;
                               newnode -> next = NULL;
                               if (head2 == NULL)
                               {
                               head2 = newnode;
                               tail2 = newnode;
                               }
                               else
                               {
                               tail2->next = newnode;
                               tail2 = tail2->next;
                               
                               }
                               
                       }
                       
void display2(){
              struct node *current = head2;
              if (head2 == NULL){
              printf("Empty Linked List\n");
              return ;
              }
              printf("Elements of Linked list are:\n");
              while(current !=NULL)
              {
              printf("%dx^%d\t", current->coeff,current->power);
              printf("%5ld\t",(long)current->next);
              printf("%5ld\t",(long)current);
              printf("\n");
              current = current->next;
              }
    }
void compare(){
    struct node *current = head1;
    struct node *temp = head2;
    
    // struct node *result=(struct node *)malloc(sizeof(struct node));
	     while (current != NULL )
	    {    if (temp == NULL || current == NULL){
	        break;
	    }
	        else if(current->power == temp->power){
	            struct node *result=(struct node *)malloc(sizeof(struct node));
	            result -> coeff = current -> coeff + temp -> coeff;
	            result -> power = current -> power;
	            result -> next = NULL;
	             if (head3 == NULL) {
                    head3 = result;
                    tail3 = result;
                } 
                else{
                    tail3->next = result;
                    tail3 = result;
                }
	            current = current ->next;
	            temp = temp -> next;
	        }
	        else if(temp->power > current ->power) {
	            struct node *result=(struct node *)malloc(sizeof(struct node));
	            result -> coeff = temp -> coeff;
	            result -> power = temp -> power;
	            result -> next = NULL;
	            if (head3 == NULL) {
                    head3 = result;
                    tail3 = result;
                } else {
                    tail3->next = result;
                    tail3 = result;
                }
	            temp = temp->next;
	        }
	        else if (current->power > temp->power){
	             struct node *result=(struct node *)malloc(sizeof(struct node));
	            result -> coeff = current -> coeff;
	            result -> power = current -> power;
	            result -> next = NULL;
	            if (head3 == NULL) {
                    head3 = result;
                    tail3 = result;
                } else {
                    tail3->next = result;
                    tail3 = result;
                }
	            current = current->next;
               
	        }
	        
	        else{
	            break;
	        }
	    }
	            
	            if(temp != NULL){
	            struct node *result=(struct node *)malloc(sizeof(struct node));
	            result -> coeff = temp -> coeff;
	            result -> power = temp -> power;
	            result -> next = NULL;
	            if (head3 == NULL) {
                    head3 = result;
                    tail3 = result;
                } else {
                    tail3->next = result;
                    tail3 = result;
                }
	            temp = temp->next;
	                
	            }
	            else if(current != NULL){
	            struct node *result=(struct node *)malloc(sizeof(struct node));
	            result -> coeff = current -> coeff;
	            result -> power = current -> power;
	            result -> next = NULL;
	            if (head3 == NULL) {
                    head3 = result;
                    tail3 = result;
                } else {
                    tail3->next = result;
                    tail3 = result;
                }
	            current = current->next;
	                
	            }
	            
	        }
void display(){
              struct node *current = head3;
              if (head3 == NULL){
              printf("Empty Linked List\n");
              return ;
              }
              printf("Elements of Linked list are:\n");
              while(current !=NULL)
              {
              printf("%dx^%d\t", current->coeff,current->power);
              printf("%5ld\t",(long)current->next);
              printf("%5ld\t",(long)current);
              printf("\n");
              current = current->next;
              }
}
int main(){
            int ch=0;
            int coeff;
            int power;
            int pos;
            while (1){	
            printf("1.Create P1 2.Display P1 3.Create P2 4.Display P2 5.Compare 6.Display result 7.Exit\n");
            printf("enter choice:");
            scanf("%d",&ch);            
            switch(ch){
            	case 1: printf("enter coeff:");
				        scanf("%d",&coeff);
				        printf("enter power:");
				        scanf("%d",&power);
            	        create1(coeff,power);
            	        break;
			    case 2: display1();
			            break;
			    case 3: printf("enter coeff:");
				        scanf("%d",&coeff);
				        printf("enter power:");
				        scanf("%d",&power);
            	        create2(coeff,power);
            	        break;
			    case 4: display2();
			            break;
			    case 5: compare();
			            break;
			    case 6: display();
			            break;
			    case 7: exit(0);
            		
			}
		}
          return 0;
          
          }
