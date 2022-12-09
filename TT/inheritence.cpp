#include<iostream>
using namespace std;


//Single Inheritance
// class A {
//     public:
//         int a;
//     private:
//         int b;
//     protected:
//         int c;
// };

// class B: public A {    //here public is visibility mode.By default it is private
//     public:
//         int d;
//         void show(){
//             c = 40;
//             cout<<c<<endl;
//         }
// };

// class C: private A{
//     public:
//         int d;
// };

// class D: protected A{

// };



// int main(){
//     B obj1;
//     obj1.a = 5;
//     cout<<obj1.a<<endl;
//     obj1.show();
//     return 0;
// }


//Multi-level Inheritance
// class A{
//     public:
//         void f1(){
//             cout<<"A";
//         }
// };

// class B : public A{
//     void f2(){
//         cout<<"B";
//     }
// };

// class C: public B{
//     void f3(){
//         cout<<"C";
//     }
//     void f1(){          //Method overriding is done only in inheritance
//         cout<<"XY";
//     }
// };


//MUltiple Inheritance

class A{
    public:
        void show(){
            cout<<"a";
        }
};
class B{
    public:
        void show(){
            cout<<"b";
        }
};

class C: public A,public B{

};

//There is ambiguity so it gives a error if we directly access the show function using C class object

int main(){
    C c1;
    c1.A::show();
    c1.B::show();   //This is used to solve ambiguity error
}

//abstraction vs encapsulation
//What we have to show to the user is called abstraction and what we hide from user is called encapsulation
//Class is a example of encapsulation and object creation is a example of abstraction
//for abstraction we have to define encapsulation