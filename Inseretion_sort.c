#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,i;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int size = sizeof(arr)/sizeof(arr[0]);
    insertion(arr,size);
    printArray(arr,size);
    return 0; 
}

void insertion(int arr[], int n){
    for(int i=1;i<n;i++){
        int key = arr[i];
        int j= i-1;
        while(key<arr[j] && j>=0){
            arr[j+1] = arr[j];
            --j;
        }
        arr[j+1] = key;
    }
    
}

void printArray(int arr[], int n){
    printf("Array after sorting: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}