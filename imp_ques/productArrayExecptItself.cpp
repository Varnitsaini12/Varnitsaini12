#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
         int n = nums.size();
        vector<int> result;
        if(n<1)
            return result;
        
        int product = 1;
        for(int i=0;i<n;++i)
        {
            product *= nums[i];
            result.push_back(product);            
        }

        product = 1;
        for(int i=n-1;i>0;--i)
        {
            result[i] = result[i-1]*product;
            product *= nums[i];
        }
        result[0] = product;
        
        return result;
    }
};