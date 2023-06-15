#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    string s;
    // getline(cin,s,'.');
    // for(char ch : s){
    //     cout<<ch<<",";
    // }
    // cout<<endl;
    // cout<<s<<endl;
    // int n =5;
    // vector<string> sarr;
    // string temp;
    // while(n--){
    //     getline(cin,temp);
    //     sarr.push_back(temp);
    // }
    // for(string x:sarr){
    //     cout<<x<<endl;
    // }

    //vector<string>.....

    string para = "We are learning about the STL strings.STL strings are quite powerful";
    
    string word;
    getline(cin,word);
    
    size_t index = para.find(word);
    if(index==-1){
        cout<<"String not found"<<endl;
    }
    else
        cout<<"first occ: "<<index<<endl;
    
    index = para.find(word,index+1);
    cout<<"second occ: "<<index<<endl;
    return 0;
}