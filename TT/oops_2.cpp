#include<iostream>
using namespace std;

class Employee{
    public:
        int id;
        string name;
        int no_of_leaves;
    
    void display(){
        cin>>id>>name;
        cout<<"Employee Id: "<<id<<endl;
        cout<<"Employee Name: "<<name<<endl;
        cout<<"No of leaves: "<<no_of_leaves<<endl;
    }
};

int main(){
    Employee E1,E2;
    E1.no_of_leaves = 20;
    // E1.id = 1; 
    // E1.name = "Varnit";  
    // E1.no_of_leaves = 2;
    E1.display();
    // E2.display();
}