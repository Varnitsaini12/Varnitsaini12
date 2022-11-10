#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string>s;
    s.push("varnit");
    s.push("Saini");
    s.push("Noliyan");

    s.pop();

    cout<<"Top element:-> "<<s.top()<<endl;

    cout<<"Size of stack:-> "<<s.size()<<endl;

    cout<<"Empty or not:-> "<<s.empty()<<endl;
   


    return 0;
}