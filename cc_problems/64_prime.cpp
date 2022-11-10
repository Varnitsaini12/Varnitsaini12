#include <iostream>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int a,b;
	    int flag = 0;
	    vector<int>v;
	    cin>>a>>b;
	    int c = 2;
	    while(b>1){
	        if(b%c==0){
	           v.push_back(c);
	            b=b/c;
	        }
	        else{
	            c++;
            }
	    }
	    for(int i = 0; i<v.size(); i++){
            // cout<<v[i]<<" ";
	        if(a%v[i]==0){
	            flag = 1;
                break;
	        }
	        else{
	            flag = 0;
                break;
            }

	    }
	    if(flag){
	        cout<<"YES"<<endl;
	    }
	    else
	        cout<<"NO"<<endl;
	    
	}
	return 0;
}
