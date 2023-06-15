#include<iostream>
using namespace std;

int count_SetBits(int &n){
    int count = 0;
    while(n>0){
        count += (n&1);
        n = n>>1;
    }
    return count;
}

// Counting set bits :(Hack Faster Method)
int Count_Bits_Hack(int n){
    int ans = 0;
    while(n>0){
        //removes the last set bit from the number(n)
        n = n & (n-1);
        ans++;
    }
    return ans;
}

int main()
{
    int n; 
    cin>>n;
    cout<<Count_Bits_Hack(n)<<endl;
    cout<<count_SetBits(n)<<endl; 
    return 0;
}