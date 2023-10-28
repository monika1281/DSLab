#include<stdio.h>
#define max 5
int f = -1;
int r = -1;
int queue[max];
int main(){
	int ch=0;
    int item;
    while (1){	
    printf("1.Enqueue 2.Dequeue 3.Display 4.Exit\n");
    printf("enter choice:");
    scanf("%d",&ch);            
    switch(ch){
    	case 1: printf("enter:");
		        scanf("%d",&item);
    	        enqueue(item);
    	        break;
	    case 2: dequeue();
	            break;
		case 3: display();
			    break;
		case 4: exit(0);
            		
			}
		}
	
}
void enqueue(item){
	if (r==max-1){
		printf("queue overflow");
	}
	else if(f==-1){
		f++;
	}
	r++;
	queue[r]=item;
	
}
void dequeue(){
	if (f==-1 || f>r){
		printf("Queue is empty\n");
		return ;
	}
	printf("element deleted: %d\n",queue[f]);
	f++;
	
}
void display(){
	if (f==-1 || f>r){
		printf("Queue is empty\n");
		return ;
	}
	int i;
	for(i=f;i<=r;i++){
		printf("%3d",queue[i]);
	}
	printf("\n");
	
	
}
