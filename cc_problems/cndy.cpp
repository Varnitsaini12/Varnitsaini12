#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int count = 0;
	    int k =2*n;
	    int a[k];
	    for(int i =0; i<k;i++){
	        cin>>a[i];
	    }
	    sort(a,a+k);
	    for(int i = 0; i<k-1; i++){
	        if(a[i]==a[i+1])
	            count = count + 1;
	    }
        // cout<<count<<endl;
        
	    if(count>=2)
	        cout<<"No"<<endl;
	    else
	        cout<<"Yes"<<endl;
	}
	return 0;
}
