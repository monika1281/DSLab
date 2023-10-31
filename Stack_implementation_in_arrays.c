#include<stdio.h>
#define size  5
int a[size];
int top = -1;

int main(){
	int ch=0;
    int item;
    int pos;
    while (ch != 4){	
    printf("1.Push 2.Pop 3.Display 4.Exit\n");
    printf("enter choice:");
    scanf("%d",&ch);            
    switch(ch){
    	case 1: printf("enter:");
		        scanf("%d",&item);
    	        push(item);
    	        break;
	    case 2: pop();
	            break;
		case 3: display();
			    break;
		case 4: exit(0);
            		
			}
		}
	return 0;
}
void push(item){
	if (top ==size-1){
		printf("stack overflow\n");
	}
	else{
		top = top +1;
		a[top]=item;
	}
	
}
void pop(){
	if (top == -1){
		printf("stack underflow\n");
	}
	else{
		int x;
		x = a[top];
		top--;
		printf("%d is deleted\n",x);
	}
	
}
void display(){
	int i;
	for(i = top;i>=0;i--){
		printf("%5d",a[i]);
	}
	printf("\n");
	
}
