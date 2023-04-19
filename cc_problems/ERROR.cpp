#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int n = s.size();
	    string st;
	    int temp =0;
	    for(int i = 0; i<n-3; i++){
	        if((s[i] == '0' && s[i+1] == '1' && s[i+2] == '0') || (s[i] == '1' && s[i+1] == '0' && s[i+2] == '1')){
                temp = 1;
                break;
            }
            
	    }
	    if(temp){
	        cout<<"Good"<<endl;
	    }
	    else
	        cout<<"Bad"<<endl;
	}
	return 0;
}
