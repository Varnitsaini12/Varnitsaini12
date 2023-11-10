#include<iostream>
using namespace std;

int binarySearch(int arr[],int n, int key){
    int start = 0;
    int end = n - 1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else
            end = mid - 1;
        mid = start + (end-start)/2;
    }
    return -1;
}

int main()
{
    int even[6] = {1, 2, 3, 4, 5, 6};
    int odd[5] = {1, 2, 3, 4, 5};
    int index = binarySearch(even, 6, 3);
    int index1 = binarySearch(odd, 5, 20);
    cout << index << endl;
    cout << index1 << endl;
    return 0;
}