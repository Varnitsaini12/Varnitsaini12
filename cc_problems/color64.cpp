#include <iostream>
#include<algorithm>
#include<array>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
        vector<int>v;
	    int a[n];
	    for(int i = 0; i<n; i++)
	    {
	        cin>>a[i];
            v.push_back(a[i]);
	    }
	    sort(v.begin(),v.end());
        // for(int i = 0; i<n; i++){
        //     cout<<a[i]<<endl;
        // }
	    cout<<v.back()<<endl;
	}
	return 0;
}
