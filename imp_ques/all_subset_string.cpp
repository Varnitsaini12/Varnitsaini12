#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

void subsequence(string s, string o, vector<string> &v)
{
    // BASE CASE
    if (s.size() == 0)
    {
        v.push_back(o);
        return;
    }

    // RECURSIVE CODE
    char ch = s[0];
    string reduced_str = s.substr(1);
    // include the current letter
    subsequence(reduced_str, o + ch, v);
    // exclude the current letter
    subsequence(reduced_str, o, v);
}

bool compare(string s1, string s2)
{
    if (s1.length() == s2.length())
    {
        return s1 < s2;
    }
    return s1.length() < s2.length();
}

int main()
{
    string s;
    cin >> s;
    vector<string> v;
    string output = "";
    subsequence(s, output, v);

    sort(v.begin(), v.end(), compare);

    for(auto s : v){
        cout<< s <<",";
    }

    return 0;
}