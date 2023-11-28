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
            h2 =(h1 + (i*i)) % size;  
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
    int count=0;
    for (int i = 0; i<size;i++){
        a[i]=NULL;
    }
    printf("1.Insert 2.Display 3.Exit\n");
    while(1){
        printf("enter choice:");
        scanf("%d",&ch);
        switch(ch){
         case 1:printf("enter data:");
                 scanf("%d",&data);
                 count = count + 1;
                 if (count>size){
                    printf("size exceeded\n");
                 }
                 else{
                     insert(data);
                 }
                 break;
         case 2:display();
                break;
         case 3: exit(0);
          
    }
    }
    return 0;
}

Output:

1.Insert 2.Display 3.Exit

enter choice:1

enter data:50

enter choice:1

enter data:700

enter choice:1

enter data:76

enter choice:1

enter data:85

enter choice:1

enter data:92

enter choice:1

enter data:73

enter choice:1

enter data:101

enter choice:2

Array elements are:

    0  700

    1   50

    2   85

    3   73

    4  101

    5   92

    6   76

enter choice:3

