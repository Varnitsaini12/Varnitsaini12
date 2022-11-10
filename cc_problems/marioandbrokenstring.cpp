#include <iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    string s;
	    cin>>s;
	    vector<char>s1;
	    vector<char>s2;
	    for(int i = 1; i<n/2; i++){
	        s1.push_back(s[i]);
	    }
	    for(int i =((n/2)+1); i<n; i++){
	        s2.push_back(s[i]);
	    }
        
	    for(auto i:s1){
            cout<<s1[i];
        }
        if(s1==s2)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
