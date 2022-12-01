#include<iostream>

using namespace std;

class Mammals{
    public:
    void display1(){
        cout<<"I am Mammal"<<endl;
    }
};

class MarineAnimal{
    public:
    void display2(){
        cout<<"I am Marine Animal"<<endl;
    }
};

class BlueWhale: public Mammals, public MarineAnimal{
    public:
    void display3(){
        cout<<"I am both Mammal and Marine Animal"<<endl;
    }
};

int main(){
    Mammals m;
    m.display1();
    MarineAnimal m2;
    m2.display2();
    BlueWhale m3;
    m3.display1();
    m3.display2();
    m3.display3();
}