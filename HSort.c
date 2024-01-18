
#include <stdio.h>

void heapify(int arr[], int N, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < N && arr[left] > arr[largest])
        largest = left;
    if (right < N && arr[right] > arr[largest])
        largest = right;
    if (largest != i) {
        int temp=arr[i];
        arr[i]=arr[largest];
        arr[largest]=temp;
        heapify(arr, N, largest);

    }
}
void heapSort(int arr[], int N)
{
   for (int i = (N / 2)-1; i >= 0; i--){
        heapify(arr, N, i);
   }
    for (int i = N-1 ; i >= 0; i--) {
        int temp =arr[i];
        arr[i]=arr[0];
        arr[0]=temp;
        heapify(arr, i, 0);

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
    heapSort(arr, N);
    printf("Sorted array is:\n");
    for (int i = 0; i < N; i++){
        printf("%d ", arr[i]);
    }

    
}
______________________________
Output:

Enter Array Size:7

Enter Array Elements:

15

20

17

5

1

30

9

Sorted array is:

1 5 9 15 17 20 30 
