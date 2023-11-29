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
void inorder(struct node*root){
              if (root != NULL){
              inorder(root -> left); 
              printf(" %d ", root -> data); 
              inorder(root->right); 
              }
           
              }
void preorder(struct node*root){
              if (root != NULL){
              printf(" %d ", root -> data); 
              preorder(root -> left);
              preorder(root->right); 
              }
              }
                       
void postorder(struct node*root){
              if (root != NULL){
              postorder(root -> left); 
              postorder(root->right);
              printf(" %d ", root -> data); 
              }
           
              }
int main(){
            int ch=0;
            int item;
            int pos;
            printf("1.Insert 2.InOrder 3.Preorder 4.PostOrder 5.Exit\n");
            while (1){	
            
            printf("enter choice:");
            scanf("%d",&ch);            
            switch(ch){
            	case 1: printf("enter:");
				        scanf("%d",&item);
            	        root = insert(root,item);
            	        break;
			    case 2: printf("Inorder:");
			            inorder(root);
			            printf("\n");
			            break;
			    case 3: printf("Preorder:");
			            preorder(root);
			            printf("\n");
			            break;
			    case 4: printf("Postorder:");
			            postorder(root);
			            printf("\n");
			            break;
			    case 5: exit(0);
            		
			}
		}
          return 0;  
          }
          
output:
1.Insert 2.InOrder 3.Preorder 4.PostOrder 5.Exit
enter choice:1
enter:3
enter choice:1
enter:2
enter choice:1
enter:4
enter choice:1
enter:1
enter choice:1
enter:5
enter choice:2
Inorder: 1  2  3  4  5 
enter choice:3
Preorder: 3  2  1  4  5 
enter choice:4
Postorder: 1  2  5  4  3 
enter choice:5
