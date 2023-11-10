#include <iostream>
using namespace std;

void printArray(int arr[], int n){
  for (int i = 0; i < n; i++)
  {
      cout << arr[i] << " ";
  }
  cout << endl;
}

void swap_alternate(int arr[], int size){
    for (int i = 0; i < size; i+=2){
        if(i+1 < size){
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{
    int odd_arr[5] = {1, 2, 3, 4, 5};
    int even_arr[6] = {1, 2, 3, 4, 5, 6};
    int n_even = 6, n_odd = 5;

    swap_alternate(even_arr, n_even);
    swap_alternate(odd_arr, n_odd);

    printArray(even_arr, n_even);
    printArray(odd_arr, n_odd);

    return 0;
}