#include<iostream>
using namespace std;

class Hero{
    private:
    int health;

    public:
    char level;
    void print(){
        cout <<"Level is:"<<level<<endl;
    }
    int getHealth(){
        return health;
    }
    
    char getLevel(){
        return level;
    }

    void setHealth(int h)
    {
        
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }

};

int main()
{
    //Static allocation
    Hero a;

    cout <<"Level is "<<a.level<<endl;
    cout<<"Health is "<<a.getHealth() <<endl;

    //Dynamic allocation
    Hero *b = new Hero;

    cout <<"Level is "<<(*b).level<<endl;
    cout<<"Health is "<<(*b).getHealth() <<endl;

    cout <<"Level is "<<b->level<<endl;
    cout<<"Health is "<<b->getHealth() <<endl;





//     Hero ramesh;
//     cout <<"Size of ramesh is:"<<sizeof(ramesh)<<endl;
//     ramesh.setHealth(70);
//     cout <<"Ramesh health is:"<<ramesh.getHealth() <<endl;
//     ramesh.setLevel('A');
//     cout<<"Level is:"<<ramesh.getLevel() <<endl;
//     return 0;
}