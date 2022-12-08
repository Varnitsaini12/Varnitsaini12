#include<iostream>
using namespace std;

class A {
    public:
        int a;
    private:
        int b;
    protected:
        int c;
};

class B: public A {
    
};

int main(){
    B obj1;
    obj1.a = 5;
    return 0;
}