#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int a[3];
	    int b[3];
	    int count_z = 0;
	    int count_o  = 0;
	    int count_one  = 0;
	    int count_zero  = 0;
	    for(int i =0; i<3; i++){
	        cin>>a[i];
	        if(a[i]==0)
	            count_z++;
	        else
	            count_o++;
	    }
	    for(int i =0; i<3; i++){
	        cin>>b[i];
	        if(b[i]==0)
	            count_zero++;
	        else
	            count_one++;
	    }
	    if(count_one == count_o && count_zero == count_z){
	        cout<<"Pass"<<endl;
	    }
	    else
	        cout<<"Fail"<<endl;
	    
	}
	return 0;
}
