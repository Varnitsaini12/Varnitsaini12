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

    s.erase(s.begin());

    cout<<"After Erase: "<<endl;
    for(int i:s){
        cout<<i<<endl;
    }





    return 0;
}