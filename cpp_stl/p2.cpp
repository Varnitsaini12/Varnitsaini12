#include <bits/stdc++.h> 
#include<iostream>

using namespace std;

// Create the classes here
class Shape{
    public:
        int shapeType;
        int l,b;
        void printMyType(){
            cout<<"any shape"<<endl;
        }
};
class Square: public Shape{
    public:
    int length;
    int calculateArea(int x){
        length = x;
        return length*length;
    }
    void printMyType(){
          cout<<"Square"<<endl;
    }
};
class Rectangle: public Shape{
    public:
    int length,breadth;
     int calculateArea(int l,int b){
        length = l;
        breadth = b;
        return length*breadth;
    }
    void printMyType(){
          cout<<"Rectangle"<<endl;
    }
};

int main() {

    //Write your code here
    Square s;
    s.printMyType();
    cout<<s.calculateArea(5)<<endl;
    
    Rectangle r;
    r.printMyType();
    cout<<r.calculateArea(5,4)<<endl;

    return 0;
}