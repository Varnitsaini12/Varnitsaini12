#include<iostream>
#include<vector>

using namespace std;

int main() {
	// your code goes here
	// vector<string>str;
    int t; cin>>t;
    while(t--){
        int m;
        cin>>m;
        int c1=0;
        int c2=0;
        string a[m];
        for(int i = 0; i<m; i++){
            cin>>a[i];
            if(a[i]=="START38"){
                c1++;
            }
            else if(a[i]=="LTIME108"){
                c2++;
            }
        }
        cout<<c1<<" "<<c2<<endl;
    }

	return 0;
}