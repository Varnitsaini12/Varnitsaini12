#include<iostream>
#include<unordered_map>
#include<unordered_set>
#include<vector>
using namespace std;

void findDuplicates(vector<int> &nums){
    vector<int> ans;
        unordered_map<int,int> mp;
        for(int &x: nums){
            mp[x]++;
        }
        for(auto &j: mp){
            cout << j.first<<" " << j.second<< endl;
            if(j.second >= 2){
                ans.push_back(j.first);
            }
        }
        cout << endl;

        
        for (int i = 0; i < ans.size(); i++){
            cout << ans[i] << " ";
        }
}

int main()
{
    vector<int> arr = {4,3,2,7,8,2,3,1};
    findDuplicates(arr);
    return 0;
}