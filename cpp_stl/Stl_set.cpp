#include<iostream>
#include<set>

using namespace std;

int main(){

    set<int>s; //stores only unique elements
    //you can not change once a element is inseerted it can be deleted
    //element return in sorted way
    //unordered set is faster than set and elements in unordered set are in random order
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(4);
    s.insert(0);  //time complexity of inset is Ologn(Binary Search)
    s.insert(2);
    s.insert(7);

    for(int i:s){
        cout<<i<<endl;
    }

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);

    cout<<"After Erase: "<<endl;
    for(int i:s){
        cout<<i<<endl;
    }

    cout<<endl<<s.count(2)<<endl; //counts tell us whether the element passed in it is present in set or not


    set<int> :: iterator itr = s.find(2);

    cout<<"Value present at itr: "<<*itr<<endl;

    for(auto it = itr;it!=s.end();it++){
        cout<<*it<<" ";
    }cout<<endl;

    //insert,find,erase,count all have time complexity of Ologn
    //empty,begin,size,end all have time complexity of O(1)

    return 0;
}