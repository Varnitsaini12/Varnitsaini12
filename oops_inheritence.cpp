#include<iostream>

using namespace std;

class Human {
    public:
    int height;
    int weight;
    int age;

    public:
    int getAge(){
        return this->age;
    }
    int getWeight(){
        return this->weight;
    }
    int getHeight(){
        return this->height;
    }
    void setWeight(int w){
        this->weight = w;
    }
    void setHeight(int h){
        this->height = h;
    }
    void setAge(int a){
        this->age = a;
    }
};

class Male  : public Human{
    public:
    char color;
    void sleep(){
        cout<<"Male sleeping"<<endl;
    }
    void setColor(char ch){
        this->color = ch;
    }
};

int main(){

    Male object1;
    object1.setAge(16);
    object1.setWeight(56);
    object1.setHeight(180);
    object1.setColor('B');
    cout<<object1.age <<endl;
    cout<<object1.weight <<endl;
    cout<<object1.height <<endl;
    cout << object1.color<<endl; 
    object1.sleep();


    return  0;
}




