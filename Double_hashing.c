#include <stdio.h>
#define size 11
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
        h2 = (data % 7) + 1;
        for(i = 1;i<size;i++){
            h2 =(h1 + (i*h2)) % size;
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
-------------------------------------------------
output:
/tmp/Ip75Aj8WpE.o
1.Insert 2.Display 3.Exit
enter choice:1
enter data:14
enter choice:1
enter data:17
enter choice:1
enter data:25
enter choice:1
enter data:37
enter choice:1
enter data:34
enter choice:1
enter data:16
enter choice:1
enter data:26
enter choice:2
Array elements are:
    0    0
    1   34
    2    0
    3   14
    4   37
    5   16
    6   17
    7    0
    8   25
    9    0
   10   26
enter choice:3

