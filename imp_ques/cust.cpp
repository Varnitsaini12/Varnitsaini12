#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>callsDur(n,0);
    for(int i = 0; i<n; i++){
        cin>>callsDur[i];
    }
    int x;
    n  = 3*x;
    for (int i = 0; i < x; i++)
    {
        callsDur.pop_back();
    }
    n = 2*x;
    vector<int>callsDur2(x,0);
    return 0;
}