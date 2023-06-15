#include<iostream>
#include<vector>
using namespace std;

vector<int>Dec_To_Bin(int n){
    vector<int>ans;
    int power = 1;
    while(n>0){
       int rem =  n%2;
       n = n/2;
       ans.push_back(rem);
    }
    return ans;
}


int main()
{
    int n;
    cin>>n;
    vector<int>ans;
    ans = Dec_To_Bin(n);
    for(int i = ans.size()-1; i>=0; i--){
        cout<<ans[i];
    }
    return 0;
}