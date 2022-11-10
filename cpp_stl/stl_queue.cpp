#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<string>q;

    q.push("Varnit");
    q.push("Saini");
    q.push("Noliyan");

    cout<<"Size before pop:-> "<< q.size()<<endl;

    cout<<"First Element:-> "<<q.front()<<endl;

    q.pop();

    cout<<"First Element after pop:-> "<<q.front()<<endl;

    cout<<"Size after pop:-> "<< q.size()<<endl;


    return 0;
}