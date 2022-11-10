#include<iostream>
#include<queue>

using namespace std;

int main(){

    //max heap means greatest element will be out
    priority_queue<int> max1;

    //min heap means smallest element will be out

    priority_queue<int, vector<int>, greater<int> > mini;

    max1.push(1);
    max1.push(2);
    max1.push(3);
    max1.push(4);

    int n = max1.size();

    cout<<"Size is: "<<max1.size()<<endl;

    for(int i = 0 ; i<n; i++){
            cout<<max1.top()<<" ";
            max1.pop();
    }cout<<endl;

    mini.push(12);
    mini.push(1);
    mini.push(2);
    mini.push(10);

    int n1 = mini.size();

    for(int i = 0 ; i<n1; i++){
            cout<<mini.top()<<" ";
            mini.pop();
    }cout<<endl;

    cout<<"Aare khali hai kya bhai: "<<mini.empty()<<endl;



    return 0;
}