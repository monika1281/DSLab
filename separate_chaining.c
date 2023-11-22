#include<stdio.h>
#include<stdlib.h>

struct node{
             int data;
             struct node *next;
                     };
                     
void display(struct node* a[],int hsize){
    printf("Separate Chaining:");
    for(int i = 0;i<hsize;i++){
        struct node *temp = a[i];
        while(temp !=NULL){
            printf("%d:%d\t",i,temp ->data);
            temp = temp ->next;
        }
        printf("\n");
    }
    
}                                            
int main(){
            int data;
            int hsize;
            int max1;
            printf("enter hash table size:");
            scanf("%d",&hsize);
            printf("enter the number of elements to be inserted:");
            scanf("%d",&max1);
            struct node *a[hsize];
            
            for(int i = 0;i<hsize;i++){
                a[i]=NULL;
            }
            int temp;
            int hash;
            for(int i = 0;i<max1;i++){
               printf("enter array element:");
               scanf("%d",&temp);
               struct node *newnode = (struct node *)malloc(sizeof( struct node));
               newnode -> data = temp;
               newnode -> next = NULL;
               hash = temp%hsize;
               if(a[hash] == NULL){
                   a[hash] = newnode ;
               }
               else{
                   newnode->next = a[hash];
                   a[hash] = newnode;
               }
            }
            display(a, hsize);
          return 0;
			    
			}
