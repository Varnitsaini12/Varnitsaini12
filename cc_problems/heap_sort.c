#include <stdio.h>
  
  
void heapify(int arr[], int n, int i) {
    
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
  
    if (left < n && arr[left] > arr[largest])
      largest = left;
  
    if (right < n && arr[right] > arr[largest])
      largest = right;
  
    if (largest != i) {
      swap(&arr[i], &arr[largest]);
      heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n) {
    
    for (int i = n / 2 - 1; i >= 0; i--)
      heapify(arr, n, i);
  

    for (int i = n - 1; i >= 0; i--) {
      swap(&arr[0], &arr[i]);
  
      
      heapify(arr, i, 0);
    }
}

 void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
  
void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
      printf("%d ", arr[i]);
    printf("\n");
}

int main(){
    int i,t;
    printf("Enter the size of array: ");
    scanf("%d",&t);
    int arr[t];
    printf("Enter the elements of array: ");
    for(i=0;i<t;i++){
        scanf("%d",&arr[i]);
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    heapSort(arr,t);
    printArray(arr,t);
  return 0;
}