#include<iostream>
#include<sstream>
#include<vector>
using namespace std;
int main()
{
    string input;
    getline(cin,input);


    stringstream ss(input);

    // >> and << operators
    string token;
    vector<string> tokens;
    while(getline(ss,token,' ')){
        tokens.push_back(token);
    }

    for(auto token: tokens){
        cout<<token<<",";
    }


   return 0;
}