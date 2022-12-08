#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int j =1;
        for(int i = 0; i<n-1; i++){
            if(nums[i]!=nums[i+1]){
                nums[j] = nums[i+1];
                j++;
            }   
        }
        return j;
    }
    
};

int main(){
    Solution S1;
    vector<int>nums = {1,2,2,2,3,3,3,3};
    S1.removeDuplicates(nums);
    for(auto x:nums){
        cout<<x<<" ";
    }
}