#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if((n&(n-1))==0){
        cout<<"N is a power of 2";
    }
    else{
        cout<<"N is not a power of 2";
    }
    return 0;
}