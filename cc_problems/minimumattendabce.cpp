#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    string b;
	    cin>>b;
        int count_abs   = 0;
        int count_pre = 0;

	    
	    for(int i = 1; i<n; i++){
	        if(b[i]== '0'){
	            count_abs++;
	        }
	        else
	            count_pre++;
	    }
        
	    int rem_days = 120 - n;
	    count_pre +=rem_days;
	    float max_precentage = count_pre*(120/100);
	    if(max_precentage>=75)
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	}
	return 0;
}
