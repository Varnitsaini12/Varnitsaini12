#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int sum = a+b+c;
	    if(a>=10 &&b>=10 &&c>=10){
	        if(sum>=100){
	            cout<<"PASS"<<endl;
	        }
            else{
                cout<<"FAIL"<<endl;
            }
	    }
	    else{
	        cout<<"FAIL"<<endl;
	    }
	
	}
	return 0;
}
