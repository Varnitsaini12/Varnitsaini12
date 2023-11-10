#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int> &nums)
{
    int total = 0;
    for(auto x: nums){
        total += x;
    }
    int left_sum = 0;
    for(auto i: nums){
        int right_sum = total - nums[i] - left_sum;
        if(left_sum == right_sum){
            return i;
        }
        left_sum += nums[i];

    }
    return -1;
}

int main()
{
    vector<int> v = {1, 2, 3};
    int result = pivotIndex(v);
    cout << result << endl;
}