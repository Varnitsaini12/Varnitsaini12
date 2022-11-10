#include<iostream>
#include<deque>

using namespace std;

int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    
    // d.pop_back();
    // d.pop_front();

    // for(int i:d){
    //     cout<<i<<" ";
    // }cout<<endl;

    cout<<"Element at first index: "<<d.at(1)<<endl;

    cout<<"First element: "<<d.front()<<endl;
    cout<<"Last Element: "<<d.back()<<endl;

    cout<<"Empty or not: "<<d.empty()<<endl;

    // d.clear();
    // cout<<"Empty or not: "<<d.empty()<<endl;

    d.erase(d.begin(),d.begin()+1);
    cout<<"After erase: "<<endl;
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;





    return 0;
}
