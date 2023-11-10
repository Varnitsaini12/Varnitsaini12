#include <bits/stdc++.h>
using namespace std;
bool checkDuplicate(vector<int> &arr, int n, int k) {
    int i = 0;
    int j = 0;
    map<int,int>mp;
    
    while(j<=n){
        mp[arr[j]]++;
        cout << "j: " << j << endl;
        if((j-i+1)<k)
            j++;
        else if((j-i+1)==k){
            int l = i;
            while(l<=j){
                cout << "mp[arr[l]]" << mp[arr[l]] << endl;
                if(mp[arr[l]]>1){
                    return 1;
                }
                l++;
            }
            mp[arr[i]]--;
            i++;
            j++;
        }
    }
    return 0;
}
int main() {
    vector<int> arr = {1,2,3,4,5};
    bool result = checkDuplicate(arr, 5, 3);
    cout << result << endl;
    return 0;
}