#include <iostream>
using namespace std;

#define mod 1000000007
#define ll long long int
ll factorial[1000001];

void fact(){
    factorial[0] = 1;
    factorial[1] = 1;
    for(ll i=2; i<1000000; i++){
        factorial[i]=(i*factorial[i-1])%mod;
    }
}

int main() {
	// your code goes here
	fact();
	int t; cin>>t;
	while(t--){
	    ll k; cin>>k;
	    ll a[k];
	    
	    ll split = 0;
	    for(ll  i = 0; i<k; i++){
	        cin>>a[i];
	    }
	    for(ll i =0; i<k; i++){
	        split += factorial[a[i]];
            split = split%mod;
	    }
	    cout<<split<<endl;
	}
	return 0;
}


