#include<iostream>
#include<vector>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;

bool compare(string s1, string s2)
{
    return s1+s2 > s2+s1;
}

string concatenate(vector<int> numbers){
    //complete this method and return the largest number you can form as a string
    vector<string>s;
    for(int i =0;i<numbers.size();i++){
        s.push_back(to_string(numbers[i]));
    }
    sort(s.begin(),s.end(),compare);
    for(int i = 0; i<s.size(); i++){
        cout<<s[i];
    }
    string o = "";
    for(int i =0; i<s.size();i++){
        o +=s[i];
    }
    return o;

}

int main()
{
    vector<int>v{10,11,20,30,3};
    cout<<concatenate(v)<<endl;
   return 0;
}