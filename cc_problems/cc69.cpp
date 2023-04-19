#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n,k; cin>>n,k;
	    long long result = 0;
	    vector<pair<int,int>>vec;
	    map<int,int>mp;
	    vector<int>a(n),b(n);
	    for(int i =0; i<n;i++){
	        cin>>a[i];
	    }
	    for(int i =0; i<n;i++){
	        cin>>b[i];
	    }
	    for(int i =0;i<n;i++){
	        vec.push_back(make_pair(a[i],b[i]));
	    }
	    sort(vec.begin(),vec.end());
	    for(int i=0;i<n;i++){
	        if(mp[vec[i].first]<=0){
	            result+=vec[i].second;
	            mp[vec[i].first]++;
	            k--;
	        }
	        if(k==0)
	            break;
	    }
	    if(k==0)
	        cout<<result<<endl;
	    else
	        cout<< -1<<endl;
	
	}
	return 0;
}
