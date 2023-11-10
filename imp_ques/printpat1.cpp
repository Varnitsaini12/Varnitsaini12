#include<iostream>
#include<vector>
#include<string>
using namespace std;

void printpat(string s,int i){
    if(i >= s.length())
        return;
    int count = 0;
    while(s[i]=='1'){
        count++;
        i++;
    }
    cout << count;
    cout << s[i];
    printpat(s, i + 1);
}

int main()
{
    string s = "111A1111B11C11";
    printpat(s, 0);
    return 0;
}