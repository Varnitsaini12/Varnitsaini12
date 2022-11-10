#include<iostream>
using namespace std;

class B{
    public:
    int a,b;
    public:
    int add(){
        return a+b;
    }

    void operator+ (B &obj){
        // int value1 = this -> a;
        // int value2 = obj.a; 
        // cout<<"Output: "<<value2 - value1 << endl;

        cout<<"Hello Varnit"<<endl;
    }

    void operator() (){
        cout<<"Hum hai Varnit "<<this->a<<endl;

    }

};

class Animal{
    public:
    void speak(){
        cout<<"speaking "<<endl;
    }

};

class Dog : public Animal{
    public:
    void speak(){
        cout<<"Barking "<<endl;
    }

};


int main(){

    Dog d;
    d.speak();

    // B obj1;
    // B obj2;
    
    // obj1.a = 4;
    // obj2.a = 7;

    // obj1 + obj2; 
    // obj2();
    

    



    return 0;
}