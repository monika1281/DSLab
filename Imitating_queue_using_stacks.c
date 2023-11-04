#include<stdio.h>
#include<stdlib.h>
#define max 5
int top = -1;
int top2 = -1;
int a[max];
int arr[max];

void stack1(int item){
        if (top ==max-1){
        printf("stack overflow\n");
	}
	else{
         top = top +1;
	     a[top]=item;
	}
}
void display1(){
    if (top == -1){
		printf("stack underflow\n");
    }
	int i;
	for(i = top;i>=0;i--){
		printf("%5d",a[i]);
	}
	printf("\n");
	
}
void stack2(int item){
    if (top2 ==max-1){
        printf("stack overflow\n");
	}
	else{
         top2 = top2 +1;
	     arr[top2]=item;
	}
}

void stack1pop(){
	if (top == -1){
		printf("stack underflow\n");
	}
	else{
		int x;
		x = a[top];
		stack2(x);
		printf("%d is deleted\n",x);
		top--;
		
		
	}
    
}
void stack2pop(){
	if (top2 == -1){
		printf("stack underflow\n");
	}
	else{
		int x;
		x = arr[top2];
		top2--;
		printf("%d is deleted\n",x);
		
	}
    
}
void display2(){
    if (top2 == -1){
		printf("stack underflow\n");
		return ;
    }
	int i;
	for(i = top2;i>=0;i--){
		printf("%5d",arr[i]);
	}
	printf("\n");
	
}
int main(){
	int ch=0;
    int item;
    while (1){	
    printf("1.stack1push 2.display1 3.stack1pop 4.display2 5.stack2pop 6.Exit\n");
    printf("enter choice:");
    scanf("%d",&ch);            
    switch(ch){
    	case 1: printf("enter:");
                scanf("%d",&item);
    	        stack1(item);
    	        break;
        case 2: display1();
                break;
		case 3: stack1pop();
		        break;
		case 4: display2();
		        break;
		case 5: stack2pop();
		        break;
		case 6: exit(0);
		
			}
		}
	
}
