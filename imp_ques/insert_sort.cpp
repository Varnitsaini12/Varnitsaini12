#include<iostream>
#include<vector>
using namespace std;

void insertion_sort(vector<int>&v, int n){
    for(int i=1;i<n;i++){
        int key = v[i];
        int j= i-1;
        while(key<v[j] && j>=0){
            v[j+1] = v[j];
            --j;
        }
        v[j+1] = key;
    }
}

int main()
{
    int n,i;
    cout << "Enter size: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements of array: ";
    for(i=0;i<n;i++){
        int a;
        cin >> a;
        v[i]=a;
    }
    insertion_sort(v,n);
    cout << "Sorted array: ";
    for(auto x: v){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}