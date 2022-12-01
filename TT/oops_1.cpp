#include <iostream>

using namespace std;

class Classroom
{
private:
    double length;   //Length is a instance variable
    double width;
    double height;

public:
    // Constructor
    Classroom()
    {
        cout << "Hello Constructor!" << endl;
    }

    // parameterized constructor
    Classroom(double l, double w, double h)
    {
        // length = l;
        // width = w; 
        // height = h;
        cout<<l<<endl;
        cout<<w<<endl;
        cout<<h<<endl;
    }

    Classroom(int x, int y, int z=5){
        cout<<"Default argument constructor called!\n";
        cout<<x<<" "<<y<<" "<<z;
    }

    // Destructor
    // ~Classroom()
    // {
    //     cout << "Destructor Called!" << endl;
    // }

    void set(double length, double width, double height)
    {
        this->length = length;
        this->width = width;
        this->height = height;
    }

    double Area()
    {
        return length * width;
    }

    double volume()
    {
        return length * width * height;
    }

    void Area1()
    {
        cout << "Function which do not return any value:" << endl;
        cout << length * width << endl;
    }
};

int main()
{
    // Classroom AIML;
    // Classroom C1;  //C1 is a reference variable
    Classroom C2(10, 20, 30);
    cout<<endl;
    Classroom C3(20, 40, 60);
    cout<<endl;
    Classroom C4(50, 60);

    // AIML.set(10,20,30);
    // AIML.length = 10;
    // AIML.width = 20;
    // AIML.height = 30;
    // AIML.Area1();
    // cout << "Area is:" << AIML.Area() << endl;
    // cout << "Volume is:" << AIML.volume() << endl;
    // cout << "Area is:" << C2.Area() << endl;
    // cout << "Volume is:" << C2.volume() << endl;

    return 0;
}