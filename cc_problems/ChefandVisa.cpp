#include <iostream>
using namespace std;

int main() {
    int t;cin>>t;
    int a[6];
    for(int i=1;i<=t;i++)
    {
        for(int i=0;i<6;i++)
        {
            cin>>a[i];
        }
        if(a[1] >= a[0] && a[3]>=a[2] && a[5] <= a[4])
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        
    }
	return 0;
}
