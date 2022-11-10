#include <iostream>
#include<cstring>
using namespace std;

class Hero
{
private:
    int health;

public:
    char *name;
    char level;
    static int timeToComplete;

    // Constructor
    Hero()
    {
        cout << "Default constructor called" << endl;
        name  = new char[100];
    }

    // parameterised constructor
    Hero(int health, char level)
    {
        // cout<<"this-> "<<this<<endl;
        this->health = health; //"this" is a pointer which points to the current object
        this->level = level;
    }

    //copy constructor
    Hero(Hero& temp){

        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch,temp.name);
        this->name = ch;

        cout<<"Copy constructor called "<< endl;
        this->health = temp.health;
        this->level = temp.level;
    } 

    void print()
    {
        cout <<endl;
        cout << "[ Name is: " << this->name <<", ";
        cout << "Health is:" << this->health << ", ";
        cout << "Level is "<< this->level << " ]"<<endl;
        cout<<endl;
    }

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {

        health = h;
    }

    void setLevel(char ch)
    {
        level = ch;
    }

    void setName(char name[])
    {
        strcpy(this->name , name);
    }

    static int random(){
        return timeToComplete;
    }

    ~Hero(){
        cout <<"Destructor bhai callled "<<endl;
    }
};

int Hero::timeToComplete = 5;

int main()
{   
     
    cout<<Hero::timeToComplete<<endl;
    cout<<Hero::random()<<endl;

    Hero a;
    cout << a.timeToComplete << endl;

    Hero b;
    b.timeToComplete = 20;
    cout<< b.timeToComplete << endl;
    cout<< a.timeToComplete << endl;








    // //static allocation  
    // Hero a; //destructor automatically called

    // //dynamic allocation

    // Hero *b = new Hero;
    // //for dynamic allocation we have to call destructor manually
    // delete b;

    // Hero hero1;
    // hero1.setHealth(12);
    // hero1.setLevel('A');
    // char name[7] = "Varnit";
    // hero1.setName(name);
    // //hero1.print();

    // //Use default copy constructor
    // Hero hero2(hero1);
    // //hero2.print();

    // hero1.name[0] = 'C';
    // hero1.print();

    // hero2.print();

    // hero1 = hero2;

    // hero1.print();
    // hero2.print();



    // //Object created static allocation
    // Hero ramesh(10,'A');
    // // cout<<"Address of ramesh: "<< &ramesh << endl;
    // ramesh.print();

    // //Dynamically
    // Hero *h = new Hero(20,'B');
    // h->print();

    /*
    //Static allocation
    Hero a;
    a.setHealth(80);
    a.setLevel('A');

    cout <<"Level is "<<a.level<<endl;
    cout<<"Health is "<<a.getHealth() <<endl;

    //Dynamic allocation
    Hero *b = new Hero;
    b->setHealth(70);
    b->setLevel('B');
    cout <<"Level is "<<(*b).level<<endl;
    cout<<"Health is "<<(*b).getHealth() <<endl;

    cout <<"Level is "<<b->level<<endl;
    cout<<"Health is "<<b->getHealth() <<endl;
    */

    //     Hero ramesh;
    //     cout <<"Size of ramesh is:"<<sizeof(ramesh)<<endl;
    //     ramesh.setHealth(70);
    //     cout <<"Ramesh health is:"<<ramesh.getHealth() <<endl;
    //     ramesh.setLevel('A');
    //     cout<<"Level is:"<<ramesh.getLevel() <<endl;
    //     return 0;
}