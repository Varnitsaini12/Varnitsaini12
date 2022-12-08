#include<iostream>
#include<unordered_set>
using namespace std;

int main(){

    unordered_set<int>s{2,3,4,5,4,3,2,1};

    for(auto x:s){
        int p = x-1;
        if(s.find(p) == s.end()){
            cout<<p<<"\t";
            int ne = x+1;
            while(s.find(ne)!=s.end()){
                cout<<ne<<endl;
            }
        }
    }



    return 0;
}