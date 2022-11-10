#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int count=0;
        string s;
	    cin>>s;
        for(int  i = 0; i<s.size();i++){
            if(s[i]=='4')
            count++;
        }
        cout<<count<<endl;
	    
	}
	return 0;
}
