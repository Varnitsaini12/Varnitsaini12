#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    vector<int>v;
	    for(int i  = 0; i<n; i++){
	        cin>>a[i];
	        v.push_back(a[i]);
	    }
	    sort(v.begin(),v.end());
	    cout<<v.back()<<endl;
	}
	return 0;
}
