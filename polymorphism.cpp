#include<iostream>
using namespace std;

class A{

    public:
    void sayHello(){
        cout << "Hello, Varnit"<<endl;
    }
    void sayHello(string name){
        cout << "Hello, "<<name<<endl;
    }
    

};

int main(){
    A obj;
    obj.sayHello();
    obj.sayHello("Babbar");



    return 0;
}
