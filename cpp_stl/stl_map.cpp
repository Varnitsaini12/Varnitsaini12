#include <iostream>
#include<string>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    string s="",T="";
	    cin>>s;
	    cin>>T;
	    string M = "";
	    int n = s.size();
	    for(int i; i<n;i++){
	        if(s.at(i)==T.at(i)){
	            M= M+"G";
	        }
	        else
	          M=M+"B";
	    }
	    for(int i = 0; i<M.size(); i++){
	        cout<<M[i];
	    }
	    cout<<endl;
	}
	return 0;
}
