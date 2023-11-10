#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<map>
using namespace std;
vector<int> majorityElementII(vector<int> &arr)
{
   vector<int>ans;
   map<int,int>mp;
   int n = arr.size()-1;
   for(auto x: arr){
       mp[x++];
   }
   for (auto i: mp)
   {
       cout << i.first << " " << i.second << " ";
   }
   return ans;

}

int main()
{
    vector<int> Arr = {20,15, 10, 5};
    vector<int> ans = majorityElementII(Arr);
}