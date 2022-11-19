#include <iostream>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int count = 0;
	    int a[n];
	    vector<int>v;
	    for(int i = 0; i<n; i++){
	        cin>>a[i];
	        v.push_back(a[i]);
	    }
	    
	    for(int i = 0; i<n; i++){
            int sum = 0;
	        int product = 1;
            for(int j =i; j<n; j++){
                sum = sum + a[j];
                product = product * a[j];
                if(product == sum)
	                count++;     
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
