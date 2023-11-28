#include<stdio.h>
#include<stdlib.h>

struct node{
             int data;
             struct node *left;
             struct node *right;
                     };
struct node *root = NULL;

struct node* create(int data){       
struct node *newnode = (struct node *)malloc(sizeof(struct node));
newnode -> data = data;
newnode -> left = NULL;
newnode -> right = NULL;
return newnode;
}

struct node* insert(struct node *root ,int data){
if (root == NULL){
return create(data);
}
else if(data < root->data ){
root->left = insert(root->left,data);

}
else{
root->right = insert(root->right,data);
}
return root;

}


                      
void display(struct node*root){
              //if (root == NULL){
              //printf("Empty BST");
              //return;
              //}
              //printf("Elements of BST are:\n");
              if (root != NULL){
              display(root -> left); 
              printf(" %d ", root -> data); 
              display(root->right); 
              }
              printf("\n");
              }
                                                                     
int main(){
            int ch=0;
            int item;
            int pos;
            while (1){	
            printf("1.Insert 2.Display 3.Exit\n");
            printf("enter choice:");
            scanf("%d",&ch);            
            switch(ch){
            	case 1: printf("enter:");
				        scanf("%d",&item);
            	        root = insert(root,item);
            	        break;
			    case 2: display(root);
			            break;
			    case 3: exit(0);
            		
			}
		}
          return 0;  
          }
          
          
        
