#include <iostream>
#include <map>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    string s;
	    cin>>s;
	    int count = 0;
	    map<char,int>m1;
	    if(n%2==1){
	        cout<<"NO"<<endl;
	    }
	    else{
	            for(int i = 0; i<n; i++)
	            {
	                 m1[s[i]]++;
	            }
	         }
	    
	    for(auto i:m1){
	        if(i.second%2){
	            count = 1;
	            cout<<"NO"<<endl;
	            break;
	        }
	    }
	    if(!count){
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
