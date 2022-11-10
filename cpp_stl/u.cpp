#include <iostream>
#include <string>

using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n;
	    string s;
	    int count = 0;
	    for(int i = 0; i<n; i++){
	        cin>>s[i];
	    }
	    for(int i =0 ; i<n-1; i++){
	        if(s[i]==s[i+1]){
	              count++;
	        }
	        else
	          count = count+0;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
