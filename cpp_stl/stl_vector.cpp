#include<iostream>
#include<vector>
using namespace std;

int main(){
   vector<int>v;

   vector<int>a(5,1);

   vector<int>last(a);

   cout<<v.capacity()<<endl;  
   v.push_back(23);
   cout<<v.capacity()<<endl;
   v.push_back(4);
   cout<<v.capacity()<<endl;
   v.push_back(8);
   cout<<v.capacity()<<endl;
   cout<<v.size()<<endl;

   cout<<"Element at index 2: "<<v.at(2)<<endl;
   cout<<"First Element:"<<v.front()<<endl;
   cout<<"Last Element:"<<v.back()<<endl;

   cout<<"Before Pop:"<<endl;
   for(int i:v){
    cout<<i<<" ";

   }cout<<endl;

   v.pop_back();

   cout<<"After pop: "<<endl;
   for(int i:v){
    cout<<i<<" ";
   }

    cout<<"\nBefore clear size: "<<v.size()<<endl;
    v.clear();
    cout<<"After clear size: "<<v.size()<<endl;

    cout<<"Vector A: "<<endl;
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"Vector Last: "<<endl;
    for(int i:last){
        cout<<i<<" ";
    }
    return 0;
}