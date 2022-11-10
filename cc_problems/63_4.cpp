#include <iostream>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int a[n];
	    int m = 10000;
	    int count = 0;
	    int t = 0;
	   // vector<int>v;
	    for(int i = 0; i<n; i++){
	        cin>>a[i];
	        if(m>a[i]){
	            m =a[i];
	        }
	    }
	    for(int i = 0; i<n; i++){
	        if(a[i]!=m){
	            if(a[i]%m==0){
	                count++;
	            }
	            else
	            {
	                t = 1;
	                break;
	            }
	        }
	    }
	    if(t){
	        cout<<n<<endl;
	    }
	    else
	    {
	        cout<<count<<endl;
	    }
	    
	}
	return 0;
}
