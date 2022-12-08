
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(){
    int t=1;
    cin>>t;
    while(t--){
    lli n;
    cin>>n;
    string a;
    cin>>a;
    char current = a[0];
    int l=1;
    map<pair<char,int>,int>m;
    m[{current,l}]++;
    for(int i=1;i<n;i++){
        if(current!=a[i]){
            l=1;
            current=a[i];
        }
        else
            l++;
        m[{current,l}]++;
    }
    int mx=0;
    for(auto&it:m){
        if(it.second==1)
        {
            mx=max(mx,it.first.second-1);
            continue;
        }
        mx=max(mx,it.first.second);
    }
    cout<<mx<<endl;
    }
}