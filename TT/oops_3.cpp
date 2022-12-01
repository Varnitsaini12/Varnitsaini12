#include<iostream>
using namespace std;

class Employee{

    private:
        static int no_of_leaves;
    public:
        int id;
        string name;
      //Class variable
    
    Employee(){
        cout<<"Hello!"<<endl;
    }
    void display(){
        cin>>id>>name;
        cout<<"Employee Id: "<<id<<endl;
        cout<<"Employee Name: "<<name<<endl;
        cout<<"No of leaves: "<<no_of_leaves<<endl;  
    }
    void setLeave(int l){
        no_of_leaves = l;

    }
    ~Employee(){
        cout<<"Destructor Called!"<<endl;
    }
}; 

int Employee::no_of_leaves=50;

int main(){
    Employee E1;
    E1.setLeave(60);   //Setting leaves value while leaves is private member
    // E1.no_of_leaves = 30;   Do not use this method (Not Preferable)
    // E1.id = 1; 
    // E1.name = "Varnit";   
    // E1.no_of_leaves = 2;
    E1.display();
    // E2.no_of_leaves = 50;
    // E2.display();
    // E3.no_of_leaves = 50;
    // E3.display();
    // Employee E1[100];
    // int n,i;
    // cin>>n;
    // for(i =0; i<n; i++){
    //     E1[i].setLeave(40);
    //     E1[i].display();
    // }
}