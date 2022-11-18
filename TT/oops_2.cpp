#include<iostream>
using namespace std;

class Employee{
    public:
        int id;
        string name;
        static int no_of_leaves;  //Class variable
    
    void display(){
        cin>>id>>name;
        cout<<"Employee Id: "<<id<<endl;
        cout<<"Employee Name: "<<name<<endl;
        cout<<"No of leaves: "<<no_of_leaves<<endl;  
    }
};

int Employee::no_of_leaves=50;

int main(){
    Employee E1,E2,E3;
    Employee::no_of_leaves = 60;
    // E1.no_of_leaves = 30;   Do not use this method (Not Preferable)
    // E1.id = 1; 
    // E1.name = "Varnit";  
    // E1.no_of_leaves = 2;
    E1.display();
    // E2.no_of_leaves = 50;
    E2.display();
    // E3.no_of_leaves = 50;
    E3.display();
}