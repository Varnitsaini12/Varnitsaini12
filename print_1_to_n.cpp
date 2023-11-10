#include<iostream>
using namespace std;

void print(int n){
    if(n==1){
        cout << n << " ";
        return;
    }
    print(n - 1);
    cout << n << " ";
}

void printR(int n){
    if(n==1){
        cout << n << " ";
        return;
    }
    cout << n << " ";
    printR(n-1);
}

int main()
{
    int n = 7;
    print(7);
    cout << endl;
    printR(7);
    return 0;
}