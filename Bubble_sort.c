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
    bubble(arr,size);
    printArray(arr,size);

    return 0;
}

void bubble(int arr[],int size){
    int i,j;
    for(i=0;i<size-1;i++){
        for(j=0; j<size-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];  
                arr[j+1] = temp;
            }
        }
    }

}
void printArray(int arr[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", arr[i]);
  }
  printf("\n");
}
