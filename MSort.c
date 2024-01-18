
#include <stdio.h>

void merge(int arr[], int lb, int mid, int ub,int N)
{
    int i= lb;
    int j= mid+1;
    int k=lb;
    int b[N];
    while(i<=mid && j<=ub){
        if(arr[i]<=arr[j]){
            b[k]=arr[i];
            i++;
        }
        
        else{
            b[k]=arr[j];
            j++;
        }
        k++;
    }
    if(i>mid){
        while(j<=ub){
            b[k]=arr[j];
            j++;
            k++;
        }
    }
    else{
        while(i<=mid){
            b[k]=arr[i];
            i++;
            k++;
        }
        
    }
    for(k=lb;k<=ub;k++){
        arr[k]=b[k];
    }
    
    }

void mergeSort(int arr[], int lb, int ub,int N)
{
    if(lb < ub){
        int mid = (lb+ub)/2;
        mergeSort(arr, lb, mid,N);
        mergeSort(arr,mid+1, ub,N);
        merge(arr,lb,mid,ub,N);
    }
    
    }


int main()
{

    int N;
    printf("Enter Array Size:");
    scanf("%d",&N);
    int arr[N];
    printf ("Enter Array Elements:\n");
    for(int I=0;I<N;I++){
        scanf("%d",&arr[I]);
    }
    int lb=0;
    int ub=N-1;
    mergeSort(arr, lb, ub,N);
    printf("Sorted array is:\n");
    for (int i = 0; i < N; i++){
        printf("%d ", arr[i]);
    }

    
}
___________________________
output:

Enter Array Size:7

Enter Array Elements:

38

27

43

3

9

82

19

Sorted array is:

3 9 19 27 38 43 82 
