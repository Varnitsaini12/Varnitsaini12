#include<stdio.h>

int main(){
    int i,n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int size = sizeof(arr)/sizeof(arr[0]);
    selection(arr,size);
    printArray(arr,size);

    return 0;
}

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selection(int arr[],int size){
    int i,j;
    for(int i = 0; i<size-1; i++){
        int min = i;
        for(j = i+1; j < size; j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        swap(&arr[min], &arr[i]);
    }
}

void printArray(int arr[], int size) {
    printf("Array   after sorting:\n");
  for (int i = 0; i < size; ++i) {
    printf("%d  ", arr[i]);
  }
  printf("\n");
}