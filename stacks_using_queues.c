#include<stdio.h>
#define max 5
int f = -1;
int r = -1;
int queue[max];
int f2 = -1;
int r2 = -1;
int queue2[max];

void enqueue1(int item){
	if (r==max-1){
		printf("queue overflow");
	}
	else if(f==-1){
		f++;
	}
	r++;
	queue[r]=item;
	
}
void enqueue2(int item){
	if (r2==max-1){
		printf("queue overflow");
	}
	else if(f2==-1){
		f2++;
	}
	r2++;
	queue2[r2]=item;
	
}
void dequeue1(){
	if (f==-1 || f>r){
		printf("Queue is empty\n");
		return ;
	}
	else if(f==r) {
	    printf("element poped:%d\n",queue[f]);
	    r--;
	    return ;
	}
// 	printf("element deleted: %d\n",queue[f]);
	enqueue2(queue[f]);
	f++;
	
}
void dequeue2(){
    if (f2==-1 || f2>r2){
        printf("Queue is empty\n");
        return ;
    }
    enqueue1(queue2[f2]);
	f2++;
}
void display1(){
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
void display2(){
	if (f2==-1 || f2>r2){
		printf("Queue is empty\n");
		return ;
	}
	int i;
	for(i=f2;i<=r2;i++){
		printf("%3d",queue2[i]);
	}
	printf("\n");
}
int main(){
	int ch=0;
    int item;
    while (1){	
    printf("1.Enqueue 2.Dequeue 3.Display 4.dequeue2 5display2 6.Exit\n");
    printf("enter choice:");
    scanf("%d",&ch);            
    switch(ch){
    	case 1: printf("enter:");
		        scanf("%d",&item);
    	        enqueue1(item);
    	        break;
	    case 2: dequeue1();
	            break;
		case 3: display1();
			    break;
	    case 4: dequeue2();
	            break;
		case 5: display2();
			    break;
		case 6: exit(0);
            		
			}
		}
	
}

-----------------------------------------------------------------
output:
/tmp/2RPVjZEGYv.o
1.Enqueue 2.Dequeue 3.Display 4.dequeue2 5display2 6.Exit
enter choice:1
enter:1
1.Enqueue 2.Dequeue 3.Display 4.dequeue2 5display2 6.Exit
enter choice:1
enter:2
1.Enqueue 2.Dequeue 3.Display 4.dequeue2 5display2 6.Exit
enter choice:1
enter:3
1.Enqueue 2.Dequeue 3.Display 4.dequeue2 5display2 6.Exit
enter choice:2
1.Enqueue 2.Dequeue 3.Display 4.dequeue2 5display2 6.Exit
enter choice:2
1.Enqueue 2.Dequeue 3.Display 4.dequeue2 5display2 6.Exit
enter choice:2
element poped:3
1.Enqueue 2.Dequeue 3.Display 4.dequeue2 5display2 6.Exit
enter choice:3
Queue is empty
1.Enqueue 2.Dequeue 3.Display 4.dequeue2 5display2 6.Exit
enter choice:5
1  2
1.Enqueue 2.Dequeue 3.Display 4.dequeue2 5display2 6.Exit
enter choice:4
1.Enqueue 2.Dequeue 3.Display 4.dequeue2 5display2 6.Exit
enter choice:4
1.Enqueue 2.Dequeue 3.Display 4.dequeue2 5display2 6.Exit
enter choice:4
Queue is empty
1.Enqueue 2.Dequeue 3.Display 4.dequeue2 5display2 6.Exit
enter choice:3
1  2
1.Enqueue 2.Dequeue 3.Display 4.dequeue2 5display2 6.Exit
enter choice:2
1.Enqueue 2.Dequeue 3.Display 4.dequeue2 5display2 6.Exit
enter choice:2
element poped:2
1.Enqueue 2.Dequeue 3.Display 4.dequeue2 5display2 6.Exit
enter choice:2
Queue is empty
1.Enqueue 2.Dequeue 3.Display 4.dequeue2 5display2 6.Exit
enter choice:5
1
1.Enqueue 2.Dequeue 3.Display 4.dequeue2 5display2 6.Exit
enter choice:4
1.Enqueue 2.Dequeue 3.Display 4.dequeue2 5display2 6.Exit
enter choice:5
Queue is empty
1.Enqueue 2.Dequeue 3.Display 4.dequeue2 5display2 6.Exit
enter choice:3
1
1.Enqueue 2.Dequeue 3.Display 4.dequeue2 5display2 6.Exit
enter choice:2
element poped:1
1.Enqueue 2.Dequeue 3.Display 4.dequeue2 5display2 6.Exit
enter choice:3
Queue is empty
1.Enqueue 2.Dequeue 3.Display 4.dequeue2 5display2 6.Exit
enter choice:5
Queue is empty
1.Enqueue 2.Dequeue 3.Display 4.dequeue2 5display2 6.Exit
enter choice:6
