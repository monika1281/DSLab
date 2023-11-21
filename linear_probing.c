#include <stdio.h>
#define size 7
int a[size];

 void insert(int data){
    
    int h = data % size;
    int h1;
    int h2 = 0;
    if(a[h] ==0){
        a[h] = data;
    }
    else{
        h1 = h;
        int i;
        for(i = 1;i<size;i++){
            h2 =((h1 + i) % size );
            if(a[h2]==0){
                a[h2] = data;
                break;
            }
        }
    }
    
}

void display(){
    printf("Array elements are:\n");
    int i;
    for(i=0;i<size;i++){
        printf("%5d%5d",i,a[i]);
        printf("\n");
    }
}

int main() {
    
    int data;
    int ch;
    for (int i = 0; i<size;i++){
        a[i]=0;
    }
    printf("1.Insert 2.Display 3.Exit\n");
    while(1){
        printf("enter choice:");
        scanf("%d",&ch);
        switch(ch){
         case 1:printf("enter data:");
                 scanf("%d",&data);
                 insert(data);
                 break;
         case 2:display();
                break;
         case 3: exit(0);
          
    }
    }
    return 0;
}

output:
/tmp/ffvyva9nAX.o
1.Insert 2.Display 3.Exit
enter choice:1
enter data:10
enter choice:1
enter data:23
enter choice:1
enter data:17
enter choice:1
enter data:31
enter choice:1
enter data:38
enter choice:1
enter data:45
enter choice:2
Array elements are:
    0   45
    1    0
    2   23
    3   10
    4   17
    5   31
    6   38
enter choice:3

